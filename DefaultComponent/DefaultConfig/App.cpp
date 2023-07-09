/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: App
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\App.cpp
*********************************************************************/

//## auto_generated
#include "App.h"
//## link provides
#include "Resident_Citizen_User.h"
//## link itsUserDevice
#include "UserDevice.h"
//## package Default

//## class App
App::App() {
    itsUserDevice = NULL;
}

App::~App() {
    cleanUpRelations();
}

UserDevice* App::getItsUserDevice() const {
    return itsUserDevice;
}

void App::setItsUserDevice(UserDevice* p_UserDevice) {
    if(p_UserDevice != NULL)
        {
            p_UserDevice->_setItsApp(this);
        }
    _setItsUserDevice(p_UserDevice);
}

OMIterator<Resident_Citizen_User*> App::getProvides() const {
    OMIterator<Resident_Citizen_User*> iter(provides);
    return iter;
}

void App::addProvides(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(p_Resident_Citizen_User != NULL)
        {
            p_Resident_Citizen_User->_setUses(this);
        }
    _addProvides(p_Resident_Citizen_User);
}

void App::removeProvides(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(p_Resident_Citizen_User != NULL)
        {
            p_Resident_Citizen_User->__setUses(NULL);
        }
    _removeProvides(p_Resident_Citizen_User);
}

void App::clearProvides() {
    OMIterator<Resident_Citizen_User*> iter(provides);
    while (*iter){
        (*iter)->_clearUses();
        iter++;
    }
    _clearProvides();
}

void App::cleanUpRelations() {
    if(itsUserDevice != NULL)
        {
            App* p_App = itsUserDevice->getItsApp();
            if(p_App != NULL)
                {
                    itsUserDevice->__setItsApp(NULL);
                }
            itsUserDevice = NULL;
        }
    {
        OMIterator<Resident_Citizen_User*> iter(provides);
        while (*iter){
            App* p_App = (*iter)->getUses();
            if(p_App != NULL)
                {
                    (*iter)->__setUses(NULL);
                }
            iter++;
        }
        provides.removeAll();
    }
}

void App::__setItsUserDevice(UserDevice* p_UserDevice) {
    itsUserDevice = p_UserDevice;
}

void App::_setItsUserDevice(UserDevice* p_UserDevice) {
    if(itsUserDevice != NULL)
        {
            itsUserDevice->__setItsApp(NULL);
        }
    __setItsUserDevice(p_UserDevice);
}

void App::_clearItsUserDevice() {
    itsUserDevice = NULL;
}

void App::_addProvides(Resident_Citizen_User* p_Resident_Citizen_User) {
    provides.add(p_Resident_Citizen_User);
}

void App::_removeProvides(Resident_Citizen_User* p_Resident_Citizen_User) {
    provides.remove(p_Resident_Citizen_User);
}

void App::_clearProvides() {
    provides.removeAll();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\App.cpp
*********************************************************************/
