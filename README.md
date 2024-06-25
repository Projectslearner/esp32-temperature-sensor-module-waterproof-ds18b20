# ESP32 DS18B20 Temperature Sensor Project

### Project Overview
The ESP32 DS18B20 Temperature Sensor project demonstrates how to interface a DS18B20 digital temperature sensor with an ESP32 microcontroller to measure temperature. The DS18B20 sensor provides accurate digital temperature readings, making it ideal for applications requiring precise temperature monitoring.

### Components Needed
- **ESP32 Microcontroller**: Controls and processes sensor data.
- **DS18B20 Temperature Sensor**: Digital sensor for temperature measurement.
- **OneWire Library**: Communicates with the DS18B20 sensor.
- **Jumper Wires**: Connects the DS18B20 sensor to the ESP32.
- **Breadboard**: Optional, for organizing circuit connections.

### Block Diagram

### Circuit Setup
1. **Connecting the DS18B20 Sensor to ESP32:**
   - **Data Pin (`ONE_WIRE_BUS`)**: Connect the data pin of DS18B20 to GPIO 4 on the ESP32.
   - **Power Supply**: Provide suitable power (3.3V or 5V) to the DS18B20 sensor and connect its ground pin to the ESP32 ground.

### Instructions
1. **Setup:**
   - Initialize Serial communication using `Serial.begin(9600)` for debugging.
   - Initialize the OneWire interface using `OneWire oneWire(ONE_WIRE_BUS)`.
   - Pass the `oneWire` reference to `DallasTemperature` library using `DallasTemperature sensors(&oneWire)`.
   - Start the sensor library with `sensors.begin()`.

2. **Operation:**
   - **Reading Temperature:**
     - Use `sensors.requestTemperatures()` to initiate temperature measurement.
     - Read temperature in Celsius using `sensors.getTempCByIndex(0)`.
     - Check for successful reading using `DEVICE_DISCONNECTED_C` constant.

3. **Considerations:**
   - **Sensor Addressing:** Modify the code if multiple DS18B20 sensors are connected.
   - **Timing:** Allow a delay between measurements to ensure accurate readings.
   - **Accuracy:** Ensure the sensor is calibrated and positioned correctly for accurate temperature measurements.

### Applications
- **Environmental Monitoring:** Monitor temperature in indoor and outdoor environments.
- **Industrial Automation:** Control systems based on temperature thresholds.
- **HVAC Systems:** Adjust heating and cooling based on real-time temperature data.

### Useful Links
🌐 [ProjectsLearner - ESP32 DS18B20 Temperature Sensor](https://projectslearner.com/learn/esp32-ds18b20-temperature-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
