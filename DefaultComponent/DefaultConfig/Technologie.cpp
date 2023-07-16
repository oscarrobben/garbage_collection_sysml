/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Technologie
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Technologie.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Technologie.h"
//## link itsResources
#include "Resources.h"
//#[ ignore
#define Default_Technologie_Technologie_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::Technologie
Technologie_C::Technologie_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(Technologie, Technologie(), 0, Default_Technologie_Technologie_SERIALIZE, Technologie_C);
    itsResources = NULL;
}

Technologie_C::~Technologie_C() {
    NOTIFY_DESTRUCTOR(~Technologie, true);
    cleanUpRelations();
}

Resources* Technologie_C::getItsResources() const {
    return itsResources;
}

void Technologie_C::setItsResources(Resources* p_Resources) {
    if(p_Resources != NULL)
        {
            p_Resources->_setItsTechnologie(this);
        }
    _setItsResources(p_Resources);
}

void Technologie_C::cleanUpRelations() {
    if(itsResources != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResources");
            Technologie_C* p_Technologie = itsResources->getItsTechnologie();
            if(p_Technologie != NULL)
                {
                    itsResources->__setItsTechnologie(NULL);
                }
            itsResources = NULL;
        }
}

void Technologie_C::__setItsResources(Resources* p_Resources) {
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

void Technologie_C::_setItsResources(Resources* p_Resources) {
    if(itsResources != NULL)
        {
            itsResources->__setItsTechnologie(NULL);
        }
    __setItsResources(p_Resources);
}

void Technologie_C::_clearItsResources() {
    NOTIFY_RELATION_CLEARED("itsResources");
    itsResources = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTechnologie_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsResources", false, true);
    if(myReal->itsResources)
        {
            aomsRelations->ADD_ITEM(myReal->itsResources);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(Technologie, Technologie_C, Default, Default, false, OMAnimatedTechnologie_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Technologie.cpp
*********************************************************************/
