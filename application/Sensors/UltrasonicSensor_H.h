#ifndef UltrasonicSensor_H
#define UltrasonicSensor_H .h
#include "SensorBase_H.h"
#include <Arduino.h>
#include "string.h"


class UltrasonicSensor: public Sensor{
    private:
        int MAX_LITRES = 2;
        int HEIGHT = 23;  // in cm
        int trigger_pin, echo_pin;
        void sendPulse();
    public:
        UltrasonicSensor(int trigger_pin, int echo_pin);
        void setupSensor();
        float getSensedValue();
        char* getSensorName();
        char* objectId();
};

#endif
