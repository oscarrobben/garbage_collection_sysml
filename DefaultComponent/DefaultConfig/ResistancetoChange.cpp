/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ResistancetoChange
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ResistancetoChange.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ResistancetoChange.h"
//## link itsThreats
#include "Threats.h"
//#[ ignore
#define Default_ResistancetoChange_ResistancetoChange_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::ResistancetoChange
ResistancetoChange_C::ResistancetoChange_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(ResistancetoChange, ResistancetoChange(), 0, Default_ResistancetoChange_ResistancetoChange_SERIALIZE, ResistancetoChange_C);
    itsThreats = NULL;
    itsThreats_1 = NULL;
}

ResistancetoChange_C::~ResistancetoChange_C() {
    NOTIFY_DESTRUCTOR(~ResistancetoChange, true);
    cleanUpRelations();
}

Threats* ResistancetoChange_C::getItsThreats() const {
    return itsThreats;
}

void ResistancetoChange_C::setItsThreats(Threats* p_Threats) {
    if(p_Threats != NULL)
        {
            p_Threats->_setItsResistancetoChange(this);
        }
    _setItsThreats(p_Threats);
}

Threats* ResistancetoChange_C::getItsThreats_1() const {
    return itsThreats_1;
}

void ResistancetoChange_C::setItsThreats_1(Threats* p_Threats) {
    if(p_Threats != NULL)
        {
            p_Threats->_setItsResistancetoChange_1(this);
        }
    _setItsThreats_1(p_Threats);
}

void ResistancetoChange_C::cleanUpRelations() {
    if(itsThreats != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsThreats");
            ResistancetoChange_C* p_ResistancetoChange = itsThreats->getItsResistancetoChange();
            if(p_ResistancetoChange != NULL)
                {
                    itsThreats->__setItsResistancetoChange(NULL);
                }
            itsThreats = NULL;
        }
    if(itsThreats_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsThreats_1");
            ResistancetoChange_C* p_ResistancetoChange = itsThreats_1->getItsResistancetoChange_1();
            if(p_ResistancetoChange != NULL)
                {
                    itsThreats_1->__setItsResistancetoChange_1(NULL);
                }
            itsThreats_1 = NULL;
        }
}

void ResistancetoChange_C::__setItsThreats(Threats* p_Threats) {
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

void ResistancetoChange_C::_setItsThreats(Threats* p_Threats) {
    if(itsThreats != NULL)
        {
            itsThreats->__setItsResistancetoChange(NULL);
        }
    __setItsThreats(p_Threats);
}

void ResistancetoChange_C::_clearItsThreats() {
    NOTIFY_RELATION_CLEARED("itsThreats");
    itsThreats = NULL;
}

void ResistancetoChange_C::__setItsThreats_1(Threats* p_Threats) {
    itsThreats_1 = p_Threats;
    if(p_Threats != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsThreats_1", p_Threats, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsThreats_1");
        }
}

void ResistancetoChange_C::_setItsThreats_1(Threats* p_Threats) {
    if(itsThreats_1 != NULL)
        {
            itsThreats_1->__setItsResistancetoChange_1(NULL);
        }
    __setItsThreats_1(p_Threats);
}

void ResistancetoChange_C::_clearItsThreats_1() {
    NOTIFY_RELATION_CLEARED("itsThreats_1");
    itsThreats_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedResistancetoChange_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsThreats", false, true);
    if(myReal->itsThreats)
        {
            aomsRelations->ADD_ITEM(myReal->itsThreats);
        }
    aomsRelations->addRelation("itsThreats_1", false, true);
    if(myReal->itsThreats_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsThreats_1);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(ResistancetoChange, ResistancetoChange_C, Default, Default, false, OMAnimatedResistancetoChange_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ResistancetoChange.cpp
*********************************************************************/
