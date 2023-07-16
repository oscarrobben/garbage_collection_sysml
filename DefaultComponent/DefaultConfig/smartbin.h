/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: smartbin
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\smartbin.h
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
//## link itsAlarm
class alarm;

//## auto_generated
class cms;

//## link itsLid
class lid;

//## link sensorBoard
class sensor;

//## auto_generated
class smart_garbage_collection_system;

//## link itsTruck
class truck;

//#[ ignore
#define OMAnim_Default_smartbin_setUpdateFq_int_ARGS_DECLARATION int p_updateFq;
//#]

//## link itsResident_Citizen_User
class Resident_Citizen_User;

//## package Default

//## class smartbin
class smartbin : public OMReactive, public bin {
public :

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
    
    lid* itsLid;		//## link itsLid
    
    sensor* sensorBoard;		//## link sensorBoard
    
    ////    Framework operations    ////

public :

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
    
    //## auto_generated
    int getRH() const;
    
    //## auto_generated
    void setRH(int p_RH);
    
    //## auto_generated
    int getRH1() const;
    
    //## auto_generated
    void setRH1(int p_RH1);
    
    //## auto_generated
    int getRHSelect() const;
    
    //## auto_generated
    void setRHSelect(int p_RHSelect);
    
    //## auto_generated
    int getRh2() const;
    
    //## auto_generated
    void setRh2(int p_Rh2);
    
    //## auto_generated
    bool getAnom() const;
    
    //## auto_generated
    void setAnom(bool p_anom);
    
    //## auto_generated
    bool getAnom1() const;
    
    //## auto_generated
    void setAnom1(bool p_anom1);
    
    //## auto_generated
    int getAvg() const;
    
    //## auto_generated
    void setAvg(int p_avg);
    
    //## auto_generated
    bool getEmptyReq() const;
    
    //## auto_generated
    void setEmptyReq(bool p_emptyReq);
    
    //## auto_generated
    int getFillLevel() const;
    
    //## auto_generated
    void setFillLevel(int p_fillLevel);
    
    //## auto_generated
    int getFillLevel1() const;
    
    //## auto_generated
    void setFillLevel1(int p_fillLevel1);
    
    //## auto_generated
    int getFillLevel2() const;
    
    //## auto_generated
    void setFillLevel2(int p_fillLevel2);
    
    //## auto_generated
    int getFillSelect() const;
    
    //## auto_generated
    void setFillSelect(int p_fillSelect);
    
    //## auto_generated
    int getFlowproperty_16() const;
    
    //## auto_generated
    void setFlowproperty_16(int p_flowproperty_16);
    
    //## auto_generated
    bool getFull() const;
    
    //## auto_generated
    void setFull(bool p_full);
    
    //## auto_generated
    bool getFull1() const;
    
    //## auto_generated
    void setFull1(bool p_full1);
    
    //## auto_generated
    bool getFull2() const;
    
    //## auto_generated
    void setFull2(bool p_full2);
    
    //## auto_generated
    int getMaxFill() const;
    
    //## auto_generated
    void setMaxFill(int p_maxFill);
    
    //## auto_generated
    int getNSamples() const;
    
    //## auto_generated
    void setNSamples(int p_nSamples);
    
    //## auto_generated
    bool getRepairReqSelect() const;
    
    //## auto_generated
    void setRepairReqSelect(bool p_repairReqSelect);
    
    //## auto_generated
    bool getRepairRequested() const;
    
    //## auto_generated
    void setRepairRequested(bool p_repairRequested);
    
    //## auto_generated
    bool getRepairRequested1() const;
    
    //## auto_generated
    void setRepairRequested1(bool p_repairRequested1);
    
    //## auto_generated
    bool getRepairRequested2() const;
    
    //## auto_generated
    void setRepairRequested2(bool p_repairRequested2);
    
    //## auto_generated
    int getSelected() const;
    
    //## auto_generated
    void setSelected(int p_selected);
    
    //## auto_generated
    bool getSelected1() const;
    
    //## auto_generated
    void setSelected1(bool p_selected1);
    
