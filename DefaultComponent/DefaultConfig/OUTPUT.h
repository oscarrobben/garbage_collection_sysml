/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OUTPUT
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\OUTPUT.h
*********************************************************************/

#ifndef OUTPUT_H
#define OUTPUT_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## classInstance itsOptimized_Collection_Route
#include "Optimized_Collection_Route.h"
//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class OUTPUT
class OUTPUT {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOUTPUT;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    OUTPUT();
    
    //## auto_generated
    ~OUTPUT();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Optimized_Collection_Route_C* getItsOptimized_Collection_Route() const;
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Optimized_Collection_Route_C itsOptimized_Collection_Route;		//## classInstance itsOptimized_Collection_Route
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOUTPUT : virtual public AOMInstance {
    DECLARE_META(OUTPUT, OMAnimatedOUTPUT)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OUTPUT.h
*********************************************************************/
