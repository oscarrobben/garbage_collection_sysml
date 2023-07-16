/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: regularbin
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\regularbin.h
*********************************************************************/

#ifndef regularbin_H
#define regularbin_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## class regularbin
#include "bin.h"
//## auto_generated
#include <aom\aom.h>
//## auto_generated
class cms;

//## auto_generated
class smart_garbage_collection_system;

//## package Default

//## class regularbin
class regularbin : public bin {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedregularbin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    regularbin();
    
    //## auto_generated
    ~regularbin();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedregularbin : public OMAnimatedbin {
    DECLARE_META(regularbin, OMAnimatedregularbin)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\regularbin.h
*********************************************************************/
