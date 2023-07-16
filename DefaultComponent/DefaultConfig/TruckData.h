/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TruckData
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\TruckData.h
*********************************************************************/

#ifndef TruckData_H
#define TruckData_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class TruckData
class TruckData {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTruckData;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TruckData();
    
    //## auto_generated
    virtual ~TruckData();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTruckData : virtual public AOMInstance {
    DECLARE_META(TruckData, OMAnimatedTruckData)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TruckData.h
*********************************************************************/
