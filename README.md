# HomeSpan_HomeKit_HDT22_Environmental_Sensor
HomeSpan_HomeKit_HDT22_Environmental_Sensor is a well working example of ESP32 + HDT11/HD21/HDT22 temperature and humidity sensor implementation to HomeKit via HomeSpan Library.

Hardware used for this project:
An ESP32 board
An Aosong Environmental Sensor, such as the HDT11

Built based on https://github.com/HomeSpan/TempSensorI2C

The following checks/changes are to be performed to ensure hardware-software match:
1) select the pin connected to status LED
2) select the pin connected to control push-button
3) select DHT type
4) select ESP pin connected to DHT 1-wire bus
