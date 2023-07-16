/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: smartbin
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\smartbin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "smartbin.h"
//## auto_generated
#include "cms.h"
//## link itsLid
#include "lid.h"
//## link sensorBoard
#include "sensor.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//## event addTrash()
#include "addTrashPkg.h"
//## link itsAlarm
#include "alarm.h"
//## link itsResident_Citizen_User
#include "Resident_Citizen_User.h"
//## link itsTruck
#include "truck.h"
//#[ ignore
#define Default_smartbin_smartbin_SERIALIZE OM_NO_OP

#define OMAnim_Default_smartbin_setUpdateFq_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_updateFq)

#define OMAnim_Default_smartbin_setUpdateFq_int_SERIALIZE_RET_VAL
//#]

//## package Default

//## class smartbin
smartbin::smartbin(IOxfActive* theActiveContext) : RH(80), RH1(50), Rh2(0), anom(false), anom1(false), avg(0), emptyReq(false), fillLevel(0), fillLevel1(0), fillLevel2(0), full(false), full1(false), full2(false), maxFill(0), nSamples(0), repairReqSelect(false), repairRequested(false), repairRequested1(false), repairRequested2(false), selected(true), selected1(false), temp(20), temp1(30), totalFill(0), updateFq(5000) {
    NOTIFY_REACTIVE_CONSTRUCTOR(smartbin, smartbin(), 0, Default_smartbin_smartbin_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsAlarm = NULL;
    itsLid = NULL;
    itsResident_Citizen_User = NULL;
    itsTruck = NULL;
    sensorBoard = NULL;
    initStatechart();
}

smartbin::~smartbin() {
    NOTIFY_DESTRUCTOR(~smartbin, false);
    cleanUpRelations();
    cancelTimeouts();
}

int smartbin::getValueproperty_2() const {
    return valueproperty_2;
}

void smartbin::setValueproperty_2(int p_valueproperty_2) {
    valueproperty_2 = p_valueproperty_2;
}

lid* smartbin::getItsLid() const {
    return itsLid;
}

void smartbin::setItsLid(lid* p_lid) {
    if(p_lid != NULL)
        {
            p_lid->_setItsSmartbin(this);
        }
    _setItsLid(p_lid);
}

Resident_Citizen_User* smartbin::getItsResident_Citizen_User() const {
    return itsResident_Citizen_User;
}

void smartbin::setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(p_Resident_Citizen_User != NULL)
        {
            p_Resident_Citizen_User->_setItsSmartbin(this);
        }
    _setItsResident_Citizen_User(p_Resident_Citizen_User);
}

sensor* smartbin::getSensorBoard() const {
    return sensorBoard;
}

void smartbin::setSensorBoard(sensor* p_sensor) {
    sensorBoard = p_sensor;
    if(p_sensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("sensorBoard", p_sensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("sensorBoard");
        }
}

void smartbin::cleanUpRelations() {
    if(itsAlarm != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAlarm");
            smartbin* p_smartbin = itsAlarm->getItsSmartbin();
            if(p_smartbin != NULL)
                {
                    itsAlarm->__setItsSmartbin(NULL);
                }
            itsAlarm = NULL;
        }
    if(itsLid != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLid");
            smartbin* p_smartbin = itsLid->getItsSmartbin();
            if(p_smartbin != NULL)
                {
                    itsLid->__setItsSmartbin(NULL);
                }
            itsLid = NULL;
        }
    if(itsResident_Citizen_User != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResident_Citizen_User");
            smartbin* p_smartbin = itsResident_Citizen_User->getItsSmartbin();
            if(p_smartbin != NULL)
                {
                    itsResident_Citizen_User->__setItsSmartbin(NULL);
                }
            itsResident_Citizen_User = NULL;
        }
    if(itsTruck != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
            smartbin* p_smartbin = itsTruck->getItsSmartbin();
            if(p_smartbin != NULL)
                {
                    itsTruck->__setItsSmartbin(NULL);
                }
            itsTruck = NULL;
        }
    if(sensorBoard != NULL)
        {
            NOTIFY_RELATION_CLEARED("sensorBoard");
            sensorBoard = NULL;
        }
}

void smartbin::__setItsLid(lid* p_lid) {
    itsLid = p_lid;
    if(p_lid != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLid", p_lid, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLid");
        }
}

void smartbin::_setItsLid(lid* p_lid) {
    if(itsLid != NULL)
        {
            itsLid->__setItsSmartbin(NULL);
        }
    __setItsLid(p_lid);
}

void smartbin::_clearItsLid() {
    NOTIFY_RELATION_CLEARED("itsLid");
    itsLid = NULL;
}

void smartbin::__setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    itsResident_Citizen_User = p_Resident_Citizen_User;
    if(p_Resident_Citizen_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResident_Citizen_User", p_Resident_Citizen_User, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResident_Citizen_User");
        }
}

void smartbin::_setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(itsResident_Citizen_User != NULL)
        {
            itsResident_Citizen_User->__setItsSmartbin(NULL);
        }
    __setItsResident_Citizen_User(p_Resident_Citizen_User);
}

void smartbin::_clearItsResident_Citizen_User() {
    NOTIFY_RELATION_CLEARED("itsResident_Citizen_User");
    itsResident_Citizen_User = NULL;
}

int smartbin::getRH() const {
    return RH;
}

void smartbin::setRH(int p_RH) {
    RH = p_RH;
}

int smartbin::getRH1() const {
    return RH1;
}

void smartbin::setRH1(int p_RH1) {
    RH1 = p_RH1;
}

int smartbin::getRHSelect() const {
    return RHSelect;
}

void smartbin::setRHSelect(int p_RHSelect) {
    RHSelect = p_RHSelect;
    NOTIFY_SET_OPERATION;
}

int smartbin::getRh2() const {
    return Rh2;
}

void smartbin::setRh2(int p_Rh2) {
    Rh2 = p_Rh2;
}

bool smartbin::getAnom() const {
    return anom;
}

void smartbin::setAnom(bool p_anom) {
    anom = p_anom;
    NOTIFY_SET_OPERATION;
}

bool smartbin::getAnom1() const {
    return anom1;
}

void smartbin::setAnom1(bool p_anom1) {
    anom1 = p_anom1;
    NOTIFY_SET_OPERATION;
}

int smartbin::getAvg() const {
    return avg;
}

void smartbin::setAvg(int p_avg) {
    avg = p_avg;
    NOTIFY_SET_OPERATION;
}

bool smartbin::getEmptyReq() const {
    return emptyReq;
}

void smartbin::setEmptyReq(bool p_emptyReq) {
    emptyReq = p_emptyReq;
}

int smartbin::getFillLevel() const {
    return fillLevel;
}

void smartbin::setFillLevel(int p_fillLevel) {
    fillLevel = p_fillLevel;
    NOTIFY_SET_OPERATION;
}

int smartbin::getFillLevel1() const {
    return fillLevel1;
}

