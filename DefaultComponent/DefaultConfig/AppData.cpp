/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AppData
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\AppData.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AppData.h"
//#[ ignore
#define Default_AppData_AppData_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class AppData
AppData::AppData() {
    NOTIFY_CONSTRUCTOR(AppData, AppData(), 0, Default_AppData_AppData_SERIALIZE);
}

AppData::~AppData() {
    NOTIFY_DESTRUCTOR(~AppData, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(AppData, Default, Default, false, OMAnimatedAppData)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AppData.cpp
*********************************************************************/
