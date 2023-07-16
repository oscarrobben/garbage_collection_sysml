/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cost_Reduction
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Cost_Reduction.h
*********************************************************************/

#ifndef Cost_Reduction_H
#define Cost_Reduction_H

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

//## class TopLevel::Cost_Reduction
class Cost_Reduction_C {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCost_Reduction_C;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Cost_Reduction_C();
    
    //## auto_generated
    ~Cost_Reduction_C();
    
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
class OMAnimatedCost_Reduction_C : virtual public AOMInstance {
    DECLARE_META(Cost_Reduction_C, OMAnimatedCost_Reduction_C)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cost_Reduction.h
*********************************************************************/
