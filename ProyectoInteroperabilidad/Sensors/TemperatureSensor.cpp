#include "TemperatureSensor_H.h"
#define DHTTYPE DHT11


TemperatureSensor::TemperatureSensor(int pin){
    this->pin = pin;
}

void TemperatureSensor::setupSensor(){
    this->dht = new DHT(this->pin, DHTTYPE);
    dht->begin();
}

float TemperatureSensor::getSensedValue(){
    float temperature = dht->readTemperature();  // temperature in C°
    return temperature;
}

char* TemperatureSensor::getSensorName(){
    char* name = new char[18];
    strcpy(name, "TemperaturaHuerta");
    return name;
}

char* TemperatureSensor::objectId(){
    char* id = new char[2];
    strcpy(id, "t");
    return id;
}