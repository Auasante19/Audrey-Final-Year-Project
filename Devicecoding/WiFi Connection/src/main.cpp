#include <Arduino.h>
#include <WiFi.h>
const char* ssid = "MTN_4G_E09BD1"; // Variable to store your router's name
const char* password = "4S2BH5Y5C4"; // Variable to store your password

void setup() {
  Serial.begin(9600);
  WiFi.begin(ssid, password); // Commands the radio to start looking for your router

  Serial.print("Connecting to WiFi");
  // This "while" loop keeps the code stuck here until the connection is successful
  while (WiFi.status() != WL_CONNECTED) { 
    delay(500); 
    Serial.print("."); // Prints dots so you know it's trying, not frozen
  }

  Serial.println("\nConnected!"); // \n moves to a new line
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP()); // Prints the address your router assigned to the board
}

void loop() {}