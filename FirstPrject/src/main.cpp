#include <Arduino.h>

int led[8] = {4, 5, 16, 17, 18, 19, 21, 22};


void setup() {
  //inizializza il monitor seriale
  Serial.begin(115200);
  // Inizializza il LED integrato e lo imposta sempre acceso
  for (int i = 0; i < 8; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(led[i], HIGH);
    delay(500);
    digitalWrite(led[i], LOW);
  }
}

