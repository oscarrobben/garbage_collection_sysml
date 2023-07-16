/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Oppurtunities
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Oppurtunities.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Oppurtunities.h"
//## link itsCost_Reduction
#include "Cost_Reduction.h"
//## link itsEfficiency
#include "Efficiency.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## link itsSustainability
#include "Sustainability.h"
//#[ ignore
#define Default_Oppurtunities_Oppurtunities_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Oppurtunities
Oppurtunities::Oppurtunities() {
    NOTIFY_CONSTRUCTOR(Oppurtunities, Oppurtunities(), 0, Default_Oppurtunities_Oppurtunities_SERIALIZE);
    itsCost_Reduction = NULL;
    itsEfficiency = NULL;
    itsSmart_garbage_collection_system = NULL;
    itsSustainability = NULL;
}

Oppurtunities::~Oppurtunities() {
    NOTIFY_DESTRUCTOR(~Oppurtunities, true);
    cleanUpRelations();
}

Cost_Reduction_C* Oppurtunities::getItsCost_Reduction() const {
    return itsCost_Reduction;
}

void Oppurtunities::setItsCost_Reduction(Cost_Reduction_C* p_Cost_Reduction) {
    if(p_Cost_Reduction != NULL)
        {
            p_Cost_Reduction->_setItsOppurtunities(this);
        }
    _setItsCost_Reduction(p_Cost_Reduction);
}

Efficiency_C* Oppurtunities::getItsEfficiency() const {
    return itsEfficiency;
}

void Oppurtunities::setItsEfficiency(Efficiency_C* p_Efficiency) {
    if(p_Efficiency != NULL)
        {
            p_Efficiency->_setItsOppurtunities(this);
        }
    _setItsEfficiency(p_Efficiency);
}

smart_garbage_collection_system* Oppurtunities::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void Oppurtunities::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsOppurtunities(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

Sustainability_C* Oppurtunities::getItsSustainability() const {
    return itsSustainability;
}

void Oppurtunities::setItsSustainability(Sustainability_C* p_Sustainability) {
    if(p_Sustainability != NULL)
        {
            p_Sustainability->_setItsOppurtunities(this);
        }
    _setItsSustainability(p_Sustainability);
}

void Oppurtunities::cleanUpRelations() {
    if(itsCost_Reduction != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCost_Reduction");
            Oppurtunities* p_Oppurtunities = itsCost_Reduction->getItsOppurtunities();
            if(p_Oppurtunities != NULL)
                {
                    itsCost_Reduction->__setItsOppurtunities(NULL);
                }
            itsCost_Reduction = NULL;
        }
    if(itsEfficiency != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEfficiency");
            Oppurtunities* p_Oppurtunities = itsEfficiency->getItsOppurtunities();
            if(p_Oppurtunities != NULL)
                {
                    itsEfficiency->__setItsOppurtunities(NULL);
                }
            itsEfficiency = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            Oppurtunities* p_Oppurtunities = itsSmart_garbage_collection_system->getItsOppurtunities();
            if(p_Oppurtunities != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsOppurtunities(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
    if(itsSustainability != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSustainability");
            Oppurtunities* p_Oppurtunities = itsSustainability->getItsOppurtunities();
            if(p_Oppurtunities != NULL)
                {
                    itsSustainability->__setItsOppurtunities(NULL);
                }
            itsSustainability = NULL;
        }
}

void Oppurtunities::__setItsCost_Reduction(Cost_Reduction_C* p_Cost_Reduction) {
    itsCost_Reduction = p_Cost_Reduction;
    if(p_Cost_Reduction != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCost_Reduction", p_Cost_Reduction, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCost_Reduction");
        }
}

void Oppurtunities::_setItsCost_Reduction(Cost_Reduction_C* p_Cost_Reduction) {
    if(itsCost_Reduction != NULL)
        {
            itsCost_Reduction->__setItsOppurtunities(NULL);
        }
    __setItsCost_Reduction(p_Cost_Reduction);
}

void Oppurtunities::_clearItsCost_Reduction() {
    NOTIFY_RELATION_CLEARED("itsCost_Reduction");
    itsCost_Reduction = NULL;
}

void Oppurtunities::__setItsEfficiency(Efficiency_C* p_Efficiency) {
    itsEfficiency = p_Efficiency;
    if(p_Efficiency != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEfficiency", p_Efficiency, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEfficiency");
        }
}

void Oppurtunities::_setItsEfficiency(Efficiency_C* p_Efficiency) {
    if(itsEfficiency != NULL)
        {
            itsEfficiency->__setItsOppurtunities(NULL);
        }
    __setItsEfficiency(p_Efficiency);
}

void Oppurtunities::_clearItsEfficiency() {
    NOTIFY_RELATION_CLEARED("itsEfficiency");
    itsEfficiency = NULL;
}

void Oppurtunities::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void Oppurtunities::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsOppurtunities(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void Oppurtunities::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

void Oppurtunities::__setItsSustainability(Sustainability_C* p_Sustainability) {
    itsSustainability = p_Sustainability;
    if(p_Sustainability != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSustainability", p_Sustainability, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSustainability");
        }
}

void Oppurtunities::_setItsSustainability(Sustainability_C* p_Sustainability) {
    if(itsSustainability != NULL)
        {
            itsSustainability->__setItsOppurtunities(NULL);
        }
    __setItsSustainability(p_Sustainability);
}

void Oppurtunities::_clearItsSustainability() {
    NOTIFY_RELATION_CLEARED("itsSustainability");
    itsSustainability = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOppurtunities::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsEfficiency", false, true);
    if(myReal->itsEfficiency)
        {
            aomsRelations->ADD_ITEM(myReal->itsEfficiency);
        }
    aomsRelations->addRelation("itsSustainability", false, true);
    if(myReal->itsSustainability)
        {
            aomsRelations->ADD_ITEM(myReal->itsSustainability);
        }
    aomsRelations->addRelation("itsCost_Reduction", false, true);
    if(myReal->itsCost_Reduction)
        {
            aomsRelations->ADD_ITEM(myReal->itsCost_Reduction);
        }
}
//#]

IMPLEMENT_META_P(Oppurtunities, Default, Default, false, OMAnimatedOppurtunities)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Oppurtunities.cpp
*********************************************************************/
