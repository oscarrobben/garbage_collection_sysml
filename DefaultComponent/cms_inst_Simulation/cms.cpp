/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: cms
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\cms.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

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
//#[ ignore
#define Default_cms_cms_SERIALIZE OM_NO_OP
//#]

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
    NOTIFY_CONSTRUCTOR(cms, cms(), 0, Default_cms_cms_SERIALIZE);
    itsServer = NULL;
    itsSmart_garbage_collection_system = NULL;
    initRelations();
}

cms::~cms() {
    NOTIFY_DESTRUCTOR(~cms, true);
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
    itsServer = p_server;
    if(p_server != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsServer", p_server, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsServer");
        }
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
            NOTIFY_RELATION_CLEARED("itsServer");
            itsServer = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
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
    if(p_bin != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsBin", p_bin, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsBin");
        }
    itsBin.add(p_bin);
}

void cms::_removeItsBin(bin* p_bin) {
    NOTIFY_RELATION_ITEM_REMOVED("itsBin", p_bin);
    itsBin.remove(p_bin);
}

void cms::_clearItsBin() {
    NOTIFY_RELATION_CLEARED("itsBin");
    itsBin.removeAll();
}

void cms::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void cms::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->__setItsCms(NULL);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void cms::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

void cms::_addItsTruck(truck* p_truck) {
    if(p_truck != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTruck", p_truck, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTruck");
        }
    itsTruck.add(p_truck);
}

void cms::_removeItsTruck(truck* p_truck) {
    NOTIFY_RELATION_ITEM_REMOVED("itsTruck", p_truck);
    itsTruck.remove(p_truck);
}

void cms::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedcms::serializeAttributes(AOMSAttributes* aomsAttributes) const {
}

void OMAnimatedcms::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsBin", false, false);
    {
        OMIterator<bin*> iter(myReal->itsBin);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsTruck", false, false);
    {
        OMIterator<truck*> iter(myReal->itsTruck);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsServer", false, true);
    if(myReal->itsServer)
        {
            aomsRelations->ADD_ITEM(myReal->itsServer);
        }
}
//#]

IMPLEMENT_META_P(cms, Default, Default, false, OMAnimatedcms)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\cms.cpp
*********************************************************************/
