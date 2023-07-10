/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: smartbin
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\smartbin.h
*********************************************************************/

#ifndef smartbin_H
#define smartbin_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## class smartbin
#include "bin.h"
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class p_smartbin_C
#include "bool_emptyReq_ProxyFlowPropertyInterface.h"
//## auto_generated
class cms;

//## link itsElectricity
class electricity;

//## link itsLid
class lid;

//## link sensorBoard
class sensor;

//## auto_generated
class smart_garbage_collection_system;

//## link itsTruck
class truck;

//## link itsResident_Citizen_User
class Resident_Citizen_User;

//## package Default

//## class smartbin
class smartbin : public OMReactive, public bin {
public :

//#[ ignore
    //## package Default
    class p_smartbin_C : public bool_emptyReq_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_smartbin_C();
        
        //## auto_generated
        virtual ~p_smartbin_C();
        
        ////    Operations    ////
        
        //## auto_generated
        bool_emptyReq_ProxyFlowPropertyInterface* getItsBool_emptyReq_ProxyFlowPropertyInterface();
        
        //## auto_generated
        bool_emptyReq_ProxyFlowPropertyInterface* getOutBound();
        
        //## auto_generated
        virtual void setEmptyReq(bool p_emptyReq);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_emptyReq_ProxyFlowPropertyInterface(bool_emptyReq_ProxyFlowPropertyInterface* p_bool_emptyReq_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_emptyReq_ProxyFlowPropertyInterface* itsBool_emptyReq_ProxyFlowPropertyInterface;		//## link itsBool_emptyReq_ProxyFlowPropertyInterface
    };
//#]

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsmartbin;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    smartbin(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~smartbin();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getValueproperty_2() const;
    
    //## auto_generated
    void setValueproperty_2(int p_valueproperty_2);
    
    //## auto_generated
    electricity* getItsElectricity() const;
    
    //## auto_generated
    void setItsElectricity(electricity* p_electricity);
    
    //## auto_generated
    lid* getItsLid() const;
    
    //## auto_generated
    void setItsLid(lid* p_lid);
    
    //## auto_generated
    Resident_Citizen_User* getItsResident_Citizen_User() const;
    
    //## auto_generated
    void setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    sensor* getSensorBoard() const;
    
    //## auto_generated
    void setSensorBoard(sensor* p_sensor);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int valueproperty_2;		//## attribute valueproperty_2
    
    ////    Relations and components    ////
    
    electricity* itsElectricity;		//## link itsElectricity
    
    lid* itsLid;		//## link itsLid
    
    sensor* sensorBoard;		//## link sensorBoard
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsElectricity(electricity* p_electricity);
    
    //## auto_generated
    void _setItsElectricity(electricity* p_electricity);
    
    //## auto_generated
    void _clearItsElectricity();
    
    //## auto_generated
    void __setItsLid(lid* p_lid);
    
    //## auto_generated
    void _setItsLid(lid* p_lid);
    
    //## auto_generated
    void _clearItsLid();
    
    //## auto_generated
    void __setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void _setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void _clearItsResident_Citizen_User();
    
//#[ ignore
    void setEmptyReq(bool p_emptyReq);
//#]

    //## auto_generated
    p_smartbin_C* getP_smartbin() const;
    
    //## auto_generated
    p_smartbin_C* get_p_smartbin() const;
    
    //## auto_generated
    int getAvg() const;
    
    //## auto_generated
    void setAvg(int p_avg);
    
    //## auto_generated
    bool getEmptyReq() const;
    
    //## auto_generated
    int getFillLevel() const;
    
    //## auto_generated
    void setFillLevel(int p_fillLevel);
    
    //## auto_generated
    int getFlowproperty_16() const;
    
    //## auto_generated
    void setFlowproperty_16(int p_flowproperty_16);
    
    //## auto_generated
    bool getFull() const;
    
    //## auto_generated
    void setFull(bool p_full);
    
    //## auto_generated
    int getMaxFill() const;
    
    //## auto_generated
    void setMaxFill(int p_maxFill);
    
    //## auto_generated
    int getNSamples() const;
    
    //## auto_generated
    void setNSamples(int p_nSamples);
    
    //## auto_generated
    bool getRepairRequested() const;
    
    //## auto_generated
    void setRepairRequested(bool p_repairRequested);
    
    //## auto_generated
    int getTotalFill() const;
    
    //## auto_generated
    void setTotalFill(int p_totalFill);
    
    //## auto_generated
    truck* getItsTruck() const;
    
    //## auto_generated
    void setItsTruck(truck* p_truck);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    int avg;		//## attribute avg
    
    bool emptyReq;		//## attribute emptyReq
    
    int fillLevel;		//## attribute fillLevel
    
    int flowproperty_16;		//## attribute flowproperty_16
    
    bool full;		//## attribute full
    
    int maxFill;		//## attribute maxFill
    
    int nSamples;		//## attribute nSamples
    
    bool repairRequested;		//## attribute repairRequested
    
    int totalFill;		//## attribute totalFill
    
//#[ ignore
    p_smartbin_C p_smartbin;
//#]

    Resident_Citizen_User* itsResident_Citizen_User;		//## link itsResident_Citizen_User
    
    truck* itsTruck;		//## link itsTruck

public :

    //## auto_generated
    void __setItsTruck(truck* p_truck);
    
    //## auto_generated
    void _setItsTruck(truck* p_truck);
    
    //## auto_generated
    void _clearItsTruck();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    void rootStateEntDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_9:
    //## statechart_method
    inline bool state_9_IN() const;
    
    //## statechart_method
    void state_9_entDef();
    
    //## statechart_method
    void state_9_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent();
    
    // state_14:
    //## statechart_method
    inline bool state_14_IN() const;
    
    //## statechart_method
    void state_14_entDef();
    
    //## statechart_method
    void state_14_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_14_processEvent();
    
    // wait_for_task:
    //## statechart_method
    inline bool wait_for_task_IN() const;
    
    // repair_broken_bin:
    //## statechart_method
    inline bool repair_broken_bin_IN() const;
    
    // empty_full_bin:
    //## statechart_method
    inline bool empty_full_bin_IN() const;
    
    // accepttimeevent_28:
    //## statechart_method
    inline bool accepttimeevent_28_IN() const;
    
    // accepttimeevent_19:
    //## statechart_method
    inline bool accepttimeevent_19_IN() const;
    
    // state_12:
    //## statechart_method
    inline bool state_12_IN() const;
    
    //## statechart_method
    void state_12_entDef();
    
    //## statechart_method
    void state_12_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_12_processEvent();
    
    // wait_for_repair:
    //## statechart_method
    inline bool wait_for_repair_IN() const;
    
    // wait_for_empty:
    //## statechart_method
    inline bool wait_for_empty_IN() const;
    
    // wait:
    //## statechart_method
    inline bool wait_IN() const;
    
    // state_29:
    //## statechart_method
    inline bool state_29_IN() const;
    
    // sched_repair:
    //## statechart_method
    inline bool sched_repair_IN() const;
    
    // dispatchTruck:
    //## statechart_method
    inline bool dispatchTruck_IN() const;
    
    // state_11:
    //## statechart_method
    inline bool state_11_IN() const;
    
    //## statechart_method
    void state_11_entDef();
    
    //## statechart_method
    void state_11_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_11_processEvent();
    
    // not_full:
    //## statechart_method
    inline bool not_full_IN() const;
    
    //## statechart_method
    void not_full_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus not_full_handleEvent();
    
    // state_5:
    //## statechart_method
    inline bool state_5_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_5_handleEvent();
    
    // not_used:
    //## statechart_method
    inline bool not_used_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus not_used_handleEvent();
    
    // full_bin:
    //## statechart_method
    inline bool full_bin_IN() const;
    
    // empty_bin:
    //## statechart_method
    inline bool empty_bin_IN() const;
    
    // broken_bin:
    //## statechart_method
    inline bool broken_bin_IN() const;

protected :

//#[ ignore
    enum smartbin_Enum {
        OMNonState = 0,
        state_9 = 1,
        state_14 = 2,
        wait_for_task = 3,
        repair_broken_bin = 4,
        empty_full_bin = 5,
        accepttimeevent_28 = 6,
        accepttimeevent_19 = 7,
        state_12 = 8,
        wait_for_repair = 9,
        wait_for_empty = 10,
        wait = 11,
        state_29 = 12,
        sched_repair = 13,
        dispatchTruck = 14,
        state_11 = 15,
        not_full = 16,
        state_5 = 17,
        not_used = 18,
        full_bin = 19,
        empty_bin = 20,
        broken_bin = 21
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_14_subState;
    
    int state_14_active;
    
    IOxfTimeout* state_14_timeout;
    
    int state_12_subState;
    
    int state_12_active;
    
    int state_11_subState;
    
    int state_11_active;
    
    int not_full_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsmartbin : public OMAnimatedbin {
    DECLARE_REACTIVE_META(smartbin, OMAnimatedsmartbin)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void wait_for_task_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void repair_broken_bin_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void empty_full_bin_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_28_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_19_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_12_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void wait_for_repair_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void wait_for_empty_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void wait_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_29_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sched_repair_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void dispatchTruck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void not_full_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void not_used_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void full_bin_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void empty_bin_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void broken_bin_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool smartbin::rootState_IN() const {
    return true;
}

inline bool smartbin::state_9_IN() const {
    return rootState_subState == state_9;
}

inline bool smartbin::state_14_IN() const {
    return state_9_IN();
}

inline bool smartbin::wait_for_task_IN() const {
    return state_14_subState == wait_for_task;
}

inline bool smartbin::repair_broken_bin_IN() const {
    return state_14_subState == repair_broken_bin;
}

inline bool smartbin::empty_full_bin_IN() const {
    return state_14_subState == empty_full_bin;
}

inline bool smartbin::accepttimeevent_28_IN() const {
    return state_14_subState == accepttimeevent_28;
}

inline bool smartbin::accepttimeevent_19_IN() const {
    return state_14_subState == accepttimeevent_19;
}

inline bool smartbin::state_12_IN() const {
    return state_9_IN();
}

inline bool smartbin::wait_for_repair_IN() const {
    return state_12_subState == wait_for_repair;
}

inline bool smartbin::wait_for_empty_IN() const {
    return state_12_subState == wait_for_empty;
}

inline bool smartbin::wait_IN() const {
    return state_12_subState == wait;
}

inline bool smartbin::state_29_IN() const {
    return state_12_subState == state_29;
}

inline bool smartbin::sched_repair_IN() const {
    return state_12_subState == sched_repair;
}

inline bool smartbin::dispatchTruck_IN() const {
    return state_12_subState == dispatchTruck;
}

inline bool smartbin::state_11_IN() const {
    return state_9_IN();
}

inline bool smartbin::not_full_IN() const {
    return state_11_subState == not_full;
}

inline bool smartbin::state_5_IN() const {
    return not_full_subState == state_5;
}

inline bool smartbin::not_used_IN() const {
    return not_full_subState == not_used;
}

inline bool smartbin::full_bin_IN() const {
    return state_11_subState == full_bin;
}

inline bool smartbin::empty_bin_IN() const {
    return state_11_subState == empty_bin;
}

inline bool smartbin::broken_bin_IN() const {
    return state_11_subState == broken_bin;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\smartbin.h
*********************************************************************/
