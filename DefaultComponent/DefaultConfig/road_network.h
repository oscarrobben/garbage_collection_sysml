/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: road_network
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\road_network.h
*********************************************************************/

#ifndef road_network_H
#define road_network_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\omcollec.h>
//## link is_owned_by
class Municipality;

//## link services
class smart_garbage_collection_system;

//## package EnvPkg

//## class road_network
class road_network {
    ////    Constructors and destructors    ////
    
public :

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
    
    Municipality* is_owned_by;		//## link is_owned_by
    
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
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\road_network.h
*********************************************************************/
