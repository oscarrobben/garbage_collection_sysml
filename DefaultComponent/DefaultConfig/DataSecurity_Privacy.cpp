/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataSecurity_Privacy
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\DataSecurity_Privacy.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DataSecurity_Privacy.h"
//## link itsRisks
#include "Risks.h"
//#[ ignore
#define Default_DataSecurity_Privacy_DataSecurity_Privacy_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::DataSecurity_Privacy
DataSecurity_Privacy_C::DataSecurity_Privacy_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(DataSecurity_Privacy, DataSecurity_Privacy(), 0, Default_DataSecurity_Privacy_DataSecurity_Privacy_SERIALIZE, DataSecurity_Privacy_C);
    itsRisks = NULL;
}

DataSecurity_Privacy_C::~DataSecurity_Privacy_C() {
    NOTIFY_DESTRUCTOR(~DataSecurity_Privacy, true);
    cleanUpRelations();
}

Risks* DataSecurity_Privacy_C::getItsRisks() const {
    return itsRisks;
}

void DataSecurity_Privacy_C::setItsRisks(Risks* p_Risks) {
    if(p_Risks != NULL)
        {
            p_Risks->_setItsDataSecurity_Privacy(this);
        }
    _setItsRisks(p_Risks);
}

void DataSecurity_Privacy_C::cleanUpRelations() {
    if(itsRisks != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRisks");
            DataSecurity_Privacy_C* p_DataSecurity_Privacy = itsRisks->getItsDataSecurity_Privacy();
            if(p_DataSecurity_Privacy != NULL)
                {
                    itsRisks->__setItsDataSecurity_Privacy(NULL);
                }
            itsRisks = NULL;
        }
}

void DataSecurity_Privacy_C::__setItsRisks(Risks* p_Risks) {
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

void DataSecurity_Privacy_C::_setItsRisks(Risks* p_Risks) {
    if(itsRisks != NULL)
        {
            itsRisks->__setItsDataSecurity_Privacy(NULL);
        }
    __setItsRisks(p_Risks);
}

void DataSecurity_Privacy_C::_clearItsRisks() {
    NOTIFY_RELATION_CLEARED("itsRisks");
    itsRisks = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDataSecurity_Privacy_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsRisks", false, true);
    if(myReal->itsRisks)
        {
            aomsRelations->ADD_ITEM(myReal->itsRisks);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(DataSecurity_Privacy, DataSecurity_Privacy_C, Default, Default, false, OMAnimatedDataSecurity_Privacy_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataSecurity_Privacy.cpp
*********************************************************************/
