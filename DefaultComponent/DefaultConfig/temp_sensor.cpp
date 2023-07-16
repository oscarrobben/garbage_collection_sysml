/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: temp_sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\temp_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "temp_sensor.h"
//#[ ignore
#define Default_temp_sensor_temp_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class temp_sensor
temp_sensor::temp_sensor() : temp(0) {
    NOTIFY_CONSTRUCTOR(temp_sensor, temp_sensor(), 0, Default_temp_sensor_temp_sensor_SERIALIZE);
}

temp_sensor::~temp_sensor() {
    NOTIFY_DESTRUCTOR(~temp_sensor, false);
}

float temp_sensor::getTemp() const {
    return temp;
}

void temp_sensor::setTemp(float p_temp) {
    temp = p_temp;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedtemp_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
    OMAnimatedsensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedtemp_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedsensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(temp_sensor, Default, false, sensor, OMAnimatedsensor, OMAnimatedtemp_sensor)

OMINIT_SUPERCLASS(sensor, OMAnimatedsensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\temp_sensor.cpp
*********************************************************************/
