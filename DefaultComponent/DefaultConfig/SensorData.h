/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SensorData
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SensorData.h
*********************************************************************/

#ifndef SensorData_H
#define SensorData_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class SensorData
class SensorData {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensorData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SensorData();
    
    //## auto_generated
    virtual ~SensorData();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getEmpty() const;
    
    //## auto_generated
    void setEmpty(bool p_empty);
    
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

    bool empty;		//## attribute empty
    
    int fill;		//## attribute fill
    
    int fill_level;		//## attribute fill_level
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensorData : virtual public AOMInstance {
    DECLARE_META(SensorData, OMAnimatedSensorData)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SensorData.h
*********************************************************************/
