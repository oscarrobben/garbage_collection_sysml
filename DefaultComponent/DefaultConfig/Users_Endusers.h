/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Users_Endusers
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Users_Endusers.h
*********************************************************************/

#ifndef Users_Endusers_H
#define Users_Endusers_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsGarbage_Truck_Driver
class Garbage_Truck_Driver;

//## link itsMaintenance_Staff
class Maintenance_Staff;

//## link itsResident_Citizen_User
class Resident_Citizen_User;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class Users_Endusers
class Users_Endusers {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUsers_Endusers;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Users_Endusers();
    
    //## auto_generated
    ~Users_Endusers();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Garbage_Truck_Driver* getItsGarbage_Truck_Driver() const;
    
    //## auto_generated
    void setItsGarbage_Truck_Driver(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    Maintenance_Staff* getItsMaintenance_Staff() const;
    
    //## auto_generated
    void setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff);
    
    //## auto_generated
    Resident_Citizen_User* getItsResident_Citizen_User() const;
    
    //## auto_generated
    void setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Garbage_Truck_Driver* itsGarbage_Truck_Driver;		//## link itsGarbage_Truck_Driver
    
    Maintenance_Staff* itsMaintenance_Staff;		//## link itsMaintenance_Staff
    
    Resident_Citizen_User* itsResident_Citizen_User;		//## link itsResident_Citizen_User
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsGarbage_Truck_Driver(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void _setItsGarbage_Truck_Driver(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void _clearItsGarbage_Truck_Driver();
    
    //## auto_generated
    void __setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff);
    
    //## auto_generated
    void _setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff);
    
    //## auto_generated
    void _clearItsMaintenance_Staff();
    
    //## auto_generated
    void __setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void _setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void _clearItsResident_Citizen_User();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUsers_Endusers : virtual public AOMInstance {
    DECLARE_META(Users_Endusers, OMAnimatedUsers_Endusers)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Users_Endusers.h
*********************************************************************/
