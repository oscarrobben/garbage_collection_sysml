/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: open_sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\open_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "open_sensor.h"
//#[ ignore
#define Default_open_sensor_open_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class open_sensor
open_sensor::open_sensor() {
    NOTIFY_CONSTRUCTOR(open_sensor, open_sensor(), 0, Default_open_sensor_open_sensor_SERIALIZE);
}

open_sensor::~open_sensor() {
    NOTIFY_DESTRUCTOR(~open_sensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedopen_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedsensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedopen_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedsensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(open_sensor, Default, false, sensor, OMAnimatedsensor, OMAnimatedopen_sensor)

OMINIT_SUPERCLASS(sensor, OMAnimatedsensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\open_sensor.cpp
*********************************************************************/
