/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Laptop
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Laptop.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Laptop.h"
//## auto_generated
#include "App.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_Laptop_Laptop_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Laptop
Laptop::Laptop() {
    NOTIFY_CONSTRUCTOR(Laptop, Laptop(), 0, Default_Laptop_Laptop_SERIALIZE);
}

Laptop::~Laptop() {
    NOTIFY_DESTRUCTOR(~Laptop, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLaptop::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedUserDevice::serializeAttributes(aomsAttributes);
}

void OMAnimatedLaptop::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedUserDevice::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(Laptop, Default, false, UserDevice, OMAnimatedUserDevice, OMAnimatedLaptop)

OMINIT_SUPERCLASS(UserDevice, OMAnimatedUserDevice)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Laptop.cpp
*********************************************************************/
