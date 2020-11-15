#ifndef API
#define API .h
#include <Arduino.h>
// #include <ESP8266WiFi.h>

/*
ApiConnector is a utility to connect to any api,
just passing hots, headers and body.
It uses the wi-fi module from arduino to connect to Internet

Author: Nicolas Nuñez
Date: 2020-10-25
*/

class ApiConnector{
    private:
        const char* POSTADRESS = "http://fiware-iot.ddns.net:7896/iot/d?k=";
        const char* APIKEY = "2tggokgpepnvsb2uv4s40d59oc";
    public:
        ApiConnector();
        void publishData(char* sensorId, char* sensorName, float data);
};
#endif
