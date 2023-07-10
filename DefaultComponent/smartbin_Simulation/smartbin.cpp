/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: smartbin
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\smartbin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "smartbin.h"
//## auto_generated
#include "cms.h"
//## link itsElectricity
#include "electricity.h"
//## link itsLid
#include "lid.h"
//## link sensorBoard
#include "sensor.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//## event addTrash()
#include "addTrashPkg.h"
//## link itsResident_Citizen_User
#include "Resident_Citizen_User.h"
//## link itsTruck
#include "truck.h"
//#[ ignore
#define Default_smartbin_smartbin_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class smartbin
//#[ ignore
smartbin::p_smartbin_C::p_smartbin_C() : _p_(0) {
    itsBool_emptyReq_ProxyFlowPropertyInterface = NULL;
}

smartbin::p_smartbin_C::~p_smartbin_C() {
    cleanUpRelations();
}

bool_emptyReq_ProxyFlowPropertyInterface* smartbin::p_smartbin_C::getItsBool_emptyReq_ProxyFlowPropertyInterface() {
    return this;
}

bool_emptyReq_ProxyFlowPropertyInterface* smartbin::p_smartbin_C::getOutBound() {
    return this;
}

void smartbin::p_smartbin_C::setEmptyReq(bool p_emptyReq) {
    
    if (itsBool_emptyReq_ProxyFlowPropertyInterface != NULL) {
        itsBool_emptyReq_ProxyFlowPropertyInterface->setEmptyReq(p_emptyReq);
    }
    
}

void smartbin::p_smartbin_C::setItsBool_emptyReq_ProxyFlowPropertyInterface(bool_emptyReq_ProxyFlowPropertyInterface* p_bool_emptyReq_ProxyFlowPropertyInterface) {
    itsBool_emptyReq_ProxyFlowPropertyInterface = p_bool_emptyReq_ProxyFlowPropertyInterface;
}

void smartbin::p_smartbin_C::cleanUpRelations() {
    if(itsBool_emptyReq_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_emptyReq_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

smartbin::smartbin(IOxfActive* theActiveContext) : emptyReq(false), fillLevel(0), full(false) {
    NOTIFY_REACTIVE_CONSTRUCTOR(smartbin, smartbin(), 0, Default_smartbin_smartbin_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsElectricity = NULL;
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

electricity* smartbin::getItsElectricity() const {
    return itsElectricity;
}

void smartbin::setItsElectricity(electricity* p_electricity) {
    if(p_electricity != NULL)
        {
            p_electricity->_setItsSmartbin(this);
        }
    _setItsElectricity(p_electricity);
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
    if(itsElectricity != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsElectricity");
            smartbin* p_smartbin = itsElectricity->getItsSmartbin();
            if(p_smartbin != NULL)
                {
                    itsElectricity->__setItsSmartbin(NULL);
                }
            itsElectricity = NULL;
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

void smartbin::__setItsElectricity(electricity* p_electricity) {
    itsElectricity = p_electricity;
    if(p_electricity != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsElectricity", p_electricity, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsElectricity");
        }
}

void smartbin::_setItsElectricity(electricity* p_electricity) {
    if(itsElectricity != NULL)
        {
            itsElectricity->__setItsSmartbin(NULL);
        }
    __setItsElectricity(p_electricity);
}

void smartbin::_clearItsElectricity() {
    NOTIFY_RELATION_CLEARED("itsElectricity");
    itsElectricity = NULL;
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

//#[ ignore
void smartbin::setEmptyReq(bool p_emptyReq) {
    if (emptyReq != p_emptyReq)  {
        emptyReq = p_emptyReq;
        FLOW_DATA_SEND(emptyReq, p_smartbin, setEmptyReq, x2String);
    }
}
//#]

smartbin::p_smartbin_C* smartbin::getP_smartbin() const {
    return (smartbin::p_smartbin_C*) &p_smartbin;
}

smartbin::p_smartbin_C* smartbin::get_p_smartbin() const {
    return (smartbin::p_smartbin_C*) &p_smartbin;
}

bool smartbin::getEmptyReq() const {
    return emptyReq;
}

int smartbin::getFillLevel() const {
    return fillLevel;
}

void smartbin::setFillLevel(int p_fillLevel) {
    fillLevel = p_fillLevel;
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
    cancel(state_14_timeout);
}

bool smartbin::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(state_14_timeout == arg)
        {
            state_14_timeout = NULL;
            res = true;
        }
    return res;
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
}

void smartbin::state_9_exit() {
    state_11_exit();
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
        default:
            break;
    }
    state_12_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_9.state_12");
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
        default:
            break;
    }
    state_14_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.state_9.state_14");
    
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
    
    return res;
}

void smartbin::state_14_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14");
    NOTIFY_TRANSITION_STARTED("9");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.wait_for_task");
    state_14_subState = wait_for_task;
    state_14_active = wait_for_task;
    NOTIFY_TRANSITION_TERMINATED("9");
}

IOxfReactive::TakeEventStatus smartbin::state_14_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_14_active) {
        // State wait_for_task
        case wait_for_task:
        {
            if(IS_EVENT_TYPE_OF(drive_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_14.wait_for_task");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.empty_full_bin");
                    state_14_subState = empty_full_bin;
                    state_14_active = empty_full_bin;
                    state_14_timeout = scheduleTimeout(3500, "ROOT.state_9.state_14.empty_full_bin");
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State empty_full_bin
        case empty_full_bin:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == state_14_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("11");
                            cancel(state_14_timeout);
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_14.empty_full_bin");
                            NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.accepttimeevent_19");
                            pushNullTransition();
                            state_14_subState = accepttimeevent_19;
                            state_14_active = accepttimeevent_19;
                            NOTIFY_TRANSITION_TERMINATED("11");
                            res = eventConsumed;
                        }
                }
            
            
        }
        break;
        case accepttimeevent_19:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_14.accepttimeevent_19");
                    //#[ transition 12 
                    GEN(emptyBin);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_14.wait_for_task");
                    state_14_subState = wait_for_task;
                    state_14_active = wait_for_task;
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void smartbin::state_12_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12");
    NOTIFY_TRANSITION_STARTED("5");
    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait");
    state_12_subState = wait;
    state_12_active = wait;
    NOTIFY_TRANSITION_TERMINATED("5");
}

