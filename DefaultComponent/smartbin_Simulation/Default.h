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

#define reqEmpty_Default_id 18602

#define emptyBin_Default_id 18603

#define drive_Default_id 18604

#define broken_Default_id 18605

#define repaired_Default_id 18606

#define repair_bin_Default_id 18607

#define disp_repair_Default_id 18608

#define req_repair_Default_id 18609
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

//## event reqEmpty()
class reqEmpty : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqEmpty;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqEmpty();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqEmpty : virtual public AOMEvent {
    DECLARE_META_EVENT(reqEmpty)
};
//#]
#endif // _OMINSTRUMENT

//## event emptyBin()
class emptyBin : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedemptyBin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    emptyBin();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedemptyBin : virtual public AOMEvent {
    DECLARE_META_EVENT(emptyBin)
};
//#]
#endif // _OMINSTRUMENT

//## event drive()
class drive : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddrive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    drive();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddrive : virtual public AOMEvent {
    DECLARE_META_EVENT(drive)
};
//#]
#endif // _OMINSTRUMENT

//## event broken()
class broken : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbroken;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    broken();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbroken : virtual public AOMEvent {
    DECLARE_META_EVENT(broken)
};
//#]
#endif // _OMINSTRUMENT

//## event repaired()
class repaired : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepaired;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repaired();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepaired : virtual public AOMEvent {
    DECLARE_META_EVENT(repaired)
};
//#]
#endif // _OMINSTRUMENT

//## event repair_bin()
class repair_bin : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepair_bin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repair_bin();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepair_bin : virtual public AOMEvent {
    DECLARE_META_EVENT(repair_bin)
};
//#]
#endif // _OMINSTRUMENT

//## event disp_repair()
class disp_repair : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddisp_repair;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    disp_repair();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddisp_repair : virtual public AOMEvent {
    DECLARE_META_EVENT(disp_repair)
};
//#]
#endif // _OMINSTRUMENT

//## event req_repair()
class req_repair : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreq_repair;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    req_repair();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreq_repair : virtual public AOMEvent {
    DECLARE_META_EVENT(req_repair)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\Default.h
*********************************************************************/