void smartbin::setFillLevel1(int p_fillLevel1) {
    fillLevel1 = p_fillLevel1;
    NOTIFY_SET_OPERATION;
}

int smartbin::getFillLevel2() const {
    return fillLevel2;
}

void smartbin::setFillLevel2(int p_fillLevel2) {
    fillLevel2 = p_fillLevel2;
}

int smartbin::getFillSelect() const {
    return fillSelect;
}

void smartbin::setFillSelect(int p_fillSelect) {
    fillSelect = p_fillSelect;
    NOTIFY_SET_OPERATION;
}

int smartbin::getFlowproperty_16() const {
    return flowproperty_16;
}

void smartbin::setFlowproperty_16(int p_flowproperty_16) {
    flowproperty_16 = p_flowproperty_16;
}

bool smartbin::getFull() const {
    return full;
}

void smartbin::setFull(bool p_full) {
    full = p_full;
    NOTIFY_SET_OPERATION;
}

bool smartbin::getFull1() const {
    return full1;
}

void smartbin::setFull1(bool p_full1) {
    full1 = p_full1;
    NOTIFY_SET_OPERATION;
}

bool smartbin::getFull2() const {
    return full2;
}

void smartbin::setFull2(bool p_full2) {
    full2 = p_full2;
}

int smartbin::getMaxFill() const {
    return maxFill;
}

void smartbin::setMaxFill(int p_maxFill) {
    maxFill = p_maxFill;
    NOTIFY_SET_OPERATION;
}

int smartbin::getNSamples() const {
    return nSamples;
}

void smartbin::setNSamples(int p_nSamples) {
    nSamples = p_nSamples;
}

bool smartbin::getRepairReqSelect() const {
    return repairReqSelect;
}

void smartbin::setRepairReqSelect(bool p_repairReqSelect) {
    repairReqSelect = p_repairReqSelect;
    NOTIFY_SET_OPERATION;
}

bool smartbin::getRepairRequested() const {
    return repairRequested;
}

void smartbin::setRepairRequested(bool p_repairRequested) {
    repairRequested = p_repairRequested;
    NOTIFY_SET_OPERATION;
}

bool smartbin::getRepairRequested1() const {
    return repairRequested1;
}

void smartbin::setRepairRequested1(bool p_repairRequested1) {
    repairRequested1 = p_repairRequested1;
    NOTIFY_SET_OPERATION;
}

bool smartbin::getRepairRequested2() const {
    return repairRequested2;
}

void smartbin::setRepairRequested2(bool p_repairRequested2) {
    repairRequested2 = p_repairRequested2;
}

int smartbin::getSelected() const {
    return selected;
}

void smartbin::setSelected(int p_selected) {
    selected = p_selected;
    NOTIFY_SET_OPERATION;
}

bool smartbin::getSelected1() const {
    return selected1;
}

void smartbin::setSelected1(bool p_selected1) {
    selected1 = p_selected1;
    NOTIFY_SET_OPERATION;
}

int smartbin::getTemp() const {
    return temp;
}

void smartbin::setTemp(int p_temp) {
    temp = p_temp;
}

int smartbin::getTemp1() const {
    return temp1;
}

void smartbin::setTemp1(int p_temp1) {
    temp1 = p_temp1;
}

int smartbin::getTempSelect() const {
    return tempSelect;
}

void smartbin::setTempSelect(int p_tempSelect) {
    tempSelect = p_tempSelect;
    NOTIFY_SET_OPERATION;
}

int smartbin::getTotalFill() const {
    return totalFill;
}

void smartbin::setTotalFill(int p_totalFill) {
    totalFill = p_totalFill;
}

int smartbin::getUpdateFq() const {
    return updateFq;
}

void smartbin::setUpdateFq(int p_updateFq) {
    updateFq = p_updateFq;
    NOTIFY_SET_OPERATION;
}

alarm* smartbin::getItsAlarm() const {
    return itsAlarm;
}

void smartbin::setItsAlarm(alarm* p_alarm) {
    if(p_alarm != NULL)
        {
            p_alarm->_setItsSmartbin(this);
        }
    _setItsAlarm(p_alarm);
}

truck* smartbin::getItsTruck() const {
    return itsTruck;
}

void smartbin::setItsTruck(truck* p_truck) {
    if(p_truck != NULL)
        {
            p_truck->_setItsSmartbin(this);
        }
    _setItsTruck(p_truck);
}

bool smartbin::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void smartbin::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    state_46_subState = OMNonState;
    state_46_active = OMNonState;
    state_46_timeout = NULL;
    state_41_subState = OMNonState;
    state_41_active = OMNonState;
    state_30_subState = OMNonState;
    state_30_active = OMNonState;
    not_full1_subState = OMNonState;
    state_14_subState = OMNonState;
    state_14_active = OMNonState;
    state_14_timeout = NULL;
    state_12_subState = OMNonState;
    state_12_active = OMNonState;
    state_11_subState = OMNonState;
    state_11_active = OMNonState;
    not_full_subState = OMNonState;
}

void smartbin::cancelTimeouts() {
    cancel(state_46_timeout);
    cancel(state_14_timeout);
}

bool smartbin::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_46_timeout == arg)
        {
            state_46_timeout = NULL;
            res = true;
        }
    if(state_14_timeout == arg)
        {
            state_14_timeout = NULL;
            res = true;
        }
    return res;
}

void smartbin::__setItsAlarm(alarm* p_alarm) {
    itsAlarm = p_alarm;
    if(p_alarm != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAlarm", p_alarm, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAlarm");
        }
}

void smartbin::_setItsAlarm(alarm* p_alarm) {
    if(itsAlarm != NULL)
        {
            itsAlarm->__setItsSmartbin(NULL);
        }
    __setItsAlarm(p_alarm);
}

void smartbin::_clearItsAlarm() {
    NOTIFY_RELATION_CLEARED("itsAlarm");
    itsAlarm = NULL;
}

void smartbin::__setItsTruck(truck* p_truck) {
    itsTruck = p_truck;
    if(p_truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_truck, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
}

void smartbin::_setItsTruck(truck* p_truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsSmartbin(NULL);
        }
    __setItsTruck(p_truck);
}

void smartbin::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck = NULL;
}

void smartbin::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        rootStateEntDef();
    }
}

void smartbin::rootStateEntDef() {
    NOTIFY_TRANSITION_STARTED("4");
    state_9_entDef();
    NOTIFY_TRANSITION_TERMINATED("4");
}

void smartbin::rootState_exit() {
    // State state_9
    if(rootState_subState == state_9)
        {
            state_9_exit();
        }
    rootState_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT");
}

IOxfReactive::TakeEventStatus smartbin::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_9
    if(rootState_active == state_9)
        {
            res = state_9_processEvent();
        }
    return res;
}

