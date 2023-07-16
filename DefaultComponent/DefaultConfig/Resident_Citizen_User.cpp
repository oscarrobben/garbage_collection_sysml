/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Resident_Citizen_User
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Resident_Citizen_User.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Resident_Citizen_User.h"
//## link uses
#include "App.h"
//## link used_by
#include "smart_garbage_collection_system.h"
//## link itsSmartbin
#include "smartbin.h"
//## link itsStakeholders
#include "Stakeholders.h"
//## link itsUsers_Endusers
#include "Users_Endusers.h"
//#[ ignore
#define ActorPkg_Resident_Citizen_User_Resident_Citizen_User_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Resident_Citizen_User
Resident_Citizen_User::Resident_Citizen_User() {
    NOTIFY_CONSTRUCTOR(Resident_Citizen_User, Resident_Citizen_User(), 0, ActorPkg_Resident_Citizen_User_Resident_Citizen_User_SERIALIZE);
    itsSmartbin = NULL;
    itsStakeholders = NULL;
    itsUsers_Endusers = NULL;
    used_by = NULL;
    uses = NULL;
}

Resident_Citizen_User::~Resident_Citizen_User() {
    NOTIFY_DESTRUCTOR(~Resident_Citizen_User, true);
    cleanUpRelations();
}

smartbin* Resident_Citizen_User::getItsSmartbin() const {
    return itsSmartbin;
}

void Resident_Citizen_User::setItsSmartbin(smartbin* p_smartbin) {
    if(p_smartbin != NULL)
        {
            p_smartbin->_setItsResident_Citizen_User(this);
        }
    _setItsSmartbin(p_smartbin);
}

Stakeholders* Resident_Citizen_User::getItsStakeholders() const {
    return itsStakeholders;
}

void Resident_Citizen_User::setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(p_Stakeholders != NULL)
        {
            p_Stakeholders->_setItsResident_Citizen_User(this);
        }
    _setItsStakeholders(p_Stakeholders);
}

Users_Endusers* Resident_Citizen_User::getItsUsers_Endusers() const {
    return itsUsers_Endusers;
}

void Resident_Citizen_User::setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    if(p_Users_Endusers != NULL)
        {
            p_Users_Endusers->_setItsResident_Citizen_User(this);
        }
    _setItsUsers_Endusers(p_Users_Endusers);
}

smart_garbage_collection_system* Resident_Citizen_User::getUsed_by() const {
    return used_by;
}

void Resident_Citizen_User::setUsed_by(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setUses(this);
        }
    _setUsed_by(p_smart_garbage_collection_system);
}

App* Resident_Citizen_User::getUses() const {
    return uses;
}

void Resident_Citizen_User::setUses(App* p_App) {
    if(p_App != NULL)
        {
            p_App->_addProvides(this);
        }
    _setUses(p_App);
}

void Resident_Citizen_User::cleanUpRelations() {
    if(itsSmartbin != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartbin");
            Resident_Citizen_User* p_Resident_Citizen_User = itsSmartbin->getItsResident_Citizen_User();
            if(p_Resident_Citizen_User != NULL)
                {
                    itsSmartbin->__setItsResident_Citizen_User(NULL);
                }
            itsSmartbin = NULL;
        }
    if(itsStakeholders != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
            Resident_Citizen_User* p_Resident_Citizen_User = itsStakeholders->getItsResident_Citizen_User();
            if(p_Resident_Citizen_User != NULL)
                {
                    itsStakeholders->__setItsResident_Citizen_User(NULL);
                }
            itsStakeholders = NULL;
        }
    if(itsUsers_Endusers != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
            Resident_Citizen_User* p_Resident_Citizen_User = itsUsers_Endusers->getItsResident_Citizen_User();
            if(p_Resident_Citizen_User != NULL)
                {
                    itsUsers_Endusers->__setItsResident_Citizen_User(NULL);
                }
            itsUsers_Endusers = NULL;
        }
    if(used_by != NULL)
        {
            NOTIFY_RELATION_CLEARED("used_by");
            Resident_Citizen_User* p_Resident_Citizen_User = used_by->getUses();
            if(p_Resident_Citizen_User != NULL)
                {
                    used_by->__setUses(NULL);
                }
            used_by = NULL;
        }
    if(uses != NULL)
        {
            NOTIFY_RELATION_CLEARED("uses");
            App* current = uses;
            if(current != NULL)
                {
                    current->_removeProvides(this);
                }
            uses = NULL;
        }
}

