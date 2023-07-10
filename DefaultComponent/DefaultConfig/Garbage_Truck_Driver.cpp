/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Garbage_Truck_Driver
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Garbage_Truck_Driver.cpp
*********************************************************************/

//## auto_generated
#include "Garbage_Truck_Driver.h"
//## link services
#include "truck.h"
//## package ActorPkg

//## actor Garbage_Truck_Driver
Garbage_Truck_Driver::Garbage_Truck_Driver() {
}

Garbage_Truck_Driver::~Garbage_Truck_Driver() {
    cleanUpRelations();
}

OMIterator<truck*> Garbage_Truck_Driver::getServices() const {
    OMIterator<truck*> iter(services);
    return iter;
}

void Garbage_Truck_Driver::addServices(truck* p_truck) {
    if(p_truck != NULL)
        {
            p_truck->_addIs_serviced_by(this);
        }
    _addServices(p_truck);
}

void Garbage_Truck_Driver::removeServices(truck* p_truck) {
    if(p_truck != NULL)
        {
            p_truck->_removeIs_serviced_by(this);
        }
    _removeServices(p_truck);
}

void Garbage_Truck_Driver::clearServices() {
    OMIterator<truck*> iter(services);
    while (*iter){
        truck* current = *iter;
        if(current != NULL)
            {
                current->_removeIs_serviced_by(this);
            }
        iter++;
    }
    _clearServices();
}

void Garbage_Truck_Driver::cleanUpRelations() {
    {
        OMIterator<truck*> iter(services);
        while (*iter){
            truck* current = *iter;
            if(current != NULL)
                {
                    current->_removeIs_serviced_by(this);
                }
            iter++;
        }
        services.removeAll();
    }
}

void Garbage_Truck_Driver::_addServices(truck* p_truck) {
    services.add(p_truck);
}

void Garbage_Truck_Driver::_removeServices(truck* p_truck) {
    services.remove(p_truck);
}

void Garbage_Truck_Driver::_clearServices() {
    services.removeAll();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Garbage_Truck_Driver.cpp
*********************************************************************/
