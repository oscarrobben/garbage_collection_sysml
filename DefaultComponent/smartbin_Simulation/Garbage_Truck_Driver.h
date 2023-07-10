/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: Garbage_Truck_Driver
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\Garbage_Truck_Driver.h
*********************************************************************/

#ifndef Garbage_Truck_Driver_H
#define Garbage_Truck_Driver_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## auto_generated
#include <oxf\omcollec.h>
//## link services
class truck;

//## package ActorPkg

//## actor Garbage_Truck_Driver
class Garbage_Truck_Driver {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedGarbage_Truck_Driver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedGarbage_Truck_Driver : virtual public AOMInstance {
    DECLARE_META(Garbage_Truck_Driver, OMAnimatedGarbage_Truck_Driver)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\Garbage_Truck_Driver.h
*********************************************************************/
