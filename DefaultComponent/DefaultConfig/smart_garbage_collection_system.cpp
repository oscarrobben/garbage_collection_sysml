/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: smart_garbage_collection_system
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\smart_garbage_collection_system.cpp
*********************************************************************/

//## auto_generated
#include "smart_garbage_collection_system.h"
//## link itsBin
#include "bin.h"
//## link itsCms
#include "cms.h"
//## link services
#include "Municipality.h"
//## link operates_on
#include "road_network.h"
//## link itsTruck
#include "truck.h"
//## link itsUserDevice
#include "UserDevice.h"
//## link itsWastecenter
#include "wastecenter.h"
//## link operates_under
#include "weather.h"
//## package Default

//## class smart_garbage_collection_system
smart_garbage_collection_system::smart_garbage_collection_system() {
    itsCms = NULL;
    itsWastecenter = NULL;
    operates_under = NULL;
}

smart_garbage_collection_system::~smart_garbage_collection_system() {
    cleanUpRelations();
}

OMIterator<bin*> smart_garbage_collection_system::getItsBin() const {
    OMIterator<bin*> iter(itsBin);
    return iter;
}

void smart_garbage_collection_system::addItsBin(bin* p_bin) {
    if(p_bin != NULL)
        {
            p_bin->_setItsSmart_garbage_collection_system(this);
        }
    _addItsBin(p_bin);
}

void smart_garbage_collection_system::removeItsBin(bin* p_bin) {
    if(p_bin != NULL)
        {
            p_bin->__setItsSmart_garbage_collection_system(NULL);
        }
    _removeItsBin(p_bin);
}

void smart_garbage_collection_system::clearItsBin() {
    OMIterator<bin*> iter(itsBin);
    while (*iter){
        (*iter)->_clearItsSmart_garbage_collection_system();
        iter++;
    }
    _clearItsBin();
}

cms* smart_garbage_collection_system::getItsCms() const {
    return itsCms;
}

void smart_garbage_collection_system::setItsCms(cms* p_cms) {
    if(p_cms != NULL)
        {
            p_cms->_setItsSmart_garbage_collection_system(this);
        }
    _setItsCms(p_cms);
}

OMIterator<truck*> smart_garbage_collection_system::getItsTruck() const {
    OMIterator<truck*> iter(itsTruck);
    return iter;
}

void smart_garbage_collection_system::addItsTruck(truck* p_truck) {
    if(p_truck != NULL)
        {
            p_truck->_setItsSmart_garbage_collection_system(this);
        }
    _addItsTruck(p_truck);
}

void smart_garbage_collection_system::removeItsTruck(truck* p_truck) {
    if(p_truck != NULL)
        {
            p_truck->__setItsSmart_garbage_collection_system(NULL);
        }
    _removeItsTruck(p_truck);
}

void smart_garbage_collection_system::clearItsTruck() {
    OMIterator<truck*> iter(itsTruck);
    while (*iter){
        (*iter)->_clearItsSmart_garbage_collection_system();
        iter++;
    }
    _clearItsTruck();
}

OMIterator<UserDevice*> smart_garbage_collection_system::getItsUserDevice() const {
    OMIterator<UserDevice*> iter(itsUserDevice);
    return iter;
}

void smart_garbage_collection_system::addItsUserDevice(UserDevice* p_UserDevice) {
    if(p_UserDevice != NULL)
        {
            p_UserDevice->_setItsSmart_garbage_collection_system(this);
        }
    _addItsUserDevice(p_UserDevice);
}

void smart_garbage_collection_system::removeItsUserDevice(UserDevice* p_UserDevice) {
    if(p_UserDevice != NULL)
        {
            p_UserDevice->__setItsSmart_garbage_collection_system(NULL);
        }
    _removeItsUserDevice(p_UserDevice);
}

