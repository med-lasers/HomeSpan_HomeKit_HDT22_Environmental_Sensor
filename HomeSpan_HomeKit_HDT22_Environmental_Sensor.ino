#include "HomeSpan.h"
#include "DEV_Identify.h"
#include "DEV_Sensors.h"

void setup()
{
  Serial.begin(115200);
  homeSpan.setStatusPin(2); //select the pin connected to LED
//homeSpan.setControlPin(0); //select the pin connected to control push-button

  homeSpan.begin(Category::Sensors, "Environmental Sensor"); 

  new SpanAccessory();
  new DEV_Identify("Environmental Sensor", "Aosong", "000-001", "HS Sensors", "1.0", 0);
  new Service::HAPProtocolInformation();
  new Characteristic::Version("1.1.0");

  new SpanAccessory();
  new DEV_Identify("Temperature Sensor", "Aosong", "000-001", "HomeSpan Temperature Sensor", "1.0", 10);
  new DEV_TempSensor();

  new SpanAccessory();
  new DEV_Identify("Humidity Sensor", "Aosong", "000-001", "HomeSpan Humididty Sensor", "1.0", 0);
  new DEV_HumidSensor();

} // end of setup()

//////////////////////////////////////

void loop()
{

  homeSpan.poll();

} // end of loop()

//////////////////////////////////////
