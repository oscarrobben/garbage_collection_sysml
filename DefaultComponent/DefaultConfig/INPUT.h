/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: INPUT
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\INPUT.h
*********************************************************************/

#ifndef INPUT_H
#define INPUT_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## classInstance itsSmartBin_Data
#include "SmartBin_Data.h"
//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class INPUT
class INPUT {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedINPUT;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    INPUT();
    
    //## auto_generated
    ~INPUT();
    
    ////    Additional operations    ////
    
    //## auto_generated
    SmartBin_Data_C* getItsSmartBin_Data() const;
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    SmartBin_Data_C itsSmartBin_Data;		//## classInstance itsSmartBin_Data
    
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
class OMAnimatedINPUT : virtual public AOMInstance {
    DECLARE_META(INPUT, OMAnimatedINPUT)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\INPUT.h
*********************************************************************/
