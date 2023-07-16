/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Default.h
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
//## classInstance Adoption
class Adoption_C;

//## auto_generated
class App;

//## auto_generated
class AppData;

//## classInstance Cost_Reduction
class Cost_Reduction_C;

//## classInstance DataSecurity_Privacy
class DataSecurity_Privacy_C;

//## classInstance Efficiency
class Efficiency_C;

//## classInstance Human
class Human_C;

//## auto_generated
class INPUT;

//## auto_generated
class Laptop;

//## auto_generated
class OUTPUT;

//## auto_generated
class Oppurtunities;

//## classInstance Optimized_Collection_Route
class Optimized_Collection_Route_C;

//## classInstance ResistancetoChange
class ResistancetoChange_C;

//## auto_generated
class Resources;

//## auto_generated
class Risks;

//## auto_generated
class RouteData;

//## auto_generated
class SensorData;

//## classInstance SmartBin_Data
class SmartBin_Data_C;

//## auto_generated
class SmartPhone;

//## auto_generated
class Stakeholders;

//## auto_generated
class Standards_Regulations_Compliances;

//## classInstance Sustainability
class Sustainability_C;

//## classInstance Technological
class Technological_C;

//## classInstance Technological_Challenges
class Technological_Challenges_C;

//## classInstance Technologie
class Technologie_C;

//## auto_generated
class Threats;

//## auto_generated
class TruckData;

//## auto_generated
class UserDevice;

//## auto_generated
class Users_Endusers;

//## auto_generated
class alarm;

//## auto_generated
class audio_sensor;

//## auto_generated
class bin;

//## auto_generated
class block_112;

//## auto_generated
class block_19;

//## auto_generated
class block_21;

//## auto_generated
class block_7;

//## auto_generated
class block_73;

//## classInstance itsCms
class cms;

//## auto_generated
class electricity;

//## auto_generated
class fill_sensor;

//## auto_generated
class humidity_sensor;

//## auto_generated
class lid;

//## auto_generated
class open_sensor;

//## classInstance part_1
class part_1_C;

//## auto_generated
class regularbin;

//## auto_generated
class sensor;

//## classInstance server
class server_C;

//## auto_generated
class smart_garbage_collection_system;

//## classInstance itsSmartbin
class smartbin;

//## auto_generated
class tablet;

//## auto_generated
class temp_sensor;

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

#define test_Default_id 18610

#define addTrash1_Default_id 18611

#define addTrash2_Default_id 18612

#define throwAway2_Default_id 18613

#define broken2_Default_id 18614

#define reqEmpty2_Default_id 18615

#define broken1_Default_id 18616

#define repaired2_Default_id 18617

#define emptyBin2_Default_id 18618

#define req_repair2_Default_id 18619

#define emptyBin1_Default_id 18620

#define req_repair1_Default_id 18621

#define disp_repair1_Default_id 18622

#define repaired1_Default_id 18623

#define reqEmpty1_Default_id 18624

#define disp_repair2_Default_id 18625

#define drive1_Default_id 18626

#define throwAway1_Default_id 18627

#define drive2_Default_id 18628

#define select1_Default_id 18629

#define select2_Default_id 18630

#define disp_repair0_Default_id 18631
//#]

//## package Default


//## classInstance Adoption
extern Adoption_C Adoption;

//## classInstance Cost_Reduction
extern Cost_Reduction_C Cost_Reduction;

//## classInstance DataSecurity_Privacy
extern DataSecurity_Privacy_C DataSecurity_Privacy;

//## classInstance Efficiency
extern Efficiency_C Efficiency;

//## classInstance Human
extern Human_C Human;

//## classInstance Optimized_Collection_Route
extern Optimized_Collection_Route_C Optimized_Collection_Route;

//## classInstance ResistancetoChange
extern ResistancetoChange_C ResistancetoChange;

//## classInstance SmartBin_Data
extern SmartBin_Data_C SmartBin_Data;

//## classInstance Sustainability
extern Sustainability_C Sustainability;

//## classInstance Technological
extern Technological_C Technological;

//## classInstance Technological_Challenges
extern Technological_Challenges_C Technological_Challenges;

//## classInstance Technologie
extern Technologie_C Technologie;

//## classInstance itsCms
extern cms itsCms;

//## classInstance itsSmartbin
extern smartbin itsSmartbin;

//## classInstance part_1
extern part_1_C part_1;

//## classInstance server
extern server_C server;

//## auto_generated
void Default_initRelations();

//## auto_generated
bool Default_startBehavior();

//#[ ignore
class Default_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Default_OMInitializer();
    
    //## auto_generated
    ~Default_OMInitializer();
};
//#]

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

//## event test()
class test : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtest;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    test();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedtest : virtual public AOMEvent {
    DECLARE_META_EVENT(test)
};
//#]
#endif // _OMINSTRUMENT

