#include "API.h"


ApiConnector::ApiConnector(){

}

void ApiConnector::publishData(char* sensorId, char* sensorName, float data){
    char post_url[100];
    sprintf(post_url, "%s%s&i=%s#%s|", this->POSTADRESS, this->APIKEY, sensorName, sensorId);
    // sprintf(information, "%s sensed: %d", sensorName, data);
    Serial.print(post_url);
    Serial.println(data);
    return;
}
