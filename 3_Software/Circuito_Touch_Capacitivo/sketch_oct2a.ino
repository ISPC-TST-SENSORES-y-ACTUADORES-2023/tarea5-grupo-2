#define PInIn 11
#define PInOUT 12
#define PInLED 10

void setup() {

Serial.begin(9600);
pinMode(PInIn, INPUT);
pinMode(PInOUT, OUTPUT);
pinMode(PInLED, OUTPUT);

}

void loop() 
    {
       if (digitalRead(PInIn) == true )
        {
          Serial.println("Presionado LEd Encendido");
          digitalWrite(PInOUT,true);
          digitalWrite(PInLED,true);
        }
        else
        {
          Serial.println("Sin presionar Led Apagado");
          digitalWrite(PInOUT,false);
          digitalWrite(PInLED,false);
        }   
    }