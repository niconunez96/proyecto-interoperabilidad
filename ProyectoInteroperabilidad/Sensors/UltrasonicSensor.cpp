#include "UltrasonicSensor_H.h"


UltrasonicSensor::UltrasonicSensor(int trigger_pin, int echo_pin){
    this->trigger_pin = trigger_pin;
    this->echo_pin = echo_pin;
}

void UltrasonicSensor::setupSensor(){
    pinMode(this->trigger_pin, OUTPUT);
    pinMode(this->echo_pin, INPUT);
    digitalWrite(this->trigger_pin, LOW);
}

void UltrasonicSensor::sendPulse(){
    /* send pulse to have a value in echo pin */
    digitalWrite(this->trigger_pin, HIGH);
    delayMicroseconds(10);
    digitalWrite(this->trigger_pin, LOW);
}

float UltrasonicSensor::getSensedValue(){
    this->sendPulse();
    long time = pulseIn(this->echo_pin, HIGH);  // time in milliseconds
    float distance = time / 59;  // distance in cm
    float litres = (this->HEIGHT - distance) * this->MAX_LITRES / this->HEIGHT;
    return litres;
}

char* UltrasonicSensor::getSensorName(){
    char* name = new char[16];
    strcpy(name, "NivelAguaHuerta");
    return name;
}


char* UltrasonicSensor::objectId(){
    char* id = new char[2];
    strcpy(id, "a");
    return id;
}