/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Technological
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Technological.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Technological.h"
//## link itsRisks
#include "Risks.h"
//#[ ignore
#define Default_Technological_Technological_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::Technological
Technological_C::Technological_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(Technological, Technological(), 0, Default_Technological_Technological_SERIALIZE, Technological_C);
    itsRisks = NULL;
}

Technological_C::~Technological_C() {
    NOTIFY_DESTRUCTOR(~Technological, true);
    cleanUpRelations();
}

Risks* Technological_C::getItsRisks() const {
    return itsRisks;
}

void Technological_C::setItsRisks(Risks* p_Risks) {
    if(p_Risks != NULL)
        {
            p_Risks->_setItsTechnological(this);
        }
    _setItsRisks(p_Risks);
}

void Technological_C::cleanUpRelations() {
    if(itsRisks != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRisks");
            Technological_C* p_Technological = itsRisks->getItsTechnological();
            if(p_Technological != NULL)
                {
                    itsRisks->__setItsTechnological(NULL);
                }
            itsRisks = NULL;
        }
}

void Technological_C::__setItsRisks(Risks* p_Risks) {
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

void Technological_C::_setItsRisks(Risks* p_Risks) {
    if(itsRisks != NULL)
        {
            itsRisks->__setItsTechnological(NULL);
        }
    __setItsRisks(p_Risks);
}

void Technological_C::_clearItsRisks() {
    NOTIFY_RELATION_CLEARED("itsRisks");
    itsRisks = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTechnological_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsRisks", false, true);
    if(myReal->itsRisks)
        {
            aomsRelations->ADD_ITEM(myReal->itsRisks);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(Technological, Technological_C, Default, Default, false, OMAnimatedTechnological_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Technological.cpp
*********************************************************************/
