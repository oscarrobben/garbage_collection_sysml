/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: truck
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\truck.h
*********************************************************************/

#ifndef truck_H
#define truck_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omcollec.h>
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
//## link itsCms
class cms;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## link itsSmartbin
class smartbin;

//## link is_serviced_by
class Garbage_Truck_Driver;

//## package Default

//## class truck
class truck : public OMReactive {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedtruck;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    truck(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~truck();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<Garbage_Truck_Driver*> getIs_serviced_by() const;
    
    //## auto_generated
    void addIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void removeIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void clearIs_serviced_by();
    
    //## auto_generated
    cms* getItsCms() const;
    
    //## auto_generated
    void setItsCms(cms* p_cms);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    cms* itsCms;		//## link itsCms
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void _removeIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void _clearIs_serviced_by();
    
    //## auto_generated
    void __setItsCms(cms* p_cms);
    
    //## auto_generated
    void _setItsCms(cms* p_cms);
    
    //## auto_generated
    void _clearItsCms();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
    
    //## auto_generated
    smartbin* getItsSmartbin() const;
    
    //## auto_generated
    void setItsSmartbin(smartbin* p_smartbin);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    OMCollection<Garbage_Truck_Driver*> is_serviced_by;		//## link is_serviced_by
    
    smartbin* itsSmartbin;		//## link itsSmartbin

public :

    //## auto_generated
    void __setItsSmartbin(smartbin* p_smartbin);
    
    //## auto_generated
    void _setItsSmartbin(smartbin* p_smartbin);
    
    //## auto_generated
    void _clearItsSmartbin();
    
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

protected :

//#[ ignore
    enum truck_Enum {
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
class OMAnimatedtruck : virtual public AOMInstance {
    DECLARE_REACTIVE_META(truck, OMAnimatedtruck)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_0_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool truck::rootState_IN() const {
    return true;
}

inline bool truck::state_1_IN() const {
    return rootState_subState == state_1;
}

inline bool truck::state_0_IN() const {
    return rootState_subState == state_0;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\truck.h
*********************************************************************/
