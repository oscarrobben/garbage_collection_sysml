/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TruckData
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\TruckData.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TruckData.h"
//#[ ignore
#define Default_TruckData_TruckData_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TruckData
TruckData::TruckData() {
    NOTIFY_CONSTRUCTOR(TruckData, TruckData(), 0, Default_TruckData_TruckData_SERIALIZE);
}

TruckData::~TruckData() {
    NOTIFY_DESTRUCTOR(~TruckData, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(TruckData, Default, Default, false, OMAnimatedTruckData)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TruckData.cpp
*********************************************************************/
