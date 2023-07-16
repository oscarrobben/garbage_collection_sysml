/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: humidity_sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\humidity_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "humidity_sensor.h"
//#[ ignore
#define Default_humidity_sensor_humidity_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class humidity_sensor
humidity_sensor::humidity_sensor() {
    NOTIFY_CONSTRUCTOR(humidity_sensor, humidity_sensor(), 0, Default_humidity_sensor_humidity_sensor_SERIALIZE);
}

humidity_sensor::~humidity_sensor() {
    NOTIFY_DESTRUCTOR(~humidity_sensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedhumidity_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedsensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedhumidity_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedsensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(humidity_sensor, Default, false, sensor, OMAnimatedsensor, OMAnimatedhumidity_sensor)

OMINIT_SUPERCLASS(sensor, OMAnimatedsensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\humidity_sensor.cpp
*********************************************************************/
