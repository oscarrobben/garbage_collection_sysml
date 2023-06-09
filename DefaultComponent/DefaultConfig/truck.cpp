/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: truck
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\truck.cpp
*********************************************************************/

//## auto_generated
#include "truck.h"
//## link itsCms
#include "cms.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## auto_generated
#include <oxf\omthread.h>
//## link is_serviced_by
#include "Garbage_Truck_Driver.h"
//## link itsSmartbin
#include "smartbin.h"
//## package Default

//## class truck
truck::truck(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsCms = NULL;
    itsSmart_garbage_collection_system = NULL;
    itsSmartbin = NULL;
    initStatechart();
}

truck::~truck() {
    cleanUpRelations();
}

OMIterator<Garbage_Truck_Driver*> truck::getIs_serviced_by() const {
    OMIterator<Garbage_Truck_Driver*> iter(is_serviced_by);
    return iter;
}

void truck::addIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    if(p_Garbage_Truck_Driver != NULL)
        {
            p_Garbage_Truck_Driver->_addServices(this);
        }
    _addIs_serviced_by(p_Garbage_Truck_Driver);
}

void truck::removeIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    if(p_Garbage_Truck_Driver != NULL)
        {
            p_Garbage_Truck_Driver->_removeServices(this);
        }
    _removeIs_serviced_by(p_Garbage_Truck_Driver);
}

void truck::clearIs_serviced_by() {
    OMIterator<Garbage_Truck_Driver*> iter(is_serviced_by);
    while (*iter){
        Garbage_Truck_Driver* current = *iter;
        if(current != NULL)
            {
                current->_removeServices(this);
            }
        iter++;
    }
    _clearIs_serviced_by();
}

cms* truck::getItsCms() const {
    return itsCms;
}

void truck::setItsCms(cms* p_cms) {
    if(p_cms != NULL)
        {
            p_cms->_addItsTruck(this);
        }
    _setItsCms(p_cms);
}

smart_garbage_collection_system* truck::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void truck::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_addItsTruck(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void truck::cleanUpRelations() {
    {
        OMIterator<Garbage_Truck_Driver*> iter(is_serviced_by);
        while (*iter){
            Garbage_Truck_Driver* current = *iter;
            if(current != NULL)
                {
                    current->_removeServices(this);
                }
            iter++;
        }
        is_serviced_by.removeAll();
    }
    if(itsCms != NULL)
        {
            cms* current = itsCms;
            if(current != NULL)
                {
                    current->_removeItsTruck(this);
                }
            itsCms = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            smart_garbage_collection_system* current = itsSmart_garbage_collection_system;
            if(current != NULL)
                {
                    current->_removeItsTruck(this);
                }
            itsSmart_garbage_collection_system = NULL;
        }
    if(itsSmartbin != NULL)
        {
            truck* p_truck = itsSmartbin->getItsTruck();
            if(p_truck != NULL)
                {
                    itsSmartbin->__setItsTruck(NULL);
                }
            itsSmartbin = NULL;
        }
}

void truck::_addIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    is_serviced_by.add(p_Garbage_Truck_Driver);
}

void truck::_removeIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    is_serviced_by.remove(p_Garbage_Truck_Driver);
}

void truck::_clearIs_serviced_by() {
    is_serviced_by.removeAll();
}

void truck::__setItsCms(cms* p_cms) {
    itsCms = p_cms;
}

void truck::_setItsCms(cms* p_cms) {
    if(itsCms != NULL)
        {
            itsCms->_removeItsTruck(this);
        }
    __setItsCms(p_cms);
}

void truck::_clearItsCms() {
    itsCms = NULL;
}

void truck::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    itsSmart_garbage_collection_system = p_smart_garbage_collection_system;
}

void truck::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->_removeItsTruck(this);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void truck::_clearItsSmart_garbage_collection_system() {
    itsSmart_garbage_collection_system = NULL;
}

smartbin* truck::getItsSmartbin() const {
    return itsSmartbin;
}

void truck::setItsSmartbin(smartbin* p_smartbin) {
    if(p_smartbin != NULL)
        {
            p_smartbin->_setItsTruck(this);
        }
    _setItsSmartbin(p_smartbin);
}

bool truck::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void truck::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void truck::__setItsSmartbin(smartbin* p_smartbin) {
    itsSmartbin = p_smartbin;
}

void truck::_setItsSmartbin(smartbin* p_smartbin) {
    if(itsSmartbin != NULL)
        {
            itsSmartbin->__setItsTruck(NULL);
        }
    __setItsSmartbin(p_smartbin);
}

void truck::_clearItsSmartbin() {
    itsSmartbin = NULL;
}

void truck::rootState_entDef() {
    {
        pushNullTransition();
        rootState_subState = state_0;
        rootState_active = state_0;
    }
}

IOxfReactive::TakeEventStatus truck::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_0
    if(rootState_active == state_0)
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    rootState_subState = state_1;
                    rootState_active = state_1;
                    res = eventConsumed;
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\truck.cpp
*********************************************************************/
