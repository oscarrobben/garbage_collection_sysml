/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: electricity
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\electricity.cpp
*********************************************************************/

//## auto_generated
#include "electricity.h"
//## link itsSmartbin
#include "smartbin.h"
//## package Default

//## class electricity
electricity::electricity() {
    itsSmartbin = NULL;
}

electricity::~electricity() {
    cleanUpRelations();
}

smartbin* electricity::getItsSmartbin() const {
    return itsSmartbin;
}

void electricity::setItsSmartbin(smartbin* p_smartbin) {
    if(p_smartbin != NULL)
        {
            p_smartbin->_setItsElectricity(this);
        }
    _setItsSmartbin(p_smartbin);
}

void electricity::cleanUpRelations() {
    if(itsSmartbin != NULL)
        {
            electricity* p_electricity = itsSmartbin->getItsElectricity();
            if(p_electricity != NULL)
                {
                    itsSmartbin->__setItsElectricity(NULL);
                }
            itsSmartbin = NULL;
        }
}

void electricity::__setItsSmartbin(smartbin* p_smartbin) {
    itsSmartbin = p_smartbin;
}

void electricity::_setItsSmartbin(smartbin* p_smartbin) {
    if(itsSmartbin != NULL)
        {
            itsSmartbin->__setItsElectricity(NULL);
        }
    __setItsSmartbin(p_smartbin);
}

void electricity::_clearItsSmartbin() {
    itsSmartbin = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\electricity.cpp
*********************************************************************/
