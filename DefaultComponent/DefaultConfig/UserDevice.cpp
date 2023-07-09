/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UserDevice
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\UserDevice.cpp
*********************************************************************/

//## auto_generated
#include "UserDevice.h"
//## link itsApp
#include "App.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//## package Default

//## class UserDevice
UserDevice::UserDevice() {
    itsApp = NULL;
    itsSmart_garbage_collection_system = NULL;
}

UserDevice::~UserDevice() {
    cleanUpRelations();
}

App* UserDevice::getItsApp() const {
    return itsApp;
}

void UserDevice::setItsApp(App* p_App) {
    if(p_App != NULL)
        {
            p_App->_setItsUserDevice(this);
        }
    _setItsApp(p_App);
}

smart_garbage_collection_system* UserDevice::getItsSmart_garbage_collection_system() const {
    return itsSmart_garbage_collection_system;
}

void UserDevice::setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_addItsUserDevice(this);
        }
    _setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void UserDevice::cleanUpRelations() {
    if(itsApp != NULL)
        {
            UserDevice* p_UserDevice = itsApp->getItsUserDevice();
            if(p_UserDevice != NULL)
                {
                    itsApp->__setItsUserDevice(NULL);
                }
            itsApp = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            smart_garbage_collection_system* current = itsSmart_garbage_collection_system;
            if(current != NULL)
                {
                    current->_removeItsUserDevice(this);
                }
            itsSmart_garbage_collection_system = NULL;
        }
}

void UserDevice::__setItsApp(App* p_App) {
    itsApp = p_App;
}

void UserDevice::_setItsApp(App* p_App) {
    if(itsApp != NULL)
        {
            itsApp->__setItsUserDevice(NULL);
        }
    __setItsApp(p_App);
}

void UserDevice::_clearItsApp() {
    itsApp = NULL;
}

void UserDevice::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    itsSmart_garbage_collection_system = p_smart_garbage_collection_system;
}

void UserDevice::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->_removeItsUserDevice(this);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void UserDevice::_clearItsSmart_garbage_collection_system() {
    itsSmart_garbage_collection_system = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UserDevice.cpp
*********************************************************************/