void smartbin::state_9_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9");
    rootState_subState = state_9;
    rootState_active = state_9;
    state_11_entDef();
    state_12_entDef();
    state_14_entDef();
    state_30_entDef();
    state_41_entDef();
    state_46_entDef();
}

void smartbin::state_9_exit() {
    state_11_exit();
    state_12_exit();
    state_14_exit();
    state_30_exit();
    switch (state_41_subState) {
        // State state_42
        case state_42:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_41.state_42");
        }
        break;
        // State state_43
        case state_43:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_41.state_43");
        }
        break;
        // State state_44
        case state_44:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_41.state_44");
        }
        break;
        default:
            break;
    }
    state_41_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_9.state_41");
    switch (state_46_subState) {
        // State state_47
        case state_47:
        {
            cancel(state_46_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_9.state_46.state_47");
        }
        break;
        case accepttimeevent_55:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_46.accepttimeevent_55");
        }
        break;
        default:
            break;
    }
    state_46_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_9.state_46");
    
    NOTIFY_STATE_EXITED("ROOT.state_9");
}

IOxfReactive::TakeEventStatus smartbin::state_9_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_11
    if(state_11_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    // State state_12
    if(state_12_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    // State state_14
    if(state_14_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    // State state_30
    if(state_30_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    // State state_41
    if(state_41_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    // State state_46
    if(state_46_processEvent() != eventNotConsumed)
        {
            res = eventConsumed;
            if(!IS_IN(state_9))
                {
                    return res;
                }
        }
    
    return res;
}

void smartbin::state_46_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_46");
    NOTIFY_TRANSITION_STARTED("28");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_46.state_47");
    state_46_subState = state_47;
    state_46_active = state_47;
    //#[ state state_9.state_46.state_47.(Entry) 
    if(selected){fillSelect = fillLevel;tempSelect = temp;RHSelect = RH;repairReqSelect = repairRequested;}else{fillSelect = fillLevel1;tempSelect = temp1;RHSelect = RH1;repairReqSelect = repairRequested1;}
    
    
    
    
    
    
    
    //#]
    state_46_timeout = scheduleTimeout(updateFq, "ROOT.state_9.state_46.state_47");
    NOTIFY_TRANSITION_TERMINATED("28");
}

IOxfReactive::TakeEventStatus smartbin::state_46_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_46_active) {
        // State state_47
        case state_47:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_46_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("57");
                            cancel(state_46_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_46.state_47");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_46.accepttimeevent_55");
                            pushNullTransition();
                            state_46_subState = accepttimeevent_55;
                            state_46_active = accepttimeevent_55;
                            NOTIFY_TRANSITION_TERMINATED("57");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_55:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("58");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_46.accepttimeevent_55");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_46.state_47");
                    state_46_subState = state_47;
                    state_46_active = state_47;
                    //#[ state state_9.state_46.state_47.(Entry) 
                    if(selected){fillSelect = fillLevel;tempSelect = temp;RHSelect = RH;repairReqSelect = repairRequested;}else{fillSelect = fillLevel1;tempSelect = temp1;RHSelect = RH1;repairReqSelect = repairRequested1;}
                    
                    
                    
                    
                    
                    
                    
                    //#]
                    state_46_timeout = scheduleTimeout(updateFq, "ROOT.state_9.state_46.state_47");
                    NOTIFY_TRANSITION_TERMINATED("58");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void smartbin::state_41_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_41");
    NOTIFY_TRANSITION_STARTED("25");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_41.state_42");
    state_41_subState = state_42;
    state_41_active = state_42;
    NOTIFY_TRANSITION_TERMINATED("25");
}

IOxfReactive::TakeEventStatus smartbin::state_41_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_41_active) {
        // State state_42
        case state_42:
        {
            if(IS_EVENT_TYPE_OF(select1_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_41.state_42");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_41.state_43");
                    pushNullTransition();
                    state_41_subState = state_43;
                    state_41_active = state_43;
                    //#[ state state_9.state_41.state_43.(Entry) 
                    fillSelect = fillLevel;
                    tempSelect = temp;
                    RHSelect = RH;
                    selected = true;
                    selected1 = false;
                    repairReqSelect = repairRequested;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(select2_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("27");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_41.state_42");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_41.state_44");
                    pushNullTransition();
                    state_41_subState = state_44;
                    state_41_active = state_44;
                    //#[ state state_9.state_41.state_44.(Entry) 
                    fillSelect = fillLevel1;
                    tempSelect = temp1;
                    RHSelect = RH1;
                    selected = false;
                    selected1 = true;
                    repairReqSelect = repairRequested1;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("27");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State state_43
        case state_43:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("41");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_41.state_43");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_41.state_42");
                    state_41_subState = state_42;
                    state_41_active = state_42;
                    NOTIFY_TRANSITION_TERMINATED("41");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State state_44
        case state_44:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("42");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_41.state_44");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_41.state_42");
                    state_41_subState = state_42;
                    state_41_active = state_42;
                    NOTIFY_TRANSITION_TERMINATED("42");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void smartbin::state_30_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_30");
    NOTIFY_TRANSITION_STARTED("21");
    not_full1_entDef();
    NOTIFY_TRANSITION_TERMINATED("21");
}

void smartbin::state_30_exit() {
    switch (state_30_subState) {
        // State not_full1
        case not_full1:
        {
            popNullTransition();
            switch (not_full1_subState) {
                // State not_used1
                case not_used1:
                {
                    //#[ state state_9.state_30.not_full1.not_used1.(Exit) 
                    if(rand() % 50 == 1){GEN(broken1);}
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.not_used1");
                }
                break;
                // State trash
                case trash:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.trash");
                }
                break;
                default:
                    break;
            }
            not_full1_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1");
        }
        break;
        // State brokenBin1
        case brokenBin1:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.brokenBin1");
        }
        break;
        // State full_bin1
        case full_bin1:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.full_bin1");
        }
        break;
        // State empty_bint1
        case empty_bint1:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.empty_bint1");
        }
        break;
        default:
            break;
    }
    state_30_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_9.state_30");
}

