/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: humidity_sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\humidity_sensor.h
*********************************************************************/

#ifndef humidity_sensor_H
#define humidity_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class humidity_sensor
#include "sensor.h"
//## package Default

//## class humidity_sensor
class humidity_sensor : public sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedhumidity_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    humidity_sensor();
    
    //## auto_generated
    ~humidity_sensor();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedhumidity_sensor : public OMAnimatedsensor {
    DECLARE_META(humidity_sensor, OMAnimatedhumidity_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\humidity_sensor.h
*********************************************************************/
