/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SmartPhone
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SmartPhone.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SmartPhone.h"
//## auto_generated
#include "App.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_SmartPhone_SmartPhone_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SmartPhone
SmartPhone::SmartPhone() {
    NOTIFY_CONSTRUCTOR(SmartPhone, SmartPhone(), 0, Default_SmartPhone_SmartPhone_SERIALIZE);
}

SmartPhone::~SmartPhone() {
    NOTIFY_DESTRUCTOR(~SmartPhone, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSmartPhone::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUserDevice::serializeAttributes(aomsAttributes);
}

void OMAnimatedSmartPhone::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUserDevice::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(SmartPhone, Default, false, UserDevice, OMAnimatedUserDevice, OMAnimatedSmartPhone)

OMINIT_SUPERCLASS(UserDevice, OMAnimatedUserDevice)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SmartPhone.cpp
*********************************************************************/
