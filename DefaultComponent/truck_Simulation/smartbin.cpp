/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: smartbin
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\smartbin.cpp
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

smartbin::smartbin(IOxfActive* theActiveContext) : emptyBin(false), emptyReq(false), fillLevel(0) {
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

bool smartbin::getEmptyBin() const {
    return emptyBin;
}

void smartbin::setEmptyBin(bool p_emptyBin) {
    emptyBin = p_emptyBin;
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
    not_full_subState = OMNonState;
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
        NOTIFY_TRANSITION_STARTED("0");
        not_full_entDef();
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus smartbin::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State not_used
        case not_used:
        {
            if(IS_EVENT_TYPE_OF(throwAway_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.not_full.not_used");
                    NOTIFY_STATE_ENTERED("ROOT.not_full.state_5");
                    pushNullTransition();
                    not_full_subState = state_5;
                    rootState_active = state_5;
                    //#[ state not_full.state_5.(Entry) 
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
        }
        break;
        // State state_5
        case state_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.not_full.state_5");
                    NOTIFY_STATE_ENTERED("ROOT.not_full.not_used");
                    not_full_subState = not_used;
                    rootState_active = not_used;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            if(res == eventNotConsumed)
                {
                    res = not_full_handleEvent();
                }
        }
        break;
        // State full
        case full:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.full");
                    NOTIFY_STATE_ENTERED("ROOT.empty_bin");
                    pushNullTransition();
                    rootState_subState = empty_bin;
                    rootState_active = empty_bin;
                    //#[ state empty_bin.(Entry) 
                    fillLevel = 0;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State empty_bin
        case empty_bin:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.empty_bin");
                    not_full_entDef();
                    NOTIFY_TRANSITION_TERMINATED("6");
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
    NOTIFY_STATE_ENTERED("ROOT.not_full");
    pushNullTransition();
    rootState_subState = not_full;
    NOTIFY_TRANSITION_STARTED("1");
    NOTIFY_STATE_ENTERED("ROOT.not_full.not_used");
    not_full_subState = not_used;
    rootState_active = not_used;
    NOTIFY_TRANSITION_TERMINATED("1");
}

IOxfReactive::TakeEventStatus smartbin::not_full_handleEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId))
        {
            //## transition 4 
            if(fillLevel >= 95)
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    switch (not_full_subState) {
                        // State not_used
                        case not_used:
                        {
                            NOTIFY_STATE_EXITED("ROOT.not_full.not_used");
                        }
                        break;
                        // State state_5
                        case state_5:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.not_full.state_5");
                        }
                        break;
                        default:
                            break;
                    }
                    not_full_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.not_full");
                    NOTIFY_STATE_ENTERED("ROOT.full");
                    pushNullTransition();
                    rootState_subState = full;
                    rootState_active = full;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
        }
    
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedsmartbin::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("valueproperty_2", x2String(myReal->valueproperty_2));
    aomsAttributes->addAttribute("fillLevel", x2String(myReal->fillLevel));
    aomsAttributes->addAttribute("emptyBin", x2String(myReal->emptyBin));
    aomsAttributes->addAttribute("flowproperty_16", x2String(myReal->flowproperty_16));
    aomsAttributes->addAttribute("emptyReq", x2String(myReal->emptyReq));
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
    switch (myReal->rootState_subState) {
        case smartbin::not_full:
        {
            not_full_serializeStates(aomsState);
        }
        break;
        case smartbin::full:
        {
            full_serializeStates(aomsState);
        }
        break;
        case smartbin::empty_bin:
        {
            empty_bin_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedsmartbin::not_full_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.not_full");
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
    aomsState->addState("ROOT.not_full.state_5");
}

void OMAnimatedsmartbin::not_used_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.not_full.not_used");
}

void OMAnimatedsmartbin::full_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.full");
}

void OMAnimatedsmartbin::empty_bin_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.empty_bin");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(smartbin, Default, false, bin, OMAnimatedbin, OMAnimatedsmartbin)

OMINIT_SUPERCLASS(bin, OMAnimatedbin)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\smartbin.cpp
*********************************************************************/
