/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Municipality
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Municipality.cpp
*********************************************************************/

//## auto_generated
#include "Municipality.h"
//## link owns
#include "road_network.h"
//## link uses
#include "smart_garbage_collection_system.h"
//## link itsWastecenter
#include "wastecenter.h"
//## package ActorPkg

//## actor Municipality
Municipality::Municipality() {
    itsWastecenter = NULL;
    uses = NULL;
}

Municipality::~Municipality() {
    cleanUpRelations();
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
    if(itsWastecenter != NULL)
        {
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
            smart_garbage_collection_system* current = uses;
            if(current != NULL)
                {
                    current->_removeServices(this);
                }
            uses = NULL;
        }
}

void Municipality::__setItsWastecenter(wastecenter* p_wastecenter) {
    itsWastecenter = p_wastecenter;
}

void Municipality::_setItsWastecenter(wastecenter* p_wastecenter) {
    if(itsWastecenter != NULL)
        {
            itsWastecenter->__setItsMunicipality(NULL);
        }
    __setItsWastecenter(p_wastecenter);
}

void Municipality::_clearItsWastecenter() {
    itsWastecenter = NULL;
}

void Municipality::_addOwns(road_network* p_road_network) {
    owns.add(p_road_network);
}

void Municipality::_removeOwns(road_network* p_road_network) {
    owns.remove(p_road_network);
}

void Municipality::_clearOwns() {
    owns.removeAll();
}

void Municipality::__setUses(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    uses = p_smart_garbage_collection_system;
}

void Municipality::_setUses(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(uses != NULL)
        {
            uses->_removeServices(this);
        }
    __setUses(p_smart_garbage_collection_system);
}

void Municipality::_clearUses() {
    uses = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Municipality.cpp
*********************************************************************/
