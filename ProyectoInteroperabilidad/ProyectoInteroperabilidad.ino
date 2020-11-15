#include "IotEntity_H.h"
#include "API.h"
#include <SensorBase_H.h>
#include <HumiditySensor_H.h>
#include <TemperatureSensor_H.h>
#include <UltrasonicSensor_H.h>

#define HUMIDITY_PIN A0
#define TEMPERATURE_PIN 2
#define ULTRASONIC_TRIGGER 3
#define ULTRASONIC_ECHO 4


ApiConnector* apiConnector = new ApiConnector();
HumiditySensor* humiditySensor = new HumiditySensor(HUMIDITY_PIN);
TemperatureSensor* temperatureSensor = new TemperatureSensor(TEMPERATURE_PIN);
UltrasonicSensor* ultrasonicSensor = new UltrasonicSensor(ULTRASONIC_TRIGGER, ULTRASONIC_ECHO);
Sensor* sensors[] = {humiditySensor, temperatureSensor, ultrasonicSensor};
// Sensor* sensors[] = {ultrasonicSensor};
IotEntity* iotEntity = new IotEntity(apiConnector, sensors, 3);

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  humiditySensor->setupSensor();
  temperatureSensor->setupSensor();
  ultrasonicSensor->setupSensor();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5, HIGH);
  iotEntity->publishSensorsValue();
  delay(5000);
}
