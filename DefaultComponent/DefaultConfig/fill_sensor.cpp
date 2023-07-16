/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: fill_sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\fill_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "fill_sensor.h"
//#[ ignore
#define Default_fill_sensor_fill_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class fill_sensor
fill_sensor::fill_sensor() {
    NOTIFY_CONSTRUCTOR(fill_sensor, fill_sensor(), 0, Default_fill_sensor_fill_sensor_SERIALIZE);
}

fill_sensor::~fill_sensor() {
    NOTIFY_DESTRUCTOR(~fill_sensor, false);
}

float fill_sensor::getTemp() const {
    return temp;
}

void fill_sensor::setTemp(float p_temp) {
    temp = p_temp;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedfill_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
    OMAnimatedsensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedfill_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedsensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(fill_sensor, Default, false, sensor, OMAnimatedsensor, OMAnimatedfill_sensor)

OMINIT_SUPERCLASS(sensor, OMAnimatedsensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\fill_sensor.cpp
*********************************************************************/
