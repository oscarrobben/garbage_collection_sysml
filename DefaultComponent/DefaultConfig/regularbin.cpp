/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: regularbin
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\regularbin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "regularbin.h"
//## auto_generated
#include "cms.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_regularbin_regularbin_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class regularbin
regularbin::regularbin() {
    NOTIFY_CONSTRUCTOR(regularbin, regularbin(), 0, Default_regularbin_regularbin_SERIALIZE);
}

regularbin::~regularbin() {
    NOTIFY_DESTRUCTOR(~regularbin, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedregularbin::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedbin::serializeAttributes(aomsAttributes);
}

void OMAnimatedregularbin::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedbin::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(regularbin, Default, false, bin, OMAnimatedbin, OMAnimatedregularbin)

OMINIT_SUPERCLASS(bin, OMAnimatedbin)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\regularbin.cpp
*********************************************************************/
