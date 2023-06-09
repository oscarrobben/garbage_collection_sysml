/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Resident_Citizen_User
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Resident_Citizen_User.h
*********************************************************************/

#ifndef Resident_Citizen_User_H
#define Resident_Citizen_User_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link uses
class App;

//## link itsSmartbin
class smartbin;

//## package ActorPkg

//## actor Resident_Citizen_User
class Resident_Citizen_User {
    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
public :

    //## auto_generated
    Resident_Citizen_User();
    
    //## auto_generated
    ~Resident_Citizen_User();
    
    //## auto_generated
    smartbin* getItsSmartbin() const;
    
    //## auto_generated
    void setItsSmartbin(smartbin* p_smartbin);
    
    //## auto_generated
    App* getUses() const;
    
    //## auto_generated
    void setUses(App* p_App);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    smartbin* itsSmartbin;		//## link itsSmartbin
    
    App* uses;		//## link uses

public :

    //## auto_generated
    void __setItsSmartbin(smartbin* p_smartbin);
    
    //## auto_generated
    void _setItsSmartbin(smartbin* p_smartbin);
    
    //## auto_generated
    void _clearItsSmartbin();
    
    //## auto_generated
    void __setUses(App* p_App);
    
    //## auto_generated
    void _setUses(App* p_App);
    
    //## auto_generated
    void _clearUses();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Resident_Citizen_User.h
*********************************************************************/
