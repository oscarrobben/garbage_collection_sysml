/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_Simulation
	Model Element	: Resident_Citizen_User
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_Simulation\Resident_Citizen_User.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Resident_Citizen_User.h"
//## link uses
#include "App.h"
//## link itsSmartbin
#include "smartbin.h"
//#[ ignore
#define ActorPkg_Resident_Citizen_User_Resident_Citizen_User_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Resident_Citizen_User
Resident_Citizen_User::Resident_Citizen_User() {
    NOTIFY_CONSTRUCTOR(Resident_Citizen_User, Resident_Citizen_User(), 0, ActorPkg_Resident_Citizen_User_Resident_Citizen_User_SERIALIZE);
    itsSmartbin = NULL;
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
}
//#]

IMPLEMENT_META_P(Resident_Citizen_User, ActorPkg, ActorPkg, false, OMAnimatedResident_Citizen_User)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\cms_Simulation\Resident_Citizen_User.cpp
*********************************************************************/
