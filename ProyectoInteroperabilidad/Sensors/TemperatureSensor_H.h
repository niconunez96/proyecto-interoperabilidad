#ifndef TemperatureSensor_H
#define TemperatureSensor_H .h
#include <Arduino.h>
#include <DHT.h>
#include "SensorBase_H.h"


class TemperatureSensor: public Sensor{
    private:
        DHT* dht;
    public:
        TemperatureSensor(int pin);
        void setupSensor();
        float getSensedValue();
        char* getSensorName();
        char* objectId();
};

#endif
