/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: road_network
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\road_network.h
*********************************************************************/

#ifndef road_network_H
#define road_network_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\omcollec.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "EnvPkg.h"
//## link is_owned_by
class Municipality;

//## link services
class smart_garbage_collection_system;

//## package EnvPkg

//## class road_network
class road_network {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedroad_network;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    road_network();
    
    //## auto_generated
    ~road_network();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Municipality* getIs_owned_by() const;
    
    //## auto_generated
    void setIs_owned_by(Municipality* p_Municipality);
    
    //## auto_generated
    OMIterator<smart_garbage_collection_system*> getServices() const;
    
    //## auto_generated
    void addServices(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void removeServices(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void clearServices();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMCollection<smart_garbage_collection_system*> services;		//## link services
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setIs_owned_by(Municipality* p_Municipality);
    
    //## auto_generated
    void _setIs_owned_by(Municipality* p_Municipality);
    
    //## auto_generated
    void _clearIs_owned_by();
    
    //## auto_generated
    void _addServices(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _removeServices(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearServices();

protected :

    Municipality* is_owned_by;		//## link is_owned_by
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedroad_network : virtual public AOMInstance {
    DECLARE_META(road_network, OMAnimatedroad_network)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\road_network.h
*********************************************************************/
