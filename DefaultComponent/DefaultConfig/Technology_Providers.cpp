/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Technology_Providers
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Technology_Providers.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Technology_Providers.h"
//## link itsStakeholders
#include "Stakeholders.h"
//#[ ignore
#define StakeholderPkg_Technology_Providers_Technology_Providers_SERIALIZE OM_NO_OP

#define StakeholderPkg_part_0_part_0_SERIALIZE OM_NO_OP
//#]

//## package StakeholderPkg

//## actor Technology_Providers
//## class Technology_Providers::part_0
Technology_Providers::part_0_C::part_0_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(part_0, part_0(), 0, StakeholderPkg_part_0_part_0_SERIALIZE, part_0_C);
}

Technology_Providers::part_0_C::~part_0_C() {
    NOTIFY_DESTRUCTOR(~part_0, true);
}

Technology_Providers::Technology_Providers() {
    NOTIFY_CONSTRUCTOR(Technology_Providers, Technology_Providers(), 0, StakeholderPkg_Technology_Providers_Technology_Providers_SERIALIZE);
    itsStakeholders = NULL;
}

Technology_Providers::~Technology_Providers() {
    NOTIFY_DESTRUCTOR(~Technology_Providers, true);
    cleanUpRelations();
}

Stakeholders* Technology_Providers::getItsStakeholders() const {
    return itsStakeholders;
}

void Technology_Providers::setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(p_Stakeholders != NULL)
        {
            p_Stakeholders->_setItsTechnology_Providers(this);
        }
    _setItsStakeholders(p_Stakeholders);
}

Technology_Providers::part_0_C* Technology_Providers::getPart_0() const {
    return (Technology_Providers::part_0_C*) &part_0;
}

void Technology_Providers::cleanUpRelations() {
    if(itsStakeholders != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
            Technology_Providers* p_Technology_Providers = itsStakeholders->getItsTechnology_Providers();
            if(p_Technology_Providers != NULL)
                {
                    itsStakeholders->__setItsTechnology_Providers(NULL);
                }
            itsStakeholders = NULL;
        }
}

void Technology_Providers::__setItsStakeholders(Stakeholders* p_Stakeholders) {
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

void Technology_Providers::_setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(itsStakeholders != NULL)
        {
            itsStakeholders->__setItsTechnology_Providers(NULL);
        }
    __setItsStakeholders(p_Stakeholders);
}

void Technology_Providers::_clearItsStakeholders() {
    NOTIFY_RELATION_CLEARED("itsStakeholders");
    itsStakeholders = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTechnology_Providers::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("part_0", true, true);
    aomsRelations->ADD_ITEM(&myReal->part_0);
    aomsRelations->addRelation("itsStakeholders", false, true);
    if(myReal->itsStakeholders)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholders);
        }
}
//#]

IMPLEMENT_META_P(Technology_Providers, StakeholderPkg, StakeholderPkg, false, OMAnimatedTechnology_Providers)

IMPLEMENT_META_OBJECT_P(Technology_Providers::part_0, Technology_Providers::part_0_C, StakeholderPkg, StakeholderPkg, false, OMAnimatedpart_0_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Technology_Providers.cpp
*********************************************************************/
