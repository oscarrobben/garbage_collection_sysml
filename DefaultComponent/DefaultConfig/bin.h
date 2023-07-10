/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: bin
//!	Generated Date	: Mon, 10, Jul 2023  
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
//## link itsCms
class cms;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class bin
class bin {
    ////    Constructors and destructors    ////
    
public :

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
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\bin.h
*********************************************************************/
