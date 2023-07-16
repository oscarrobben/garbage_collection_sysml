/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Environmental_Organisations
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Environmental_Organisations.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Environmental_Organisations.h"
//## link itsStakeholders
#include "Stakeholders.h"
//#[ ignore
#define StakeholderPkg_Environmental_Organisations_Environmental_Organisations_SERIALIZE OM_NO_OP
//#]

//## package StakeholderPkg

//## actor Environmental_Organisations
Environmental_Organisations::Environmental_Organisations() {
    NOTIFY_CONSTRUCTOR(Environmental_Organisations, Environmental_Organisations(), 0, StakeholderPkg_Environmental_Organisations_Environmental_Organisations_SERIALIZE);
    itsStakeholders = NULL;
}

Environmental_Organisations::~Environmental_Organisations() {
    NOTIFY_DESTRUCTOR(~Environmental_Organisations, true);
    cleanUpRelations();
}

Stakeholders* Environmental_Organisations::getItsStakeholders() const {
    return itsStakeholders;
}

void Environmental_Organisations::setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(p_Stakeholders != NULL)
        {
            p_Stakeholders->_setItsEnvironmental_Organisations(this);
        }
    _setItsStakeholders(p_Stakeholders);
}

void Environmental_Organisations::cleanUpRelations() {
    if(itsStakeholders != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
            Environmental_Organisations* p_Environmental_Organisations = itsStakeholders->getItsEnvironmental_Organisations();
            if(p_Environmental_Organisations != NULL)
                {
                    itsStakeholders->__setItsEnvironmental_Organisations(NULL);
                }
            itsStakeholders = NULL;
        }
}

void Environmental_Organisations::__setItsStakeholders(Stakeholders* p_Stakeholders) {
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

void Environmental_Organisations::_setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(itsStakeholders != NULL)
        {
            itsStakeholders->__setItsEnvironmental_Organisations(NULL);
        }
    __setItsStakeholders(p_Stakeholders);
}

void Environmental_Organisations::_clearItsStakeholders() {
    NOTIFY_RELATION_CLEARED("itsStakeholders");
    itsStakeholders = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnvironmental_Organisations::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStakeholders", false, true);
    if(myReal->itsStakeholders)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholders);
        }
}
//#]

IMPLEMENT_META_P(Environmental_Organisations, StakeholderPkg, StakeholderPkg, false, OMAnimatedEnvironmental_Organisations)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Environmental_Organisations.cpp
*********************************************************************/
