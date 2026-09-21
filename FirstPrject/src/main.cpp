#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  //inizializza il monitor seriale
  Serial.begin(115200);
  // Inizializza il LED integrato e lo imposta sempre acceso
  int LED_BUILTIN = 2;
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);
  /*int count = 10;
  for (int i = 0; i < count; i++)
  {
    Serial.println("Hello, world!");
    delay(1000);
  }
    */
   /*
   while (true)
   {
    Serial.println("Hello, world!");
    delay(1000);
   }
  */
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("HelloWorld");
  delay(1000);
  // led integrato lasciato sempre acceso in setup

}
