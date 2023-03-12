#include <Arduino.h>
#include <Wifi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include "env.h" 

#define endpoint "rg-lab6-api.onrender.com"

#define fan 22
#define light 23

float getTemp(){
  return random(22.5,34.6);
}

void setup() {
  Serial.begin(9600);
  pinMode(fan, OUTPUT);
  pinMode(light, OUTPUT);

  WiFi.begin(WIFI_USER, WIFI_PASS);
}

void loop() {
  // put your main code here, to run repeatedly:
}