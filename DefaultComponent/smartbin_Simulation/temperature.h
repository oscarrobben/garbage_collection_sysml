/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: temperature
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\temperature.h
*********************************************************************/

#ifndef temperature_H
#define temperature_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "EnvPkg.h"
//## package EnvPkg

//## class temperature
class temperature {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtemperature;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    temperature();
    
    //## auto_generated
    ~temperature();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtemperature : virtual public AOMInstance {
    DECLARE_META(temperature, OMAnimatedtemperature)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\temperature.h
*********************************************************************/