IOxfReactive::TakeEventStatus smartbin::state_30_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_30_active) {
        // State not_used1
        case not_used1:
        {
            res = not_used1_handleEvent();
        }
        break;
        // State trash
        case trash:
        {
            res = trash_handleEvent();
        }
        break;
        // State brokenBin1
        case brokenBin1:
        {
            if(IS_EVENT_TYPE_OF(repaired1_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.brokenBin1");
                    not_full1_entDef();
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State full_bin1
        case full_bin1:
        {
            if(IS_EVENT_TYPE_OF(emptyBin1_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.full_bin1");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_30.empty_bint1");
                    pushNullTransition();
                    state_30_subState = empty_bint1;
                    state_30_active = empty_bint1;
                    //#[ state state_9.state_30.empty_bint1.(Entry) 
                    fillLevel1 = 0;
                    full1 = false;
                    maxFill = fillLevel;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State empty_bint1
        case empty_bint1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("32");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.empty_bint1");
                    not_full1_entDef();
                    NOTIFY_TRANSITION_TERMINATED("32");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void smartbin::not_full1_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_30.not_full1");
    pushNullTransition();
    state_30_subState = not_full1;
    NOTIFY_TRANSITION_STARTED("15");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_30.not_full1.not_used1");
    not_full1_subState = not_used1;
    state_30_active = not_used1;
    //#[ state state_9.state_30.not_full1.not_used1.(Entry) 
    if(fillLevel1 > fillLevel){maxFill = fillLevel1;}
    avg = (fillLevel1 + fillLevel)/2;
    anom1 = false;
    //#]
    NOTIFY_TRANSITION_TERMINATED("15");
}

IOxfReactive::TakeEventStatus smartbin::not_full1_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 33 
            if(fillLevel1 >= 95)
                {
                    NOTIFY_TRANSITION_STARTED("33");
                    popNullTransition();
                    switch (not_full1_subState) {
                        // State not_used1
                        case not_used1:
                        {
                            //#[ state state_9.state_30.not_full1.not_used1.(Exit) 
                            if(rand() % 50 == 1){GEN(broken1);}
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.not_used1");
                        }
                        break;
                        // State trash
                        case trash:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.trash");
                        }
                        break;
                        default:
                            break;
                    }
                    not_full1_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1");
                    //#[ transition 33 
                    GEN(reqEmpty1);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_30.full_bin1");
                    state_30_subState = full_bin1;
                    state_30_active = full_bin1;
                    //#[ state state_9.state_30.full_bin1.(Entry) 
                    full1 = true;
                    anom1 = true;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("33");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(broken1_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("17");
            popNullTransition();
            switch (not_full1_subState) {
                // State not_used1
                case not_used1:
                {
                    //#[ state state_9.state_30.not_full1.not_used1.(Exit) 
                    if(rand() % 50 == 1){GEN(broken1);}
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.not_used1");
                }
                break;
                // State trash
                case trash:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.trash");
                }
                break;
                default:
                    break;
            }
            not_full1_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_30.brokenBin1");
            state_30_subState = brokenBin1;
            state_30_active = brokenBin1;
            //#[ state state_9.state_30.brokenBin1.(Entry) 
            anom1 = true;
            //#]
            NOTIFY_TRANSITION_TERMINATED("17");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(reqEmpty1_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("19");
            popNullTransition();
            switch (not_full1_subState) {
                // State not_used1
                case not_used1:
                {
                    //#[ state state_9.state_30.not_full1.not_used1.(Exit) 
                    if(rand() % 50 == 1){GEN(broken1);}
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.not_used1");
                }
                break;
                // State trash
                case trash:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.trash");
                }
                break;
                default:
                    break;
            }
            not_full1_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_30.full_bin1");
            state_30_subState = full_bin1;
            state_30_active = full_bin1;
            //#[ state state_9.state_30.full_bin1.(Entry) 
            full1 = true;
            anom1 = true;
            //#]
            NOTIFY_TRANSITION_TERMINATED("19");
            res = eventConsumed;
        }
    
    
    return res;
}

IOxfReactive::TakeEventStatus smartbin::trash_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("31");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.trash");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_30.not_full1.not_used1");
            not_full1_subState = not_used1;
            state_30_active = not_used1;
            //#[ state state_9.state_30.not_full1.not_used1.(Entry) 
            if(fillLevel1 > fillLevel){maxFill = fillLevel1;}
            avg = (fillLevel1 + fillLevel)/2;
            anom1 = false;
            //#]
            NOTIFY_TRANSITION_TERMINATED("31");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = not_full1_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus smartbin::not_used1_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(throwAway1_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("16");
            //#[ state state_9.state_30.not_full1.not_used1.(Exit) 
            if(rand() % 50 == 1){GEN(broken1);}
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_9.state_30.not_full1.not_used1");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_30.not_full1.trash");
            pushNullTransition();
            not_full1_subState = trash;
            state_30_active = trash;
            //#[ state state_9.state_30.not_full1.trash.(Entry) 
            fillLevel1 += 5;
            //#]
            NOTIFY_TRANSITION_TERMINATED("16");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = not_full1_handleEvent();
        }
    return res;
}

void smartbin::state_14_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14");
    NOTIFY_TRANSITION_STARTED("8");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.wait_for_task");
    state_14_subState = wait_for_task;
    state_14_active = wait_for_task;
    NOTIFY_TRANSITION_TERMINATED("8");
}

void smartbin::state_14_exit() {
    switch (state_14_subState) {
        // State wait_for_task
        case wait_for_task:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.wait_for_task");
        }
        break;
        // State empty_full_bin
        case empty_full_bin:
        {
            cancel(state_14_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.empty_full_bin");
        }
        break;
        case accepttimeevent_19:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.accepttimeevent_19");
        }
        break;
        // State repair_broken_bin
        case repair_broken_bin:
        {
            cancel(state_14_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.repair_broken_bin");
        }
        break;
        case accepttimeevent_28:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.accepttimeevent_28");
        }
        break;
        // State empty_full_bin1
        case empty_full_bin1:
        {
            cancel(state_14_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.empty_full_bin1");
        }
        break;
        case accepttimeevent_40:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.accepttimeevent_40");
        }
        break;
        // State repair_broken_bin1
        case repair_broken_bin1:
        {
            cancel(state_14_timeout);
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.repair_broken_bin1");
        }
        break;
        case accepttimeevent_50:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.accepttimeevent_50");
        }
        break;
        default:
            break;
    }
    state_14_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_9.state_14");
}

