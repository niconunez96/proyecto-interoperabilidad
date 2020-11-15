#include "IotEntity_H.h"


IotEntity::IotEntity(ApiConnector* apiConnector, Sensor* sensors[], int sensorsQuantity){
    this->apiConnector = apiConnector;
    this->sensors = sensors;
    this->sensorsQuantity = sensorsQuantity;
}

void IotEntity::publishSensorsValue(){
    for(int c=0; c < this->sensorsQuantity; c++){
        Sensor* sensor = this->sensors[c];
        this->apiConnector->publishData(sensor->objectId(), sensor->getSensorName(), sensor->getSensedValue());
    }
}
