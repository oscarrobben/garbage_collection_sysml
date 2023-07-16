/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Threats
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Threats.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Threats.h"
//## link itsResistancetoChange
#include "ResistancetoChange.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## link itsTechnological_Challenges
#include "Technological_Challenges.h"
//#[ ignore
#define Default_Threats_Threats_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class Threats
Threats::Threats() {
    NOTIFY_CONSTRUCTOR(Threats, Threats(), 0, Default_Threats_Threats_SERIALIZE);
    itsResistancetoChange = NULL;
    itsResistancetoChange_1 = NULL;
    itsSmart_garbage_collection_system = NULL;
    itsTechnological_Challenges = NULL;
}

Threats::~Threats() {
    NOTIFY_DESTRUCTOR(~Threats, true);
    cleanUpRelations();
}

ResistancetoChange_C* Threats::getItsResistancetoChange() const {
    return itsResistancetoChange;
}

void Threats::setItsResistancetoChange(ResistancetoChange_C* p_ResistancetoChange) {
    if(p_ResistancetoChange != NULL)
        {
            p_ResistancetoChange->_setItsThreats(this);
        }
    _setItsResistancetoChange(p_ResistancetoChange);
}

ResistancetoChange_C* Threats::getItsResistancetoChange_1() const {
    return itsResistancetoChange_1;
}

void Threats::setItsResistancetoChange_1(ResistancetoChange_C* p_ResistancetoChange) {
    if(p_ResistancetoChange != NULL)
        {
            p_ResistancetoChange->_setItsThreats_1(this);
        }
    _setItsResistancetoChange_1(p_ResistancetoChange);
}

smart_garbage_collection_system* Threats::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void Threats::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsThreats(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

Technological_Challenges_C* Threats::getItsTechnological_Challenges() const {
    return itsTechnological_Challenges;
}

void Threats::setItsTechnological_Challenges(Technological_Challenges_C* p_Technological_Challenges) {
    if(p_Technological_Challenges != NULL)
        {
            p_Technological_Challenges->_setItsThreats(this);
        }
    _setItsTechnological_Challenges(p_Technological_Challenges);
}

void Threats::cleanUpRelations() {
    if(itsResistancetoChange != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResistancetoChange");
            Threats* p_Threats = itsResistancetoChange->getItsThreats();
            if(p_Threats != NULL)
                {
                    itsResistancetoChange->__setItsThreats(NULL);
                }
            itsResistancetoChange = NULL;
        }
    if(itsResistancetoChange_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResistancetoChange_1");
            Threats* p_Threats = itsResistancetoChange_1->getItsThreats_1();
            if(p_Threats != NULL)
                {
                    itsResistancetoChange_1->__setItsThreats_1(NULL);
                }
            itsResistancetoChange_1 = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            Threats* p_Threats = itsSmart_garbage_collection_system->getItsThreats();
            if(p_Threats != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsThreats(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
    if(itsTechnological_Challenges != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTechnological_Challenges");
            Threats* p_Threats = itsTechnological_Challenges->getItsThreats();
            if(p_Threats != NULL)
                {
                    itsTechnological_Challenges->__setItsThreats(NULL);
                }
            itsTechnological_Challenges = NULL;
        }
}

void Threats::__setItsResistancetoChange(ResistancetoChange_C* p_ResistancetoChange) {
    itsResistancetoChange = p_ResistancetoChange;
    if(p_ResistancetoChange != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResistancetoChange", p_ResistancetoChange, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResistancetoChange");
        }
}

void Threats::_setItsResistancetoChange(ResistancetoChange_C* p_ResistancetoChange) {
    if(itsResistancetoChange != NULL)
        {
            itsResistancetoChange->__setItsThreats(NULL);
        }
    __setItsResistancetoChange(p_ResistancetoChange);
}

void Threats::_clearItsResistancetoChange() {
    NOTIFY_RELATION_CLEARED("itsResistancetoChange");
    itsResistancetoChange = NULL;
}

void Threats::__setItsResistancetoChange_1(ResistancetoChange_C* p_ResistancetoChange) {
    itsResistancetoChange_1 = p_ResistancetoChange;
    if(p_ResistancetoChange != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResistancetoChange_1", p_ResistancetoChange, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResistancetoChange_1");
        }
}

void Threats::_setItsResistancetoChange_1(ResistancetoChange_C* p_ResistancetoChange) {
    if(itsResistancetoChange_1 != NULL)
        {
            itsResistancetoChange_1->__setItsThreats_1(NULL);
        }
    __setItsResistancetoChange_1(p_ResistancetoChange);
}

void Threats::_clearItsResistancetoChange_1() {
    NOTIFY_RELATION_CLEARED("itsResistancetoChange_1");
    itsResistancetoChange_1 = NULL;
}

void Threats::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void Threats::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsThreats(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void Threats::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

void Threats::__setItsTechnological_Challenges(Technological_Challenges_C* p_Technological_Challenges) {
    itsTechnological_Challenges = p_Technological_Challenges;
    if(p_Technological_Challenges != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTechnological_Challenges", p_Technological_Challenges, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTechnological_Challenges");
        }
}

void Threats::_setItsTechnological_Challenges(Technological_Challenges_C* p_Technological_Challenges) {
    if(itsTechnological_Challenges != NULL)
        {
            itsTechnological_Challenges->__setItsThreats(NULL);
        }
    __setItsTechnological_Challenges(p_Technological_Challenges);
}

void Threats::_clearItsTechnological_Challenges() {
    NOTIFY_RELATION_CLEARED("itsTechnological_Challenges");
    itsTechnological_Challenges = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedThreats::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsResistancetoChange", false, true);
    if(myReal->itsResistancetoChange)
        {
            aomsRelations->ADD_ITEM(myReal->itsResistancetoChange);
        }
    aomsRelations->addRelation("itsResistancetoChange_1", false, true);
    if(myReal->itsResistancetoChange_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsResistancetoChange_1);
        }
    aomsRelations->addRelation("itsTechnological_Challenges", false, true);
    if(myReal->itsTechnological_Challenges)
        {
            aomsRelations->ADD_ITEM(myReal->itsTechnological_Challenges);
        }
}
//#]

IMPLEMENT_META_P(Threats, Default, Default, false, OMAnimatedThreats)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Threats.cpp
*********************************************************************/
