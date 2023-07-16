/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AppData
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\AppData.h
*********************************************************************/

#ifndef AppData_H
#define AppData_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class AppData
class AppData {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAppData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AppData();
    
    //## auto_generated
    virtual ~AppData();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAppData : virtual public AOMInstance {
    DECLARE_META(AppData, OMAnimatedAppData)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AppData.h
*********************************************************************/
