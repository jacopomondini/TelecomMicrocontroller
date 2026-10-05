#include <Arduino.h>
#define LEDROSSO 2
#define LEDGIALLO 4
#define LEDVERDE 15

void setup() {
  //inizializza il monitor seriale
  Serial.begin(115200);
  // Inizializza il LED integrato e lo imposta sempre acceso
  pinMode(LEDROSSO, OUTPUT);
  pinMode(LEDGIALLO, OUTPUT);
  pinMode(LEDVERDE, OUTPUT);

}

void loop() {

  //Serial.println("HelloWorld");
  digitalWrite(LEDROSSO, HIGH);
  delay(500);
  digitalWrite(LEDROSSO, LOW);
  digitalWrite(LEDGIALLO, HIGH);
  delay(500);
  digitalWrite(LEDGIALLO, LOW);
  digitalWrite(LEDVERDE, HIGH);
  delay(500);
  digitalWrite(LEDVERDE, LOW);
  delay(500);

  // led integrato lasciato sempre acceso in setup

}

