/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: App
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\App.h
*********************************************************************/

#ifndef App_H
#define App_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omcollec.h>
//## auto_generated
#include <aom\aom.h>
//## link provides
class Resident_Citizen_User;

//## link itsUserDevice
class UserDevice;

//## package Default

//## class App
class App {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedApp;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    App();
    
    //## auto_generated
    ~App();
    
    ////    Additional operations    ////
    
    //## auto_generated
    UserDevice* getItsUserDevice() const;
    
    //## auto_generated
    void setItsUserDevice(UserDevice* p_UserDevice);
    
    //## auto_generated
    OMIterator<Resident_Citizen_User*> getProvides() const;
    
    //## auto_generated
    void addProvides(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void removeProvides(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void clearProvides();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    UserDevice* itsUserDevice;		//## link itsUserDevice
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUserDevice(UserDevice* p_UserDevice);
    
    //## auto_generated
    void _setItsUserDevice(UserDevice* p_UserDevice);
    
    //## auto_generated
    void _clearItsUserDevice();
    
    //## auto_generated
    void _addProvides(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void _removeProvides(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void _clearProvides();

protected :

    OMCollection<Resident_Citizen_User*> provides;		//## link provides
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedApp : virtual public AOMInstance {
    DECLARE_META(App, OMAnimatedApp)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\App.h
*********************************************************************/
