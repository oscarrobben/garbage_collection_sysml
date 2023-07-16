/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "sensor.h"
//#[ ignore
#define Default_sensor_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class sensor
sensor::sensor() {
    NOTIFY_CONSTRUCTOR(sensor, sensor(), 0, Default_sensor_sensor_SERIALIZE);
}

sensor::~sensor() {
    NOTIFY_DESTRUCTOR(~sensor, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(sensor, Default, Default, false, OMAnimatedsensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\sensor.cpp
*********************************************************************/
