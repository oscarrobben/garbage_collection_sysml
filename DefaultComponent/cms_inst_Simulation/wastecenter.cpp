/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: wastecenter
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\wastecenter.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "wastecenter.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## link itsMunicipality
#include "Municipality.h"
//## link itsWaste_Processing_Company
#include "Waste_Processing_Company.h"
//#[ ignore
#define Default_wastecenter_wastecenter_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class wastecenter
wastecenter::wastecenter() {
    NOTIFY_CONSTRUCTOR(wastecenter, wastecenter(), 0, Default_wastecenter_wastecenter_SERIALIZE);
    itsMunicipality = NULL;
    itsSmart_garbage_collection_system = NULL;
    itsWaste_Processing_Company = NULL;
}

wastecenter::~wastecenter() {
    NOTIFY_DESTRUCTOR(~wastecenter, true);
    cleanUpRelations();
}

Municipality* wastecenter::getItsMunicipality() const {
    return itsMunicipality;
}

void wastecenter::setItsMunicipality(Municipality* p_Municipality) {
    if(p_Municipality != NULL)
        {
            p_Municipality->_setItsWastecenter(this);
        }
    _setItsMunicipality(p_Municipality);
}

smart_garbage_collection_system* wastecenter::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void wastecenter::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsWastecenter(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

Waste_Processing_Company* wastecenter::getItsWaste_Processing_Company() const {
    return itsWaste_Processing_Company;
}

void wastecenter::setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company) {
    if(p_Waste_Processing_Company != NULL)
        {
            p_Waste_Processing_Company->_setItsWastecenter(this);
        }
    _setItsWaste_Processing_Company(p_Waste_Processing_Company);
}

void wastecenter::cleanUpRelations() {
    if(itsMunicipality != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMunicipality");
            wastecenter* p_wastecenter = itsMunicipality->getItsWastecenter();
            if(p_wastecenter != NULL)
                {
                    itsMunicipality->__setItsWastecenter(NULL);
                }
            itsMunicipality = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
            wastecenter* p_wastecenter = itsSmart_garbage_collection_system->getItsWastecenter();
            if(p_wastecenter != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsWastecenter(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
    if(itsWaste_Processing_Company != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWaste_Processing_Company");
            wastecenter* p_wastecenter = itsWaste_Processing_Company->getItsWastecenter();
            if(p_wastecenter != NULL)
                {
                    itsWaste_Processing_Company->__setItsWastecenter(NULL);
                }
            itsWaste_Processing_Company = NULL;
        }
}

void wastecenter::__setItsMunicipality(Municipality* p_Municipality) {
    itsMunicipality = p_Municipality;
    if(p_Municipality != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMunicipality", p_Municipality, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMunicipality");
        }
}

void wastecenter::_setItsMunicipality(Municipality* p_Municipality) {
    if(itsMunicipality != NULL)
        {
            itsMunicipality->__setItsWastecenter(NULL);
        }
    __setItsMunicipality(p_Municipality);
}

void wastecenter::_clearItsMunicipality() {
    NOTIFY_RELATION_CLEARED("itsMunicipality");
    itsMunicipality = NULL;
}

void wastecenter::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void wastecenter::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsWastecenter(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void wastecenter::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

void wastecenter::__setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company) {
    itsWaste_Processing_Company = p_Waste_Processing_Company;
    if(p_Waste_Processing_Company != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWaste_Processing_Company", p_Waste_Processing_Company, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWaste_Processing_Company");
        }
}

void wastecenter::_setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company) {
    if(itsWaste_Processing_Company != NULL)
        {
            itsWaste_Processing_Company->__setItsWastecenter(NULL);
        }
    __setItsWaste_Processing_Company(p_Waste_Processing_Company);
}

void wastecenter::_clearItsWaste_Processing_Company() {
    NOTIFY_RELATION_CLEARED("itsWaste_Processing_Company");
    itsWaste_Processing_Company = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedwastecenter::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsMunicipality", false, true);
    if(myReal->itsMunicipality)
        {
            aomsRelations->ADD_ITEM(myReal->itsMunicipality);
        }
    aomsRelations->addRelation("itsWaste_Processing_Company", false, true);
    if(myReal->itsWaste_Processing_Company)
        {
            aomsRelations->ADD_ITEM(myReal->itsWaste_Processing_Company);
        }
}
//#]

IMPLEMENT_META_P(wastecenter, Default, Default, false, OMAnimatedwastecenter)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\wastecenter.cpp
*********************************************************************/
