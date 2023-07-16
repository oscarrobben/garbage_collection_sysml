/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: INPUT
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\INPUT.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "INPUT.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_INPUT_INPUT_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class INPUT
INPUT::INPUT() {
    NOTIFY_CONSTRUCTOR(INPUT, INPUT(), 0, Default_INPUT_INPUT_SERIALIZE);
    itsSmart_garbage_collection_system = NULL;
}

INPUT::~INPUT() {
    NOTIFY_DESTRUCTOR(~INPUT, true);
    cleanUpRelations();
}

SmartBin_Data_C* INPUT::getItsSmartBin_Data() const {
    return (SmartBin_Data_C*) &itsSmartBin_Data;
}

smart_garbage_collection_system* INPUT::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void INPUT::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsINPUT(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void INPUT::cleanUpRelations() {
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            INPUT* p_INPUT = itsSmart_garbage_collection_system->getItsINPUT();
            if(p_INPUT != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsINPUT(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
}

void INPUT::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void INPUT::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsINPUT(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void INPUT::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedINPUT::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsSmartBin_Data", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsSmartBin_Data);
}
//#]

IMPLEMENT_META_P(INPUT, Default, Default, false, OMAnimatedINPUT)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\INPUT.cpp
*********************************************************************/
