/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Waste_Processing_Company
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Waste_Processing_Company.cpp
*********************************************************************/

//## auto_generated
#include "Waste_Processing_Company.h"
//## classInstance employs
#include "Garbage_Truck_Driver.h"
//## classInstance operates
#include "smart_garbage_collection_system.h"
//## link itsWastecenter
#include "wastecenter.h"
//## package ActorPkg

//## actor Waste_Processing_Company
Waste_Processing_Company::Waste_Processing_Company() {
    itsWastecenter = NULL;
}

Waste_Processing_Company::~Waste_Processing_Company() {
    cleanUpRelations();
}

OMIterator<Garbage_Truck_Driver*> Waste_Processing_Company::getEmploys() const {
    OMIterator<Garbage_Truck_Driver*> iter(employs);
    return iter;
}

Garbage_Truck_Driver* Waste_Processing_Company::newEmploys() {
    Garbage_Truck_Driver* newGarbage_Truck_Driver = new Garbage_Truck_Driver;
    employs.add(newGarbage_Truck_Driver);
    return newGarbage_Truck_Driver;
}

void Waste_Processing_Company::deleteEmploys(Garbage_Truck_Driver* p_Garbage_Truck_Driver) {
    employs.remove(p_Garbage_Truck_Driver);
    delete p_Garbage_Truck_Driver;
}

wastecenter* Waste_Processing_Company::getItsWastecenter() const {
    return itsWastecenter;
}

void Waste_Processing_Company::setItsWastecenter(wastecenter* p_wastecenter) {
    if(p_wastecenter != NULL)
        {
            p_wastecenter->_setItsWaste_Processing_Company(this);
        }
    _setItsWastecenter(p_wastecenter);
}

OMIterator<smart_garbage_collection_system*> Waste_Processing_Company::getOperates() const {
    OMIterator<smart_garbage_collection_system*> iter(operates);
    return iter;
}

smart_garbage_collection_system* Waste_Processing_Company::newOperates() {
    smart_garbage_collection_system* newsmart_garbage_collection_system = new smart_garbage_collection_system;
    operates.add(newsmart_garbage_collection_system);
    return newsmart_garbage_collection_system;
}

void Waste_Processing_Company::deleteOperates(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    operates.remove(p_smart_garbage_collection_system);
    delete p_smart_garbage_collection_system;
}

void Waste_Processing_Company::cleanUpRelations() {
    {
        OMIterator<smart_garbage_collection_system*> iter(operates);
        while (*iter){
            deleteOperates(*iter);
            iter.reset();
        }
    }
    {
        OMIterator<Garbage_Truck_Driver*> iter(employs);
        while (*iter){
            deleteEmploys(*iter);
            iter.reset();
        }
    }
    if(itsWastecenter != NULL)
        {
            Waste_Processing_Company* p_Waste_Processing_Company = itsWastecenter->getItsWaste_Processing_Company();
            if(p_Waste_Processing_Company != NULL)
                {
                    itsWastecenter->__setItsWaste_Processing_Company(NULL);
                }
            itsWastecenter = NULL;
        }
}

void Waste_Processing_Company::__setItsWastecenter(wastecenter* p_wastecenter) {
    itsWastecenter = p_wastecenter;
}

void Waste_Processing_Company::_setItsWastecenter(wastecenter* p_wastecenter) {
    if(itsWastecenter != NULL)
        {
            itsWastecenter->__setItsWaste_Processing_Company(NULL);
        }
    __setItsWastecenter(p_wastecenter);
}

void Waste_Processing_Company::_clearItsWastecenter() {
    itsWastecenter = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Waste_Processing_Company.cpp
*********************************************************************/