void smart_garbage_collection_system::clearItsUserDevice() {
    OMIterator<UserDevice*> iter(itsUserDevice);
    while (*iter){
        (*iter)->_clearItsSmart_garbage_collection_system();
        iter++;
    }
    _clearItsUserDevice();
}

wastecenter* smart_garbage_collection_system::getItsWastecenter() const {
    return itsWastecenter;
}

void smart_garbage_collection_system::setItsWastecenter(wastecenter* p_wastecenter) {
    if(p_wastecenter != NULL)
        {
            p_wastecenter->_setItsSmart_garbage_collection_system(this);
        }
    _setItsWastecenter(p_wastecenter);
}

OMIterator<road_network*> smart_garbage_collection_system::getOperates_on() const {
    OMIterator<road_network*> iter(operates_on);
    return iter;
}

void smart_garbage_collection_system::addOperates_on(road_network* p_road_network) {
    if(p_road_network != NULL)
        {
            p_road_network->_addServices(this);
        }
    _addOperates_on(p_road_network);
}

void smart_garbage_collection_system::removeOperates_on(road_network* p_road_network) {
    if(p_road_network != NULL)
        {
            p_road_network->_removeServices(this);
        }
    _removeOperates_on(p_road_network);
}

void smart_garbage_collection_system::clearOperates_on() {
    OMIterator<road_network*> iter(operates_on);
    while (*iter){
        road_network* current = *iter;
        if(current != NULL)
            {
                current->_removeServices(this);
            }
        iter++;
    }
    _clearOperates_on();
}

weather* smart_garbage_collection_system::getOperates_under() const {
    return operates_under;
}

void smart_garbage_collection_system::setOperates_under(weather* p_weather) {
    if(p_weather != NULL)
        {
            p_weather->_addInfluences(this);
        }
    _setOperates_under(p_weather);
}

OMIterator<Municipality*> smart_garbage_collection_system::getServices() const {
    OMIterator<Municipality*> iter(services);
    return iter;
}

void smart_garbage_collection_system::addServices(Municipality* p_Municipality) {
    if(p_Municipality != NULL)
        {
            p_Municipality->_setUses(this);
        }
    _addServices(p_Municipality);
}

void smart_garbage_collection_system::removeServices(Municipality* p_Municipality) {
    if(p_Municipality != NULL)
        {
            p_Municipality->__setUses(NULL);
        }
    _removeServices(p_Municipality);
}

void smart_garbage_collection_system::clearServices() {
    OMIterator<Municipality*> iter(services);
    while (*iter){
        (*iter)->_clearUses();
        iter++;
    }
    _clearServices();
}

void smart_garbage_collection_system::cleanUpRelations() {
    {
        OMIterator<bin*> iter(itsBin);
        while (*iter){
            smart_garbage_collection_system* p_smart_garbage_collection_system = (*iter)->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    (*iter)->__setItsSmart_garbage_collection_system(NULL);
                }
            iter++;
        }
        itsBin.removeAll();
    }
    if(itsCms != NULL)
        {
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsCms->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsCms->__setItsSmart_garbage_collection_system(NULL);
                }
            itsCms = NULL;
        }
    {
        OMIterator<truck*> iter(itsTruck);
        while (*iter){
            smart_garbage_collection_system* p_smart_garbage_collection_system = (*iter)->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    (*iter)->__setItsSmart_garbage_collection_system(NULL);
                }
            iter++;
        }
        itsTruck.removeAll();
    }
    {
        OMIterator<UserDevice*> iter(itsUserDevice);
        while (*iter){
            smart_garbage_collection_system* p_smart_garbage_collection_system = (*iter)->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    (*iter)->__setItsSmart_garbage_collection_system(NULL);
                }
            iter++;
        }
        itsUserDevice.removeAll();
    }
    if(itsWastecenter != NULL)
        {
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsWastecenter->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsWastecenter->__setItsSmart_garbage_collection_system(NULL);
                }
            itsWastecenter = NULL;
        }
    {
        OMIterator<road_network*> iter(operates_on);
        while (*iter){
            road_network* current = *iter;
            if(current != NULL)
                {
                    current->_removeServices(this);
                }
            iter++;
        }
        operates_on.removeAll();
    }
    if(operates_under != NULL)
        {
            weather* current = operates_under;
            if(current != NULL)
                {
                    current->_removeInfluences(this);
                }
            operates_under = NULL;
        }
    {
        OMIterator<Municipality*> iter(services);
        while (*iter){
            smart_garbage_collection_system* p_smart_garbage_collection_system = (*iter)->getUses();
            if(p_smart_garbage_collection_system != NULL)
                {
                    (*iter)->__setUses(NULL);
                }
            iter++;
        }
        services.removeAll();
    }
}

