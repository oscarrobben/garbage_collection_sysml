/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: audio_sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\audio_sensor.h
*********************************************************************/

#ifndef audio_sensor_H
#define audio_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class audio_sensor
#include "sensor.h"
//## package Default

//## class audio_sensor
class audio_sensor : public sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedaudio_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    audio_sensor();
    
    //## auto_generated
    ~audio_sensor();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedaudio_sensor : public OMAnimatedsensor {
    DECLARE_META(audio_sensor, OMAnimatedaudio_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\audio_sensor.h
*********************************************************************/
