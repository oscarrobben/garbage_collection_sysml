/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: alarm
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\alarm.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "alarm.h"
//## link itsSmartbin
#include "smartbin.h"
//#[ ignore
#define Default_alarm_alarm_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class alarm
alarm::alarm() {
    NOTIFY_CONSTRUCTOR(alarm, alarm(), 0, Default_alarm_alarm_SERIALIZE);
    itsSmartbin = NULL;
}

alarm::~alarm() {
    NOTIFY_DESTRUCTOR(~alarm, true);
    cleanUpRelations();
}

smartbin* alarm::getItsSmartbin() const {
    return itsSmartbin;
}

void alarm::setItsSmartbin(smartbin* p_smartbin) {
    if(p_smartbin != NULL)
        {
            p_smartbin->_setItsAlarm(this);
        }
    _setItsSmartbin(p_smartbin);
}

void alarm::cleanUpRelations() {
    if(itsSmartbin != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartbin");
            alarm* p_alarm = itsSmartbin->getItsAlarm();
            if(p_alarm != NULL)
                {
                    itsSmartbin->__setItsAlarm(NULL);
                }
            itsSmartbin = NULL;
        }
}

void alarm::__setItsSmartbin(smartbin* p_smartbin) {
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

void alarm::_setItsSmartbin(smartbin* p_smartbin) {
    if(itsSmartbin != NULL)
        {
            itsSmartbin->__setItsAlarm(NULL);
        }
    __setItsSmartbin(p_smartbin);
}

void alarm::_clearItsSmartbin() {
    NOTIFY_RELATION_CLEARED("itsSmartbin");
    itsSmartbin = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedalarm::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartbin", false, true);
    if(myReal->itsSmartbin)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartbin);
        }
}
//#]

IMPLEMENT_META_P(alarm, Default, Default, false, OMAnimatedalarm)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\alarm.cpp
*********************************************************************/
