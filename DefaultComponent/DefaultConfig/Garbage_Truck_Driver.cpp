/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Garbage_Truck_Driver
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Garbage_Truck_Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Garbage_Truck_Driver.h"
//## link itsStakeholders
#include "Stakeholders.h"
//## link services
#include "truck.h"
//## link itsUsers_Endusers
#include "Users_Endusers.h"
//#[ ignore
#define ActorPkg_Garbage_Truck_Driver_Garbage_Truck_Driver_SERIALIZE OM_NO_OP
//#]

//## package ActorPkg

//## actor Garbage_Truck_Driver
Garbage_Truck_Driver::Garbage_Truck_Driver() {
    NOTIFY_CONSTRUCTOR(Garbage_Truck_Driver, Garbage_Truck_Driver(), 0, ActorPkg_Garbage_Truck_Driver_Garbage_Truck_Driver_SERIALIZE);
    itsStakeholders = NULL;
    itsUsers_Endusers = NULL;
}

Garbage_Truck_Driver::~Garbage_Truck_Driver() {
    NOTIFY_DESTRUCTOR(~Garbage_Truck_Driver, true);
    cleanUpRelations();
}

Stakeholders* Garbage_Truck_Driver::getItsStakeholders() const {
    return itsStakeholders;
}

void Garbage_Truck_Driver::setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(p_Stakeholders != NULL)
        {
            p_Stakeholders->_setItsGarbage_Truck_Driver_1(this);
        }
    _setItsStakeholders(p_Stakeholders);
}

Users_Endusers* Garbage_Truck_Driver::getItsUsers_Endusers() const {
    return itsUsers_Endusers;
}

void Garbage_Truck_Driver::setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    if(p_Users_Endusers != NULL)
        {
            p_Users_Endusers->_setItsGarbage_Truck_Driver(this);
        }
    _setItsUsers_Endusers(p_Users_Endusers);
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
    if(itsStakeholders != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
            Garbage_Truck_Driver* p_Garbage_Truck_Driver = itsStakeholders->getItsGarbage_Truck_Driver_1();
            if(p_Garbage_Truck_Driver != NULL)
                {
                    itsStakeholders->__setItsGarbage_Truck_Driver_1(NULL);
                }
            itsStakeholders = NULL;
        }
    if(itsUsers_Endusers != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
            Garbage_Truck_Driver* p_Garbage_Truck_Driver = itsUsers_Endusers->getItsGarbage_Truck_Driver();
            if(p_Garbage_Truck_Driver != NULL)
                {
                    itsUsers_Endusers->__setItsGarbage_Truck_Driver(NULL);
                }
            itsUsers_Endusers = NULL;
        }
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

void Garbage_Truck_Driver::__setItsStakeholders(Stakeholders* p_Stakeholders) {
    itsStakeholders = p_Stakeholders;
    if(p_Stakeholders != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStakeholders", p_Stakeholders, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
        }
}

void Garbage_Truck_Driver::_setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(itsStakeholders != NULL)
        {
            itsStakeholders->__setItsGarbage_Truck_Driver_1(NULL);
        }
    __setItsStakeholders(p_Stakeholders);
}

void Garbage_Truck_Driver::_clearItsStakeholders() {
    NOTIFY_RELATION_CLEARED("itsStakeholders");
    itsStakeholders = NULL;
}

void Garbage_Truck_Driver::__setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    itsUsers_Endusers = p_Users_Endusers;
    if(p_Users_Endusers != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUsers_Endusers", p_Users_Endusers, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
        }
}

void Garbage_Truck_Driver::_setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    if(itsUsers_Endusers != NULL)
        {
            itsUsers_Endusers->__setItsGarbage_Truck_Driver(NULL);
        }
    __setItsUsers_Endusers(p_Users_Endusers);
}

void Garbage_Truck_Driver::_clearItsUsers_Endusers() {
    NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
    itsUsers_Endusers = NULL;
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
    aomsRelations->addRelation("itsStakeholders", false, true);
    if(myReal->itsStakeholders)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholders);
        }
    aomsRelations->addRelation("itsUsers_Endusers", false, true);
    if(myReal->itsUsers_Endusers)
        {
            aomsRelations->ADD_ITEM(myReal->itsUsers_Endusers);
        }
}
//#]

IMPLEMENT_META_P(Garbage_Truck_Driver, ActorPkg, ActorPkg, false, OMAnimatedGarbage_Truck_Driver)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Garbage_Truck_Driver.cpp
*********************************************************************/
