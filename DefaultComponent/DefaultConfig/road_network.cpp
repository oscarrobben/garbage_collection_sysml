/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: road_network
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\road_network.cpp
*********************************************************************/

//## auto_generated
#include "road_network.h"
//## link is_owned_by
#include "Municipality.h"
//## link services
#include "smart_garbage_collection_system.h"
//## package EnvPkg

//## class road_network
road_network::road_network() {
    is_owned_by = NULL;
}

road_network::~road_network() {
    cleanUpRelations();
}

Municipality* road_network::getIs_owned_by() const {
    return is_owned_by;
}

void road_network::setIs_owned_by(Municipality* p_Municipality) {
    if(p_Municipality != NULL)
        {
            p_Municipality->_addOwns(this);
        }
    _setIs_owned_by(p_Municipality);
}

OMIterator<smart_garbage_collection_system*> road_network::getServices() const {
    OMIterator<smart_garbage_collection_system*> iter(services);
    return iter;
}

void road_network::addServices(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_addOperates_on(this);
        }
    _addServices(p_smart_garbage_collection_system);
}

void road_network::removeServices(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_removeOperates_on(this);
        }
    _removeServices(p_smart_garbage_collection_system);
}

void road_network::clearServices() {
    OMIterator<smart_garbage_collection_system*> iter(services);
    while (*iter){
        smart_garbage_collection_system* current = *iter;
        if(current != NULL)
            {
                current->_removeOperates_on(this);
            }
        iter++;
    }
    _clearServices();
}

void road_network::cleanUpRelations() {
    if(is_owned_by != NULL)
        {
            Municipality* current = is_owned_by;
            if(current != NULL)
                {
                    current->_removeOwns(this);
                }
            is_owned_by = NULL;
        }
    {
        OMIterator<smart_garbage_collection_system*> iter(services);
        while (*iter){
            smart_garbage_collection_system* current = *iter;
            if(current != NULL)
                {
                    current->_removeOperates_on(this);
                }
            iter++;
        }
        services.removeAll();
    }
}

void road_network::__setIs_owned_by(Municipality* p_Municipality) {
    is_owned_by = p_Municipality;
}

void road_network::_setIs_owned_by(Municipality* p_Municipality) {
    if(is_owned_by != NULL)
        {
            is_owned_by->_removeOwns(this);
        }
    __setIs_owned_by(p_Municipality);
}

void road_network::_clearIs_owned_by() {
    is_owned_by = NULL;
}

void road_network::_addServices(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    services.add(p_smart_garbage_collection_system);
}

void road_network::_removeServices(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    services.remove(p_smart_garbage_collection_system);
}

void road_network::_clearServices() {
    services.removeAll();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\road_network.cpp
*********************************************************************/
