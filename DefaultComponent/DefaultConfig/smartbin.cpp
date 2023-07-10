/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: smartbin
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\smartbin.cpp
*********************************************************************/

//## auto_generated
#include "smartbin.h"
//## auto_generated
#include "cms.h"
//## link itsElectricity
#include "electricity.h"
//## link itsLid
#include "lid.h"
//## link sensorBoard
#include "sensor.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//## auto_generated
#include <oxf\omthread.h>
//## event addTrash()
#include "addTrashPkg.h"
//## link itsResident_Citizen_User
#include "Resident_Citizen_User.h"
//## package Default

//## class smartbin
smartbin::smartbin(IOxfActive* theActiveContext) : fillLevel(0) {
    setActiveContext(theActiveContext, false);
    itsElectricity = NULL;
    itsLid = NULL;
    itsResident_Citizen_User = NULL;
    sensorBoard = NULL;
    initStatechart();
}

smartbin::~smartbin() {
    cleanUpRelations();
}

int smartbin::getValueproperty_2() const {
    return valueproperty_2;
}

void smartbin::setValueproperty_2(int p_valueproperty_2) {
    valueproperty_2 = p_valueproperty_2;
}

electricity* smartbin::getItsElectricity() const {
    return itsElectricity;
}

void smartbin::setItsElectricity(electricity* p_electricity) {
    if(p_electricity != NULL)
        {
            p_electricity->_setItsSmartbin(this);
        }
    _setItsElectricity(p_electricity);
}

lid* smartbin::getItsLid() const {
    return itsLid;
}

void smartbin::setItsLid(lid* p_lid) {
    if(p_lid != NULL)
        {
            p_lid->_setItsSmartbin(this);
        }
    _setItsLid(p_lid);
}

Resident_Citizen_User* smartbin::getItsResident_Citizen_User() const {
    return itsResident_Citizen_User;
}

void smartbin::setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(p_Resident_Citizen_User != NULL)
        {
            p_Resident_Citizen_User->_setItsSmartbin(this);
        }
    _setItsResident_Citizen_User(p_Resident_Citizen_User);
}

sensor* smartbin::getSensorBoard() const {
    return sensorBoard;
}

void smartbin::setSensorBoard(sensor* p_sensor) {
    sensorBoard = p_sensor;
}

void smartbin::cleanUpRelations() {
    if(itsElectricity != NULL)
        {
            smartbin* p_smartbin = itsElectricity->getItsSmartbin();
            if(p_smartbin != NULL)
                {
                    itsElectricity->__setItsSmartbin(NULL);
                }
            itsElectricity = NULL;
        }
    if(itsLid != NULL)
        {
            smartbin* p_smartbin = itsLid->getItsSmartbin();
            if(p_smartbin != NULL)
                {
                    itsLid->__setItsSmartbin(NULL);
                }
            itsLid = NULL;
        }
    if(itsResident_Citizen_User != NULL)
        {
            smartbin* p_smartbin = itsResident_Citizen_User->getItsSmartbin();
            if(p_smartbin != NULL)
                {
                    itsResident_Citizen_User->__setItsSmartbin(NULL);
                }
            itsResident_Citizen_User = NULL;
        }
    if(sensorBoard != NULL)
        {
            sensorBoard = NULL;
        }
}

void smartbin::__setItsElectricity(electricity* p_electricity) {
    itsElectricity = p_electricity;
}

void smartbin::_setItsElectricity(electricity* p_electricity) {
    if(itsElectricity != NULL)
        {
            itsElectricity->__setItsSmartbin(NULL);
        }
    __setItsElectricity(p_electricity);
}

void smartbin::_clearItsElectricity() {
    itsElectricity = NULL;
}

void smartbin::__setItsLid(lid* p_lid) {
    itsLid = p_lid;
}

void smartbin::_setItsLid(lid* p_lid) {
    if(itsLid != NULL)
        {
            itsLid->__setItsSmartbin(NULL);
        }
    __setItsLid(p_lid);
}

void smartbin::_clearItsLid() {
    itsLid = NULL;
}

void smartbin::__setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    itsResident_Citizen_User = p_Resident_Citizen_User;
}

void smartbin::_setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(itsResident_Citizen_User != NULL)
        {
            itsResident_Citizen_User->__setItsSmartbin(NULL);
        }
    __setItsResident_Citizen_User(p_Resident_Citizen_User);
}

void smartbin::_clearItsResident_Citizen_User() {
    itsResident_Citizen_User = NULL;
}

int smartbin::getFillLevel() const {
    return fillLevel;
}

void smartbin::setFillLevel(int p_fillLevel) {
    fillLevel = p_fillLevel;
}

bool smartbin::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void smartbin::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    not_full_subState = OMNonState;
}

void smartbin::rootState_entDef() {
    {
        not_full_entDef();
    }
}

IOxfReactive::TakeEventStatus smartbin::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State not_used
        case not_used:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    not_full_subState = state_5;
                    rootState_active = state_5;
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State state_5
        case state_5:
        {
            
        
        
    }
    break;
    default:
        break;
    }
    return res;
}

void smartbin::not_full_entDef() {
    rootState_subState = not_full;
    pushNullTransition();
    not_full_subState = not_used;
    rootState_active = not_used;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\smartbin.cpp
*********************************************************************/