IOxfReactive::TakeEventStatus smartbin::state_14_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_14_active) {
        // State wait_for_task
        case wait_for_task:
        {
            res = wait_for_task_handleEvent();
        }
        break;
        // State empty_full_bin
        case empty_full_bin:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_14_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("37");
                            cancel(state_14_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.empty_full_bin");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.accepttimeevent_19");
                            pushNullTransition();
                            state_14_subState = accepttimeevent_19;
                            state_14_active = accepttimeevent_19;
                            NOTIFY_TRANSITION_TERMINATED("37");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_19:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("40");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_14.accepttimeevent_19");
                    //#[ transition 40 
                    GEN(emptyBin);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.wait_for_task");
                    state_14_subState = wait_for_task;
                    state_14_active = wait_for_task;
                    NOTIFY_TRANSITION_TERMINATED("40");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State repair_broken_bin
        case repair_broken_bin:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_14_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("43");
                            cancel(state_14_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.repair_broken_bin");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.accepttimeevent_28");
                            pushNullTransition();
                            state_14_subState = accepttimeevent_28;
                            state_14_active = accepttimeevent_28;
                            NOTIFY_TRANSITION_TERMINATED("43");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_28:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("44");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_14.accepttimeevent_28");
                    //#[ transition 44 
                    GEN(repaired);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.wait_for_task");
                    state_14_subState = wait_for_task;
                    state_14_active = wait_for_task;
                    NOTIFY_TRANSITION_TERMINATED("44");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State empty_full_bin1
        case empty_full_bin1:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_14_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("38");
                            cancel(state_14_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.empty_full_bin1");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.accepttimeevent_40");
                            pushNullTransition();
                            state_14_subState = accepttimeevent_40;
                            state_14_active = accepttimeevent_40;
                            NOTIFY_TRANSITION_TERMINATED("38");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_40:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("39");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_14.accepttimeevent_40");
                    //#[ transition 39 
                    GEN(emptyBin1);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.wait_for_task");
                    state_14_subState = wait_for_task;
                    state_14_active = wait_for_task;
                    NOTIFY_TRANSITION_TERMINATED("39");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State repair_broken_bin1
        case repair_broken_bin1:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_14_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("47");
                            cancel(state_14_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.repair_broken_bin1");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.accepttimeevent_50");
                            pushNullTransition();
                            state_14_subState = accepttimeevent_50;
                            state_14_active = accepttimeevent_50;
                            NOTIFY_TRANSITION_TERMINATED("47");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_50:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("48");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_14.accepttimeevent_50");
                    //#[ transition 48 
                    GEN(repaired1);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.wait_for_task");
                    state_14_subState = wait_for_task;
                    state_14_active = wait_for_task;
                    NOTIFY_TRANSITION_TERMINATED("48");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus smartbin::wait_for_task_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(disp_repair1_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("46");
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.wait_for_task");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.repair_broken_bin1");
            state_14_subState = repair_broken_bin1;
            state_14_active = repair_broken_bin1;
            state_14_timeout = scheduleTimeout(5000, "ROOT.state_9.state_14.repair_broken_bin1");
            NOTIFY_TRANSITION_TERMINATED("46");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(drive_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("9");
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.wait_for_task");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.empty_full_bin");
            state_14_subState = empty_full_bin;
            state_14_active = empty_full_bin;
            state_14_timeout = scheduleTimeout(3500, "ROOT.state_9.state_14.empty_full_bin");
            NOTIFY_TRANSITION_TERMINATED("9");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(drive1_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("24");
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.wait_for_task");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.empty_full_bin1");
            state_14_subState = empty_full_bin1;
            state_14_active = empty_full_bin1;
            state_14_timeout = scheduleTimeout(3500, "ROOT.state_9.state_14.empty_full_bin1");
            NOTIFY_TRANSITION_TERMINATED("24");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(disp_repair_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("45");
            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.wait_for_task");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.repair_broken_bin");
            state_14_subState = repair_broken_bin;
            state_14_active = repair_broken_bin;
            state_14_timeout = scheduleTimeout(5000, "ROOT.state_9.state_14.repair_broken_bin");
            NOTIFY_TRANSITION_TERMINATED("45");
            res = eventConsumed;
        }
    
    
    return res;
}

void smartbin::state_12_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12");
    NOTIFY_TRANSITION_STARTED("5");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait");
    state_12_subState = wait;
    state_12_active = wait;
    //#[ state state_9.state_12.wait.(Entry) 
    repairRequested = false;
    repairRequested1 = false;
    //#]
    NOTIFY_TRANSITION_TERMINATED("5");
}

void smartbin::state_12_exit() {
    switch (state_12_subState) {
        // State wait
        case wait:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait");
        }
        break;
        // State dispatchTruck
        case dispatchTruck:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.dispatchTruck");
        }
        break;
        // State wait_for_empty
        case wait_for_empty:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait_for_empty");
        }
        break;
        // State sched_repair
        case sched_repair:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.sched_repair");
        }
        break;
        // State wait_for_repair
        case wait_for_repair:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait_for_repair");
        }
        break;
        // State repair_req_1
        case repair_req_1:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.repair_req_1");
        }
        break;
        // State dispatchTruck1
        case dispatchTruck1:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.dispatchTruck1");
        }
        break;
        // State dispatchTruck2
        case dispatchTruck2:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.dispatchTruck2");
        }
        break;
        // State repair_req_2
        case repair_req_2:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.repair_req_2");
        }
        break;
        // State sched_repair1
        case sched_repair1:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.sched_repair1");
        }
        break;
        // State wairt_for_repair1
        case wairt_for_repair1:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wairt_for_repair1");
        }
        break;
        // State repair_req_both
        case repair_req_both:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.repair_req_both");
        }
        break;
        default:
            break;
    }
    state_12_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_9.state_12");
}

