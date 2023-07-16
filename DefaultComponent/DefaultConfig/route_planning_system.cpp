/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: route_planning_system
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\route_planning_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "route_planning_system.h"
//## link itsRoad_network
#include "road_network.h"
//## link gets_relevant_data
#include "smart_garbage_collection_system.h"
//#[ ignore
#define EnvPkg_route_planning_system_route_planning_system_SERIALIZE OM_NO_OP
//#]

//## package EnvPkg

//## class route_planning_system
route_planning_system::route_planning_system() {
    NOTIFY_CONSTRUCTOR(route_planning_system, route_planning_system(), 0, EnvPkg_route_planning_system_route_planning_system_SERIALIZE);
    gets_relevant_data = NULL;
    itsRoad_network = NULL;
}

route_planning_system::~route_planning_system() {
    NOTIFY_DESTRUCTOR(~route_planning_system, true);
    cleanUpRelations();
}

smart_garbage_collection_system* route_planning_system::getGets_relevant_data() const {
    return gets_relevant_data;
}

void route_planning_system::setGets_relevant_data(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setShow_traffic(this);
        }
    _setGets_relevant_data(p_smart_garbage_collection_system);
}

road_network* route_planning_system::getItsRoad_network() const {
    return itsRoad_network;
}

void route_planning_system::setItsRoad_network(road_network* p_road_network) {
    if(p_road_network != NULL)
        {
            p_road_network->_setShows(this);
        }
    _setItsRoad_network(p_road_network);
}

void route_planning_system::cleanUpRelations() {
    if(gets_relevant_data != NULL)
        {
            NOTIFY_RELATION_CLEARED("gets_relevant_data");
            route_planning_system* p_route_planning_system = gets_relevant_data->getShow_traffic();
            if(p_route_planning_system != NULL)
                {
                    gets_relevant_data->__setShow_traffic(NULL);
                }
            gets_relevant_data = NULL;
        }
    if(itsRoad_network != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRoad_network");
            route_planning_system* p_route_planning_system = itsRoad_network->getShows();
            if(p_route_planning_system != NULL)
                {
                    itsRoad_network->__setShows(NULL);
                }
            itsRoad_network = NULL;
        }
}

void route_planning_system::__setGets_relevant_data(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    gets_relevant_data = p_smart_garbage_collection_system;
    if(p_smart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("gets_relevant_data", p_smart_garbage_collection_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("gets_relevant_data");
        }
}

void route_planning_system::_setGets_relevant_data(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(gets_relevant_data != NULL)
        {
            gets_relevant_data->__setShow_traffic(NULL);
        }
    __setGets_relevant_data(p_smart_garbage_collection_system);
}

void route_planning_system::_clearGets_relevant_data() {
    NOTIFY_RELATION_CLEARED("gets_relevant_data");
    gets_relevant_data = NULL;
}

void route_planning_system::__setItsRoad_network(road_network* p_road_network) {
    itsRoad_network = p_road_network;
    if(p_road_network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRoad_network", p_road_network, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRoad_network");
        }
}

void route_planning_system::_setItsRoad_network(road_network* p_road_network) {
    if(itsRoad_network != NULL)
        {
            itsRoad_network->__setShows(NULL);
        }
    __setItsRoad_network(p_road_network);
}

void route_planning_system::_clearItsRoad_network() {
    NOTIFY_RELATION_CLEARED("itsRoad_network");
    itsRoad_network = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedroute_planning_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("gets_relevant_data", false, true);
    if(myReal->gets_relevant_data)
        {
            aomsRelations->ADD_ITEM(myReal->gets_relevant_data);
        }
    aomsRelations->addRelation("itsRoad_network", false, true);
    if(myReal->itsRoad_network)
        {
            aomsRelations->ADD_ITEM(myReal->itsRoad_network);
        }
}
//#]

IMPLEMENT_META_P(route_planning_system, EnvPkg, EnvPkg, false, OMAnimatedroute_planning_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\route_planning_system.cpp
*********************************************************************/
