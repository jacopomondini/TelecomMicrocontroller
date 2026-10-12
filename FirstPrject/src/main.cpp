#include <Arduino.h>

int led[4] = {16, 17, 18, 19};
int numero[4] = {0, 0, 0, 0};
int attuale = 1;

void setup()
{
  // inizializza il monitor seriale
  Serial.begin(115200);
  // Inizializza il LED integrato e lo imposta sempre acceso
  for (int i = 0; i < 4; i++)
  {
    pinMode(led[i], OUTPUT);
  }
}

void converti()
{
  for (int i = 0; i < 4; i++)
  {
    numero[i] = 0;
  }

  int temp = attuale;
  int bit = 3;

  while (temp > 0 && bit >= 0)
  {
    numero[bit] = temp % 2;
    temp = temp / 2;
    bit--;
  }
}

void loop()
{
  while (true)
  {
    // incrementa attuale
    attuale = attuale + 1;
    if (attuale == 17)
    {
      attuale = 1;
    }

    converti();

    // accensione e spegnimento dei led con gli if
    for (int i = 0; i < 4; i++)
    {
      if (numero[i] == 1)
      {
        digitalWrite(led[i], HIGH);
      }
      else
      {
        digitalWrite(led[i], LOW);
      }
    }
    delay(1000);
  }

  /* script di conta binaria
  for (int i = 0; i < 15; i++)
  {
    for (int j = 0; j < 3; i--)
    {
      if (numero[i] == 0)
      {
        numero[i] = 1;
        break;
      }
      else
      {
        numero[i] = 0;
      }


    }
  }*/
}
