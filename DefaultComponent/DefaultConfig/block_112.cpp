/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: block_112
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\block_112.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "block_112.h"
//## link itsResources
#include "Resources.h"
//#[ ignore
#define Default_block_112_block_112_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class block_112
block_112::block_112() {
    NOTIFY_CONSTRUCTOR(block_112, block_112(), 0, Default_block_112_block_112_SERIALIZE);
    itsResources = NULL;
}

block_112::~block_112() {
    NOTIFY_DESTRUCTOR(~block_112, true);
    cleanUpRelations();
}

Resources* block_112::getItsResources() const {
    return itsResources;
}

void block_112::setItsResources(Resources* p_Resources) {
    if(p_Resources != NULL)
        {
            p_Resources->_setItsBlock_112(this);
        }
    _setItsResources(p_Resources);
}

void block_112::cleanUpRelations() {
    if(itsResources != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResources");
            block_112* p_block_112 = itsResources->getItsBlock_112();
            if(p_block_112 != NULL)
                {
                    itsResources->__setItsBlock_112(NULL);
                }
            itsResources = NULL;
        }
}

void block_112::__setItsResources(Resources* p_Resources) {
    itsResources = p_Resources;
    if(p_Resources != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResources", p_Resources, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResources");
        }
}

void block_112::_setItsResources(Resources* p_Resources) {
    if(itsResources != NULL)
        {
            itsResources->__setItsBlock_112(NULL);
        }
    __setItsResources(p_Resources);
}

void block_112::_clearItsResources() {
    NOTIFY_RELATION_CLEARED("itsResources");
    itsResources = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedblock_112::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsResources", false, true);
    if(myReal->itsResources)
        {
            aomsRelations->ADD_ITEM(myReal->itsResources);
        }
}
//#]

IMPLEMENT_META_P(block_112, Default, Default, false, OMAnimatedblock_112)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\block_112.cpp
*********************************************************************/
