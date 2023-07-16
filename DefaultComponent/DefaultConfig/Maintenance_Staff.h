/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintenance_Staff
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Maintenance_Staff.h
*********************************************************************/

#ifndef Maintenance_Staff_H
#define Maintenance_Staff_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "StakeholderPkg.h"
//## link itsStakeholders
class Stakeholders;

//## link itsUsers_Endusers
class Users_Endusers;

//## package StakeholderPkg

//## actor Maintenance_Staff
class Maintenance_Staff {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMaintenance_Staff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Maintenance_Staff();
    
    //## auto_generated
    ~Maintenance_Staff();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Stakeholders* getItsStakeholders() const;
    
    //## auto_generated
    void setItsStakeholders(Stakeholders* p_Stakeholders);
    
    //## auto_generated
    Users_Endusers* getItsUsers_Endusers() const;
    
    //## auto_generated
    void setItsUsers_Endusers(Users_Endusers* p_Users_Endusers);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Stakeholders* itsStakeholders;		//## link itsStakeholders
    
    Users_Endusers* itsUsers_Endusers;		//## link itsUsers_Endusers
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsStakeholders(Stakeholders* p_Stakeholders);
    
    //## auto_generated
    void _setItsStakeholders(Stakeholders* p_Stakeholders);
    
    //## auto_generated
    void _clearItsStakeholders();
    
    //## auto_generated
    void __setItsUsers_Endusers(Users_Endusers* p_Users_Endusers);
    
    //## auto_generated
    void _setItsUsers_Endusers(Users_Endusers* p_Users_Endusers);
    
    //## auto_generated
    void _clearItsUsers_Endusers();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMaintenance_Staff : virtual public AOMInstance {
    DECLARE_META(Maintenance_Staff, OMAnimatedMaintenance_Staff)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintenance_Staff.h
*********************************************************************/
