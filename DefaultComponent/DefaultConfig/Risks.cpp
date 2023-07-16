/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Risks
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Risks.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Risks.h"
//## link itsAdoption
#include "Adoption.h"
//## link itsDataSecurity_Privacy
#include "DataSecurity_Privacy.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## link itsTechnological
#include "Technological.h"
//#[ ignore
#define Default_Risks_Risks_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Risks
Risks::Risks() {
    NOTIFY_CONSTRUCTOR(Risks, Risks(), 0, Default_Risks_Risks_SERIALIZE);
    itsAdoption = NULL;
    itsDataSecurity_Privacy = NULL;
    itsSmart_garbage_collection_system = NULL;
    itsTechnological = NULL;
}

Risks::~Risks() {
    NOTIFY_DESTRUCTOR(~Risks, true);
    cleanUpRelations();
}

Adoption_C* Risks::getItsAdoption() const {
    return itsAdoption;
}

void Risks::setItsAdoption(Adoption_C* p_Adoption) {
    if(p_Adoption != NULL)
        {
            p_Adoption->_setItsRisks(this);
        }
    _setItsAdoption(p_Adoption);
}

DataSecurity_Privacy_C* Risks::getItsDataSecurity_Privacy() const {
    return itsDataSecurity_Privacy;
}

void Risks::setItsDataSecurity_Privacy(DataSecurity_Privacy_C* p_DataSecurity_Privacy) {
    if(p_DataSecurity_Privacy != NULL)
        {
            p_DataSecurity_Privacy->_setItsRisks(this);
        }
    _setItsDataSecurity_Privacy(p_DataSecurity_Privacy);
}

smart_garbage_collection_system* Risks::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void Risks::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsRisks(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

Technological_C* Risks::getItsTechnological() const {
    return itsTechnological;
}

void Risks::setItsTechnological(Technological_C* p_Technological) {
    if(p_Technological != NULL)
        {
            p_Technological->_setItsRisks(this);
        }
    _setItsTechnological(p_Technological);
}

void Risks::cleanUpRelations() {
    if(itsAdoption != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAdoption");
            Risks* p_Risks = itsAdoption->getItsRisks();
            if(p_Risks != NULL)
                {
                    itsAdoption->__setItsRisks(NULL);
                }
            itsAdoption = NULL;
        }
    if(itsDataSecurity_Privacy != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDataSecurity_Privacy");
            Risks* p_Risks = itsDataSecurity_Privacy->getItsRisks();
            if(p_Risks != NULL)
                {
                    itsDataSecurity_Privacy->__setItsRisks(NULL);
                }
            itsDataSecurity_Privacy = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            Risks* p_Risks = itsSmart_garbage_collection_system->getItsRisks();
            if(p_Risks != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsRisks(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
    if(itsTechnological != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTechnological");
            Risks* p_Risks = itsTechnological->getItsRisks();
            if(p_Risks != NULL)
                {
                    itsTechnological->__setItsRisks(NULL);
                }
            itsTechnological = NULL;
        }
}

void Risks::__setItsAdoption(Adoption_C* p_Adoption) {
    itsAdoption = p_Adoption;
    if(p_Adoption != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAdoption", p_Adoption, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAdoption");
        }
}

void Risks::_setItsAdoption(Adoption_C* p_Adoption) {
    if(itsAdoption != NULL)
        {
            itsAdoption->__setItsRisks(NULL);
        }
    __setItsAdoption(p_Adoption);
}

void Risks::_clearItsAdoption() {
    NOTIFY_RELATION_CLEARED("itsAdoption");
    itsAdoption = NULL;
}

void Risks::__setItsDataSecurity_Privacy(DataSecurity_Privacy_C* p_DataSecurity_Privacy) {
    itsDataSecurity_Privacy = p_DataSecurity_Privacy;
    if(p_DataSecurity_Privacy != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDataSecurity_Privacy", p_DataSecurity_Privacy, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDataSecurity_Privacy");
        }
}

void Risks::_setItsDataSecurity_Privacy(DataSecurity_Privacy_C* p_DataSecurity_Privacy) {
    if(itsDataSecurity_Privacy != NULL)
        {
            itsDataSecurity_Privacy->__setItsRisks(NULL);
        }
    __setItsDataSecurity_Privacy(p_DataSecurity_Privacy);
}

void Risks::_clearItsDataSecurity_Privacy() {
    NOTIFY_RELATION_CLEARED("itsDataSecurity_Privacy");
    itsDataSecurity_Privacy = NULL;
}

void Risks::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void Risks::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsRisks(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void Risks::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

void Risks::__setItsTechnological(Technological_C* p_Technological) {
    itsTechnological = p_Technological;
    if(p_Technological != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTechnological", p_Technological, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTechnological");
        }
}

void Risks::_setItsTechnological(Technological_C* p_Technological) {
    if(itsTechnological != NULL)
        {
            itsTechnological->__setItsRisks(NULL);
        }
    __setItsTechnological(p_Technological);
}

void Risks::_clearItsTechnological() {
    NOTIFY_RELATION_CLEARED("itsTechnological");
    itsTechnological = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedRisks::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsDataSecurity_Privacy", false, true);
    if(myReal->itsDataSecurity_Privacy)
        {
            aomsRelations->ADD_ITEM(myReal->itsDataSecurity_Privacy);
        }
    aomsRelations->addRelation("itsTechnological", false, true);
    if(myReal->itsTechnological)
        {
            aomsRelations->ADD_ITEM(myReal->itsTechnological);
        }
    aomsRelations->addRelation("itsAdoption", false, true);
    if(myReal->itsAdoption)
        {
            aomsRelations->ADD_ITEM(myReal->itsAdoption);
        }
}
//#]

IMPLEMENT_META_P(Risks, Default, Default, false, OMAnimatedRisks)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Risks.cpp
*********************************************************************/
