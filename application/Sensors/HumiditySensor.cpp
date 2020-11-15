#include "HumiditySensor_H.h"


HumiditySensor::HumiditySensor(int pin){
    this->pin = pin;
}

void HumiditySensor::setupSensor(){
}

float HumiditySensor::getSensedValue(){
    int value = analogRead(this->pin);
    float humidity = map(value, 1023, 0, 0, 100);  // 1023 is completely dry and 0 is completely wet
    return humidity;
}

char* HumiditySensor::getSensorName(){
    char* name = new char[19];
    strcpy(name, "HumedadHuerta:001");
    return name;
}

char* HumiditySensor::objectId(){
    char* id = new char[2];
    strcpy(id, "h");
    return id;
}