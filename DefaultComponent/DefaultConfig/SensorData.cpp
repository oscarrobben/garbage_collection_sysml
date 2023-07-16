/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorData
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SensorData.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "SensorData.h"
//#[ ignore
#define Default_SensorData_SensorData_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class SensorData
SensorData::SensorData() : empty(false), fill(0), fill_level(0) {
    NOTIFY_CONSTRUCTOR(SensorData, SensorData(), 0, Default_SensorData_SensorData_SERIALIZE);
}

SensorData::~SensorData() {
    NOTIFY_DESTRUCTOR(~SensorData, true);
}

bool SensorData::getEmpty() const {
    return empty;
}

void SensorData::setEmpty(bool p_empty) {
    empty = p_empty;
}

int SensorData::getFill() const {
    return fill;
}

void SensorData::setFill(int p_fill) {
    fill = p_fill;
}

int SensorData::getFill_level() const {
    return fill_level;
}

void SensorData::setFill_level(int p_fill_level) {
    fill_level = p_fill_level;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensorData::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("fill_level", x2String(myReal->fill_level));
    aomsAttributes->addAttribute("fill", x2String(myReal->fill));
    aomsAttributes->addAttribute("empty", x2String(myReal->empty));
}
//#]

IMPLEMENT_META_P(SensorData, Default, Default, false, OMAnimatedSensorData)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorData.cpp
*********************************************************************/
