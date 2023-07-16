/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Technological_Challenges
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Technological_Challenges.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Technological_Challenges.h"
//## link itsThreats
#include "Threats.h"
//#[ ignore
#define Default_Technological_Challenges_Technological_Challenges_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::Technological_Challenges
Technological_Challenges_C::Technological_Challenges_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(Technological_Challenges, Technological_Challenges(), 0, Default_Technological_Challenges_Technological_Challenges_SERIALIZE, Technological_Challenges_C);
    itsThreats = NULL;
}

Technological_Challenges_C::~Technological_Challenges_C() {
    NOTIFY_DESTRUCTOR(~Technological_Challenges, true);
    cleanUpRelations();
}

Threats* Technological_Challenges_C::getItsThreats() const {
    return itsThreats;
}

void Technological_Challenges_C::setItsThreats(Threats* p_Threats) {
    if(p_Threats != NULL)
        {
            p_Threats->_setItsTechnological_Challenges(this);
        }
    _setItsThreats(p_Threats);
}

void Technological_Challenges_C::cleanUpRelations() {
    if(itsThreats != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsThreats");
            Technological_Challenges_C* p_Technological_Challenges = itsThreats->getItsTechnological_Challenges();
            if(p_Technological_Challenges != NULL)
                {
                    itsThreats->__setItsTechnological_Challenges(NULL);
                }
            itsThreats = NULL;
        }
}

void Technological_Challenges_C::__setItsThreats(Threats* p_Threats) {
    itsThreats = p_Threats;
    if(p_Threats != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsThreats", p_Threats, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsThreats");
        }
}

void Technological_Challenges_C::_setItsThreats(Threats* p_Threats) {
    if(itsThreats != NULL)
        {
            itsThreats->__setItsTechnological_Challenges(NULL);
        }
    __setItsThreats(p_Threats);
}

void Technological_Challenges_C::_clearItsThreats() {
    NOTIFY_RELATION_CLEARED("itsThreats");
    itsThreats = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTechnological_Challenges_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsThreats", false, true);
    if(myReal->itsThreats)
        {
            aomsRelations->ADD_ITEM(myReal->itsThreats);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(Technological_Challenges, Technological_Challenges_C, Default, Default, false, OMAnimatedTechnological_Challenges_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Technological_Challenges.cpp
*********************************************************************/
