/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: cms_inst
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\cms_inst.h
*********************************************************************/

#ifndef cms_inst_H
#define cms_inst_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## class cms_inst
#include "cms.h"
//## auto_generated
class bin;

//## auto_generated
class server_C;

//## auto_generated
class smart_garbage_collection_system;

//## auto_generated
class truck;

//## package Default

//## class cms_inst
class cms_inst : public OMReactive, public cms {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcms_inst;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    cms_inst(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~cms_inst();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // main_behavior:
    //## statechart_method
    inline bool main_behavior_IN() const;
    
    //## statechart_method
    void main_behavior_entDef();
    
    // wait:
    //## statechart_method
    inline bool wait_IN() const;
    
    // dispatchTruck:
    //## statechart_method
    inline bool dispatchTruck_IN() const;
    
    // bin_emptied:
    //## statechart_method
    inline bool bin_emptied_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum cms_inst_Enum {
        OMNonState = 0,
        main_behavior = 1,
        wait = 2,
        dispatchTruck = 3,
        bin_emptied = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int main_behavior_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcms_inst : public OMAnimatedcms {
    DECLARE_REACTIVE_META(cms_inst, OMAnimatedcms_inst)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void main_behavior_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void wait_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void dispatchTruck_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void bin_emptied_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool cms_inst::rootState_IN() const {
    return true;
}

inline bool cms_inst::main_behavior_IN() const {
    return rootState_subState == main_behavior;
}

inline bool cms_inst::wait_IN() const {
    return main_behavior_subState == wait;
}

inline bool cms_inst::dispatchTruck_IN() const {
    return main_behavior_subState == dispatchTruck;
}

inline bool cms_inst::bin_emptied_IN() const {
    return main_behavior_subState == bin_emptied;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\cms_inst.h
*********************************************************************/
