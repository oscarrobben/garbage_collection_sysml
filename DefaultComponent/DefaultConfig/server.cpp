/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: server
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\server.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "server.h"
//## link itsCms
#include "cms.h"
//#[ ignore
#define Default_server_server_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::server
server_C::server_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(server, server(), 0, Default_server_server_SERIALIZE, server_C);
    itsCms = NULL;
}

server_C::~server_C() {
    NOTIFY_DESTRUCTOR(~server, true);
    cleanUpRelations();
}

cms* server_C::getItsCms() const {
    return itsCms;
}

void server_C::setItsCms(cms* p_cms) {
    if(p_cms != NULL)
        {
            p_cms->_setItsServer(this);
        }
    _setItsCms(p_cms);
}

void server_C::cleanUpRelations() {
    if(itsCms != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCms");
            server_C* p_server = itsCms->getItsServer();
            if(p_server != NULL)
                {
                    itsCms->__setItsServer(NULL);
                }
            itsCms = NULL;
        }
}

void server_C::__setItsCms(cms* p_cms) {
    itsCms = p_cms;
    if(p_cms != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCms", p_cms, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCms");
        }
}

void server_C::_setItsCms(cms* p_cms) {
    if(itsCms != NULL)
        {
            itsCms->__setItsServer(NULL);
        }
    __setItsCms(p_cms);
}

void server_C::_clearItsCms() {
    NOTIFY_RELATION_CLEARED("itsCms");
    itsCms = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedserver_C::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsCms", false, true);
    if(myReal->itsCms)
        {
            aomsRelations->ADD_ITEM(myReal->itsCms);
        }
}
//#]

IMPLEMENT_META_OBJECT_P(server, server_C, Default, Default, false, OMAnimatedserver_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\server.cpp
*********************************************************************/
