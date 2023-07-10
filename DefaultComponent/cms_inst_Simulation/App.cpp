/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: App
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\App.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "App.h"
//## link itsUserDevice
#include "UserDevice.h"
//## link provides
#include "Resident_Citizen_User.h"
//#[ ignore
#define Default_App_App_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class App
App::App() {
    NOTIFY_CONSTRUCTOR(App, App(), 0, Default_App_App_SERIALIZE);
    itsUserDevice = NULL;
}

App::~App() {
    NOTIFY_DESTRUCTOR(~App, true);
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
            NOTIFY_RELATION_CLEARED("itsUserDevice");
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
    if(p_UserDevice != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUserDevice", p_UserDevice, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUserDevice");
        }
}

void App::_setItsUserDevice(UserDevice* p_UserDevice) {
    if(itsUserDevice != NULL)
        {
            itsUserDevice->__setItsApp(NULL);
        }
    __setItsUserDevice(p_UserDevice);
}

void App::_clearItsUserDevice() {
    NOTIFY_RELATION_CLEARED("itsUserDevice");
    itsUserDevice = NULL;
}

void App::_addProvides(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(p_Resident_Citizen_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("provides", p_Resident_Citizen_User, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("provides");
        }
    provides.add(p_Resident_Citizen_User);
}

void App::_removeProvides(Resident_Citizen_User* p_Resident_Citizen_User) {
    NOTIFY_RELATION_ITEM_REMOVED("provides", p_Resident_Citizen_User);
    provides.remove(p_Resident_Citizen_User);
}

void App::_clearProvides() {
    NOTIFY_RELATION_CLEARED("provides");
    provides.removeAll();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedApp::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsUserDevice", false, true);
    if(myReal->itsUserDevice)
        {
            aomsRelations->ADD_ITEM(myReal->itsUserDevice);
        }
    aomsRelations->addRelation("provides", false, false);
    {
        OMIterator<Resident_Citizen_User*> iter(myReal->provides);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(App, Default, Default, false, OMAnimatedApp)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\App.cpp
*********************************************************************/
