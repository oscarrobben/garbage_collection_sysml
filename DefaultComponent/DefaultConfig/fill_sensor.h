/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: fill_sensor
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\fill_sensor.h
*********************************************************************/

#ifndef fill_sensor_H
#define fill_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## class fill_sensor
#include "sensor.h"
//## package Default

//## class fill_sensor
class fill_sensor : public sensor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    fill_sensor();
    
    //## auto_generated
    ~fill_sensor();
    
    ////    Additional operations    ////
    
    //## auto_generated
    float getTemp() const;
    
    //## auto_generated
    void setTemp(float p_temp);
    
    ////    Attributes    ////

protected :

    float temp;		//## attribute temp
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\fill_sensor.h
*********************************************************************/
