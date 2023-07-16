/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Efficiency
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Efficiency.h
*********************************************************************/

#ifndef Efficiency_H
#define Efficiency_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsOppurtunities
class Oppurtunities;

//## package Default

//## class TopLevel::Efficiency
class Efficiency_C {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEfficiency_C;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Efficiency_C();
    
    //## auto_generated
    ~Efficiency_C();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Oppurtunities* getItsOppurtunities() const;
    
    //## auto_generated
    void setItsOppurtunities(Oppurtunities* p_Oppurtunities);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Oppurtunities* itsOppurtunities;		//## link itsOppurtunities
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsOppurtunities(Oppurtunities* p_Oppurtunities);
    
    //## auto_generated
    void _setItsOppurtunities(Oppurtunities* p_Oppurtunities);
    
    //## auto_generated
    void _clearItsOppurtunities();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEfficiency_C : virtual public AOMInstance {
    DECLARE_META(Efficiency_C, OMAnimatedEfficiency_C)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Efficiency.h
*********************************************************************/
