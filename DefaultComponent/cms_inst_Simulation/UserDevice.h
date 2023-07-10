/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: UserDevice
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\UserDevice.h
*********************************************************************/

#ifndef UserDevice_H
#define UserDevice_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <aom\aom.h>
//## link itsApp
class App;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class UserDevice
class UserDevice {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUserDevice;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UserDevice();
    
    //## auto_generated
    ~UserDevice();
    
    ////    Additional operations    ////
    
    //## auto_generated
    App* getItsApp() const;
    
    //## auto_generated
    void setItsApp(App* p_App);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    App* itsApp;		//## link itsApp
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsApp(App* p_App);
    
    //## auto_generated
    void _setItsApp(App* p_App);
    
    //## auto_generated
    void _clearItsApp();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUserDevice : virtual public AOMInstance {
    DECLARE_META(UserDevice, OMAnimatedUserDevice)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\UserDevice.h
*********************************************************************/
