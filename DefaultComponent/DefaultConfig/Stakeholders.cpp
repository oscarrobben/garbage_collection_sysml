/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Stakeholders
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Stakeholders.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Stakeholders.h"
//## link itsEnvironmental_Organisations
#include "Environmental_Organisations.h"
//## link itsMaintenance_Staff
#include "Maintenance_Staff.h"
//## link itsMunicipality
#include "Municipality.h"
//## link itsResident_Citizen_User
#include "Resident_Citizen_User.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## link itsTechnology_Providers
#include "Technology_Providers.h"
//## link itsWaste_Processing_Company
#include "Waste_Processing_Company.h"
//#[ ignore
#define Default_Stakeholders_Stakeholders_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Stakeholders
Stakeholders::Stakeholders() {
    NOTIFY_CONSTRUCTOR(Stakeholders, Stakeholders(), 0, Default_Stakeholders_Stakeholders_SERIALIZE);
    itsEnvironmental_Organisations = NULL;
    itsGarbage_Truck_Driver_1 = NULL;
    itsMaintenance_Staff = NULL;
    itsMunicipality = NULL;
    itsResident_Citizen_User = NULL;
    itsSmart_garbage_collection_system = NULL;
    itsTechnology_Providers = NULL;
    itsWaste_Processing_Company = NULL;
}

Stakeholders::~Stakeholders() {
    NOTIFY_DESTRUCTOR(~Stakeholders, true);
    cleanUpRelations();
}

Environmental_Organisations* Stakeholders::getItsEnvironmental_Organisations() const {
    return itsEnvironmental_Organisations;
}

void Stakeholders::setItsEnvironmental_Organisations(Environmental_Organisations* p_Environmental_Organisations) {
    if(p_Environmental_Organisations != NULL)
        {
            p_Environmental_Organisations->_setItsStakeholders(this);
        }
    _setItsEnvironmental_Organisations(p_Environmental_Organisations);
}

Garbage_Truck_Driver* Stakeholders::getItsGarbage_Truck_Driver() const {
    return (Garbage_Truck_Driver*) &itsGarbage_Truck_Driver;
}

Garbage_Truck_Driver* Stakeholders::getItsGarbage_Truck_Driver_1() const {
    return itsGarbage_Truck_Driver_1;
}

void Stakeholders::setItsGarbage_Truck_Driver_1(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    if(p_Garbage_Truck_Driver != NULL)
        {
            p_Garbage_Truck_Driver->_setItsStakeholders(this);
        }
    _setItsGarbage_Truck_Driver_1(p_Garbage_Truck_Driver);
}

Maintenance_Staff* Stakeholders::getItsMaintenance_Staff() const {
    return itsMaintenance_Staff;
}

void Stakeholders::setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff) {
    if(p_Maintenance_Staff != NULL)
        {
            p_Maintenance_Staff->_setItsStakeholders(this);
        }
    _setItsMaintenance_Staff(p_Maintenance_Staff);
}

Municipality* Stakeholders::getItsMunicipality() const {
    return itsMunicipality;
}

void Stakeholders::setItsMunicipality(Municipality* p_Municipality) {
    if(p_Municipality != NULL)
        {
            p_Municipality->_setItsStakeholders(this);
        }
    _setItsMunicipality(p_Municipality);
}

Resident_Citizen_User* Stakeholders::getItsResident_Citizen_User() const {
    return itsResident_Citizen_User;
}

void Stakeholders::setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(p_Resident_Citizen_User != NULL)
        {
            p_Resident_Citizen_User->_setItsStakeholders(this);
        }
    _setItsResident_Citizen_User(p_Resident_Citizen_User);
}

smart_garbage_collection_system* Stakeholders::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void Stakeholders::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsStakeholders(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

Technology_Providers* Stakeholders::getItsTechnology_Providers() const {
    return itsTechnology_Providers;
}

void Stakeholders::setItsTechnology_Providers(Technology_Providers* p_Technology_Providers) {
    if(p_Technology_Providers != NULL)
        {
            p_Technology_Providers->_setItsStakeholders(this);
        }
    _setItsTechnology_Providers(p_Technology_Providers);
}

Waste_Processing_Company* Stakeholders::getItsWaste_Processing_Company() const {
    return itsWaste_Processing_Company;
}

void Stakeholders::setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company) {
    if(p_Waste_Processing_Company != NULL)
        {
            p_Waste_Processing_Company->_setItsStakeholders(this);
        }
    _setItsWaste_Processing_Company(p_Waste_Processing_Company);
}

