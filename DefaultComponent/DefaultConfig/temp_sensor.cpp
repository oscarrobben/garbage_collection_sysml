/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: temp_sensor
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\temp_sensor.cpp
*********************************************************************/

//## auto_generated
#include "temp_sensor.h"
//## package Default

//## class temp_sensor
temp_sensor::temp_sensor() : temp(0) {
}

temp_sensor::~temp_sensor() {
}

float temp_sensor::getTemp() const {
    return temp;
}

void temp_sensor::setTemp(float p_temp) {
    temp = p_temp;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\temp_sensor.cpp
*********************************************************************/
