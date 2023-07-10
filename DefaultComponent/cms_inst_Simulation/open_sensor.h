/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: open_sensor
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\open_sensor.h
*********************************************************************/

#ifndef open_sensor_H
#define open_sensor_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## class open_sensor
#include "sensor.h"
//## package Default

//## class open_sensor
class open_sensor : public sensor {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedopen_sensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    open_sensor();
    
    //## auto_generated
    ~open_sensor();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedopen_sensor : public OMAnimatedsensor {
    DECLARE_META(open_sensor, OMAnimatedopen_sensor)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\open_sensor.h
*********************************************************************/
