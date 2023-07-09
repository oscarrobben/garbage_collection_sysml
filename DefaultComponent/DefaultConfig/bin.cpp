/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: bin
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\bin.cpp
*********************************************************************/

//## auto_generated
#include "bin.h"
//## link itsCms
#include "cms.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## package Default

//## class bin
bin::bin() {
    itsCms = NULL;
    itsSmart_garbage_collection_system = NULL;
}

bin::~bin() {
    cleanUpRelations();
}

cms* bin::getItsCms() const {
    return itsCms;
}

void bin::setItsCms(cms* p_cms) {
    if(p_cms != NULL)
        {
            p_cms->_addItsBin(this);
        }
    _setItsCms(p_cms);
}

smart_garbage_collection_system* bin::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void bin::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_addItsBin(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void bin::cleanUpRelations() {
    if(itsCms != NULL)
        {
            cms* current = itsCms;
            if(current != NULL)
                {
                    current->_removeItsBin(this);
                }
            itsCms = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            smart_garbage_collection_system* current = itsSmart_garbage_collection_system;
            if(current != NULL)
                {
                    current->_removeItsBin(this);
                }
            itsSmart_garbage_collection_system = NULL;
        }
}

void bin::__setItsCms(cms* p_cms) {
    itsCms = p_cms;
}

void bin::_setItsCms(cms* p_cms) {
    if(itsCms != NULL)
        {
            itsCms->_removeItsBin(this);
        }
    __setItsCms(p_cms);
}

void bin::_clearItsCms() {
    itsCms = NULL;
}

void bin::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    itsSmart_garbage_collection_system = p_smart_garbage_collection_system;
}

void bin::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->_removeItsBin(this);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void bin::_clearItsSmart_garbage_collection_system() {
    itsSmart_garbage_collection_system = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\bin.cpp
*********************************************************************/
