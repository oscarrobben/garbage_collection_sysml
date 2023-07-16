/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sustainability
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Sustainability.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sustainability.h"
//## link itsOppurtunities
#include "Oppurtunities.h"
//#[ ignore
#define Default_Sustainability_Sustainability_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::Sustainability
Sustainability_C::Sustainability_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(Sustainability, Sustainability(), 0, Default_Sustainability_Sustainability_SERIALIZE, Sustainability_C);
    itsOppurtunities = NULL;
}

Sustainability_C::~Sustainability_C() {
    NOTIFY_DESTRUCTOR(~Sustainability, true);
    cleanUpRelations();
}

Oppurtunities* Sustainability_C::getItsOppurtunities() const {
    return itsOppurtunities;
}

void Sustainability_C::setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    if(p_Oppurtunities != NULL)
        {
            p_Oppurtunities->_setItsSustainability(this);
        }
    _setItsOppurtunities(p_Oppurtunities);
}

void Sustainability_C::cleanUpRelations() {
    if(itsOppurtunities != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOppurtunities");
            Sustainability_C* p_Sustainability = itsOppurtunities->getItsSustainability();
            if(p_Sustainability != NULL)
                {
                    itsOppurtunities->__setItsSustainability(NULL);
                }
            itsOppurtunities = NULL;
        }
}

void Sustainability_C::__setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    itsOppurtunities = p_Oppurtunities;
    if(p_Oppurtunities != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOppurtunities", p_Oppurtunities, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOppurtunities");
        }
}

void Sustainability_C::_setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    if(itsOppurtunities != NULL)
        {
            itsOppurtunities->__setItsSustainability(NULL);
        }
    __setItsOppurtunities(p_Oppurtunities);
}

void Sustainability_C::_clearItsOppurtunities() {
    NOTIFY_RELATION_CLEARED("itsOppurtunities");
    itsOppurtunities = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSustainability_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsOppurtunities", false, true);
    if(myReal->itsOppurtunities)
        {
            aomsRelations->ADD_ITEM(myReal->itsOppurtunities);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(Sustainability, Sustainability_C, Default, Default, false, OMAnimatedSustainability_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sustainability.cpp
*********************************************************************/
