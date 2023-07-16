/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Efficiency
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Efficiency.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Efficiency.h"
//## link itsOppurtunities
#include "Oppurtunities.h"
//#[ ignore
#define Default_Efficiency_Efficiency_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::Efficiency
Efficiency_C::Efficiency_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(Efficiency, Efficiency(), 0, Default_Efficiency_Efficiency_SERIALIZE, Efficiency_C);
    itsOppurtunities = NULL;
}

Efficiency_C::~Efficiency_C() {
    NOTIFY_DESTRUCTOR(~Efficiency, true);
    cleanUpRelations();
}

Oppurtunities* Efficiency_C::getItsOppurtunities() const {
    return itsOppurtunities;
}

void Efficiency_C::setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    if(p_Oppurtunities != NULL)
        {
            p_Oppurtunities->_setItsEfficiency(this);
        }
    _setItsOppurtunities(p_Oppurtunities);
}

void Efficiency_C::cleanUpRelations() {
    if(itsOppurtunities != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOppurtunities");
            Efficiency_C* p_Efficiency = itsOppurtunities->getItsEfficiency();
            if(p_Efficiency != NULL)
                {
                    itsOppurtunities->__setItsEfficiency(NULL);
                }
            itsOppurtunities = NULL;
        }
}

void Efficiency_C::__setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
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

void Efficiency_C::_setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    if(itsOppurtunities != NULL)
        {
            itsOppurtunities->__setItsEfficiency(NULL);
        }
    __setItsOppurtunities(p_Oppurtunities);
}

void Efficiency_C::_clearItsOppurtunities() {
    NOTIFY_RELATION_CLEARED("itsOppurtunities");
    itsOppurtunities = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEfficiency_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsOppurtunities", false, true);
    if(myReal->itsOppurtunities)
        {
            aomsRelations->ADD_ITEM(myReal->itsOppurtunities);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(Efficiency, Efficiency_C, Default, Default, false, OMAnimatedEfficiency_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Efficiency.cpp
*********************************************************************/
