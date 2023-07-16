/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Standards_Regulations_Compliances
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Standards_Regulations_Compliances.h
*********************************************************************/

#ifndef Standards_Regulations_Compliances_H
#define Standards_Regulations_Compliances_H

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

//## class Standards_Regulations_Compliances
class Standards_Regulations_Compliances {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStandards_Regulations_Compliances;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Standards_Regulations_Compliances();
    
    //## auto_generated
    ~Standards_Regulations_Compliances();
    
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
class OMAnimatedStandards_Regulations_Compliances : virtual public AOMInstance {
    DECLARE_META(Standards_Regulations_Compliances, OMAnimatedStandards_Regulations_Compliances)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Standards_Regulations_Compliances.h
*********************************************************************/
