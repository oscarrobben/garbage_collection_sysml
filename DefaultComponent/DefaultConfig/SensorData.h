/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorData
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SensorData.h
*********************************************************************/

#ifndef SensorData_H
#define SensorData_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class SensorData
class SensorData {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    SensorData();
    
    //## auto_generated
    virtual ~SensorData();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getFill() const;
    
    //## auto_generated
    void setFill(int p_fill);
    
    //## auto_generated
    int getFill_level() const;
    
    //## auto_generated
    void setFill_level(int p_fill_level);
    
    ////    Attributes    ////

protected :

    int fill;		//## attribute fill
    
    int fill_level;		//## attribute fill_level
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorData.h
*********************************************************************/
