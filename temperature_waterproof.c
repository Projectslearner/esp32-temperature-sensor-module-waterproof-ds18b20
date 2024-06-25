/*
   Project name: ESP32 DS18B20 Temperature Sensor
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-ds18b20-temperature-sensor
*/

#include <OneWire.h>
#include <DallasTemperature.h>

// Data wire is connected to GPIO 4 on ESP32
#define ONE_WIRE_BUS 4

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);

// Pass the oneWire reference to DallasTemperature library
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600); // Initialize serial communication
  sensors.begin(); // Start up the library
}

void loop() {
  delay(2000); // Wait a few seconds between measurements

  sensors.requestTemperatures(); // Send the command to get temperatures
  
  // Read temperature in Celsius
  float temperatureC = sensors.getTempCByIndex(0);

  // Check if reading was successful
  if (temperatureC != DEVICE_DISCONNECTED_C) {
    // Print temperature to Serial Monitor
    Serial.print("Temperature: ");
    Serial.print(temperatureC);
    Serial.println(" °C");
  } else {
    Serial.println("Error: Could not read temperature");
  }
}
