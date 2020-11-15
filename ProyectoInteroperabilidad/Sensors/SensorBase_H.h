#ifndef SensorBase_H
#define SensorBase_H .h

/*
Abstracion of entity "Sensor" that is only responsible to
setup himself using Arduino library functions and the main responsability
is to sense a value. For now the sensed values are only restricted to ints, but 
could be improved to return an entity 'Value' that contains the sensed value.

Author: Nicolas Nuñez
Date: 2020-10-25
*/

class Sensor{
    protected:
        int pin;
    public:
        virtual void setupSensor();
        virtual float getSensedValue();
        virtual char* getSensorName();
        virtual char* objectId();
};

#endif