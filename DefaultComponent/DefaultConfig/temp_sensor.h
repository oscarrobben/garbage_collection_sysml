/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: temp_sensor
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\temp_sensor.h
*********************************************************************/

#ifndef temp_sensor_H
#define temp_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class temp_sensor
#include "sensor.h"
//## package Default

//## class temp_sensor
class temp_sensor : public sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtemp_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    temp_sensor();
    
    //## auto_generated
    ~temp_sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    float getTemp() const;
    
    //## auto_generated
    void setTemp(float p_temp);
    
    ////    Attributes    ////

protected :

    float temp;		//## attribute temp
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtemp_sensor : public OMAnimatedsensor {
    DECLARE_META(temp_sensor, OMAnimatedtemp_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\temp_sensor.h
*********************************************************************/
