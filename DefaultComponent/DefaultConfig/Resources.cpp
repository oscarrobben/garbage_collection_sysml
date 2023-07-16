/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Resources
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Resources.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Resources.h"
//## link itsBlock_112
#include "block_112.h"
//## link itsHuman
#include "Human.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## link itsTechnologie
#include "Technologie.h"
//#[ ignore
#define Default_Resources_Resources_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Resources
Resources::Resources() {
    NOTIFY_CONSTRUCTOR(Resources, Resources(), 0, Default_Resources_Resources_SERIALIZE);
    itsBlock_112 = NULL;
    itsHuman = NULL;
    itsSmart_garbage_collection_system = NULL;
    itsTechnologie = NULL;
}

Resources::~Resources() {
    NOTIFY_DESTRUCTOR(~Resources, true);
    cleanUpRelations();
}

block_112* Resources::getItsBlock_112() const {
    return itsBlock_112;
}

void Resources::setItsBlock_112(block_112* p_block_112) {
    if(p_block_112 != NULL)
        {
            p_block_112->_setItsResources(this);
        }
    _setItsBlock_112(p_block_112);
}

Human_C* Resources::getItsHuman() const {
    return itsHuman;
}

void Resources::setItsHuman(Human_C* p_Human) {
    if(p_Human != NULL)
        {
            p_Human->_setItsResources(this);
        }
    _setItsHuman(p_Human);
}

smart_garbage_collection_system* Resources::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void Resources::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsResources(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

Technologie_C* Resources::getItsTechnologie() const {
    return itsTechnologie;
}

void Resources::setItsTechnologie(Technologie_C* p_Technologie) {
    if(p_Technologie != NULL)
        {
            p_Technologie->_setItsResources(this);
        }
    _setItsTechnologie(p_Technologie);
}

void Resources::cleanUpRelations() {
    if(itsBlock_112 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsBlock_112");
            Resources* p_Resources = itsBlock_112->getItsResources();
            if(p_Resources != NULL)
                {
                    itsBlock_112->__setItsResources(NULL);
                }
            itsBlock_112 = NULL;
        }
    if(itsHuman != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHuman");
            Resources* p_Resources = itsHuman->getItsResources();
            if(p_Resources != NULL)
                {
                    itsHuman->__setItsResources(NULL);
                }
            itsHuman = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            Resources* p_Resources = itsSmart_garbage_collection_system->getItsResources();
            if(p_Resources != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsResources(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
    if(itsTechnologie != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTechnologie");
            Resources* p_Resources = itsTechnologie->getItsResources();
            if(p_Resources != NULL)
                {
                    itsTechnologie->__setItsResources(NULL);
                }
            itsTechnologie = NULL;
        }
}

void Resources::__setItsBlock_112(block_112* p_block_112) {
    itsBlock_112 = p_block_112;
    if(p_block_112 != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsBlock_112", p_block_112, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsBlock_112");
        }
}

void Resources::_setItsBlock_112(block_112* p_block_112) {
    if(itsBlock_112 != NULL)
        {
            itsBlock_112->__setItsResources(NULL);
        }
    __setItsBlock_112(p_block_112);
}

void Resources::_clearItsBlock_112() {
    NOTIFY_RELATION_CLEARED("itsBlock_112");
    itsBlock_112 = NULL;
}

void Resources::__setItsHuman(Human_C* p_Human) {
    itsHuman = p_Human;
    if(p_Human != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHuman", p_Human, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHuman");
        }
}

void Resources::_setItsHuman(Human_C* p_Human) {
    if(itsHuman != NULL)
        {
            itsHuman->__setItsResources(NULL);
        }
    __setItsHuman(p_Human);
}

void Resources::_clearItsHuman() {
    NOTIFY_RELATION_CLEARED("itsHuman");
    itsHuman = NULL;
}

void Resources::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void Resources::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsResources(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void Resources::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

void Resources::__setItsTechnologie(Technologie_C* p_Technologie) {
    itsTechnologie = p_Technologie;
    if(p_Technologie != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTechnologie", p_Technologie, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTechnologie");
        }
}

void Resources::_setItsTechnologie(Technologie_C* p_Technologie) {
    if(itsTechnologie != NULL)
        {
            itsTechnologie->__setItsResources(NULL);
        }
    __setItsTechnologie(p_Technologie);
}

void Resources::_clearItsTechnologie() {
    NOTIFY_RELATION_CLEARED("itsTechnologie");
    itsTechnologie = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedResources::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsBlock_112", false, true);
    if(myReal->itsBlock_112)
        {
            aomsRelations->ADD_ITEM(myReal->itsBlock_112);
        }
    aomsRelations->addRelation("itsTechnologie", false, true);
    if(myReal->itsTechnologie)
        {
            aomsRelations->ADD_ITEM(myReal->itsTechnologie);
        }
    aomsRelations->addRelation("itsHuman", false, true);
    if(myReal->itsHuman)
        {
            aomsRelations->ADD_ITEM(myReal->itsHuman);
        }
}
//#]

IMPLEMENT_META_P(Resources, Default, Default, false, OMAnimatedResources)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Resources.cpp
*********************************************************************/
