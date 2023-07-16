/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: road_network
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\road_network.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "road_network.h"
//## link services
#include "smart_garbage_collection_system.h"
//## link is_owned_by
#include "Municipality.h"
//## link shows
#include "route_planning_system.h"
//#[ ignore
#define EnvPkg_road_network_road_network_SERIALIZE OM_NO_OP
//#]

//## package EnvPkg

//## class road_network
road_network::road_network() {
    NOTIFY_CONSTRUCTOR(road_network, road_network(), 0, EnvPkg_road_network_road_network_SERIALIZE);
    is_owned_by = NULL;
    shows = NULL;
}

road_network::~road_network() {
    NOTIFY_DESTRUCTOR(~road_network, true);
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
            NOTIFY_RELATION_CLEARED("is_owned_by");
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
    if(shows != NULL)
        {
            NOTIFY_RELATION_CLEARED("shows");
            road_network* p_road_network = shows->getItsRoad_network();
            if(p_road_network != NULL)
                {
                    shows->__setItsRoad_network(NULL);
                }
            shows = NULL;
        }
}

void road_network::__setIs_owned_by(Municipality* p_Municipality) {
    is_owned_by = p_Municipality;
    if(p_Municipality != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("is_owned_by", p_Municipality, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("is_owned_by");
        }
}

void road_network::_setIs_owned_by(Municipality* p_Municipality) {
    if(is_owned_by != NULL)
        {
            is_owned_by->_removeOwns(this);
        }
    __setIs_owned_by(p_Municipality);
}

void road_network::_clearIs_owned_by() {
    NOTIFY_RELATION_CLEARED("is_owned_by");
    is_owned_by = NULL;
}

void road_network::_addServices(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("services", p_smart_garbage_collection_system, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("services");
        }
    services.add(p_smart_garbage_collection_system);
}

void road_network::_removeServices(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    NOTIFY_RELATION_ITEM_REMOVED("services", p_smart_garbage_collection_system);
    services.remove(p_smart_garbage_collection_system);
}

void road_network::_clearServices() {
    NOTIFY_RELATION_CLEARED("services");
    services.removeAll();
}

route_planning_system* road_network::getShows() const {
    return shows;
}

void road_network::setShows(route_planning_system* p_route_planning_system) {
    if(p_route_planning_system != NULL)
        {
            p_route_planning_system->_setItsRoad_network(this);
        }
    _setShows(p_route_planning_system);
}

void road_network::__setShows(route_planning_system* p_route_planning_system) {
    shows = p_route_planning_system;
    if(p_route_planning_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("shows", p_route_planning_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("shows");
        }
}

void road_network::_setShows(route_planning_system* p_route_planning_system) {
    if(shows != NULL)
        {
            shows->__setItsRoad_network(NULL);
        }
    __setShows(p_route_planning_system);
}

void road_network::_clearShows() {
    NOTIFY_RELATION_CLEARED("shows");
    shows = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedroad_network::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("services", false, false);
    {
        OMIterator<smart_garbage_collection_system*> iter(myReal->services);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("is_owned_by", false, true);
    if(myReal->is_owned_by)
        {
            aomsRelations->ADD_ITEM(myReal->is_owned_by);
        }
    aomsRelations->addRelation("shows", false, true);
    if(myReal->shows)
        {
            aomsRelations->ADD_ITEM(myReal->shows);
        }
}
//#]

IMPLEMENT_META_P(road_network, EnvPkg, EnvPkg, false, OMAnimatedroad_network)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\road_network.cpp
*********************************************************************/
