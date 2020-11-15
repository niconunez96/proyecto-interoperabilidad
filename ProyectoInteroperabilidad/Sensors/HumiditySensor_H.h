#ifndef HumiditySensor_H
#define HumiditySensor_H .h

#include <Arduino.h>
#include "SensorBase_H.h"


class HumiditySensor: public Sensor{
    public:
        HumiditySensor(int pin);
        void setupSensor();
        float getSensedValue();
        char* getSensorName();
        char* objectId();
};
#endif
