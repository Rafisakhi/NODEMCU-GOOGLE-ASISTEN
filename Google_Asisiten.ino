#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "_rFdSq7WIP6l3cPril0_Btate4pPM3nS";
char ssid[] = "Galaxy A20s";
char pass[] = "nsqm8883";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();
}
