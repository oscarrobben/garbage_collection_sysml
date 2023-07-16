/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: route_planning_system
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\route_planning_system.h
*********************************************************************/

#ifndef route_planning_system_H
#define route_planning_system_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "EnvPkg.h"
//## link itsRoad_network
class road_network;

//## link gets_relevant_data
class smart_garbage_collection_system;

//## package EnvPkg

//## class route_planning_system
class route_planning_system {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedroute_planning_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    route_planning_system();
    
    //## auto_generated
    ~route_planning_system();
    
    ////    Additional operations    ////
    
    //## auto_generated
    smart_garbage_collection_system* getGets_relevant_data() const;
    
    //## auto_generated
    void setGets_relevant_data(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    road_network* getItsRoad_network() const;
    
    //## auto_generated
    void setItsRoad_network(road_network* p_road_network);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    smart_garbage_collection_system* gets_relevant_data;		//## link gets_relevant_data
    
    road_network* itsRoad_network;		//## link itsRoad_network
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setGets_relevant_data(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setGets_relevant_data(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearGets_relevant_data();
    
    //## auto_generated
    void __setItsRoad_network(road_network* p_road_network);
    
    //## auto_generated
    void _setItsRoad_network(road_network* p_road_network);
    
    //## auto_generated
    void _clearItsRoad_network();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedroute_planning_system : virtual public AOMInstance {
    DECLARE_META(route_planning_system, OMAnimatedroute_planning_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\route_planning_system.h
*********************************************************************/
