/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: tablet
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\tablet.h
*********************************************************************/

#ifndef tablet_H
#define tablet_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## class tablet
#include "UserDevice.h"
//## auto_generated
#include <aom\aom.h>
//## auto_generated
class App;

//## auto_generated
class smart_garbage_collection_system;

//## package Default

//## class tablet
class tablet : public UserDevice {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtablet;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    tablet();
    
    //## auto_generated
    ~tablet();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtablet : public OMAnimatedUserDevice {
    DECLARE_META(tablet, OMAnimatedtablet)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\tablet.h
*********************************************************************/
