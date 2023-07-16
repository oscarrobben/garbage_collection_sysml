/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Standards_Regulations_Compliances
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Standards_Regulations_Compliances.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Standards_Regulations_Compliances.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_Standards_Regulations_Compliances_Standards_Regulations_Compliances_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Standards_Regulations_Compliances
Standards_Regulations_Compliances::Standards_Regulations_Compliances() {
    NOTIFY_CONSTRUCTOR(Standards_Regulations_Compliances, Standards_Regulations_Compliances(), 0, Default_Standards_Regulations_Compliances_Standards_Regulations_Compliances_SERIALIZE);
    itsSmart_garbage_collection_system = NULL;
}

Standards_Regulations_Compliances::~Standards_Regulations_Compliances() {
    NOTIFY_DESTRUCTOR(~Standards_Regulations_Compliances, true);
    cleanUpRelations();
}

smart_garbage_collection_system* Standards_Regulations_Compliances::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void Standards_Regulations_Compliances::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsStandards_Regulations_Compliances(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void Standards_Regulations_Compliances::cleanUpRelations() {
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            Standards_Regulations_Compliances* p_Standards_Regulations_Compliances = itsSmart_garbage_collection_system->getItsStandards_Regulations_Compliances();
            if(p_Standards_Regulations_Compliances != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsStandards_Regulations_Compliances(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
}

void Standards_Regulations_Compliances::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void Standards_Regulations_Compliances::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsStandards_Regulations_Compliances(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void Standards_Regulations_Compliances::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStandards_Regulations_Compliances::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
}
//#]

IMPLEMENT_META_P(Standards_Regulations_Compliances, Default, Default, false, OMAnimatedStandards_Regulations_Compliances)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Standards_Regulations_Compliances.cpp
*********************************************************************/