    //## auto_generated
    int getTemp() const;
    
    //## auto_generated
    void setTemp(int p_temp);
    
    //## auto_generated
    int getTemp1() const;
    
    //## auto_generated
    void setTemp1(int p_temp1);
    
    //## auto_generated
    int getTempSelect() const;
    
    //## auto_generated
    void setTempSelect(int p_tempSelect);
    
    //## auto_generated
    int getTotalFill() const;
    
    //## auto_generated
    void setTotalFill(int p_totalFill);
    
    //## auto_generated
    int getUpdateFq() const;
    
    //## auto_generated
    void setUpdateFq(int p_updateFq);
    
    //## auto_generated
    alarm* getItsAlarm() const;
    
    //## auto_generated
    void setItsAlarm(alarm* p_alarm);
    
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
    
    int RH;		//## attribute RH
    
    int RH1;		//## attribute RH1
    
    int RHSelect;		//## attribute RHSelect
    
    int Rh2;		//## attribute Rh2
    
    bool anom;		//## attribute anom
    
    bool anom1;		//## attribute anom1
    
    int avg;		//## attribute avg
    
    bool emptyReq;		//## attribute emptyReq
    
    int fillLevel;		//## attribute fillLevel
    
    int fillLevel1;		//## attribute fillLevel1
    
    int fillLevel2;		//## attribute fillLevel2
    
    int fillSelect;		//## attribute fillSelect
    
    int flowproperty_16;		//## attribute flowproperty_16
    
    bool full;		//## attribute full
    
    bool full1;		//## attribute full1
    
    bool full2;		//## attribute full2
    
    int maxFill;		//## attribute maxFill
    
    int nSamples;		//## attribute nSamples
    
    bool repairReqSelect;		//## attribute repairReqSelect
    
    bool repairRequested;		//## attribute repairRequested
    
    bool repairRequested1;		//## attribute repairRequested1
    
    bool repairRequested2;		//## attribute repairRequested2
    
    int selected;		//## attribute selected
    
    bool selected1;		//## attribute selected1
    
    int temp;		//## attribute temp
    
    int temp1;		//## attribute temp1
    
    int tempSelect;		//## attribute tempSelect
    
    int totalFill;		//## attribute totalFill
    
    int updateFq;		//## attribute updateFq
    
    alarm* itsAlarm;		//## link itsAlarm
    
    Resident_Citizen_User* itsResident_Citizen_User;		//## link itsResident_Citizen_User
    
    truck* itsTruck;		//## link itsTruck

public :

    //## auto_generated
    void __setItsAlarm(alarm* p_alarm);
    
    //## auto_generated
    void _setItsAlarm(alarm* p_alarm);
    
    //## auto_generated
    void _clearItsAlarm();
    
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
    void rootState_exit();
    
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
    
    // state_46:
    //## statechart_method
    inline bool state_46_IN() const;
    
    //## statechart_method
    void state_46_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_46_processEvent();
    
    // state_47:
    //## statechart_method
    inline bool state_47_IN() const;
    
    // accepttimeevent_55:
    //## statechart_method
    inline bool accepttimeevent_55_IN() const;
    
    // state_41:
    //## statechart_method
    inline bool state_41_IN() const;
    
    //## statechart_method
    void state_41_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_41_processEvent();
    
    // state_44:
    //## statechart_method
    inline bool state_44_IN() const;
    
    // state_43:
    //## statechart_method
    inline bool state_43_IN() const;
    
    // state_42:
    //## statechart_method
    inline bool state_42_IN() const;
    
    // state_30:
    //## statechart_method
    inline bool state_30_IN() const;
    
    //## statechart_method
    void state_30_entDef();
    
    //## statechart_method
    void state_30_exit();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_30_processEvent();
    
    // not_full1:
    //## statechart_method
    inline bool not_full1_IN() const;
    
    //## statechart_method
    void not_full1_entDef();
    
    //## statechart_method
    IOxfReactive::TakeEventStatus not_full1_handleEvent();
    
