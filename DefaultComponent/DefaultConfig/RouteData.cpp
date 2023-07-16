/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RouteData
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\RouteData.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RouteData.h"
//#[ ignore
#define Default_RouteData_RouteData_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class RouteData
RouteData::RouteData() {
    NOTIFY_CONSTRUCTOR(RouteData, RouteData(), 0, Default_RouteData_RouteData_SERIALIZE);
}

RouteData::~RouteData() {
    NOTIFY_DESTRUCTOR(~RouteData, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(RouteData, Default, Default, false, OMAnimatedRouteData)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RouteData.cpp
*********************************************************************/
