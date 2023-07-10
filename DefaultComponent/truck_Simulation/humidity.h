/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: humidity
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\humidity.h
*********************************************************************/

#ifndef humidity_H
#define humidity_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "EnvPkg.h"
//## package EnvPkg

//## class humidity
class humidity {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedhumidity;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    humidity();
    
    //## auto_generated
    ~humidity();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedhumidity : virtual public AOMInstance {
    DECLARE_META(humidity, OMAnimatedhumidity)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\humidity.h
*********************************************************************/
