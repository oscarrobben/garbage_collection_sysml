/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Adoption
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Adoption.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Adoption.h"
//## link itsRisks
#include "Risks.h"
//#[ ignore
#define Default_Adoption_Adoption_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::Adoption
Adoption_C::Adoption_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(Adoption, Adoption(), 0, Default_Adoption_Adoption_SERIALIZE, Adoption_C);
    itsRisks = NULL;
}

Adoption_C::~Adoption_C() {
    NOTIFY_DESTRUCTOR(~Adoption, true);
    cleanUpRelations();
}

Risks* Adoption_C::getItsRisks() const {
    return itsRisks;
}

void Adoption_C::setItsRisks(Risks* p_Risks) {
    if(p_Risks != NULL)
        {
            p_Risks->_setItsAdoption(this);
        }
    _setItsRisks(p_Risks);
}

void Adoption_C::cleanUpRelations() {
    if(itsRisks != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRisks");
            Adoption_C* p_Adoption = itsRisks->getItsAdoption();
            if(p_Adoption != NULL)
                {
                    itsRisks->__setItsAdoption(NULL);
                }
            itsRisks = NULL;
        }
}

void Adoption_C::__setItsRisks(Risks* p_Risks) {
    itsRisks = p_Risks;
    if(p_Risks != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRisks", p_Risks, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRisks");
        }
}

void Adoption_C::_setItsRisks(Risks* p_Risks) {
    if(itsRisks != NULL)
        {
            itsRisks->__setItsAdoption(NULL);
        }
    __setItsRisks(p_Risks);
}

void Adoption_C::_clearItsRisks() {
    NOTIFY_RELATION_CLEARED("itsRisks");
    itsRisks = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAdoption_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsRisks", false, true);
    if(myReal->itsRisks)
        {
            aomsRelations->ADD_ITEM(myReal->itsRisks);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(Adoption, Adoption_C, Default, Default, false, OMAnimatedAdoption_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Adoption.cpp
*********************************************************************/