void Stakeholders::cleanUpRelations() {
    if(itsEnvironmental_Organisations != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironmental_Organisations");
            Stakeholders* p_Stakeholders = itsEnvironmental_Organisations->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsEnvironmental_Organisations->__setItsStakeholders(NULL);
                }
            itsEnvironmental_Organisations = NULL;
        }
    if(itsGarbage_Truck_Driver_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGarbage_Truck_Driver_1");
            Stakeholders* p_Stakeholders = itsGarbage_Truck_Driver_1->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsGarbage_Truck_Driver_1->__setItsStakeholders(NULL);
                }
            itsGarbage_Truck_Driver_1 = NULL;
        }
    if(itsMaintenance_Staff != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMaintenance_Staff");
            Stakeholders* p_Stakeholders = itsMaintenance_Staff->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsMaintenance_Staff->__setItsStakeholders(NULL);
                }
            itsMaintenance_Staff = NULL;
        }
    if(itsMunicipality != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMunicipality");
            Stakeholders* p_Stakeholders = itsMunicipality->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsMunicipality->__setItsStakeholders(NULL);
                }
            itsMunicipality = NULL;
        }
    if(itsResident_Citizen_User != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResident_Citizen_User");
            Stakeholders* p_Stakeholders = itsResident_Citizen_User->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsResident_Citizen_User->__setItsStakeholders(NULL);
                }
            itsResident_Citizen_User = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            Stakeholders* p_Stakeholders = itsSmart_garbage_collection_system->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsStakeholders(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
    if(itsTechnology_Providers != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTechnology_Providers");
            Stakeholders* p_Stakeholders = itsTechnology_Providers->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsTechnology_Providers->__setItsStakeholders(NULL);
                }
            itsTechnology_Providers = NULL;
        }
    if(itsWaste_Processing_Company != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWaste_Processing_Company");
            Stakeholders* p_Stakeholders = itsWaste_Processing_Company->getItsStakeholders();
            if(p_Stakeholders != NULL)
                {
                    itsWaste_Processing_Company->__setItsStakeholders(NULL);
                }
            itsWaste_Processing_Company = NULL;
        }
}

void Stakeholders::__setItsEnvironmental_Organisations(Environmental_Organisations* p_Environmental_Organisations) {
    itsEnvironmental_Organisations = p_Environmental_Organisations;
    if(p_Environmental_Organisations != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnvironmental_Organisations", p_Environmental_Organisations, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnvironmental_Organisations");
        }
}

void Stakeholders::_setItsEnvironmental_Organisations(Environmental_Organisations* p_Environmental_Organisations) {
    if(itsEnvironmental_Organisations != NULL)
        {
            itsEnvironmental_Organisations->__setItsStakeholders(NULL);
        }
    __setItsEnvironmental_Organisations(p_Environmental_Organisations);
}

void Stakeholders::_clearItsEnvironmental_Organisations() {
    NOTIFY_RELATION_CLEARED("itsEnvironmental_Organisations");
    itsEnvironmental_Organisations = NULL;
}

void Stakeholders::__setItsGarbage_Truck_Driver_1(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    itsGarbage_Truck_Driver_1 = p_Garbage_Truck_Driver;
    if(p_Garbage_Truck_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGarbage_Truck_Driver_1", p_Garbage_Truck_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGarbage_Truck_Driver_1");
        }
}

void Stakeholders::_setItsGarbage_Truck_Driver_1(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    if(itsGarbage_Truck_Driver_1 != NULL)
        {
            itsGarbage_Truck_Driver_1->__setItsStakeholders(NULL);
        }
    __setItsGarbage_Truck_Driver_1(p_Garbage_Truck_Driver);
}

void Stakeholders::_clearItsGarbage_Truck_Driver_1() {
    NOTIFY_RELATION_CLEARED("itsGarbage_Truck_Driver_1");
    itsGarbage_Truck_Driver_1 = NULL;
}

void Stakeholders::__setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff) {
    itsMaintenance_Staff = p_Maintenance_Staff;
    if(p_Maintenance_Staff != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMaintenance_Staff", p_Maintenance_Staff, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMaintenance_Staff");
        }
}

void Stakeholders::_setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff) {
    if(itsMaintenance_Staff != NULL)
        {
            itsMaintenance_Staff->__setItsStakeholders(NULL);
        }
    __setItsMaintenance_Staff(p_Maintenance_Staff);
}

void Stakeholders::_clearItsMaintenance_Staff() {
    NOTIFY_RELATION_CLEARED("itsMaintenance_Staff");
    itsMaintenance_Staff = NULL;
}

void Stakeholders::__setItsMunicipality(Municipality* p_Municipality) {
    itsMunicipality = p_Municipality;
    if(p_Municipality != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMunicipality", p_Municipality, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMunicipality");
        }
}

