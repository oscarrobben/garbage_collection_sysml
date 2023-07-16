/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CMS_b
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\CMS_b.h
*********************************************************************/

#ifndef CMS_b_H
#define CMS_b_H

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
//## package Default

//## class CMS_b
class CMS_b : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCMS_b;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CMS_b(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    virtual ~CMS_b();
    
    ////    Operations    ////
    
    //## operation test()
    virtual void test();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getRH() const;
    
    //## auto_generated
    void setRH(int p_RH);
    
    //## auto_generated
    int getFillLevel() const;
    
    //## auto_generated
    void setFillLevel(int p_fillLevel);
    
    //## auto_generated
    int getTemp() const;
    
    //## auto_generated
    void setTemp(int p_temp);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int RH;		//## attribute RH
    
    int fillLevel;		//## attribute fillLevel
    
    int temp;		//## attribute temp
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // state_1:
    //## statechart_method
    inline bool state_1_IN() const;
    
    // state_0:
    //## statechart_method
    inline bool state_0_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum CMS_b_Enum {
        OMNonState = 0,
        state_1 = 1,
        state_0 = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCMS_b : virtual public AOMInstance {
    DECLARE_REACTIVE_META(CMS_b, OMAnimatedCMS_b)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_0_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool CMS_b::rootState_IN() const {
    return true;
}

inline bool CMS_b::state_1_IN() const {
    return rootState_subState == state_1;
}

inline bool CMS_b::state_0_IN() const {
    return rootState_subState == state_0;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CMS_b.h
*********************************************************************/
