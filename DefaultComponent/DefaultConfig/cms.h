/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: cms
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\cms.h
*********************************************************************/

#ifndef cms_H
#define cms_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omcollec.h>
//## link itsBin
class bin;

//## link itsServer
class server_C;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## link itsTruck
class truck;

//## package Default

//## class cms
class cms {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    cms();
    
    //## auto_generated
    ~cms();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<bin*> getItsBin() const;
    
    //## auto_generated
    void addItsBin(bin* p_bin);
    
    //## auto_generated
    void removeItsBin(bin* p_bin);
    
    //## auto_generated
    void clearItsBin();
    
    //## auto_generated
    server_C* getItsServer() const;
    
    //## auto_generated
    void setItsServer(server_C* p_server);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    OMIterator<truck*> getItsTruck() const;
    
    //## auto_generated
    void addItsTruck(truck* p_truck);
    
    //## auto_generated
    void removeItsTruck(truck* p_truck);
    
    //## auto_generated
    void clearItsTruck();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMCollection<bin*> itsBin;		//## link itsBin
    
    server_C* itsServer;		//## link itsServer
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    OMCollection<truck*> itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsBin(bin* p_bin);
    
    //## auto_generated
    void _removeItsBin(bin* p_bin);
    
    //## auto_generated
    void _clearItsBin();
    
    //## auto_generated
    void __setItsServer(server_C* p_server);
    
    //## auto_generated
    void _setItsServer(server_C* p_server);
    
    //## auto_generated
    void _clearItsServer();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
    
    //## auto_generated
    void _addItsTruck(truck* p_truck);
    
    //## auto_generated
    void _removeItsTruck(truck* p_truck);
    
    //## auto_generated
    void _clearItsTruck();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\cms.h
*********************************************************************/
