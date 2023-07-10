/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: cms
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\cms.cpp
*********************************************************************/

//## auto_generated
#include "cms.h"
//## link itsBin
#include "bin.h"
//## link itsServer
#include "server.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## link itsTruck
#include "truck.h"
//## package Default

//## class cms
//#[ ignore
cms::p_cms_C::p_cms_C() : _p_(0) {
    itsBool_emptyReq_ProxyFlowPropertyInterface = NULL;
}

cms::p_cms_C::~p_cms_C() {
    cleanUpRelations();
}

void cms::p_cms_C::connectCms(cms* part) {
    setItsBool_emptyReq_ProxyFlowPropertyInterface(part);
    
}

bool_emptyReq_ProxyFlowPropertyInterface* cms::p_cms_C::getItsBool_emptyReq_ProxyFlowPropertyInterface() {
    return this;
}

void cms::p_cms_C::setEmptyReq(bool p_emptyReq) {
    
    if (itsBool_emptyReq_ProxyFlowPropertyInterface != NULL) {
        itsBool_emptyReq_ProxyFlowPropertyInterface->setEmptyReq(p_emptyReq);
    }
    
}

void cms::p_cms_C::setItsBool_emptyReq_ProxyFlowPropertyInterface(bool_emptyReq_ProxyFlowPropertyInterface* p_bool_emptyReq_ProxyFlowPropertyInterface) {
    itsBool_emptyReq_ProxyFlowPropertyInterface = p_bool_emptyReq_ProxyFlowPropertyInterface;
}

void cms::p_cms_C::cleanUpRelations() {
    if(itsBool_emptyReq_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_emptyReq_ProxyFlowPropertyInterface = NULL;
        }
}

cms::p_smartbin_C::p_smartbin_C() : _p_(0) {
    itsBool_emptyReq_ProxyFlowPropertyInterface = NULL;
}

cms::p_smartbin_C::~p_smartbin_C() {
    cleanUpRelations();
}

void cms::p_smartbin_C::connectCms(cms* part) {
    setItsBool_emptyReq_ProxyFlowPropertyInterface(part);
    
}

bool_emptyReq_ProxyFlowPropertyInterface* cms::p_smartbin_C::getItsBool_emptyReq_ProxyFlowPropertyInterface() {
    return this;
}

void cms::p_smartbin_C::setEmptyReq(bool p_emptyReq) {
    
    if (itsBool_emptyReq_ProxyFlowPropertyInterface != NULL) {
        itsBool_emptyReq_ProxyFlowPropertyInterface->setEmptyReq(p_emptyReq);
    }
    
}

void cms::p_smartbin_C::setItsBool_emptyReq_ProxyFlowPropertyInterface(bool_emptyReq_ProxyFlowPropertyInterface* p_bool_emptyReq_ProxyFlowPropertyInterface) {
    itsBool_emptyReq_ProxyFlowPropertyInterface = p_bool_emptyReq_ProxyFlowPropertyInterface;
}