IOxfReactive::TakeEventStatus smartbin::state_12_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_12_active) {
        // State wait
        case wait:
        {
            res = wait_handleEvent();
        }
        break;
        // State dispatchTruck
        case dispatchTruck:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("35");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.dispatchTruck");
                    //#[ transition 35 
                    GEN(drive);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait_for_empty");
                    state_12_subState = wait_for_empty;
                    state_12_active = wait_for_empty;
                    NOTIFY_TRANSITION_TERMINATED("35");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State wait_for_empty
        case wait_for_empty:
        {
            if(IS_EVENT_TYPE_OF(emptyBin_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait_for_empty");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait");
                    state_12_subState = wait;
                    state_12_active = wait;
                    //#[ state state_9.state_12.wait.(Entry) 
                    repairRequested = false;
                    repairRequested1 = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sched_repair
        case sched_repair:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("49");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.sched_repair");
                    //#[ transition 49 
                    GEN(disp_repair);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait_for_repair");
                    state_12_subState = wait_for_repair;
                    state_12_active = wait_for_repair;
                    NOTIFY_TRANSITION_TERMINATED("49");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State wait_for_repair
        case wait_for_repair:
        {
            if(IS_EVENT_TYPE_OF(repaired_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait_for_repair");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait");
                    state_12_subState = wait;
                    state_12_active = wait;
                    //#[ state state_9.state_12.wait.(Entry) 
                    repairRequested = false;
                    repairRequested1 = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State repair_req_1
        case repair_req_1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("53");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.repair_req_1");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.repair_req_both");
                    state_12_subState = repair_req_both;
                    state_12_active = repair_req_both;
                    NOTIFY_TRANSITION_TERMINATED("53");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State dispatchTruck1
        case dispatchTruck1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("36");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.dispatchTruck1");
                    //#[ transition 36 
                    GEN(drive1);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.dispatchTruck2");
                    state_12_subState = dispatchTruck2;
                    state_12_active = dispatchTruck2;
                    NOTIFY_TRANSITION_TERMINATED("36");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State dispatchTruck2
        case dispatchTruck2:
        {
            if(IS_EVENT_TYPE_OF(emptyBin1_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("23");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.dispatchTruck2");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait");
                    state_12_subState = wait;
                    state_12_active = wait;
                    //#[ state state_9.state_12.wait.(Entry) 
                    repairRequested = false;
                    repairRequested1 = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("23");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State repair_req_2
        case repair_req_2:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("54");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.repair_req_2");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.repair_req_both");
                    state_12_subState = repair_req_both;
                    state_12_active = repair_req_both;
                    NOTIFY_TRANSITION_TERMINATED("54");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State sched_repair1
        case sched_repair1:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("52");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.sched_repair1");
                    //#[ transition 52 
                    GEN(disp_repair1);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wairt_for_repair1");
                    state_12_subState = wairt_for_repair1;
                    state_12_active = wairt_for_repair1;
                    NOTIFY_TRANSITION_TERMINATED("52");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State wairt_for_repair1
        case wairt_for_repair1:
        {
            if(IS_EVENT_TYPE_OF(repaired1_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("51");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wairt_for_repair1");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait");
                    state_12_subState = wait;
                    state_12_active = wait;
                    //#[ state state_9.state_12.wait.(Entry) 
                    repairRequested = false;
                    repairRequested1 = false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("51");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State repair_req_both
        case repair_req_both:
        {
            if(IS_EVENT_TYPE_OF(disp_repair0_Default_id))
                {
                    //## transition 55 
                    if(selected)
                        {
                            NOTIFY_TRANSITION_STARTED("55");
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.repair_req_both");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.sched_repair");
                            pushNullTransition();
                            state_12_subState = sched_repair;
                            state_12_active = sched_repair;
                            NOTIFY_TRANSITION_TERMINATED("55");
                            res = eventConsumed;
                        }
                    else
                        {
                            //## transition 56 
                            if(selected1)
                                {
                                    NOTIFY_TRANSITION_STARTED("56");
                                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.repair_req_both");
                                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.sched_repair1");
                                    pushNullTransition();
                                    state_12_subState = sched_repair1;
                                    state_12_active = sched_repair1;
                                    NOTIFY_TRANSITION_TERMINATED("56");
                                    res = eventConsumed;
                                }
                        }
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

IOxfReactive::TakeEventStatus smartbin::wait_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(req_repair_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("13");
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.repair_req_1");
            pushNullTransition();
            state_12_subState = repair_req_1;
            state_12_active = repair_req_1;
            //#[ state state_9.state_12.repair_req_1.(Entry) 
            repairRequested = true;
            //#]
            NOTIFY_TRANSITION_TERMINATED("13");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(req_repair2_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("50");
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.repair_req_2");
            pushNullTransition();
            state_12_subState = repair_req_2;
            state_12_active = repair_req_2;
            //#[ state state_9.state_12.repair_req_2.(Entry) 
            repairRequested1 = true;
            //#]
            NOTIFY_TRANSITION_TERMINATED("50");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(reqEmpty_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("6");
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.dispatchTruck");
            pushNullTransition();
            state_12_subState = dispatchTruck;
            state_12_active = dispatchTruck;
            NOTIFY_TRANSITION_TERMINATED("6");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(reqEmpty1_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("22");
            NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.dispatchTruck1");
            pushNullTransition();
            state_12_subState = dispatchTruck1;
            state_12_active = dispatchTruck1;
            NOTIFY_TRANSITION_TERMINATED("22");
            res = eventConsumed;
        }
    
    
    return res;
}

void smartbin::state_11_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11");
    NOTIFY_TRANSITION_STARTED("0");
    not_full_entDef();
    NOTIFY_TRANSITION_TERMINATED("0");
}

void smartbin::state_11_exit() {
    switch (state_11_subState) {
        // State not_full
        case not_full:
        {
            popNullTransition();
            switch (not_full_subState) {
                // State not_used
                case not_used:
                {
                    //#[ state state_9.state_11.not_full.not_used.(Exit) 
                    if(rand() % 50 == 1){GEN(broken);}
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.not_used");
                }
                break;
                // State trash1
                case trash1:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.trash1");
                }
                break;
                default:
                    break;
            }
            not_full_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full");
        }
        break;
        // State full_bin
        case full_bin:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.full_bin");
        }
        break;
        // State empty_bin
        case empty_bin:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.empty_bin");
        }
        break;
        // State broken_bin
        case broken_bin:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.broken_bin");
        }
        break;
        default:
            break;
    }
    state_11_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.state_9.state_11");
}

IOxfReactive::TakeEventStatus smartbin::state_11_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_11_active) {
        // State not_used
        case not_used:
        {
            res = not_used_handleEvent();
        }
        break;
        // State trash1
        case trash1:
        {
            res = trash1_handleEvent();
        }
        break;
        // State full_bin
        case full_bin:
        {
            if(IS_EVENT_TYPE_OF(emptyBin_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.full_bin");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.empty_bin");
                    pushNullTransition();
                    state_11_subState = empty_bin;
                    state_11_active = empty_bin;
                    //#[ state state_9.state_11.empty_bin.(Entry) 
                    fillLevel = 0;
                    full = false;
                    maxFill = fillLevel1;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State empty_bin
        case empty_bin:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("30");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.empty_bin");
                    not_full_entDef();
                    NOTIFY_TRANSITION_TERMINATED("30");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State broken_bin
        case broken_bin:
        {
            if(IS_EVENT_TYPE_OF(repaired_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.broken_bin");
                    not_full_entDef();
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void smartbin::not_full_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.not_full");
    pushNullTransition();
    state_11_subState = not_full;
    NOTIFY_TRANSITION_STARTED("1");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.not_full.not_used");
    not_full_subState = not_used;
    state_11_active = not_used;
    //#[ state state_9.state_11.not_full.not_used.(Entry) 
    if(fillLevel > fillLevel1){maxFill = fillLevel;}
    avg = (fillLevel1 + fillLevel)/2;
    anom = false;
    //#]
    NOTIFY_TRANSITION_TERMINATED("1");
}

IOxfReactive::TakeEventStatus smartbin::not_full_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(broken_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("11");
            popNullTransition();
            switch (not_full_subState) {
                // State not_used
                case not_used:
                {
                    //#[ state state_9.state_11.not_full.not_used.(Exit) 
                    if(rand() % 50 == 1){GEN(broken);}
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.not_used");
                }
                break;
                // State trash1
                case trash1:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.trash1");
                }
                break;
                default:
                    break;
            }
            not_full_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.broken_bin");
            state_11_subState = broken_bin;
            state_11_active = broken_bin;
            //#[ state state_9.state_11.broken_bin.(Entry) 
            anom = true;
            //#]
            NOTIFY_TRANSITION_TERMINATED("11");
            res = eventConsumed;
        }
    else if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 34 
            if(fillLevel >= 95)
                {
                    NOTIFY_TRANSITION_STARTED("34");
                    popNullTransition();
                    switch (not_full_subState) {
                        // State not_used
                        case not_used:
                        {
                            //#[ state state_9.state_11.not_full.not_used.(Exit) 
                            if(rand() % 50 == 1){GEN(broken);}
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.not_used");
                        }
                        break;
                        // State trash1
                        case trash1:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.trash1");
                        }
                        break;
                        default:
                            break;
                    }
                    not_full_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full");
                    //#[ transition 34 
                    GEN(reqEmpty);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.full_bin");
                    state_11_subState = full_bin;
                    state_11_active = full_bin;
                    //#[ state state_9.state_11.full_bin.(Entry) 
                    full = true;
                    anom = true;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("34");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(reqEmpty_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("10");
            popNullTransition();
            switch (not_full_subState) {
                // State not_used
                case not_used:
                {
                    //#[ state state_9.state_11.not_full.not_used.(Exit) 
                    if(rand() % 50 == 1){GEN(broken);}
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.not_used");
                }
                break;
                // State trash1
                case trash1:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.trash1");
                }
                break;
                default:
                    break;
            }
            not_full_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.full_bin");
            state_11_subState = full_bin;
            state_11_active = full_bin;
            //#[ state state_9.state_11.full_bin.(Entry) 
            full = true;
            anom = true;
            //#]
            NOTIFY_TRANSITION_TERMINATED("10");
            res = eventConsumed;
        }
    
    
    return res;
}

IOxfReactive::TakeEventStatus smartbin::trash1_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("29");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.trash1");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.not_full.not_used");
            not_full_subState = not_used;
            state_11_active = not_used;
            //#[ state state_9.state_11.not_full.not_used.(Entry) 
            if(fillLevel > fillLevel1){maxFill = fillLevel;}
            avg = (fillLevel1 + fillLevel)/2;
            anom = false;
            //#]
            NOTIFY_TRANSITION_TERMINATED("29");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = not_full_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus smartbin::not_used_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(throwAway_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("2");
            //#[ state state_9.state_11.not_full.not_used.(Exit) 
            if(rand() % 50 == 1){GEN(broken);}
            //#]
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.not_used");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.not_full.trash1");
            pushNullTransition();
            not_full_subState = trash1;
            state_11_active = trash1;
            //#[ state state_9.state_11.not_full.trash1.(Entry) 
            fillLevel += 5;
            std::cout<<fillLevel<<"\n";
            //#]
            NOTIFY_TRANSITION_TERMINATED("2");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = not_full_handleEvent();
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedsmartbin::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("valueproperty_2", x2String(myReal->valueproperty_2));
    aomsAttributes->addAttribute("fillLevel", x2String(myReal->fillLevel));
    aomsAttributes->addAttribute("flowproperty_16", x2String(myReal->flowproperty_16));
    aomsAttributes->addAttribute("emptyReq", x2String(myReal->emptyReq));
    aomsAttributes->addAttribute("full", x2String(myReal->full));
    aomsAttributes->addAttribute("nSamples", x2String(myReal->nSamples));
    aomsAttributes->addAttribute("avg", x2String(myReal->avg));
    aomsAttributes->addAttribute("totalFill", x2String(myReal->totalFill));
    aomsAttributes->addAttribute("maxFill", x2String(myReal->maxFill));
    aomsAttributes->addAttribute("repairRequested", x2String(myReal->repairRequested));
    aomsAttributes->addAttribute("RH", x2String(myReal->RH));
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
    aomsAttributes->addAttribute("fillLevel1", x2String(myReal->fillLevel1));
    aomsAttributes->addAttribute("fillLevel2", x2String(myReal->fillLevel2));
    aomsAttributes->addAttribute("full1", x2String(myReal->full1));
    aomsAttributes->addAttribute("full2", x2String(myReal->full2));
    aomsAttributes->addAttribute("RH1", x2String(myReal->RH1));
    aomsAttributes->addAttribute("Rh2", x2String(myReal->Rh2));
    aomsAttributes->addAttribute("repairRequested1", x2String(myReal->repairRequested1));
    aomsAttributes->addAttribute("repairRequested2", x2String(myReal->repairRequested2));
    aomsAttributes->addAttribute("selected", x2String(myReal->selected));
    aomsAttributes->addAttribute("anom", x2String(myReal->anom));
    aomsAttributes->addAttribute("anom1", x2String(myReal->anom1));
    aomsAttributes->addAttribute("fillSelect", x2String(myReal->fillSelect));
    aomsAttributes->addAttribute("tempSelect", x2String(myReal->tempSelect));
    aomsAttributes->addAttribute("RHSelect", x2String(myReal->RHSelect));
    aomsAttributes->addAttribute("temp1", x2String(myReal->temp1));
    aomsAttributes->addAttribute("selected1", x2String(myReal->selected1));
    aomsAttributes->addAttribute("repairReqSelect", x2String(myReal->repairReqSelect));
    aomsAttributes->addAttribute("updateFq", x2String(myReal->updateFq));
    OMAnimatedbin::serializeAttributes(aomsAttributes);
}

void OMAnimatedsmartbin::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("sensorBoard", false, true);
    if(myReal->sensorBoard)
        {
            aomsRelations->ADD_ITEM(myReal->sensorBoard);
        }
    aomsRelations->addRelation("itsLid", false, true);
    if(myReal->itsLid)
        {
            aomsRelations->ADD_ITEM(myReal->itsLid);
        }
    aomsRelations->addRelation("itsResident_Citizen_User", false, true);
    if(myReal->itsResident_Citizen_User)
        {
            aomsRelations->ADD_ITEM(myReal->itsResident_Citizen_User);
        }
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
        }
    aomsRelations->addRelation("itsAlarm", false, true);
    if(myReal->itsAlarm)
        {
            aomsRelations->ADD_ITEM(myReal->itsAlarm);
        }
    OMAnimatedbin::serializeRelations(aomsRelations);
}

void OMAnimatedsmartbin::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == smartbin::state_9)
        {
            state_9_serializeStates(aomsState);
        }
}

