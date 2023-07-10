/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: UserDevice
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\UserDevice.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "UserDevice.h"
//## link itsApp
#include "App.h"
//## link itsSmart_garbage_collection_system
#include "smart_garbage_collection_system.h"
//#[ ignore
#define Default_UserDevice_UserDevice_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class UserDevice
UserDevice::UserDevice() {
    NOTIFY_CONSTRUCTOR(UserDevice, UserDevice(), 0, Default_UserDevice_UserDevice_SERIALIZE);
    itsApp = NULL;
    itsSmart_garbage_collection_system = NULL;
}

UserDevice::~UserDevice() {
    NOTIFY_DESTRUCTOR(~UserDevice, true);
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
            NOTIFY_RELATION_CLEARED("itsApp");
            UserDevice* p_UserDevice = itsApp->getItsUserDevice();
            if(p_UserDevice != NULL)
                {
                    itsApp->__setItsUserDevice(NULL);
                }
            itsApp = NULL;
        }
    if(itsSmart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
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
    if(p_App != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsApp", p_App, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsApp");
        }
}

void UserDevice::_setItsApp(App* p_App) {
    if(itsApp != NULL)
        {
            itsApp->__setItsUserDevice(NULL);
        }
    __setItsApp(p_App);
}

void UserDevice::_clearItsApp() {
    NOTIFY_RELATION_CLEARED("itsApp");
    itsApp = NULL;
}

void UserDevice::__setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
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

void UserDevice::_setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(itsSmart_garbage_collection_system != NULL)
        {
            itsSmart_garbage_collection_system->_removeItsUserDevice(this);
        }
    __setItsSmart_garbage_collection_system(p_smart_garbage_collection_system);
}

void UserDevice::_clearItsSmart_garbage_collection_system() {
    NOTIFY_RELATION_CLEARED("itsSmart_garbage_collection_system");
    itsSmart_garbage_collection_system = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUserDevice::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmart_garbage_collection_system", false, true);
    if(myReal->itsSmart_garbage_collection_system)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmart_garbage_collection_system);
        }
    aomsRelations->addRelation("itsApp", false, true);
    if(myReal->itsApp)
        {
            aomsRelations->ADD_ITEM(myReal->itsApp);
        }
}
//#]

IMPLEMENT_META_P(UserDevice, Default, Default, false, OMAnimatedUserDevice)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\UserDevice.cpp
*********************************************************************/
