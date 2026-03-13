#include <Arduino.h>
#include <TinyGPS++.h>

TinyGPSPlus gps;

void setup() {

Serial.begin(9600);

}

void loop() {

float latitude = 5.6037;
float longitude = -0.1870;

Serial.print("Latitude: ");
Serial.println(latitude);

Serial.print("Longitude: ");
Serial.println(longitude);

delay(5000);

}