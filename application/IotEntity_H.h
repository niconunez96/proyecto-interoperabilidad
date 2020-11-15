#ifndef IotEntity_H
#define IotEntity_H .h

#include "API.h"
#include <SensorBase_H.h>

/*
IotEntity class is responsible to publish every single value
sensed by their sensors. For now it will publish these values 
to an API but could be generalized to publish these values into
every output system from an lcd to a phone.

Author: Nicolas Nuñez
Date: 2020-10-25
*/


class IotEntity{
    private:
        int sensorsQuantity;
        ApiConnector* apiConnector;
        Sensor** sensors;
    public:
        IotEntity(ApiConnector* apiConnector, Sensor* sensors[], int sensorsQuantity);
        void publishSensorsValue();
};
#endif
