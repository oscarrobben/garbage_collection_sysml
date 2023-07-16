/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: cms
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\cms.cpp
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
cms::cms() {
    NOTIFY_CONSTRUCTOR(cms, cms(), 0, Default_cms_cms_SERIALIZE);
    itsBin_1 = NULL;
    itsServer = NULL;
    itsSmart_garbage_collection_system = NULL;
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
    if(itsBin_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsBin_1");
            cms* p_cms = itsBin_1->getItsCms_1();
            if(p_cms != NULL)
                {
                    itsBin_1->__setItsCms_1(NULL);
                }
            itsBin_1 = NULL;
        }
    if(itsServer != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsServer");
            cms* p_cms = itsServer->getItsCms();
            if(p_cms != NULL)
                {
                    itsServer->__setItsCms(NULL);
                }
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

void cms::__setItsServer(server_C* p_server) {
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

void cms::_setItsServer(server_C* p_server) {
    if(itsServer != NULL)
        {
            itsServer->__setItsCms(NULL);
        }
    __setItsServer(p_server);
}

void cms::_clearItsServer() {
    NOTIFY_RELATION_CLEARED("itsServer");
    itsServer = NULL;
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

bin* cms::getItsBin_1() const {
    return itsBin_1;
}

void cms::setItsBin_1(bin* p_bin) {
    if(p_bin != NULL)
        {
            p_bin->_setItsCms_1(this);
        }
    _setItsBin_1(p_bin);
}

void cms::__setItsBin_1(bin* p_bin) {
    itsBin_1 = p_bin;
    if(p_bin != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsBin_1", p_bin, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsBin_1");
        }
}

void cms::_setItsBin_1(bin* p_bin) {
    if(itsBin_1 != NULL)
        {
            itsBin_1->__setItsCms_1(NULL);
        }
    __setItsBin_1(p_bin);
}

void cms::_clearItsBin_1() {
    NOTIFY_RELATION_CLEARED("itsBin_1");
    itsBin_1 = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
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
    aomsRelations->addRelation("itsBin_1", false, true);
    if(myReal->itsBin_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsBin_1);
        }
}
//#]

IMPLEMENT_META_P(cms, Default, Default, false, OMAnimatedcms)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\cms.cpp
*********************************************************************/
