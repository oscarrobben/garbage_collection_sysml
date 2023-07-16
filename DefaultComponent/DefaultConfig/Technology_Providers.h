/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Technology_Providers
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Technology_Providers.h
*********************************************************************/

#ifndef Technology_Providers_H
#define Technology_Providers_H

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

//## actor Technology_Providers
class Technology_Providers {
public :

    //## class Technology_Providers::part_0
    class part_0_C {
        ////    Friends    ////
        
    public :
    
    #ifdef _OMINSTRUMENT
        friend class OMAnimatedpart_0_C;
    #endif // _OMINSTRUMENT
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        part_0_C();
        
        //## auto_generated
        ~part_0_C();
    };

#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTechnology_Providers;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Technology_Providers();
    
    //## auto_generated
    ~Technology_Providers();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Stakeholders* getItsStakeholders() const;
    
    //## auto_generated
    void setItsStakeholders(Stakeholders* p_Stakeholders);
    
    //## auto_generated
    part_0_C* getPart_0() const;

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Stakeholders* itsStakeholders;		//## link itsStakeholders
    
    part_0_C part_0;		//## classInstance part_0
    
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
class OMAnimatedTechnology_Providers : virtual public AOMInstance {
    DECLARE_META(Technology_Providers, OMAnimatedTechnology_Providers)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};

class OMAnimatedpart_0_C : virtual public AOMInstance {
    DECLARE_META(Technology_Providers::part_0_C, OMAnimatedpart_0_C)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Technology_Providers.h
*********************************************************************/
