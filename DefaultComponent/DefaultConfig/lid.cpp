/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: lid
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\lid.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "lid.h"
//## link itsOpen_sensor
#include "open_sensor.h"
//## link itsSmartbin
#include "smartbin.h"
//#[ ignore
#define Default_lid_lid_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class lid
lid::lid() {
    NOTIFY_CONSTRUCTOR(lid, lid(), 0, Default_lid_lid_SERIALIZE);
    itsOpen_sensor = NULL;
    itsSmartbin = NULL;
}

lid::~lid() {
    NOTIFY_DESTRUCTOR(~lid, true);
    cleanUpRelations();
}

open_sensor* lid::getItsOpen_sensor() const {
    return itsOpen_sensor;
}

void lid::setItsOpen_sensor(open_sensor* p_open_sensor) {
    itsOpen_sensor = p_open_sensor;
    if(p_open_sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOpen_sensor", p_open_sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOpen_sensor");
        }
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
            NOTIFY_RELATION_CLEARED("itsOpen_sensor");
            itsOpen_sensor = NULL;
        }
    if(itsSmartbin != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartbin");
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
    if(p_smartbin != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmartbin", p_smartbin, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmartbin");
        }
}

void lid::_setItsSmartbin(smartbin* p_smartbin) {
    if(itsSmartbin != NULL)
        {
            itsSmartbin->__setItsLid(NULL);
        }
    __setItsSmartbin(p_smartbin);
}

void lid::_clearItsSmartbin() {
    NOTIFY_RELATION_CLEARED("itsSmartbin");
    itsSmartbin = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedlid::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartbin", false, true);
    if(myReal->itsSmartbin)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartbin);
        }
    aomsRelations->addRelation("itsOpen_sensor", false, true);
    if(myReal->itsOpen_sensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsOpen_sensor);
        }
}
//#]

IMPLEMENT_META_P(lid, Default, Default, false, OMAnimatedlid)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\lid.cpp
*********************************************************************/