IOxfReactive::TakeEventStatus smartbin::state_12_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_12_active) {
        // State wait
        case wait:
        {
            if(IS_EVENT_TYPE_OF(reqEmpty_Default_id))
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
            
            
        }
        break;
        // State dispatchTruck
        case dispatchTruck:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.dispatchTruck");
                    //#[ transition 7 
                    GEN(drive);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait_for_empty");
                    state_12_subState = wait_for_empty;
                    state_12_active = wait_for_empty;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State wait_for_empty
        case wait_for_empty:
        {
            if(IS_EVENT_TYPE_OF(emptyBin_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_12.wait_for_empty");
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_12.wait");
                    state_12_subState = wait;
                    state_12_active = wait;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
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
        // State empty_bin
        case empty_bin:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.empty_bin");
        }
        break;
        // State full_bin
        case full_bin:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.full_bin");
        }
        break;
        // State not_full
        case not_full:
        {
            popNullTransition();
            switch (not_full_subState) {
                // State not_used
                case not_used:
                {
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.not_used");
                }
                break;
                // State state_5
                case state_5:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.state_5");
                }
                break;
                default:
                    break;
            }
            not_full_subState = OMNonState;
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full");
        }
        break;
        // State broken
        case broken:
        {
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.broken");
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
        // State empty_bin
        case empty_bin:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.empty_bin");
                    not_full_entDef();
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
            
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
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State not_used
        case not_used:
        {
            res = not_used_handleEvent();
        }
        break;
        // State state_5
        case state_5:
        {
            res = state_5_handleEvent();
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
    NOTIFY_TRANSITION_TERMINATED("1");
}

IOxfReactive::TakeEventStatus smartbin::not_full_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 15 
            if(fillLevel >= 95)
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    popNullTransition();
                    switch (not_full_subState) {
                        // State not_used
                        case not_used:
                        {
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.not_used");
                        }
                        break;
                        // State state_5
                        case state_5:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.state_5");
                        }
                        break;
                        default:
                            break;
                    }
                    not_full_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full");
                    //#[ transition 15 
                    GEN(reqEmpty);
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.full_bin");
                    state_11_subState = full_bin;
                    state_11_active = full_bin;
                    //#[ state state_9.state_11.full_bin.(Entry) 
                    full = true;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
        }
    else if(IS_EVENT_TYPE_OF(reqEmpty_Default_id))
        {
            NOTIFY_TRANSITION_STARTED("16");
            popNullTransition();
            switch (not_full_subState) {
                // State not_used
                case not_used:
                {
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.not_used");
                }
                break;
                // State state_5
                case state_5:
                {
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.state_5");
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
            //#]
            NOTIFY_TRANSITION_TERMINATED("16");
            res = eventConsumed;
        }
    
    
    return res;
}

IOxfReactive::TakeEventStatus smartbin::state_5_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            NOTIFY_TRANSITION_STARTED("13");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.state_5");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.not_full.not_used");
            not_full_subState = not_used;
            state_11_active = not_used;
            NOTIFY_TRANSITION_TERMINATED("13");
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
            NOTIFY_STATE_EXITED("ROOT.state_9.state_11.not_full.not_used");
            NOTIFY_STATE_ENTERED("ROOT.state_9.state_11.not_full.state_5");
            pushNullTransition();
            not_full_subState = state_5;
            state_11_active = state_5;
            //#[ state state_9.state_11.not_full.state_5.(Entry) 
            fillLevel += 5;
            std::cout<<fillLevel%100<<"\n";
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
    aomsRelations->addRelation("itsElectricity", false, true);
    if(myReal->itsElectricity)
        {
            aomsRelations->ADD_ITEM(myReal->itsElectricity);
        }
    aomsRelations->addRelation("itsTruck", false, true);
    if(myReal->itsTruck)
        {
            aomsRelations->ADD_ITEM(myReal->itsTruck);
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
        default:
            break;
    }
}

void OMAnimatedsmartbin::wait_for_task_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.wait_for_task");
}

void OMAnimatedsmartbin::empty_full_bin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_14.empty_full_bin");
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
        default:
            break;
    }
}

void OMAnimatedsmartbin::wait_for_empty_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.wait_for_empty");
}

void OMAnimatedsmartbin::wait_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.wait");
}

void OMAnimatedsmartbin::dispatchTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_12.dispatchTruck");
}

void OMAnimatedsmartbin::state_11_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11");
    switch (myReal->state_11_subState) {
        case smartbin::empty_bin:
        {
            empty_bin_serializeStates(aomsState);
        }
        break;
        case smartbin::full_bin:
        {
            full_bin_serializeStates(aomsState);
        }
        break;
        case smartbin::not_full:
        {
            not_full_serializeStates(aomsState);
        }
        break;
        case smartbin::broken:
        {
            broken_serializeStates(aomsState);
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
        case smartbin::state_5:
        {
            state_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::state_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.not_full.state_5");
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

void OMAnimatedsmartbin::broken_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_9.state_11.broken");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(smartbin, Default, false, bin, OMAnimatedbin, OMAnimatedsmartbin)

OMINIT_SUPERCLASS(bin, OMAnimatedbin)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\smartbin.cpp
*********************************************************************/