    // trash:
    //## statechart_method
    inline bool trash_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus trash_handleEvent();
    
    // not_used1:
    //## statechart_method
    inline bool not_used1_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus not_used1_handleEvent();
    
    // full_bin1:
    //## statechart_method
    inline bool full_bin1_IN() const;
    
    // empty_bint1:
    //## statechart_method
    inline bool empty_bint1_IN() const;
    
    // brokenBin1:
    //## statechart_method
    inline bool brokenBin1_IN() const;
    
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus wait_for_task_handleEvent();
    
    // repair_broken_bin1:
    //## statechart_method
    inline bool repair_broken_bin1_IN() const;
    
    // repair_broken_bin:
    //## statechart_method
    inline bool repair_broken_bin_IN() const;
    
    // empty_full_bin1:
    //## statechart_method
    inline bool empty_full_bin1_IN() const;
    
    // empty_full_bin:
    //## statechart_method
    inline bool empty_full_bin_IN() const;
    
    // accepttimeevent_50:
    //## statechart_method
    inline bool accepttimeevent_50_IN() const;
    
    // accepttimeevent_40:
    //## statechart_method
    inline bool accepttimeevent_40_IN() const;
    
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
    
    //## statechart_method
    IOxfReactive::TakeEventStatus wait_handleEvent();
    
    // wairt_for_repair1:
    //## statechart_method
    inline bool wairt_for_repair1_IN() const;
    
    // sched_repair1:
    //## statechart_method
    inline bool sched_repair1_IN() const;
    
    // sched_repair:
    //## statechart_method
    inline bool sched_repair_IN() const;
    
    // repair_req_both:
    //## statechart_method
    inline bool repair_req_both_IN() const;
    
    // repair_req_2:
    //## statechart_method
    inline bool repair_req_2_IN() const;
    
    // repair_req_1:
    //## statechart_method
    inline bool repair_req_1_IN() const;
    
    // dispatchTruck2:
    //## statechart_method
    inline bool dispatchTruck2_IN() const;
    
    // dispatchTruck1:
    //## statechart_method
    inline bool dispatchTruck1_IN() const;
    
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
    
    // trash1:
    //## statechart_method
    inline bool trash1_IN() const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus trash1_handleEvent();
    
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
        state_46 = 2,
        state_47 = 3,
        accepttimeevent_55 = 4,
        state_41 = 5,
        state_44 = 6,
        state_43 = 7,
        state_42 = 8,
        state_30 = 9,
        not_full1 = 10,
        trash = 11,
        not_used1 = 12,
        full_bin1 = 13,
        empty_bint1 = 14,
        brokenBin1 = 15,
        state_14 = 16,
        wait_for_task = 17,
        repair_broken_bin1 = 18,
        repair_broken_bin = 19,
        empty_full_bin1 = 20,
        empty_full_bin = 21,
        accepttimeevent_50 = 22,
        accepttimeevent_40 = 23,
        accepttimeevent_28 = 24,
        accepttimeevent_19 = 25,
        state_12 = 26,
        wait_for_repair = 27,
        wait_for_empty = 28,
        wait = 29,
        wairt_for_repair1 = 30,
        sched_repair1 = 31,
        sched_repair = 32,
        repair_req_both = 33,
        repair_req_2 = 34,
        repair_req_1 = 35,
        dispatchTruck2 = 36,
        dispatchTruck1 = 37,
        dispatchTruck = 38,
        state_11 = 39,
        not_full = 40,
        trash1 = 41,
        not_used = 42,
        full_bin = 43,
        empty_bin = 44,
        broken_bin = 45
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int state_46_subState;
    
    int state_46_active;
    
    IOxfTimeout* state_46_timeout;
    
    int state_41_subState;
    
    int state_41_active;
    
    int state_30_subState;
    
    int state_30_active;
    
    int not_full1_subState;
    
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
DECLARE_OPERATION_CLASS(Default_smartbin_setUpdateFq_int)

//#[ ignore
class OMAnimatedsmartbin : public OMAnimatedbin {
    DECLARE_REACTIVE_META(smartbin, OMAnimatedsmartbin)
    
