/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OUTPUT
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\OUTPUT.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "OUTPUT.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_OUTPUT_OUTPUT_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class OUTPUT
OUTPUT::OUTPUT() {
    NOTIFY_CONSTRUCTOR(OUTPUT, OUTPUT(), 0, Default_OUTPUT_OUTPUT_SERIALIZE);
    itsSmart_garbage_collection_system = NULL;
}

OUTPUT::~OUTPUT() {
    NOTIFY_DESTRUCTOR(~OUTPUT, true);
    cleanUpRelations();
}

Optimized_Collection_Route_C* OUTPUT::getItsOptimized_Collection_Route() const {
    return (Optimized_Collection_Route_C*) &itsOptimized_Collection_Route;
}

smart_garbage_collection_system* OUTPUT::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void OUTPUT::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsOUTPUT(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void OUTPUT::cleanUpRelations() {
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            OUTPUT* p_OUTPUT = itsSmart_garbage_collection_system->getItsOUTPUT();
            if(p_OUTPUT != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsOUTPUT(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
}

void OUTPUT::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void OUTPUT::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsOUTPUT(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void OUTPUT::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedOUTPUT::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsOptimized_Collection_Route", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsOptimized_Collection_Route);
}
//#]

IMPLEMENT_META_P(OUTPUT, Default, Default, false, OMAnimatedOUTPUT)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OUTPUT.cpp
*********************************************************************/
