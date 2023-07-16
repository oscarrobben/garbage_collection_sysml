/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: audio_sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\audio_sensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "audio_sensor.h"
//#[ ignore
#define Default_audio_sensor_audio_sensor_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class audio_sensor
audio_sensor::audio_sensor() {
    NOTIFY_CONSTRUCTOR(audio_sensor, audio_sensor(), 0, Default_audio_sensor_audio_sensor_SERIALIZE);
}

audio_sensor::~audio_sensor() {
    NOTIFY_DESTRUCTOR(~audio_sensor, false);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedaudio_sensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedsensor::serializeAttributes(aomsAttributes);
}

void OMAnimatedaudio_sensor::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedsensor::serializeRelations(aomsRelations);
}
//#]

IMPLEMENT_META_S_P(audio_sensor, Default, false, sensor, OMAnimatedsensor, OMAnimatedaudio_sensor)

OMINIT_SUPERCLASS(sensor, OMAnimatedsensor)

OMREGISTER_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\audio_sensor.cpp
*********************************************************************/
