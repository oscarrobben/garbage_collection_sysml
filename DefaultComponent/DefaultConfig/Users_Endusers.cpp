/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Users_Endusers
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Users_Endusers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Users_Endusers.h"
//## link itsGarbage_Truck_Driver
#include "Garbage_Truck_Driver.h"
//## link itsMaintenance_Staff
#include "Maintenance_Staff.h"
//## link itsResident_Citizen_User
#include "Resident_Citizen_User.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_Users_Endusers_Users_Endusers_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Users_Endusers
Users_Endusers::Users_Endusers() {
    NOTIFY_CONSTRUCTOR(Users_Endusers, Users_Endusers(), 0, Default_Users_Endusers_Users_Endusers_SERIALIZE);
    itsGarbage_Truck_Driver = NULL;
    itsMaintenance_Staff = NULL;
    itsResident_Citizen_User = NULL;
    itsSmart_garbage_collection_system = NULL;
}

Users_Endusers::~Users_Endusers() {
    NOTIFY_DESTRUCTOR(~Users_Endusers, true);
    cleanUpRelations();
}

Garbage_Truck_Driver* Users_Endusers::getItsGarbage_Truck_Driver() const {
    return itsGarbage_Truck_Driver;
}

void Users_Endusers::setItsGarbage_Truck_Driver(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    if(p_Garbage_Truck_Driver != NULL)
        {
            p_Garbage_Truck_Driver->_setItsUsers_Endusers(this);
        }
    _setItsGarbage_Truck_Driver(p_Garbage_Truck_Driver);
}

Maintenance_Staff* Users_Endusers::getItsMaintenance_Staff() const {
    return itsMaintenance_Staff;
}

void Users_Endusers::setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff) {
    if(p_Maintenance_Staff != NULL)
        {
            p_Maintenance_Staff->_setItsUsers_Endusers(this);
        }
    _setItsMaintenance_Staff(p_Maintenance_Staff);
}

Resident_Citizen_User* Users_Endusers::getItsResident_Citizen_User() const {
    return itsResident_Citizen_User;
}

void Users_Endusers::setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(p_Resident_Citizen_User != NULL)
        {
            p_Resident_Citizen_User->_setItsUsers_Endusers(this);
        }
    _setItsResident_Citizen_User(p_Resident_Citizen_User);
}

smart_garbage_collection_system* Users_Endusers::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void Users_Endusers::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsUsers_Endusers(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void Users_Endusers::cleanUpRelations() {
    if(itsGarbage_Truck_Driver != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsGarbage_Truck_Driver");
            Users_Endusers* p_Users_Endusers = itsGarbage_Truck_Driver->getItsUsers_Endusers();
            if(p_Users_Endusers != NULL)
                {
                    itsGarbage_Truck_Driver->__setItsUsers_Endusers(NULL);
                }
            itsGarbage_Truck_Driver = NULL;
        }
    if(itsMaintenance_Staff != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMaintenance_Staff");
            Users_Endusers* p_Users_Endusers = itsMaintenance_Staff->getItsUsers_Endusers();
            if(p_Users_Endusers != NULL)
                {
                    itsMaintenance_Staff->__setItsUsers_Endusers(NULL);
                }
            itsMaintenance_Staff = NULL;
        }
    if(itsResident_Citizen_User != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResident_Citizen_User");
            Users_Endusers* p_Users_Endusers = itsResident_Citizen_User->getItsUsers_Endusers();
            if(p_Users_Endusers != NULL)
                {
                    itsResident_Citizen_User->__setItsUsers_Endusers(NULL);
                }
            itsResident_Citizen_User = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            Users_Endusers* p_Users_Endusers = itsSmart_garbage_collection_system->getItsUsers_Endusers();
            if(p_Users_Endusers != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsUsers_Endusers(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
}

void Users_Endusers::__setItsGarbage_Truck_Driver(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    itsGarbage_Truck_Driver = p_Garbage_Truck_Driver;
    if(p_Garbage_Truck_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsGarbage_Truck_Driver", p_Garbage_Truck_Driver, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsGarbage_Truck_Driver");
        }
}

void Users_Endusers::_setItsGarbage_Truck_Driver(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    if(itsGarbage_Truck_Driver != NULL)
        {
            itsGarbage_Truck_Driver->__setItsUsers_Endusers(NULL);
        }
    __setItsGarbage_Truck_Driver(p_Garbage_Truck_Driver);
}

void Users_Endusers::_clearItsGarbage_Truck_Driver() {
    NOTIFY_RELATION_CLEARED("itsGarbage_Truck_Driver");
    itsGarbage_Truck_Driver = NULL;
}

void Users_Endusers::__setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff) {
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

void Users_Endusers::_setItsMaintenance_Staff(Maintenance_Staff* p_Maintenance_Staff) {
    if(itsMaintenance_Staff != NULL)
        {
            itsMaintenance_Staff->__setItsUsers_Endusers(NULL);
        }
    __setItsMaintenance_Staff(p_Maintenance_Staff);
}

void Users_Endusers::_clearItsMaintenance_Staff() {
    NOTIFY_RELATION_CLEARED("itsMaintenance_Staff");
    itsMaintenance_Staff = NULL;
}

void Users_Endusers::__setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
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

void Users_Endusers::_setItsResident_Citizen_User(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(itsResident_Citizen_User != NULL)
        {
            itsResident_Citizen_User->__setItsUsers_Endusers(NULL);
        }
    __setItsResident_Citizen_User(p_Resident_Citizen_User);
}

void Users_Endusers::_clearItsResident_Citizen_User() {
    NOTIFY_RELATION_CLEARED("itsResident_Citizen_User");
    itsResident_Citizen_User = NULL;
}

void Users_Endusers::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void Users_Endusers::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsUsers_Endusers(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void Users_Endusers::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUsers_Endusers::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsGarbage_Truck_Driver", false, true);
    if(myReal->itsGarbage_Truck_Driver)
        {
            aomsRelations->ADD_ITEM(myReal->itsGarbage_Truck_Driver);
        }
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
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
}
//#]

IMPLEMENT_META_P(Users_Endusers, Default, Default, false, OMAnimatedUsers_Endusers)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Users_Endusers.cpp
*********************************************************************/
