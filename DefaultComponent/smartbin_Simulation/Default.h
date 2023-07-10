/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: Default
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class App;

//## auto_generated
class UserDevice;

//## auto_generated
class bin;

//## auto_generated
class cms;

//## auto_generated
class electricity;

//## auto_generated
class lid;

//## auto_generated
class open_sensor;

//## auto_generated
class sensor;

//## auto_generated
class smart_garbage_collection_system;

//## auto_generated
class smartbin;

//## auto_generated
class truck;

//## auto_generated
class wastecenter;

//#[ ignore
#define throwAway_Default_id 18601
//#]

//## package Default


//## auto_generated
void Default_initRelations();

//## event throwAway()
class throwAway : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedthrowAway;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    throwAway();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedthrowAway : virtual public AOMEvent {
    DECLARE_META_EVENT(throwAway)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\Default.h
*********************************************************************/