    DECLARE_META_OP(Default_smartbin_setUpdateFq_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_46_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_47_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_55_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_41_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_44_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_43_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_42_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_30_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void not_full1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void trash_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void not_used1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void full_bin1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void empty_bint1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void brokenBin1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_14_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void wait_for_task_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void repair_broken_bin1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void repair_broken_bin_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void empty_full_bin1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void empty_full_bin_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_50_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_40_serializeStates(AOMSState* aomsState) const;
    
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
    void wairt_for_repair1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sched_repair1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void sched_repair_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void repair_req_both_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void repair_req_2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void repair_req_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void dispatchTruck2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void dispatchTruck1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void dispatchTruck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_11_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void not_full_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void trash1_serializeStates(AOMSState* aomsState) const;
    
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

inline bool smartbin::state_46_IN() const {
    return state_9_IN();
}

inline bool smartbin::state_47_IN() const {
    return state_46_subState == state_47;
}

inline bool smartbin::accepttimeevent_55_IN() const {
    return state_46_subState == accepttimeevent_55;
}

inline bool smartbin::state_41_IN() const {
    return state_9_IN();
}

inline bool smartbin::state_44_IN() const {
    return state_41_subState == state_44;
}

inline bool smartbin::state_43_IN() const {
    return state_41_subState == state_43;
}

inline bool smartbin::state_42_IN() const {
    return state_41_subState == state_42;
}

inline bool smartbin::state_30_IN() const {
    return state_9_IN();
}

inline bool smartbin::not_full1_IN() const {
    return state_30_subState == not_full1;
}

inline bool smartbin::trash_IN() const {
    return not_full1_subState == trash;
}

inline bool smartbin::not_used1_IN() const {
    return not_full1_subState == not_used1;
}

inline bool smartbin::full_bin1_IN() const {
    return state_30_subState == full_bin1;
}

inline bool smartbin::empty_bint1_IN() const {
    return state_30_subState == empty_bint1;
}

inline bool smartbin::brokenBin1_IN() const {
    return state_30_subState == brokenBin1;
}

inline bool smartbin::state_14_IN() const {
    return state_9_IN();
}

inline bool smartbin::wait_for_task_IN() const {
    return state_14_subState == wait_for_task;
}

inline bool smartbin::repair_broken_bin1_IN() const {
    return state_14_subState == repair_broken_bin1;
}

inline bool smartbin::repair_broken_bin_IN() const {
    return state_14_subState == repair_broken_bin;
}

inline bool smartbin::empty_full_bin1_IN() const {
    return state_14_subState == empty_full_bin1;
}

inline bool smartbin::empty_full_bin_IN() const {
    return state_14_subState == empty_full_bin;
}

inline bool smartbin::accepttimeevent_50_IN() const {
    return state_14_subState == accepttimeevent_50;
}

inline bool smartbin::accepttimeevent_40_IN() const {
    return state_14_subState == accepttimeevent_40;
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

inline bool smartbin::wairt_for_repair1_IN() const {
    return state_12_subState == wairt_for_repair1;
}

inline bool smartbin::sched_repair1_IN() const {
    return state_12_subState == sched_repair1;
}

inline bool smartbin::sched_repair_IN() const {
    return state_12_subState == sched_repair;
}

inline bool smartbin::repair_req_both_IN() const {
    return state_12_subState == repair_req_both;
}

inline bool smartbin::repair_req_2_IN() const {
    return state_12_subState == repair_req_2;
}

inline bool smartbin::repair_req_1_IN() const {
    return state_12_subState == repair_req_1;
}

inline bool smartbin::dispatchTruck2_IN() const {
    return state_12_subState == dispatchTruck2;
}

inline bool smartbin::dispatchTruck1_IN() const {
    return state_12_subState == dispatchTruck1;
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

inline bool smartbin::trash1_IN() const {
    return not_full_subState == trash1;
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
	File Path	: DefaultComponent\DefaultConfig\smartbin.h
*********************************************************************/
