/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: electricity
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\electricity.h
*********************************************************************/

#ifndef electricity_H
#define electricity_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class electricity
class electricity {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedelectricity;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    electricity();
    
    //## auto_generated
    ~electricity();
    
    ////    Additional operations    ////
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
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
class OMAnimatedelectricity : virtual public AOMInstance {
    DECLARE_META(electricity, OMAnimatedelectricity)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\electricity.h
*********************************************************************/