void OMAnimatedsmartbin::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9");
    state_11_serializeStates(aomsState);
    state_12_serializeStates(aomsState);
    state_14_serializeStates(aomsState);
    state_30_serializeStates(aomsState);
    state_41_serializeStates(aomsState);
    state_46_serializeStates(aomsState);
}

void OMAnimatedsmartbin::state_46_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_46");
    switch (myReal->state_46_subState) {
        case smartbin::state_47:
        {
            state_47_serializeStates(aomsState);
        }
        break;
        case smartbin::accepttimeevent_55:
        {
            accepttimeevent_55_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::state_47_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_46.state_47");
}

void OMAnimatedsmartbin::accepttimeevent_55_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_46.accepttimeevent_55");
}

void OMAnimatedsmartbin::state_41_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_41");
    switch (myReal->state_41_subState) {
        case smartbin::state_42:
        {
            state_42_serializeStates(aomsState);
        }
        break;
        case smartbin::state_43:
        {
            state_43_serializeStates(aomsState);
        }
        break;
        case smartbin::state_44:
        {
            state_44_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::state_44_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_41.state_44");
}

void OMAnimatedsmartbin::state_43_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_41.state_43");
}

void OMAnimatedsmartbin::state_42_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_41.state_42");
}

void OMAnimatedsmartbin::state_30_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_30");
    switch (myReal->state_30_subState) {
        case smartbin::not_full1:
        {
            not_full1_serializeStates(aomsState);
        }
        break;
        case smartbin::brokenBin1:
        {
            brokenBin1_serializeStates(aomsState);
        }
        break;
        case smartbin::full_bin1:
        {
            full_bin1_serializeStates(aomsState);
        }
        break;
        case smartbin::empty_bint1:
        {
            empty_bint1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::not_full1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_30.not_full1");
    switch (myReal->not_full1_subState) {
        case smartbin::not_used1:
        {
            not_used1_serializeStates(aomsState);
        }
        break;
        case smartbin::trash:
        {
            trash_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::trash_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_30.not_full1.trash");
}

void OMAnimatedsmartbin::not_used1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_30.not_full1.not_used1");
}

void OMAnimatedsmartbin::full_bin1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_30.full_bin1");
}

void OMAnimatedsmartbin::empty_bint1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_30.empty_bint1");
}

