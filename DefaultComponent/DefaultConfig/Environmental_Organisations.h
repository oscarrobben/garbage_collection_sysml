/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Environmental_Organisations
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Environmental_Organisations.h
*********************************************************************/

#ifndef Environmental_Organisations_H
#define Environmental_Organisations_H

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

//## package StakeholderPkg

//## actor Environmental_Organisations
class Environmental_Organisations {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEnvironmental_Organisations;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Environmental_Organisations();
    
    //## auto_generated
    ~Environmental_Organisations();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Stakeholders* getItsStakeholders() const;
    
    //## auto_generated
    void setItsStakeholders(Stakeholders* p_Stakeholders);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Stakeholders* itsStakeholders;		//## link itsStakeholders
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsStakeholders(Stakeholders* p_Stakeholders);
    
    //## auto_generated
    void _setItsStakeholders(Stakeholders* p_Stakeholders);
    
    //## auto_generated
    void _clearItsStakeholders();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEnvironmental_Organisations : virtual public AOMInstance {
    DECLARE_META(Environmental_Organisations, OMAnimatedEnvironmental_Organisations)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Environmental_Organisations.h
*********************************************************************/
