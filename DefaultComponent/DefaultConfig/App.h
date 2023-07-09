/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: App
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\App.h
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
//## link provides
class Resident_Citizen_User;

//## link itsUserDevice
class UserDevice;

//## package Default

//## class App
class App {
    ////    Constructors and destructors    ////
    
public :

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
    
    OMCollection<Resident_Citizen_User*> provides;		//## link provides
    
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
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\App.h
*********************************************************************/
