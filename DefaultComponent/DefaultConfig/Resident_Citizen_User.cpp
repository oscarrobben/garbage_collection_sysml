/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Resident_Citizen_User
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Resident_Citizen_User.cpp
*********************************************************************/

//## auto_generated
#include "Resident_Citizen_User.h"
//## link uses
#include "App.h"
//## link itsSmartbin
#include "smartbin.h"
//## package ActorPkg

//## actor Resident_Citizen_User
Resident_Citizen_User::Resident_Citizen_User() {
    itsSmartbin = NULL;
    uses = NULL;
}

Resident_Citizen_User::~Resident_Citizen_User() {
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
            Resident_Citizen_User* p_Resident_Citizen_User = itsSmartbin->getItsResident_Citizen_User();
            if(p_Resident_Citizen_User != NULL)
                {
                    itsSmartbin->__setItsResident_Citizen_User(NULL);
                }
            itsSmartbin = NULL;
        }
    if(uses != NULL)
        {
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
}

void Resident_Citizen_User::_setItsSmartbin(smartbin* p_smartbin) {
    if(itsSmartbin != NULL)
        {
            itsSmartbin->__setItsResident_Citizen_User(NULL);
        }
    __setItsSmartbin(p_smartbin);
}

void Resident_Citizen_User::_clearItsSmartbin() {
    itsSmartbin = NULL;
}

void Resident_Citizen_User::__setUses(App* p_App) {
    uses = p_App;
}

void Resident_Citizen_User::_setUses(App* p_App) {
    if(uses != NULL)
        {
            uses->_removeProvides(this);
        }
    __setUses(p_App);
}

void Resident_Citizen_User::_clearUses() {
    uses = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Resident_Citizen_User.cpp
*********************************************************************/
