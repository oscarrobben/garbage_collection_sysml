/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: truck
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\truck.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "truck.h"
//## link itsCms
#include "cms.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## link is_serviced_by
#include "Garbage_Truck_Driver.h"
//#[ ignore
#define Default_truck_truck_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class truck
truck::truck() {
    NOTIFY_CONSTRUCTOR(truck, truck(), 0, Default_truck_truck_SERIALIZE);
    itsCms = NULL;
    itsSmart_garbage_collection_system = NULL;
}

truck::~truck() {
    NOTIFY_DESTRUCTOR(~truck, true);
    cleanUpRelations();
}

OMIterator<Garbage_Truck_Driver*> truck::getIs_serviced_by() const {
    OMIterator<Garbage_Truck_Driver*> iter(is_serviced_by);
    return iter;
}

void truck::addIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    if(p_Garbage_Truck_Driver != NULL)
        {
            p_Garbage_Truck_Driver->_addServices(this);
        }
    _addIs_serviced_by(p_Garbage_Truck_Driver);
}

void truck::removeIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    if(p_Garbage_Truck_Driver != NULL)
        {
            p_Garbage_Truck_Driver->_removeServices(this);
        }
    _removeIs_serviced_by(p_Garbage_Truck_Driver);
}

void truck::clearIs_serviced_by() {
    OMIterator<Garbage_Truck_Driver*> iter(is_serviced_by);
    while (*iter){
        Garbage_Truck_Driver* current = *iter;
        if(current != NULL)
            {
                current->_removeServices(this);
            }
        iter++;
    }
    _clearIs_serviced_by();
}

cms* truck::getItsCms() const {
    return itsCms;
}

void truck::setItsCms(cms* p_cms) {
    if(p_cms != NULL)
        {
            p_cms->_addItsTruck(this);
        }
    _setItsCms(p_cms);
}

smart_garbage_collection_system* truck::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void truck::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_addItsTruck(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void truck::cleanUpRelations() {
    {
        OMIterator<Garbage_Truck_Driver*> iter(is_serviced_by);
        while (*iter){
            Garbage_Truck_Driver* current = *iter;
            if(current != NULL)
                {
                    current->_removeServices(this);
                }
            iter++;
        }
        is_serviced_by.removeAll();
    }
    if(itsCms != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCms");
            cms* current = itsCms;
            if(current != NULL)
                {
                    current->_removeItsTruck(this);
                }
            itsCms = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            smart_garbage_collection_system* current = itsSmart_garbage_collection_system;
            if(current != NULL)
                {
                    current->_removeItsTruck(this);
                }
            itsSmart_garbage_collection_system = NULL;
        }
}

void truck::_addIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    if(p_Garbage_Truck_Driver != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("is_serviced_by", p_Garbage_Truck_Driver, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("is_serviced_by");
        }
    is_serviced_by.add(p_Garbage_Truck_Driver);
}

void truck::_removeIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    NOTIFY_RELATION_ITEM_REMOVED("is_serviced_by", p_Garbage_Truck_Driver);
    is_serviced_by.remove(p_Garbage_Truck_Driver);
}

void truck::_clearIs_serviced_by() {
    NOTIFY_RELATION_CLEARED("is_serviced_by");
    is_serviced_by.removeAll();
}

void truck::__setItsCms(cms* p_cms) {
    itsCms = p_cms;
    if(p_cms != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCms", p_cms, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCms");
        }
}

void truck::_setItsCms(cms* p_cms) {
    if(itsCms != NULL)
        {
            itsCms->_removeItsTruck(this);
        }
    __setItsCms(p_cms);
}

void truck::_clearItsCms() {
    NOTIFY_RELATION_CLEARED("itsCms");
    itsCms = NULL;
}

void truck::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    itsSmart_garbage_collection_system = p_smart_garbage_collection_system;
    if(p_smart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmart_garbage_collection_system", p_smart_garbage_collection_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
        }
}

void truck::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->_removeItsTruck(this);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void truck::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedtruck::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCms", false, true);
    if(myReal->itsCms)
        {
            aomsRelations->ADD_ITEM(myReal->itsCms);
        }
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("is_serviced_by", false, false);
    {
        OMIterator<Garbage_Truck_Driver*> iter(myReal->is_serviced_by);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(truck, Default, Default, false, OMAnimatedtruck)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\truck.cpp
*********************************************************************/
