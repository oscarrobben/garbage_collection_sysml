/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: Garbage_Truck_Driver
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\Garbage_Truck_Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Garbage_Truck_Driver.h"
//## link services
#include "truck.h"
//#[ ignore
#define ActorPkg_Garbage_Truck_Driver_Garbage_Truck_Driver_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Garbage_Truck_Driver
Garbage_Truck_Driver::Garbage_Truck_Driver() {
    NOTIFY_CONSTRUCTOR(Garbage_Truck_Driver, Garbage_Truck_Driver(), 0, ActorPkg_Garbage_Truck_Driver_Garbage_Truck_Driver_SERIALIZE);
}

Garbage_Truck_Driver::~Garbage_Truck_Driver() {
    NOTIFY_DESTRUCTOR(~Garbage_Truck_Driver, true);
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
    if(p_truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("services", p_truck, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("services");
        }
    services.add(p_truck);
}

void Garbage_Truck_Driver::_removeServices(truck* p_truck) {
    NOTIFY_RELATION_ITEM_REMOVED("services", p_truck);
    services.remove(p_truck);
}

void Garbage_Truck_Driver::_clearServices() {
    NOTIFY_RELATION_CLEARED("services");
    services.removeAll();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedGarbage_Truck_Driver::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("services", false, false);
    {
        OMIterator<truck*> iter(myReal->services);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(Garbage_Truck_Driver, ActorPkg, ActorPkg, false, OMAnimatedGarbage_Truck_Driver)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\Garbage_Truck_Driver.cpp
*********************************************************************/
