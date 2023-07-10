/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: humidity
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\humidity.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "humidity.h"
//#[ ignore
#define EnvPkg_humidity_humidity_SERIALIZE OM_NO_OP
//#]

//## package EnvPkg

//## class humidity
humidity::humidity() {
    NOTIFY_CONSTRUCTOR(humidity, humidity(), 0, EnvPkg_humidity_humidity_SERIALIZE);
}

humidity::~humidity() {
    NOTIFY_DESTRUCTOR(~humidity, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(humidity, EnvPkg, EnvPkg, false, OMAnimatedhumidity)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\humidity.cpp
*********************************************************************/
