/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: cms_inst
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\cms_inst.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
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
//## package Default

//## class cms_inst
cms_inst::cms_inst(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

cms_inst::~cms_inst() {
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
        main_behavior_entDef();
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
                    popNullTransition();
                    pushNullTransition();
                    main_behavior_subState = bin_emptied;
                    rootState_active = bin_emptied;
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State bin_emptied
        case bin_emptied:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    main_behavior_subState = wait;
                    rootState_active = wait;
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State wait
        case wait:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    popNullTransition();
                    pushNullTransition();
                    main_behavior_subState = dispatchTruck;
                    rootState_active = dispatchTruck;
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
    rootState_subState = main_behavior;
    pushNullTransition();
    main_behavior_subState = wait;
    rootState_active = wait;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\cms_inst.cpp
*********************************************************************/