void cms::p_smartbin_C::cleanUpRelations() {
    if(itsBool_emptyReq_ProxyFlowPropertyInterface != NULL)
        {
            itsBool_emptyReq_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

cms::cms() {
    itsServer = NULL;
    itsSmart_garbage_collection_system = NULL;
    initRelations();
}

cms::~cms() {
    cleanUpRelations();
}

OMIterator<bin*> cms::getItsBin() const {
    OMIterator<bin*> iter(itsBin);
    return iter;
}

void cms::addItsBin(bin* p_bin) {
    if(p_bin != NULL)
        {
            p_bin->_setItsCms(this);
        }
    _addItsBin(p_bin);
}

void cms::removeItsBin(bin* p_bin) {
    if(p_bin != NULL)
        {
            p_bin->__setItsCms(NULL);
        }
    _removeItsBin(p_bin);
}

void cms::clearItsBin() {
    OMIterator<bin*> iter(itsBin);
    while (*iter){
        (*iter)->_clearItsCms();
        iter++;
    }
    _clearItsBin();
}

server_C* cms::getItsServer() const {
    return itsServer;
}

void cms::setItsServer(server_C* p_server) {
    if(p_server != NULL)
        {
            p_server->_setItsCms(this);
        }
    _setItsServer(p_server);
}

smart_garbage_collection_system* cms::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void cms::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setItsCms(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

OMIterator<truck*> cms::getItsTruck() const {
    OMIterator<truck*> iter(itsTruck);
    return iter;
}

void cms::addItsTruck(truck* p_truck) {
    if(p_truck != NULL)
        {
            p_truck->_setItsCms(this);
        }
    _addItsTruck(p_truck);
}

void cms::removeItsTruck(truck* p_truck) {
    if(p_truck != NULL)
        {
            p_truck->__setItsCms(NULL);
        }
    _removeItsTruck(p_truck);
}

void cms::clearItsTruck() {
    OMIterator<truck*> iter(itsTruck);
    while (*iter){
        (*iter)->_clearItsCms();
        iter++;
    }
    _clearItsTruck();
}

void cms::cleanUpRelations() {
    {
        OMIterator<bin*> iter(itsBin);
        while (*iter){
            cms* p_cms = (*iter)->getItsCms();
            if(p_cms != NULL)
                {
                    (*iter)->__setItsCms(NULL);
                }
            iter++;
        }
        itsBin.removeAll();
    }
    if(itsServer != NULL)
        {
            cms* p_cms = itsServer->getItsCms();
            if(p_cms != NULL)
                {
                    itsServer->__setItsCms(NULL);
                }
            itsServer = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            cms* p_cms = itsSmart_garbage_collection_system->getItsCms();
            if(p_cms != NULL)
                {
                    itsSmart_garbage_collection_system->__setItsCms(NULL);
                }
            itsSmart_garbage_collection_system = NULL;
        }
    {
        OMIterator<truck*> iter(itsTruck);
        while (*iter){
            cms* p_cms = (*iter)->getItsCms();
            if(p_cms != NULL)
                {
                    (*iter)->__setItsCms(NULL);
                }
            iter++;
        }
        itsTruck.removeAll();
    }
}

void cms::_addItsBin(bin* p_bin) {
    itsBin.add(p_bin);
}

void cms::_removeItsBin(bin* p_bin) {
    itsBin.remove(p_bin);
}

void cms::_clearItsBin() {
    itsBin.removeAll();
}

void cms::__setItsServer(server_C* p_server) {
    itsServer = p_server;
}

void cms::_setItsServer(server_C* p_server) {
    if(itsServer != NULL)
        {
            itsServer->__setItsCms(NULL);
        }
    __setItsServer(p_server);
}

void cms::_clearItsServer() {
    itsServer = NULL;
}

void cms::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    itsSmart_garbage_collection_system = p_smart_garbage_collection_system;
}

void cms::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsCms(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void cms::_clearItsSmart_garbage_collection_system() {
    itsSmart_garbage_collection_system = NULL;
}

void cms::_addItsTruck(truck* p_truck) {
    itsTruck.add(p_truck);
}

void cms::_removeItsTruck(truck* p_truck) {
    itsTruck.remove(p_truck);
}

void cms::_clearItsTruck() {
    itsTruck.removeAll();
}

cms::p_cms_C* cms::getP_cms() const {
    return (cms::p_cms_C*) &p_cms;
}

cms::p_cms_C* cms::get_p_cms() const {
    return (cms::p_cms_C*) &p_cms;
}

cms::p_smartbin_C* cms::getP_smartbin() const {
    return (cms::p_smartbin_C*) &p_smartbin;
}

cms::p_smartbin_C* cms::get_p_smartbin() const {
    return (cms::p_smartbin_C*) &p_smartbin;
}

void cms::initRelations() {
    if (get_p_cms() != NULL) {
        get_p_cms()->connectCms(this);
    }
    if (get_p_smartbin() != NULL) {
        get_p_smartbin()->connectCms(this);
    }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\cms.cpp
*********************************************************************/
