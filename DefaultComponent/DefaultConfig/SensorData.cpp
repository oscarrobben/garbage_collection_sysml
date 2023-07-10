/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorData
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SensorData.cpp
*********************************************************************/

//## auto_generated
#include "SensorData.h"
//## package Default

//## class SensorData
SensorData::SensorData() : fill(0), fill_level(0) {
}

SensorData::~SensorData() {
}

int SensorData::getFill() const {
    return fill;
}

void SensorData::setFill(int p_fill) {
    fill = p_fill;
}

int SensorData::getFill_level() const {
    return fill_level;
}

void SensorData::setFill_level(int p_fill_level) {
    fill_level = p_fill_level;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorData.cpp
*********************************************************************/
