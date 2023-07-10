/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: cms_inst
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\cms_inst.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "cms_inst.h"
//## auto_generated
#include "bin.h"
//## auto_generated
#include "server.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//## auto_generated
#include "truck.h"
//#[ ignore
#define Default_cms_inst_cms_inst_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class cms_inst
cms_inst::cms_inst(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(cms_inst, cms_inst(), 0, Default_cms_inst_cms_inst_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

cms_inst::~cms_inst() {
    NOTIFY_DESTRUCTOR(~cms_inst, false);
}

bool cms_inst::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void cms_inst::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    main_behavior_subState = OMNonState;
}

void cms_inst::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        main_behavior_entDef();
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus cms_inst::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State dispatchTruck
        case dispatchTruck:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.main_behavior.dispatchTruck");
                    NOTIFY_STATE_ENTERED("ROOT.main_behavior.bin_emptied");
                    pushNullTransition();
                    main_behavior_subState = bin_emptied;
                    rootState_active = bin_emptied;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State bin_emptied
        case bin_emptied:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.main_behavior.bin_emptied");
                    NOTIFY_STATE_ENTERED("ROOT.main_behavior.wait");
                    pushNullTransition();
                    main_behavior_subState = wait;
                    rootState_active = wait;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State wait
        case wait:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.main_behavior.wait");
                    NOTIFY_STATE_ENTERED("ROOT.main_behavior.dispatchTruck");
                    pushNullTransition();
                    main_behavior_subState = dispatchTruck;
                    rootState_active = dispatchTruck;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        default:
            break;
    }
    return res;
}

void cms_inst::main_behavior_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.main_behavior");
    rootState_subState = main_behavior;
    NOTIFY_TRANSITION_STARTED("1");
    NOTIFY_STATE_ENTERED("ROOT.main_behavior.wait");
    pushNullTransition();
    main_behavior_subState = wait;
    rootState_active = wait;
    NOTIFY_TRANSITION_TERMINATED("1");
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedcms_inst::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedcms::serializeAttributes(aomsAttributes);
}

void OMAnimatedcms_inst::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedcms::serializeRelations(aomsRelations);
}

void OMAnimatedcms_inst::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == cms_inst::main_behavior)
        {
            main_behavior_serializeStates(aomsState);
        }
}

void OMAnimatedcms_inst::main_behavior_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.main_behavior");
    switch (myReal->main_behavior_subState) {
        case cms_inst::dispatchTruck:
        {
            dispatchTruck_serializeStates(aomsState);
        }
        break;
        case cms_inst::bin_emptied:
        {
            bin_emptied_serializeStates(aomsState);
        }
        break;
        case cms_inst::wait:
        {
            wait_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedcms_inst::wait_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.main_behavior.wait");
}

void OMAnimatedcms_inst::dispatchTruck_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.main_behavior.dispatchTruck");
}

void OMAnimatedcms_inst::bin_emptied_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.main_behavior.bin_emptied");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(cms_inst, Default, false, cms, OMAnimatedcms, OMAnimatedcms_inst)

OMINIT_SUPERCLASS(cms, OMAnimatedcms)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\cms_inst.cpp
*********************************************************************/
