/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: temperature
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\temperature.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "temperature.h"
//#[ ignore
#define EnvPkg_temperature_temperature_SERIALIZE OM_NO_OP
//#]

//## package EnvPkg

//## class temperature
temperature::temperature() {
    NOTIFY_CONSTRUCTOR(temperature, temperature(), 0, EnvPkg_temperature_temperature_SERIALIZE);
}

temperature::~temperature() {
    NOTIFY_DESTRUCTOR(~temperature, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(temperature, EnvPkg, EnvPkg, false, OMAnimatedtemperature)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\temperature.cpp
*********************************************************************/