//## event addTrash1()
class addTrash1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedaddTrash1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    addTrash1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedaddTrash1 : virtual public AOMEvent {
    DECLARE_META_EVENT(addTrash1)
};
//#]
#endif // _OMINSTRUMENT

//## event addTrash2()
class addTrash2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedaddTrash2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    addTrash2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedaddTrash2 : virtual public AOMEvent {
    DECLARE_META_EVENT(addTrash2)
};
//#]
#endif // _OMINSTRUMENT

//## event throwAway2()
class throwAway2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedthrowAway2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    throwAway2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedthrowAway2 : virtual public AOMEvent {
    DECLARE_META_EVENT(throwAway2)
};
//#]
#endif // _OMINSTRUMENT

//## event broken2()
class broken2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbroken2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    broken2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbroken2 : virtual public AOMEvent {
    DECLARE_META_EVENT(broken2)
};
//#]
#endif // _OMINSTRUMENT

//## event reqEmpty2()
class reqEmpty2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqEmpty2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqEmpty2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqEmpty2 : virtual public AOMEvent {
    DECLARE_META_EVENT(reqEmpty2)
};
//#]
#endif // _OMINSTRUMENT

//## event broken1()
class broken1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbroken1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    broken1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbroken1 : virtual public AOMEvent {
    DECLARE_META_EVENT(broken1)
};
//#]
#endif // _OMINSTRUMENT

//## event repaired2()
class repaired2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepaired2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repaired2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepaired2 : virtual public AOMEvent {
    DECLARE_META_EVENT(repaired2)
};
//#]
#endif // _OMINSTRUMENT

//## event emptyBin2()
class emptyBin2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedemptyBin2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    emptyBin2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedemptyBin2 : virtual public AOMEvent {
    DECLARE_META_EVENT(emptyBin2)
};
//#]
#endif // _OMINSTRUMENT

//## event req_repair2()
class req_repair2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreq_repair2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    req_repair2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreq_repair2 : virtual public AOMEvent {
    DECLARE_META_EVENT(req_repair2)
};
//#]
#endif // _OMINSTRUMENT

//## event emptyBin1()
class emptyBin1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedemptyBin1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    emptyBin1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedemptyBin1 : virtual public AOMEvent {
    DECLARE_META_EVENT(emptyBin1)
};
//#]
#endif // _OMINSTRUMENT

//## event req_repair1()
class req_repair1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreq_repair1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    req_repair1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreq_repair1 : virtual public AOMEvent {
    DECLARE_META_EVENT(req_repair1)
};
//#]
#endif // _OMINSTRUMENT

//## event disp_repair1()
class disp_repair1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddisp_repair1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    disp_repair1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddisp_repair1 : virtual public AOMEvent {
    DECLARE_META_EVENT(disp_repair1)
};
//#]
#endif // _OMINSTRUMENT

//## event repaired1()
class repaired1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrepaired1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    repaired1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrepaired1 : virtual public AOMEvent {
    DECLARE_META_EVENT(repaired1)
};
//#]
#endif // _OMINSTRUMENT

//## event reqEmpty1()
class reqEmpty1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqEmpty1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqEmpty1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqEmpty1 : virtual public AOMEvent {
    DECLARE_META_EVENT(reqEmpty1)
};
//#]
#endif // _OMINSTRUMENT

//## event disp_repair2()
class disp_repair2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddisp_repair2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    disp_repair2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddisp_repair2 : virtual public AOMEvent {
    DECLARE_META_EVENT(disp_repair2)
};
//#]
#endif // _OMINSTRUMENT

//## event drive1()
class drive1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddrive1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    drive1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddrive1 : virtual public AOMEvent {
    DECLARE_META_EVENT(drive1)
};
//#]
#endif // _OMINSTRUMENT

//## event throwAway1()
class throwAway1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedthrowAway1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    throwAway1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedthrowAway1 : virtual public AOMEvent {
    DECLARE_META_EVENT(throwAway1)
};
//#]
#endif // _OMINSTRUMENT

//## event drive2()
class drive2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddrive2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    drive2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddrive2 : virtual public AOMEvent {
    DECLARE_META_EVENT(drive2)
};
//#]
#endif // _OMINSTRUMENT

//## event select1()
class select1 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedselect1;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    select1();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedselect1 : virtual public AOMEvent {
    DECLARE_META_EVENT(select1)
};
//#]
#endif // _OMINSTRUMENT

//## event select2()
class select2 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedselect2;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    select2();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedselect2 : virtual public AOMEvent {
    DECLARE_META_EVENT(select2)
};
//#]
#endif // _OMINSTRUMENT

//## event disp_repair0()
class disp_repair0 : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddisp_repair0;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    disp_repair0();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddisp_repair0 : virtual public AOMEvent {
    DECLARE_META_EVENT(disp_repair0)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
