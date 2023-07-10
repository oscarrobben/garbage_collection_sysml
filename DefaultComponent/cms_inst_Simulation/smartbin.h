/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: smartbin
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\smartbin.h
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
    bool getEmptyBin() const;
    
    //## auto_generated
    void setEmptyBin(bool p_emptyBin);
    
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
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    bool emptyBin;		//## attribute emptyBin
    
    bool emptyReq;		//## attribute emptyReq
    
    int fillLevel;		//## attribute fillLevel
    
    int flowproperty_16;		//## attribute flowproperty_16
    
//#[ ignore
    p_smartbin_C p_smartbin;
//#]

    Resident_Citizen_User* itsResident_Citizen_User;		//## link itsResident_Citizen_User

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
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
    
    // not_used:
    //## statechart_method
    inline bool not_used_IN() const;
    
    // full:
    //## statechart_method
    inline bool full_IN() const;

protected :

//#[ ignore
    enum smartbin_Enum {
        OMNonState = 0,
        not_full = 1,
        state_5 = 2,
        not_used = 3,
        full = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
    
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
    void not_full_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void not_used_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void full_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool smartbin::rootState_IN() const {
    return true;
}

inline bool smartbin::not_full_IN() const {
    return rootState_subState == not_full;
}

inline bool smartbin::state_5_IN() const {
    return not_full_subState == state_5;
}

inline bool smartbin::not_used_IN() const {
    return not_full_subState == not_used;
}

inline bool smartbin::full_IN() const {
    return rootState_subState == full;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\smartbin.h
*********************************************************************/
