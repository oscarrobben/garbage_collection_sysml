/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Stakeholders
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Stakeholders.h
*********************************************************************/

#ifndef Stakeholders_H
#define Stakeholders_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## classInstance itsGarbage_Truck_Driver
#include "Garbage_Truck_Driver.h"
//## link itsEnvironmental_Organisations
class Environmental_Organisations;

//## link itsMaintenance_Staff
class Maintenance_Staff;

//## link itsMunicipality
class Municipality;

//## link itsResident_Citizen_User
class Resident_Citizen_User;

//## link itsTechnology_Providers
class Technology_Providers;

//## link itsWaste_Processing_Company
class Waste_Processing_Company;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class Stakeholders
class Stakeholders {
#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStakeholders;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Stakeholders();
    
    //## auto_generated
    ~Stakeholders();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Environmental_Organisations* getItsEnvironmental_Organisations() const;
    
    //## auto_generated
    void setItsEnvironmental_Organisations(Environmental_Organisations* p_Environmental_Organisations);
    
    //## auto_generated
    Garbage_Truck_Driver* getItsGarbage_Truck_Driver() const;
    
    //## auto_generated
    Garbage_Truck_Driver* getItsGarbage_Truck_Driver_1() const;
    
    //## auto_generated
    void setItsGarbage_Truck_Driver_1(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    Maintenance_Staff* getItsMaintenance_Staff() const;
    
    //## auto_generated
    void setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff);
    
    //## auto_generated
    Municipality* getItsMunicipality() const;
    
    //## auto_generated
    void setItsMunicipality(Municipality* p_Municipality);
    
    //## auto_generated
    Resident_Citizen_User* getItsResident_Citizen_User() const;
    
    //## auto_generated
    void setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    Technology_Providers* getItsTechnology_Providers() const;
    
    //## auto_generated
    void setItsTechnology_Providers(Technology_Providers* p_Technology_Providers);
    
    //## auto_generated
    Waste_Processing_Company* getItsWaste_Processing_Company() const;
    
    //## auto_generated
    void setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Environmental_Organisations* itsEnvironmental_Organisations;		//## link itsEnvironmental_Organisations
    
    Garbage_Truck_Driver itsGarbage_Truck_Driver;		//## classInstance itsGarbage_Truck_Driver
    
    Garbage_Truck_Driver* itsGarbage_Truck_Driver_1;		//## link itsGarbage_Truck_Driver_1
    
    Maintenance_Staff* itsMaintenance_Staff;		//## link itsMaintenance_Staff
    
    Municipality* itsMunicipality;		//## link itsMunicipality
    
    Resident_Citizen_User* itsResident_Citizen_User;		//## link itsResident_Citizen_User
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    Technology_Providers* itsTechnology_Providers;		//## link itsTechnology_Providers
    
    Waste_Processing_Company* itsWaste_Processing_Company;		//## link itsWaste_Processing_Company
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsEnvironmental_Organisations(Environmental_Organisations* p_Environmental_Organisations);
    
    //## auto_generated
    void _setItsEnvironmental_Organisations(Environmental_Organisations* p_Environmental_Organisations);
    
    //## auto_generated
    void _clearItsEnvironmental_Organisations();
    
    //## auto_generated
    void __setItsGarbage_Truck_Driver_1(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void _setItsGarbage_Truck_Driver_1(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void _clearItsGarbage_Truck_Driver_1();
    
    //## auto_generated
    void __setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff);
    
    //## auto_generated
    void _setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff);
    
    //## auto_generated
    void _clearItsMaintenance_Staff();
    
    //## auto_generated
    void __setItsMunicipality(Municipality* p_Municipality);
    
    //## auto_generated
    void _setItsMunicipality(Municipality* p_Municipality);
    
    //## auto_generated
    void _clearItsMunicipality();
    
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
    
    //## auto_generated
    void __setItsTechnology_Providers(Technology_Providers* p_Technology_Providers);
    
    //## auto_generated
    void _setItsTechnology_Providers(Technology_Providers* p_Technology_Providers);
    
    //## auto_generated
    void _clearItsTechnology_Providers();
    
    //## auto_generated
    void __setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company);
    
    //## auto_generated
    void _setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company);
    
    //## auto_generated
    void _clearItsWaste_Processing_Company();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStakeholders : virtual public AOMInstance {
    DECLARE_META(Stakeholders, OMAnimatedStakeholders)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Stakeholders.h
*********************************************************************/
