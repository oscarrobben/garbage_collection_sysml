/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Laptop
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Laptop.h
*********************************************************************/

#ifndef Laptop_H
#define Laptop_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## class Laptop
#include "UserDevice.h"
//## auto_generated
#include <aom\aom.h>
//## auto_generated
class App;

//## auto_generated
class smart_garbage_collection_system;

//## package Default

//## class Laptop
class Laptop : public UserDevice {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLaptop;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Laptop();
    
    //## auto_generated
    ~Laptop();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLaptop : public OMAnimatedUserDevice {
    DECLARE_META(Laptop, OMAnimatedLaptop)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Laptop.h
*********************************************************************/
