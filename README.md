# HomeSpan_HomeKit_HDT22_Environmental_Sensor
HomeSpan_HomeKit_HDT22_Environmental_Sensor is a working example of ESP32 + HDT11/HD21/HDT22 temperature and humidity sensor implementation to HomeKit via HomeSpan Library.

Hardware used for this project:
- an ESP32 board,
- an Adafruit environmental sensor, such as the HDT11.

Built based on:
https://github.com/HomeSpan/TempSensorI2C
https://github.com/adafruit/DHT-sensor-library

The following checks are to be performed to ensure hardware-software match:
- select the pin connected to status LED,
- select the pin connected to control push-button,
- select the DHT type,
- select the ESP pin connected to DHT 1-wire bus.
