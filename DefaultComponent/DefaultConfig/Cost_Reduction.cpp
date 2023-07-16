/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cost_Reduction
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Cost_Reduction.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Cost_Reduction.h"
//## link itsOppurtunities
#include "Oppurtunities.h"
//#[ ignore
#define Default_Cost_Reduction_Cost_Reduction_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::Cost_Reduction
Cost_Reduction_C::Cost_Reduction_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(Cost_Reduction, Cost_Reduction(), 0, Default_Cost_Reduction_Cost_Reduction_SERIALIZE, Cost_Reduction_C);
    itsOppurtunities = NULL;
}

Cost_Reduction_C::~Cost_Reduction_C() {
    NOTIFY_DESTRUCTOR(~Cost_Reduction, true);
    cleanUpRelations();
}

Oppurtunities* Cost_Reduction_C::getItsOppurtunities() const {
    return itsOppurtunities;
}

void Cost_Reduction_C::setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    if(p_Oppurtunities != NULL)
        {
            p_Oppurtunities->_setItsCost_Reduction(this);
        }
    _setItsOppurtunities(p_Oppurtunities);
}

void Cost_Reduction_C::cleanUpRelations() {
    if(itsOppurtunities != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOppurtunities");
            Cost_Reduction_C* p_Cost_Reduction = itsOppurtunities->getItsCost_Reduction();
            if(p_Cost_Reduction != NULL)
                {
                    itsOppurtunities->__setItsCost_Reduction(NULL);
                }
            itsOppurtunities = NULL;
        }
}

void Cost_Reduction_C::__setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
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

void Cost_Reduction_C::_setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    if(itsOppurtunities != NULL)
        {
            itsOppurtunities->__setItsCost_Reduction(NULL);
        }
    __setItsOppurtunities(p_Oppurtunities);
}

void Cost_Reduction_C::_clearItsOppurtunities() {
    NOTIFY_RELATION_CLEARED("itsOppurtunities");
    itsOppurtunities = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCost_Reduction_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsOppurtunities", false, true);
    if(myReal->itsOppurtunities)
        {
            aomsRelations->ADD_ITEM(myReal->itsOppurtunities);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(Cost_Reduction, Cost_Reduction_C, Default, Default, false, OMAnimatedCost_Reduction_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cost_Reduction.cpp
*********************************************************************/