void Stakeholders::_setItsMunicipality(Municipality* p_Municipality) {
    if(itsMunicipality != NULL)
        {
            itsMunicipality->__setItsStakeholders(NULL);
        }
    __setItsMunicipality(p_Municipality);
}

void Stakeholders::_clearItsMunicipality() {
    NOTIFY_RELATION_CLEARED("itsMunicipality");
    itsMunicipality = NULL;
}

void Stakeholders::__setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    itsResident_Citizen_User = p_Resident_Citizen_User;
    if(p_Resident_Citizen_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResident_Citizen_User", p_Resident_Citizen_User, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResident_Citizen_User");
        }
}

void Stakeholders::_setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(itsResident_Citizen_User != NULL)
        {
            itsResident_Citizen_User->__setItsStakeholders(NULL);
        }
    __setItsResident_Citizen_User(p_Resident_Citizen_User);
}

void Stakeholders::_clearItsResident_Citizen_User() {
    NOTIFY_RELATION_CLEARED("itsResident_Citizen_User");
    itsResident_Citizen_User = NULL;
}

void Stakeholders::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    itsSmart_garbage_collection_system = p_smart_garbage_collection_system;
    if(p_smart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmart_garbage_collection_system", p_smart_garbage_collection_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
        }
}

void Stakeholders::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsStakeholders(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void Stakeholders::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

void Stakeholders::__setItsTechnology_Providers(Technology_Providers* p_Technology_Providers) {
    itsTechnology_Providers = p_Technology_Providers;
    if(p_Technology_Providers != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTechnology_Providers", p_Technology_Providers, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTechnology_Providers");
        }
}

void Stakeholders::_setItsTechnology_Providers(Technology_Providers* p_Technology_Providers) {
    if(itsTechnology_Providers != NULL)
        {
            itsTechnology_Providers->__setItsStakeholders(NULL);
        }
    __setItsTechnology_Providers(p_Technology_Providers);
}

void Stakeholders::_clearItsTechnology_Providers() {
    NOTIFY_RELATION_CLEARED("itsTechnology_Providers");
    itsTechnology_Providers = NULL;
}

void Stakeholders::__setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company) {
    itsWaste_Processing_Company = p_Waste_Processing_Company;
    if(p_Waste_Processing_Company != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWaste_Processing_Company", p_Waste_Processing_Company, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWaste_Processing_Company");
        }
}

void Stakeholders::_setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company) {
    if(itsWaste_Processing_Company != NULL)
        {
            itsWaste_Processing_Company->__setItsStakeholders(NULL);
        }
    __setItsWaste_Processing_Company(p_Waste_Processing_Company);
}

void Stakeholders::_clearItsWaste_Processing_Company() {
    NOTIFY_RELATION_CLEARED("itsWaste_Processing_Company");
    itsWaste_Processing_Company = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStakeholders::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsWaste_Processing_Company", false, true);
    if(myReal->itsWaste_Processing_Company)
        {
            aomsRelations->ADD_ITEM(myReal->itsWaste_Processing_Company);
        }
    aomsRelations->addRelation("itsMunicipality", false, true);
    if(myReal->itsMunicipality)
        {
            aomsRelations->ADD_ITEM(myReal->itsMunicipality);
        }
    aomsRelations->addRelation("itsGarbage_Truck_Driver", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsGarbage_Truck_Driver);
    aomsRelations->addRelation("itsResident_Citizen_User", false, true);
    if(myReal->itsResident_Citizen_User)
        {
            aomsRelations->ADD_ITEM(myReal->itsResident_Citizen_User);
        }
    aomsRelations->addRelation("itsMaintenance_Staff", false, true);
    if(myReal->itsMaintenance_Staff)
        {
            aomsRelations->ADD_ITEM(myReal->itsMaintenance_Staff);
        }
    aomsRelations->addRelation("itsTechnology_Providers", false, true);
    if(myReal->itsTechnology_Providers)
        {
            aomsRelations->ADD_ITEM(myReal->itsTechnology_Providers);
        }
    aomsRelations->addRelation("itsEnvironmental_Organisations", false, true);
    if(myReal->itsEnvironmental_Organisations)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironmental_Organisations);
        }
    aomsRelations->addRelation("itsGarbage_Truck_Driver_1", false, true);
    if(myReal->itsGarbage_Truck_Driver_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsGarbage_Truck_Driver_1);
        }
}
//#]

IMPLEMENT_META_P(Stakeholders, Default, Default, false, OMAnimatedStakeholders)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Stakeholders.cpp
*********************************************************************/
