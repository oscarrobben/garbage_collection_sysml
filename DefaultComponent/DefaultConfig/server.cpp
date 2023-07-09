/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: server
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\server.cpp
*********************************************************************/

//## auto_generated
#include "server.h"
//## link itsCms
#include "cms.h"
//## package Default

//## class TopLevel::server
server_C::server_C() {
    itsCms = NULL;
}

server_C::~server_C() {
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
}

void server_C::_setItsCms(cms* p_cms) {
    if(itsCms != NULL)
        {
            itsCms->__setItsServer(NULL);
        }
    __setItsCms(p_cms);
}

void server_C::_clearItsCms() {
    itsCms = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\server.cpp
*********************************************************************/