void smart_garbage_collection_system::_addItsBin(bin* p_bin) {
    itsBin.add(p_bin);
}

void smart_garbage_collection_system::_removeItsBin(bin* p_bin) {
    itsBin.remove(p_bin);
}

void smart_garbage_collection_system::_clearItsBin() {
    itsBin.removeAll();
}

void smart_garbage_collection_system::__setItsCms(cms* p_cms) {
    itsCms = p_cms;
}

void smart_garbage_collection_system::_setItsCms(cms* p_cms) {
    if(itsCms != NULL)
        {
            itsCms->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsCms(p_cms);
}

void smart_garbage_collection_system::_clearItsCms() {
    itsCms = NULL;
}

void smart_garbage_collection_system::_addItsTruck(truck* p_truck) {
    itsTruck.add(p_truck);
}

void smart_garbage_collection_system::_removeItsTruck(truck* p_truck) {
    itsTruck.remove(p_truck);
}

void smart_garbage_collection_system::_clearItsTruck() {
    itsTruck.removeAll();
}

void smart_garbage_collection_system::_addItsUserDevice(UserDevice* p_UserDevice) {
    itsUserDevice.add(p_UserDevice);
}

void smart_garbage_collection_system::_removeItsUserDevice(UserDevice* p_UserDevice) {
    itsUserDevice.remove(p_UserDevice);
}

void smart_garbage_collection_system::_clearItsUserDevice() {
    itsUserDevice.removeAll();
}

void smart_garbage_collection_system::__setItsWastecenter(wastecenter* p_wastecenter) {
    itsWastecenter = p_wastecenter;
}

void smart_garbage_collection_system::_setItsWastecenter(wastecenter* p_wastecenter) {
    if(itsWastecenter != NULL)
        {
            itsWastecenter->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsWastecenter(p_wastecenter);
}

void smart_garbage_collection_system::_clearItsWastecenter() {
    itsWastecenter = NULL;
}

void smart_garbage_collection_system::_addOperates_on(road_network* p_road_network) {
    operates_on.add(p_road_network);
}

void smart_garbage_collection_system::_removeOperates_on(road_network* p_road_network) {
    operates_on.remove(p_road_network);
}

void smart_garbage_collection_system::_clearOperates_on() {
    operates_on.removeAll();
}

void smart_garbage_collection_system::__setOperates_under(weather* p_weather) {
    operates_under = p_weather;
}

void smart_garbage_collection_system::_setOperates_under(weather* p_weather) {
    if(operates_under != NULL)
        {
            operates_under->_removeInfluences(this);
        }
    __setOperates_under(p_weather);
}

void smart_garbage_collection_system::_clearOperates_under() {
    operates_under = NULL;
}

void smart_garbage_collection_system::_addServices(Municipality* p_Municipality) {
    services.add(p_Municipality);
}

void smart_garbage_collection_system::_removeServices(Municipality* p_Municipality) {
    services.remove(p_Municipality);
}

void smart_garbage_collection_system::_clearServices() {
    services.removeAll();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\smart_garbage_collection_system.cpp
*********************************************************************/
