/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: lid
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\lid.cpp
*********************************************************************/

//## auto_generated
#include "lid.h"
//## link itsOpen_sensor
#include "open_sensor.h"
//## link itsSmartbin
#include "smartbin.h"
//## package Default

//## class lid
lid::lid() {
    itsOpen_sensor = NULL;
    itsSmartbin = NULL;
}

lid::~lid() {
    cleanUpRelations();
}

open_sensor* lid::getItsOpen_sensor() const {
    return itsOpen_sensor;
}

void lid::setItsOpen_sensor(open_sensor* p_open_sensor) {
    itsOpen_sensor = p_open_sensor;
}

smartbin* lid::getItsSmartbin() const {
    return itsSmartbin;
}

void lid::setItsSmartbin(smartbin* p_smartbin) {
    if(p_smartbin != NULL)
        {
            p_smartbin->_setItsLid(this);
        }
    _setItsSmartbin(p_smartbin);
}

void lid::cleanUpRelations() {
    if(itsOpen_sensor != NULL)
        {
            itsOpen_sensor = NULL;
        }
    if(itsSmartbin != NULL)
        {
            lid* p_lid = itsSmartbin->getItsLid();
            if(p_lid != NULL)
                {
                    itsSmartbin->__setItsLid(NULL);
                }
            itsSmartbin = NULL;
        }
}

void lid::__setItsSmartbin(smartbin* p_smartbin) {
    itsSmartbin = p_smartbin;
}

void lid::_setItsSmartbin(smartbin* p_smartbin) {
    if(itsSmartbin != NULL)
        {
            itsSmartbin->__setItsLid(NULL);
        }
    __setItsSmartbin(p_smartbin);
}

void lid::_clearItsSmartbin() {
    itsSmartbin = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\lid.cpp
*********************************************************************/
