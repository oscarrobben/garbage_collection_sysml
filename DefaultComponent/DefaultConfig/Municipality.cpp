/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Municipality
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Municipality.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Municipality.h"
//## link owns
#include "road_network.h"
//## link uses
#include "smart_garbage_collection_system.h"
//## link itsStakeholders
#include "Stakeholders.h"
//## link itsWastecenter
#include "wastecenter.h"
//#[ ignore
#define ActorPkg_Municipality_Municipality_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Municipality
Municipality::Municipality() {
    NOTIFY_CONSTRUCTOR(Municipality, Municipality(), 0, ActorPkg_Municipality_Municipality_SERIALIZE);
    itsStakeholders = NULL;
    itsWastecenter = NULL;
    uses = NULL;
}

Municipality::~Municipality() {
    NOTIFY_DESTRUCTOR(~Municipality, true);
    cleanUpRelations();
}

Stakeholders* Municipality::getItsStakeholders() const {
    return itsStakeholders;
}

void Municipality::setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(p_Stakeholders != NULL)
        {
            p_Stakeholders->_setItsMunicipality(this);
        }
    _setItsStakeholders(p_Stakeholders);
}

wastecenter* Municipality::getItsWastecenter() const {
    return itsWastecenter;
}

void Municipality::setItsWastecenter(wastecenter* p_wastecenter) {
    if(p_wastecenter != NULL)
        {
            p_wastecenter->_setItsMunicipality(this);
        }
    _setItsWastecenter(p_wastecenter);
}

OMIterator<road_network*> Municipality::getOwns() const {
    OMIterator<road_network*> iter(owns);
    return iter;
}

void Municipality::addOwns(road_network* p_road_network) {
    if(p_road_network != NULL)
        {
            p_road_network->_setIs_owned_by(this);
        }
    _addOwns(p_road_network);
}

void Municipality::removeOwns(road_network* p_road_network) {
    if(p_road_network != NULL)
        {
            p_road_network->__setIs_owned_by(NULL);
        }
    _removeOwns(p_road_network);
}

void Municipality::clearOwns() {
    OMIterator<road_network*> iter(owns);
    while (*iter){
        (*iter)->_clearIs_owned_by();
        iter++;
    }
    _clearOwns();
}

smart_garbage_collection_system* Municipality::getUses() const {
    return uses;
}

void Municipality::setUses(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_addServices(this);
        }
    _setUses(p_smart_garbage_collection_system);
}

void Municipality::cleanUpRelations() {
    if(itsStakeholders != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
            Municipality* p_Municipality = itsStakeholders->getItsMunicipality();
            if(p_Municipality != NULL)
                {
                    itsStakeholders->__setItsMunicipality(NULL);
                }
            itsStakeholders = NULL;
        }
    if(itsWastecenter != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWastecenter");
            Municipality* p_Municipality = itsWastecenter->getItsMunicipality();
            if(p_Municipality != NULL)
                {
                    itsWastecenter->__setItsMunicipality(NULL);
                }
            itsWastecenter = NULL;
        }
    {
        OMIterator<road_network*> iter(owns);
        while (*iter){
            Municipality* p_Municipality = (*iter)->getIs_owned_by();
            if(p_Municipality != NULL)
                {
                    (*iter)->__setIs_owned_by(NULL);
                }
            iter++;
        }
        owns.removeAll();
    }
    if(uses != NULL)
        {
            NOTIFY_RELATION_CLEARED("uses");
            smart_garbage_collection_system* current = uses;
            if(current != NULL)
                {
                    current->_removeServices(this);
                }
            uses = NULL;
        }
}

void Municipality::__setItsStakeholders(Stakeholders* p_Stakeholders) {
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

void Municipality::_setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(itsStakeholders != NULL)
        {
            itsStakeholders->__setItsMunicipality(NULL);
        }
    __setItsStakeholders(p_Stakeholders);
}

void Municipality::_clearItsStakeholders() {
    NOTIFY_RELATION_CLEARED("itsStakeholders");
    itsStakeholders = NULL;
}

void Municipality::__setItsWastecenter(wastecenter* p_wastecenter) {
    itsWastecenter = p_wastecenter;
    if(p_wastecenter != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWastecenter", p_wastecenter, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWastecenter");
        }
}

void Municipality::_setItsWastecenter(wastecenter* p_wastecenter) {
    if(itsWastecenter != NULL)
        {
            itsWastecenter->__setItsMunicipality(NULL);
        }
    __setItsWastecenter(p_wastecenter);
}

void Municipality::_clearItsWastecenter() {
    NOTIFY_RELATION_CLEARED("itsWastecenter");
    itsWastecenter = NULL;
}

void Municipality::_addOwns(road_network* p_road_network) {
    if(p_road_network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("owns", p_road_network, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("owns");
        }
    owns.add(p_road_network);
}

void Municipality::_removeOwns(road_network* p_road_network) {
    NOTIFY_RELATION_ITEM_REMOVED("owns", p_road_network);
    owns.remove(p_road_network);
}

void Municipality::_clearOwns() {
    NOTIFY_RELATION_CLEARED("owns");
    owns.removeAll();
}

void Municipality::__setUses(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    uses = p_smart_garbage_collection_system;
    if(p_smart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("uses", p_smart_garbage_collection_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("uses");
        }
}

void Municipality::_setUses(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(uses != NULL)
        {
            uses->_removeServices(this);
        }
    __setUses(p_smart_garbage_collection_system);
}

void Municipality::_clearUses() {
    NOTIFY_RELATION_CLEARED("uses");
    uses = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedMunicipality::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("uses", false, true);
    if(myReal->uses)
        {
            aomsRelations->ADD_ITEM(myReal->uses);
        }
    aomsRelations->addRelation("owns", false, false);
    {
        OMIterator<road_network*> iter(myReal->owns);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsWastecenter", false, true);
    if(myReal->itsWastecenter)
        {
            aomsRelations->ADD_ITEM(myReal->itsWastecenter);
        }
    aomsRelations->addRelation("itsStakeholders", false, true);
    if(myReal->itsStakeholders)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholders);
        }
}
//#]

IMPLEMENT_META_P(Municipality, ActorPkg, ActorPkg, false, OMAnimatedMunicipality)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Municipality.cpp
*********************************************************************/
