/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: bin
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\bin.h
*********************************************************************/

#ifndef bin_H
#define bin_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <aom\aom.h>
//## link itsCms
class cms;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class bin
class bin {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    bin();
    
    //## auto_generated
    ~bin();
    
    ////    Additional operations    ////
    
    //## auto_generated
    cms* getItsCms() const;
    
    //## auto_generated
    void setItsCms(cms* p_cms);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    cms* itsCms;		//## link itsCms
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCms(cms* p_cms);
    
    //## auto_generated
    void _setItsCms(cms* p_cms);
    
    //## auto_generated
    void _clearItsCms();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
    
    //## auto_generated
    cms* getItsCms_1() const;
    
    //## auto_generated
    void setItsCms_1(cms* p_cms);

protected :

    cms* itsCms_1;		//## link itsCms_1

public :

    //## auto_generated
    void __setItsCms_1(cms* p_cms);
    
    //## auto_generated
    void _setItsCms_1(cms* p_cms);
    
    //## auto_generated
    void _clearItsCms_1();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbin : virtual public AOMInstance {
    DECLARE_META(bin, OMAnimatedbin)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\bin.h
*********************************************************************/
