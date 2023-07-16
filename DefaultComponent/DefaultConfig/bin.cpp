/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: bin
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\bin.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "bin.h"
//## link itsCms
#include "cms.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_bin_bin_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class bin
bin::bin() {
    NOTIFY_CONSTRUCTOR(bin, bin(), 0, Default_bin_bin_SERIALIZE);
    itsCms = NULL;
    itsSmart_garbage_collection_system = NULL;
}

bin::~bin() {
    NOTIFY_DESTRUCTOR(~bin, true);
    cleanUpRelations();
}

cms* bin::getItsCms() const {
    return itsCms;
}

void bin::setItsCms(cms* p_cms) {
    if(p_cms != NULL)
        {
            p_cms->_addItsBin(this);
        }
    _setItsCms(p_cms);
}

smart_garbage_collection_system* bin::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void bin::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_addItsBin(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void bin::cleanUpRelations() {
    if(itsCms != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCms");
            cms* current = itsCms;
            if(current != NULL)
                {
                    current->_removeItsBin(this);
                }
            itsCms = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            smart_garbage_collection_system* current = itsSmart_garbage_collection_system;
            if(current != NULL)
                {
                    current->_removeItsBin(this);
                }
            itsSmart_garbage_collection_system = NULL;
        }
}

void bin::__setItsCms(cms* p_cms) {
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

void bin::_setItsCms(cms* p_cms) {
    if(itsCms != NULL)
        {
            itsCms->_removeItsBin(this);
        }
    __setItsCms(p_cms);
}

void bin::_clearItsCms() {
    NOTIFY_RELATION_CLEARED("itsCms");
    itsCms = NULL;
}

void bin::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void bin::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->_removeItsBin(this);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void bin::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedbin::serializeRelations(AOMSRelations* aomsRelations) const {
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
}
//#]

IMPLEMENT_META_P(bin, Default, Default, false, OMAnimatedbin)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\bin.cpp
*********************************************************************/
