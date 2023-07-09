/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: wastecenter
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\wastecenter.cpp
*********************************************************************/

//## auto_generated
#include "wastecenter.h"
//## link itsMunicipality
#include "Municipality.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## link itsWaste_Processing_Company
#include "Waste_Processing_Company.h"
//## package Default

//## class wastecenter
wastecenter::wastecenter() {
    itsMunicipality = NULL;
    itsSmart_garbage_collection_system = NULL;
    itsWaste_Processing_Company = NULL;
}

wastecenter::~wastecenter() {
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
            wastecenter* p_wastecenter = itsMunicipality->getItsWastecenter();
            if(p_wastecenter != NULL)
                {
                    itsMunicipality->__setItsWastecenter(NULL);
                }
            itsMunicipality = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            wastecenter* p_wastecenter = itsSmart_garbage_collection_system->getItsWastecenter();
            if(p_wastecenter != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsWastecenter(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
    if(itsWaste_Processing_Company != NULL)
        {
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
}

void wastecenter::_setItsMunicipality(Municipality* p_Municipality) {
    if(itsMunicipality != NULL)
        {
            itsMunicipality->__setItsWastecenter(NULL);
        }
    __setItsMunicipality(p_Municipality);
}

void wastecenter::_clearItsMunicipality() {
    itsMunicipality = NULL;
}

void wastecenter::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    itsSmart_garbage_collection_system = p_smart_garbage_collection_system;
}

void wastecenter::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsWastecenter(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void wastecenter::_clearItsSmart_garbage_collection_system() {
    itsSmart_garbage_collection_system = NULL;
}

void wastecenter::__setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company) {
    itsWaste_Processing_Company = p_Waste_Processing_Company;
}

void wastecenter::_setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company) {
    if(itsWaste_Processing_Company != NULL)
        {
            itsWaste_Processing_Company->__setItsWastecenter(NULL);
        }
    __setItsWaste_Processing_Company(p_Waste_Processing_Company);
}

void wastecenter::_clearItsWaste_Processing_Company() {
    itsWaste_Processing_Company = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\wastecenter.cpp
*********************************************************************/
