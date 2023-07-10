/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: smartbin
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\smartbin.h
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
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
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
    ////    Constructors and destructors    ////
    
public :

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
    
    //## auto_generated
    int getFillLevel() const;
    
    //## auto_generated
    void setFillLevel(int p_fillLevel);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    int fillLevel;		//## attribute fillLevel
    
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
    
    // state_5:
    //## statechart_method
    inline bool state_5_IN() const;
    
    // not_used:
    //## statechart_method
    inline bool not_used_IN() const;

protected :

//#[ ignore
    enum smartbin_Enum {
        OMNonState = 0,
        not_full = 1,
        state_5 = 2,
        not_used = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int not_full_subState;
//#]
};

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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\smartbin.h
*********************************************************************/
