/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Resources
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Resources.h
*********************************************************************/

#ifndef Resources_H
#define Resources_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsHuman
class Human_C;

//## link itsTechnologie
class Technologie_C;

//## link itsBlock_112
class block_112;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class Resources
class Resources {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedResources;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Resources();
    
    //## auto_generated
    ~Resources();
    
    ////    Additional operations    ////
    
    //## auto_generated
    block_112* getItsBlock_112() const;
    
    //## auto_generated
    void setItsBlock_112(block_112* p_block_112);
    
    //## auto_generated
    Human_C* getItsHuman() const;
    
    //## auto_generated
    void setItsHuman(Human_C* p_Human);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    Technologie_C* getItsTechnologie() const;
    
    //## auto_generated
    void setItsTechnologie(Technologie_C* p_Technologie);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    block_112* itsBlock_112;		//## link itsBlock_112
    
    Human_C* itsHuman;		//## link itsHuman
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    Technologie_C* itsTechnologie;		//## link itsTechnologie
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsBlock_112(block_112* p_block_112);
    
    //## auto_generated
    void _setItsBlock_112(block_112* p_block_112);
    
    //## auto_generated
    void _clearItsBlock_112();
    
    //## auto_generated
    void __setItsHuman(Human_C* p_Human);
    
    //## auto_generated
    void _setItsHuman(Human_C* p_Human);
    
    //## auto_generated
    void _clearItsHuman();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
    
    //## auto_generated
    void __setItsTechnologie(Technologie_C* p_Technologie);
    
    //## auto_generated
    void _setItsTechnologie(Technologie_C* p_Technologie);
    
    //## auto_generated
    void _clearItsTechnologie();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedResources : virtual public AOMInstance {
    DECLARE_META(Resources, OMAnimatedResources)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Resources.h
*********************************************************************/