void OMAnimatedsmartbin::brokenBin1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_30.brokenBin1");
}

void OMAnimatedsmartbin::state_14_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14");
    switch (myReal->state_14_subState) {
        case smartbin::wait_for_task:
        {
            wait_for_task_serializeStates(aomsState);
        }
        break;
        case smartbin::empty_full_bin:
        {
            empty_full_bin_serializeStates(aomsState);
        }
        break;
        case smartbin::accepttimeevent_19:
        {
            accepttimeevent_19_serializeStates(aomsState);
        }
        break;
        case smartbin::repair_broken_bin:
        {
            repair_broken_bin_serializeStates(aomsState);
        }
        break;
        case smartbin::accepttimeevent_28:
        {
            accepttimeevent_28_serializeStates(aomsState);
        }
        break;
        case smartbin::empty_full_bin1:
        {
            empty_full_bin1_serializeStates(aomsState);
        }
        break;
        case smartbin::accepttimeevent_40:
        {
            accepttimeevent_40_serializeStates(aomsState);
        }
        break;
        case smartbin::repair_broken_bin1:
        {
            repair_broken_bin1_serializeStates(aomsState);
        }
        break;
        case smartbin::accepttimeevent_50:
        {
            accepttimeevent_50_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::wait_for_task_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.wait_for_task");
}

void OMAnimatedsmartbin::repair_broken_bin1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.repair_broken_bin1");
}

void OMAnimatedsmartbin::repair_broken_bin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.repair_broken_bin");
}

void OMAnimatedsmartbin::empty_full_bin1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.empty_full_bin1");
}

void OMAnimatedsmartbin::empty_full_bin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.empty_full_bin");
}

void OMAnimatedsmartbin::accepttimeevent_50_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.accepttimeevent_50");
}

void OMAnimatedsmartbin::accepttimeevent_40_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.accepttimeevent_40");
}

void OMAnimatedsmartbin::accepttimeevent_28_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.accepttimeevent_28");
}

void OMAnimatedsmartbin::accepttimeevent_19_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.accepttimeevent_19");
}

void OMAnimatedsmartbin::state_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12");
    switch (myReal->state_12_subState) {
        case smartbin::wait:
        {
            wait_serializeStates(aomsState);
        }
        break;
        case smartbin::dispatchTruck:
        {
            dispatchTruck_serializeStates(aomsState);
        }
        break;
        case smartbin::wait_for_empty:
        {
            wait_for_empty_serializeStates(aomsState);
        }
        break;
        case smartbin::sched_repair:
        {
            sched_repair_serializeStates(aomsState);
        }
        break;
        case smartbin::wait_for_repair:
        {
            wait_for_repair_serializeStates(aomsState);
        }
        break;
        case smartbin::repair_req_1:
        {
            repair_req_1_serializeStates(aomsState);
        }
        break;
        case smartbin::dispatchTruck1:
        {
            dispatchTruck1_serializeStates(aomsState);
        }
        break;
        case smartbin::dispatchTruck2:
        {
            dispatchTruck2_serializeStates(aomsState);
        }
        break;
        case smartbin::repair_req_2:
        {
            repair_req_2_serializeStates(aomsState);
        }
        break;
        case smartbin::sched_repair1:
        {
            sched_repair1_serializeStates(aomsState);
        }
        break;
        case smartbin::wairt_for_repair1:
        {
            wairt_for_repair1_serializeStates(aomsState);
        }
        break;
        case smartbin::repair_req_both:
        {
            repair_req_both_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::wait_for_repair_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.wait_for_repair");
}

void OMAnimatedsmartbin::wait_for_empty_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.wait_for_empty");
}

void OMAnimatedsmartbin::wait_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.wait");
}

void OMAnimatedsmartbin::wairt_for_repair1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.wairt_for_repair1");
}

void OMAnimatedsmartbin::sched_repair1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.sched_repair1");
}

void OMAnimatedsmartbin::sched_repair_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.sched_repair");
}

void OMAnimatedsmartbin::repair_req_both_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.repair_req_both");
}

void OMAnimatedsmartbin::repair_req_2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.repair_req_2");
}

void OMAnimatedsmartbin::repair_req_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.repair_req_1");
}

void OMAnimatedsmartbin::dispatchTruck2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.dispatchTruck2");
}

void OMAnimatedsmartbin::dispatchTruck1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.dispatchTruck1");
}

void OMAnimatedsmartbin::dispatchTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.dispatchTruck");
}

void OMAnimatedsmartbin::state_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11");
    switch (myReal->state_11_subState) {
        case smartbin::not_full:
        {
            not_full_serializeStates(aomsState);
        }
        break;
        case smartbin::full_bin:
        {
            full_bin_serializeStates(aomsState);
        }
        break;
        case smartbin::empty_bin:
        {
            empty_bin_serializeStates(aomsState);
        }
        break;
        case smartbin::broken_bin:
        {
            broken_bin_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::not_full_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.not_full");
    switch (myReal->not_full_subState) {
        case smartbin::not_used:
        {
            not_used_serializeStates(aomsState);
        }
        break;
        case smartbin::trash1:
        {
            trash1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::trash1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.not_full.trash1");
}

void OMAnimatedsmartbin::not_used_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.not_full.not_used");
}

void OMAnimatedsmartbin::full_bin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.full_bin");
}

void OMAnimatedsmartbin::empty_bin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.empty_bin");
}

void OMAnimatedsmartbin::broken_bin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.broken_bin");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(smartbin, Default, false, bin, OMAnimatedbin, OMAnimatedsmartbin)

OMINIT_SUPERCLASS(bin, OMAnimatedbin)

OMREGISTER_REACTIVE_CLASS

IMPLEMENT_META_OP(OMAnimatedsmartbin, Default_smartbin_setUpdateFq_int, "setUpdateFq", FALSE, "setUpdateFq(int)", 1)

IMPLEMENT_OP_CALL(Default_smartbin_setUpdateFq_int, smartbin, setUpdateFq(p_updateFq), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\smartbin.cpp
*********************************************************************/
