/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: Resident_Citizen_User
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\Resident_Citizen_User.h
*********************************************************************/

#ifndef Resident_Citizen_User_H
#define Resident_Citizen_User_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## link uses
class App;

//## link itsSmartbin
class smartbin;

//## package ActorPkg

//## actor Resident_Citizen_User
class Resident_Citizen_User {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedResident_Citizen_User;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedResident_Citizen_User : virtual public AOMInstance {
    DECLARE_META(Resident_Citizen_User, OMAnimatedResident_Citizen_User)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\Resident_Citizen_User.h
*********************************************************************/
