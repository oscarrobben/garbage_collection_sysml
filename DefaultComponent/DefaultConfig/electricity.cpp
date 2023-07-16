/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: electricity
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\electricity.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "electricity.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_electricity_electricity_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class electricity
electricity::electricity() {
    NOTIFY_CONSTRUCTOR(electricity, electricity(), 0, Default_electricity_electricity_SERIALIZE);
    itsSmart_garbage_collection_system = NULL;
}

electricity::~electricity() {
    NOTIFY_DESTRUCTOR(~electricity, true);
    cleanUpRelations();
}

smart_garbage_collection_system* electricity::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void electricity::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsElectricity(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void electricity::cleanUpRelations() {
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            electricity* p_electricity = itsSmart_garbage_collection_system->getItsElectricity();
            if(p_electricity != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsElectricity(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
}

void electricity::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void electricity::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsElectricity(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void electricity::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedelectricity::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
}
//#]

IMPLEMENT_META_P(electricity, Default, Default, false, OMAnimatedelectricity)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\electricity.cpp
*********************************************************************/
