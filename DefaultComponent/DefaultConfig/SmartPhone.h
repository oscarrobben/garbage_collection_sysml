/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SmartPhone
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\SmartPhone.h
*********************************************************************/

#ifndef SmartPhone_H
#define SmartPhone_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## class SmartPhone
#include "UserDevice.h"
//## auto_generated
#include <aom\aom.h>
//## auto_generated
class App;

//## auto_generated
class smart_garbage_collection_system;

//## package Default

//## class SmartPhone
class SmartPhone : public UserDevice {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSmartPhone;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    SmartPhone();
    
    //## auto_generated
    ~SmartPhone();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSmartPhone : public OMAnimatedUserDevice {
    DECLARE_META(SmartPhone, OMAnimatedSmartPhone)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SmartPhone.h
*********************************************************************/
