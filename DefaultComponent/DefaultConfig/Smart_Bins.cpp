/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Smart_Bins
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Smart_Bins.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Smart_Bins.h"
//#[ ignore
#define ActorPkg_Smart_Bins_Smart_Bins_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Smart_Bins
Smart_Bins::Smart_Bins() {
    NOTIFY_CONSTRUCTOR(Smart_Bins, Smart_Bins(), 0, ActorPkg_Smart_Bins_Smart_Bins_SERIALIZE);
}

Smart_Bins::~Smart_Bins() {
    NOTIFY_DESTRUCTOR(~Smart_Bins, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSmart_Bins::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Smart_Bins, ActorPkg, ActorPkg, false, OMAnimatedSmart_Bins)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Smart_Bins.cpp
*********************************************************************/
