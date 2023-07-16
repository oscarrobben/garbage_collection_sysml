/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RouteData
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\RouteData.h
*********************************************************************/

#ifndef RouteData_H
#define RouteData_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class RouteData
class RouteData {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRouteData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    RouteData();
    
    //## auto_generated
    virtual ~RouteData();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRouteData : virtual public AOMInstance {
    DECLARE_META(RouteData, OMAnimatedRouteData)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RouteData.h
*********************************************************************/
