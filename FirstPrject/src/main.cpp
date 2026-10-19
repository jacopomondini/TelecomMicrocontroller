#include <Arduino.h>
#include <Random>

#define pulsante 4
int LED[] = {0, 2, 15, 16};
int numero;
String numerobin;

void setup()
{
  Serial.begin(115200);
  pinMode(pulsante, INPUT_PULLDOWN);
  for (int i = 0; i < 4; i++)
  {
    pinMode(LED[i], OUTPUT);
  }
}

void loop()
{
  
  if (digitalRead(pulsante) == HIGH)
  {
    numero = random(0, 15);
    numerobin = String(numero, BIN);
    Serial.println("Numero estratto:");
    Serial.println(numero);
    Serial.println("in binario:");
    Serial.println(numerobin);
    for (int i = 0; i < numerobin.length(); i++)
    {
      if (numerobin[i] == '1')
      {
        digitalWrite(LED[i], HIGH);
      } else {
        digitalWrite(LED[i], LOW);
      }
      
    }
    delay(1000);
  }
  else
  {
    for (int i = 0; i < 4; i++)
    {
      digitalWrite(LED[i], LOW);
    }
    
  };
  //delay(100);
}