/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Maintenance_Staff
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Maintenance_Staff.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Maintenance_Staff.h"
//## link itsStakeholders
#include "Stakeholders.h"
//## link itsUsers_Endusers
#include "Users_Endusers.h"
//#[ ignore
#define StakeholderPkg_Maintenance_Staff_Maintenance_Staff_SERIALIZE OM_NO_OP
//#]

//## package StakeholderPkg

//## actor Maintenance_Staff
Maintenance_Staff::Maintenance_Staff() {
    NOTIFY_CONSTRUCTOR(Maintenance_Staff, Maintenance_Staff(), 0, StakeholderPkg_Maintenance_Staff_Maintenance_Staff_SERIALIZE);
    itsStakeholders = NULL;
    itsUsers_Endusers = NULL;
}

Maintenance_Staff::~Maintenance_Staff() {
    NOTIFY_DESTRUCTOR(~Maintenance_Staff, true);
    cleanUpRelations();
}

Stakeholders* Maintenance_Staff::getItsStakeholders() const {
    return itsStakeholders;
}

void Maintenance_Staff::setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(p_Stakeholders != NULL)
        {
            p_Stakeholders->_setItsMaintenance_Staff(this);
        }
    _setItsStakeholders(p_Stakeholders);
}

Users_Endusers* Maintenance_Staff::getItsUsers_Endusers() const {
    return itsUsers_Endusers;
}

void Maintenance_Staff::setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    if(p_Users_Endusers != NULL)
        {
            p_Users_Endusers->_setItsMaintenance_Staff(this);
        }
    _setItsUsers_Endusers(p_Users_Endusers);
}

void Maintenance_Staff::cleanUpRelations() {
    if(itsStakeholders != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
            Maintenance_Staff* p_Maintenance_Staff = itsStakeholders->getItsMaintenance_Staff();
            if(p_Maintenance_Staff != NULL)
                {
                    itsStakeholders->__setItsMaintenance_Staff(NULL);
                }
            itsStakeholders = NULL;
        }
    if(itsUsers_Endusers != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
            Maintenance_Staff* p_Maintenance_Staff = itsUsers_Endusers->getItsMaintenance_Staff();
            if(p_Maintenance_Staff != NULL)
                {
                    itsUsers_Endusers->__setItsMaintenance_Staff(NULL);
                }
            itsUsers_Endusers = NULL;
        }
}

void Maintenance_Staff::__setItsStakeholders(Stakeholders* p_Stakeholders) {
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

void Maintenance_Staff::_setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(itsStakeholders != NULL)
        {
            itsStakeholders->__setItsMaintenance_Staff(NULL);
        }
    __setItsStakeholders(p_Stakeholders);
}

void Maintenance_Staff::_clearItsStakeholders() {
    NOTIFY_RELATION_CLEARED("itsStakeholders");
    itsStakeholders = NULL;
}

void Maintenance_Staff::__setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
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

void Maintenance_Staff::_setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    if(itsUsers_Endusers != NULL)
        {
            itsUsers_Endusers->__setItsMaintenance_Staff(NULL);
        }
    __setItsUsers_Endusers(p_Users_Endusers);
}

void Maintenance_Staff::_clearItsUsers_Endusers() {
    NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
    itsUsers_Endusers = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMaintenance_Staff::serializeRelations(AOMSRelations* aomsRelations) const {
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
}
//#]

IMPLEMENT_META_P(Maintenance_Staff, StakeholderPkg, StakeholderPkg, false, OMAnimatedMaintenance_Staff)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Maintenance_Staff.cpp
*********************************************************************/
