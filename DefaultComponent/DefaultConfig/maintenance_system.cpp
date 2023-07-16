/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: maintenance_system
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\maintenance_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "maintenance_system.h"
//## link maintenance_by
#include "smart_garbage_collection_system.h"
//#[ ignore
#define EnvPkg_maintenance_system_maintenance_system_SERIALIZE OM_NO_OP
//#]

//## package EnvPkg

//## class maintenance_system
maintenance_system::maintenance_system() {
    NOTIFY_CONSTRUCTOR(maintenance_system, maintenance_system(), 0, EnvPkg_maintenance_system_maintenance_system_SERIALIZE);
    maintenance_by = NULL;
}

maintenance_system::~maintenance_system() {
    NOTIFY_DESTRUCTOR(~maintenance_system, true);
    cleanUpRelations();
}

smart_garbage_collection_system* maintenance_system::getMaintenance_by() const {
    return maintenance_by;
}

void maintenance_system::setMaintenance_by(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setDo_maintenance_on(this);
        }
    _setMaintenance_by(p_smart_garbage_collection_system);
}

void maintenance_system::cleanUpRelations() {
    if(maintenance_by != NULL)
        {
            NOTIFY_RELATION_CLEARED("maintenance_by");
            maintenance_system* p_maintenance_system = maintenance_by->getDo_maintenance_on();
            if(p_maintenance_system != NULL)
                {
                    maintenance_by->__setDo_maintenance_on(NULL);
                }
            maintenance_by = NULL;
        }
}

void maintenance_system::__setMaintenance_by(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    maintenance_by = p_smart_garbage_collection_system;
    if(p_smart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("maintenance_by", p_smart_garbage_collection_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("maintenance_by");
        }
}

void maintenance_system::_setMaintenance_by(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(maintenance_by != NULL)
        {
            maintenance_by->__setDo_maintenance_on(NULL);
        }
    __setMaintenance_by(p_smart_garbage_collection_system);
}

void maintenance_system::_clearMaintenance_by() {
    NOTIFY_RELATION_CLEARED("maintenance_by");
    maintenance_by = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedmaintenance_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("maintenance_by", false, true);
    if(myReal->maintenance_by)
        {
            aomsRelations->ADD_ITEM(myReal->maintenance_by);
        }
}
//#]

IMPLEMENT_META_P(maintenance_system, EnvPkg, EnvPkg, false, OMAnimatedmaintenance_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\maintenance_system.cpp
*********************************************************************/