void Resident_Citizen_User::__setItsSmartbin(smartbin* p_smartbin) {
    itsSmartbin = p_smartbin;
    if(p_smartbin != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmartbin", p_smartbin, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmartbin");
        }
}

void Resident_Citizen_User::_setItsSmartbin(smartbin* p_smartbin) {
    if(itsSmartbin != NULL)
        {
            itsSmartbin->__setItsResident_Citizen_User(NULL);
        }
    __setItsSmartbin(p_smartbin);
}

void Resident_Citizen_User::_clearItsSmartbin() {
    NOTIFY_RELATION_CLEARED("itsSmartbin");
    itsSmartbin = NULL;
}

void Resident_Citizen_User::__setItsStakeholders(Stakeholders* p_Stakeholders) {
    itsStakeholders = p_Stakeholders;
    if(p_Stakeholders != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStakeholders", p_Stakeholders, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
        }
}

void Resident_Citizen_User::_setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(itsStakeholders != NULL)
        {
            itsStakeholders->__setItsResident_Citizen_User(NULL);
        }
    __setItsStakeholders(p_Stakeholders);
}

void Resident_Citizen_User::_clearItsStakeholders() {
    NOTIFY_RELATION_CLEARED("itsStakeholders");
    itsStakeholders = NULL;
}

void Resident_Citizen_User::__setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    itsUsers_Endusers = p_Users_Endusers;
    if(p_Users_Endusers != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUsers_Endusers", p_Users_Endusers, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
        }
}

void Resident_Citizen_User::_setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    if(itsUsers_Endusers != NULL)
        {
            itsUsers_Endusers->__setItsResident_Citizen_User(NULL);
        }
    __setItsUsers_Endusers(p_Users_Endusers);
}

void Resident_Citizen_User::_clearItsUsers_Endusers() {
    NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
    itsUsers_Endusers = NULL;
}

void Resident_Citizen_User::__setUsed_by(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    used_by = p_smart_garbage_collection_system;
    if(p_smart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("used_by", p_smart_garbage_collection_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("used_by");
        }
}

void Resident_Citizen_User::_setUsed_by(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(used_by != NULL)
        {
            used_by->__setUses(NULL);
        }
    __setUsed_by(p_smart_garbage_collection_system);
}

void Resident_Citizen_User::_clearUsed_by() {
    NOTIFY_RELATION_CLEARED("used_by");
    used_by = NULL;
}

void Resident_Citizen_User::__setUses(App* p_App) {
    uses = p_App;
    if(p_App != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("uses", p_App, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("uses");
        }
}

void Resident_Citizen_User::_setUses(App* p_App) {
    if(uses != NULL)
        {
            uses->_removeProvides(this);
        }
    __setUses(p_App);
}

void Resident_Citizen_User::_clearUses() {
    NOTIFY_RELATION_CLEARED("uses");
    uses = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedResident_Citizen_User::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("uses", false, true);
    if(myReal->uses)
        {
            aomsRelations->ADD_ITEM(myReal->uses);
        }
    aomsRelations->addRelation("itsSmartbin", false, true);
    if(myReal->itsSmartbin)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartbin);
        }
    aomsRelations->addRelation("itsStakeholders", false, true);
    if(myReal->itsStakeholders)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholders);
        }
    aomsRelations->addRelation("itsUsers_Endusers", false, true);
    if(myReal->itsUsers_Endusers)
        {
            aomsRelations->ADD_ITEM(myReal->itsUsers_Endusers);
        }
    aomsRelations->addRelation("used_by", false, true);
    if(myReal->used_by)
        {
            aomsRelations->ADD_ITEM(myReal->used_by);
        }
}
//#]

IMPLEMENT_META_P(Resident_Citizen_User, ActorPkg, ActorPkg, false, OMAnimatedResident_Citizen_User)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Resident_Citizen_User.cpp
*********************************************************************/
