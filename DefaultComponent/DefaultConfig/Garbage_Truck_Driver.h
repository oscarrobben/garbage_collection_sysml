/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Garbage_Truck_Driver
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Garbage_Truck_Driver.h
*********************************************************************/

#ifndef Garbage_Truck_Driver_H
#define Garbage_Truck_Driver_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\omcollec.h>
//## link services
class truck;

//## package ActorPkg

//## actor Garbage_Truck_Driver
class Garbage_Truck_Driver {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Garbage_Truck_Driver();
    
    //## auto_generated
    ~Garbage_Truck_Driver();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<truck*> getServices() const;
    
    //## auto_generated
    void addServices(truck* p_truck);
    
    //## auto_generated
    void removeServices(truck* p_truck);
    
    //## auto_generated
    void clearServices();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMCollection<truck*> services;		//## link services
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addServices(truck* p_truck);
    
    //## auto_generated
    void _removeServices(truck* p_truck);
    
    //## auto_generated
    void _clearServices();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Garbage_Truck_Driver.h
*********************************************************************/
