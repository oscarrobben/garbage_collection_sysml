/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CMS_b
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CMS_b.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "CMS_b.h"
//#[ ignore
#define Default_CMS_b_CMS_b_SERIALIZE OM_NO_OP

#define Default_CMS_b_test_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class CMS_b
CMS_b::CMS_b(IOxfActive* theActiveContext) : RH(0), fillLevel(0), temp(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(CMS_b, CMS_b(), 0, Default_CMS_b_CMS_b_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

CMS_b::~CMS_b() {
    NOTIFY_DESTRUCTOR(~CMS_b, true);
}

void CMS_b::test() {
    NOTIFY_OPERATION(test, test(), 0, Default_CMS_b_test_SERIALIZE);
    //#[ operation test()
    GEN(reqEmpty);
    std::cout<<"let him cook"<<"\n";
    //#]
}

int CMS_b::getRH() const {
    return RH;
}

void CMS_b::setRH(int p_RH) {
    RH = p_RH;
    NOTIFY_SET_OPERATION;
}

int CMS_b::getFillLevel() const {
    return fillLevel;
}

void CMS_b::setFillLevel(int p_fillLevel) {
    fillLevel = p_fillLevel;
    NOTIFY_SET_OPERATION;
}

int CMS_b::getTemp() const {
    return temp;
}

void CMS_b::setTemp(int p_temp) {
    temp = p_temp;
    NOTIFY_SET_OPERATION;
}

bool CMS_b::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void CMS_b::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void CMS_b::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.state_0");
        rootState_subState = state_0;
        rootState_active = state_0;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus CMS_b::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State state_0
    if(rootState_active == state_0)
        {
            if(IS_EVENT_TYPE_OF(reqEmpty_Default_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.state_0");
                    NOTIFY_STATE_ENTERED("ROOT.state_1");
                    rootState_subState = state_1;
                    rootState_active = state_1;
                    //#[ state state_1.(Entry) 
                    std::cout<<"Kaolo lit"<<"\n";
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCMS_b::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("fillLevel", x2String(myReal->fillLevel));
    aomsAttributes->addAttribute("temp", x2String(myReal->temp));
    aomsAttributes->addAttribute("RH", x2String(myReal->RH));
}

void OMAnimatedCMS_b::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case CMS_b::state_0:
        {
            state_0_serializeStates(aomsState);
        }
        break;
        case CMS_b::state_1:
        {
            state_1_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedCMS_b::state_1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_1");
}

void OMAnimatedCMS_b::state_0_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.state_0");
}
//#]

IMPLEMENT_REACTIVE_META_P(CMS_b, Default, Default, false, OMAnimatedCMS_b)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CMS_b.cpp
*********************************************************************/
