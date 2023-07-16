/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Oppurtunities
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Oppurtunities.h
*********************************************************************/

#ifndef Oppurtunities_H
#define Oppurtunities_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsCost_Reduction
class Cost_Reduction_C;

//## link itsEfficiency
class Efficiency_C;

//## link itsSustainability
class Sustainability_C;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class Oppurtunities
class Oppurtunities {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOppurtunities;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Oppurtunities();
    
    //## auto_generated
    ~Oppurtunities();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Cost_Reduction_C* getItsCost_Reduction() const;
    
    //## auto_generated
    void setItsCost_Reduction(Cost_Reduction_C* p_Cost_Reduction);
    
    //## auto_generated
    Efficiency_C* getItsEfficiency() const;
    
    //## auto_generated
    void setItsEfficiency(Efficiency_C* p_Efficiency);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    Sustainability_C* getItsSustainability() const;
    
    //## auto_generated
    void setItsSustainability(Sustainability_C* p_Sustainability);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Cost_Reduction_C* itsCost_Reduction;		//## link itsCost_Reduction
    
    Efficiency_C* itsEfficiency;		//## link itsEfficiency
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    Sustainability_C* itsSustainability;		//## link itsSustainability
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCost_Reduction(Cost_Reduction_C* p_Cost_Reduction);
    
    //## auto_generated
    void _setItsCost_Reduction(Cost_Reduction_C* p_Cost_Reduction);
    
    //## auto_generated
    void _clearItsCost_Reduction();
    
    //## auto_generated
    void __setItsEfficiency(Efficiency_C* p_Efficiency);
    
    //## auto_generated
    void _setItsEfficiency(Efficiency_C* p_Efficiency);
    
    //## auto_generated
    void _clearItsEfficiency();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
    
    //## auto_generated
    void __setItsSustainability(Sustainability_C* p_Sustainability);
    
    //## auto_generated
    void _setItsSustainability(Sustainability_C* p_Sustainability);
    
    //## auto_generated
    void _clearItsSustainability();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOppurtunities : virtual public AOMInstance {
    DECLARE_META(Oppurtunities, OMAnimatedOppurtunities)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Oppurtunities.h
*********************************************************************/
