/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Adoption
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Adoption.h
*********************************************************************/

#ifndef Adoption_H
#define Adoption_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsRisks
class Risks;

//## package Default

//## class TopLevel::Adoption
class Adoption_C {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAdoption_C;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Adoption_C();
    
    //## auto_generated
    ~Adoption_C();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Risks* getItsRisks() const;
    
    //## auto_generated
    void setItsRisks(Risks* p_Risks);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Risks* itsRisks;		//## link itsRisks
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsRisks(Risks* p_Risks);
    
    //## auto_generated
    void _setItsRisks(Risks* p_Risks);
    
    //## auto_generated
    void _clearItsRisks();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAdoption_C : virtual public AOMInstance {
    DECLARE_META(Adoption_C, OMAnimatedAdoption_C)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Adoption.h
*********************************************************************/
