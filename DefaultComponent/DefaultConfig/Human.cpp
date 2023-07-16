/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Human
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Human.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Human.h"
//## link itsResources
#include "Resources.h"
//#[ ignore
#define Default_Human_Human_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::Human
Human_C::Human_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(Human, Human(), 0, Default_Human_Human_SERIALIZE, Human_C);
    itsResources = NULL;
}

Human_C::~Human_C() {
    NOTIFY_DESTRUCTOR(~Human, true);
    cleanUpRelations();
}

Resources* Human_C::getItsResources() const {
    return itsResources;
}

void Human_C::setItsResources(Resources* p_Resources) {
    if(p_Resources != NULL)
        {
            p_Resources->_setItsHuman(this);
        }
    _setItsResources(p_Resources);
}

void Human_C::cleanUpRelations() {
    if(itsResources != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResources");
            Human_C* p_Human = itsResources->getItsHuman();
            if(p_Human != NULL)
                {
                    itsResources->__setItsHuman(NULL);
                }
            itsResources = NULL;
        }
}

void Human_C::__setItsResources(Resources* p_Resources) {
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

void Human_C::_setItsResources(Resources* p_Resources) {
    if(itsResources != NULL)
        {
            itsResources->__setItsHuman(NULL);
        }
    __setItsResources(p_Resources);
}

void Human_C::_clearItsResources() {
    NOTIFY_RELATION_CLEARED("itsResources");
    itsResources = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHuman_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsResources", false, true);
    if(myReal->itsResources)
        {
            aomsRelations->ADD_ITEM(myReal->itsResources);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(Human, Human_C, Default, Default, false, OMAnimatedHuman_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Human.cpp
*********************************************************************/
