/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: smartbin
//!	Generated Date	: Sun, 9, Jul 2023  
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
//## link itsResident_Citizen_User
class Resident_Citizen_User;

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

//## package Default

//## class smartbin
class smartbin : public bin {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    smartbin();
    
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
    
    Resident_Citizen_User* itsResident_Citizen_User;		//## link itsResident_Citizen_User
    
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
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\smartbin.h
*********************************************************************/
