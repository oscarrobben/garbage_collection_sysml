/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: tablet
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\tablet.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "tablet.h"
//## auto_generated
#include "App.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_tablet_tablet_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class tablet
tablet::tablet() {
    NOTIFY_CONSTRUCTOR(tablet, tablet(), 0, Default_tablet_tablet_SERIALIZE);
}

tablet::~tablet() {
    NOTIFY_DESTRUCTOR(~tablet, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedtablet::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUserDevice::serializeAttributes(aomsAttributes);
}

void OMAnimatedtablet::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUserDevice::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(tablet, Default, false, UserDevice, OMAnimatedUserDevice, OMAnimatedtablet)

OMINIT_SUPERCLASS(UserDevice, OMAnimatedUserDevice)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\tablet.cpp
*********************************************************************/
