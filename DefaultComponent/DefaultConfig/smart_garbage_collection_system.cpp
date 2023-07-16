/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: smart_garbage_collection_system
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\smart_garbage_collection_system.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "smart_garbage_collection_system.h"
//## link itsBin
#include "bin.h"
//## link itsCms
#include "cms.h"
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
//## link itsElectricity
#include "electricity.h"
//## link itsINPUT
#include "INPUT.h"
//## link do_maintenance_on
#include "maintenance_system.h"
//## link services
#include "Municipality.h"
//## link itsOppurtunities
#include "Oppurtunities.h"
//## link itsOUTPUT
#include "OUTPUT.h"
//## link uses
#include "Resident_Citizen_User.h"
//## link itsResources
#include "Resources.h"
//## link itsRisks
#include "Risks.h"
//## link show_traffic
#include "route_planning_system.h"
//## link itsStakeholders
#include "Stakeholders.h"
//## link itsStandards_Regulations_Compliances
#include "Standards_Regulations_Compliances.h"
//## link itsThreats
#include "Threats.h"
//## link itsUsers_Endusers
#include "Users_Endusers.h"
//#[ ignore
#define Default_smart_garbage_collection_system_smart_garbage_collection_system_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class smart_garbage_collection_system
smart_garbage_collection_system::smart_garbage_collection_system() {
    NOTIFY_CONSTRUCTOR(smart_garbage_collection_system, smart_garbage_collection_system(), 0, Default_smart_garbage_collection_system_smart_garbage_collection_system_SERIALIZE);
    do_maintenance_on = NULL;
    itsCms = NULL;
    itsElectricity = NULL;
    itsINPUT = NULL;
    itsOUTPUT = NULL;
    itsOppurtunities = NULL;
    itsResources = NULL;
    itsRisks = NULL;
    itsStakeholders = NULL;
    itsStandards_Regulations_Compliances = NULL;
    itsThreats = NULL;
    itsUsers_Endusers = NULL;
    itsWastecenter = NULL;
    operates_under = NULL;
    show_traffic = NULL;
    uses = NULL;
}

smart_garbage_collection_system::~smart_garbage_collection_system() {
    NOTIFY_DESTRUCTOR(~smart_garbage_collection_system, true);
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
    if(do_maintenance_on != NULL)
        {
            NOTIFY_RELATION_CLEARED("do_maintenance_on");
            smart_garbage_collection_system* p_smart_garbage_collection_system = do_maintenance_on->getMaintenance_by();
            if(p_smart_garbage_collection_system != NULL)
                {
                    do_maintenance_on->__setMaintenance_by(NULL);
                }
            do_maintenance_on = NULL;
        }
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
            NOTIFY_RELATION_CLEARED("itsCms");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsCms->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsCms->__setItsSmart_garbage_collection_system(NULL);
                }
            itsCms = NULL;
        }
    if(itsElectricity != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsElectricity");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsElectricity->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsElectricity->__setItsSmart_garbage_collection_system(NULL);
                }
            itsElectricity = NULL;
        }
    if(itsINPUT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsINPUT");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsINPUT->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsINPUT->__setItsSmart_garbage_collection_system(NULL);
                }
            itsINPUT = NULL;
        }
    if(itsOUTPUT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOUTPUT");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsOUTPUT->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsOUTPUT->__setItsSmart_garbage_collection_system(NULL);
                }
            itsOUTPUT = NULL;
        }
    if(itsOppurtunities != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsOppurtunities");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsOppurtunities->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsOppurtunities->__setItsSmart_garbage_collection_system(NULL);
                }
            itsOppurtunities = NULL;
        }
    if(itsResources != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsResources");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsResources->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsResources->__setItsSmart_garbage_collection_system(NULL);
                }
            itsResources = NULL;
        }
    if(itsRisks != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsRisks");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsRisks->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsRisks->__setItsSmart_garbage_collection_system(NULL);
                }
            itsRisks = NULL;
        }
    if(itsStakeholders != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsStakeholders->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsStakeholders->__setItsSmart_garbage_collection_system(NULL);
                }
            itsStakeholders = NULL;
        }
    if(itsStandards_Regulations_Compliances != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStandards_Regulations_Compliances");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsStandards_Regulations_Compliances->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsStandards_Regulations_Compliances->__setItsSmart_garbage_collection_system(NULL);
                }
            itsStandards_Regulations_Compliances = NULL;
        }
    if(itsThreats != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsThreats");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsThreats->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsThreats->__setItsSmart_garbage_collection_system(NULL);
                }
            itsThreats = NULL;
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
    if(itsUsers_Endusers != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
            smart_garbage_collection_system* p_smart_garbage_collection_system = itsUsers_Endusers->getItsSmart_garbage_collection_system();
            if(p_smart_garbage_collection_system != NULL)
                {
                    itsUsers_Endusers->__setItsSmart_garbage_collection_system(NULL);
                }
            itsUsers_Endusers = NULL;
        }
    if(itsWastecenter != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsWastecenter");
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
            NOTIFY_RELATION_CLEARED("operates_under");
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
    if(show_traffic != NULL)
        {
            NOTIFY_RELATION_CLEARED("show_traffic");
            smart_garbage_collection_system* p_smart_garbage_collection_system = show_traffic->getGets_relevant_data();
            if(p_smart_garbage_collection_system != NULL)
                {
                    show_traffic->__setGets_relevant_data(NULL);
                }
            show_traffic = NULL;
        }
    if(uses != NULL)
        {
            NOTIFY_RELATION_CLEARED("uses");
            smart_garbage_collection_system* p_smart_garbage_collection_system = uses->getUsed_by();
            if(p_smart_garbage_collection_system != NULL)
                {
                    uses->__setUsed_by(NULL);
                }
            uses = NULL;
        }
}

void smart_garbage_collection_system::_addItsBin(bin* p_bin) {
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

void smart_garbage_collection_system::_removeItsBin(bin* p_bin) {
    NOTIFY_RELATION_ITEM_REMOVED("itsBin", p_bin);
    itsBin.remove(p_bin);
}

void smart_garbage_collection_system::_clearItsBin() {
    NOTIFY_RELATION_CLEARED("itsBin");
    itsBin.removeAll();
}

void smart_garbage_collection_system::__setItsCms(cms* p_cms) {
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

void smart_garbage_collection_system::_setItsCms(cms* p_cms) {
    if(itsCms != NULL)
        {
            itsCms->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsCms(p_cms);
}

void smart_garbage_collection_system::_clearItsCms() {
    NOTIFY_RELATION_CLEARED("itsCms");
    itsCms = NULL;
}

void smart_garbage_collection_system::_addItsTruck(truck* p_truck) {
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

void smart_garbage_collection_system::_removeItsTruck(truck* p_truck) {
    NOTIFY_RELATION_ITEM_REMOVED("itsTruck", p_truck);
    itsTruck.remove(p_truck);
}

void smart_garbage_collection_system::_clearItsTruck() {
    NOTIFY_RELATION_CLEARED("itsTruck");
    itsTruck.removeAll();
}

void smart_garbage_collection_system::_addItsUserDevice(UserDevice* p_UserDevice) {
    if(p_UserDevice != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUserDevice", p_UserDevice, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUserDevice");
        }
    itsUserDevice.add(p_UserDevice);
}

void smart_garbage_collection_system::_removeItsUserDevice(UserDevice* p_UserDevice) {
    NOTIFY_RELATION_ITEM_REMOVED("itsUserDevice", p_UserDevice);
    itsUserDevice.remove(p_UserDevice);
}

void smart_garbage_collection_system::_clearItsUserDevice() {
    NOTIFY_RELATION_CLEARED("itsUserDevice");
    itsUserDevice.removeAll();
}

void smart_garbage_collection_system::__setItsWastecenter(wastecenter* p_wastecenter) {
    itsWastecenter = p_wastecenter;
    if(p_wastecenter != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsWastecenter", p_wastecenter, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsWastecenter");
        }
}

void smart_garbage_collection_system::_setItsWastecenter(wastecenter* p_wastecenter) {
    if(itsWastecenter != NULL)
        {
            itsWastecenter->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsWastecenter(p_wastecenter);
}

void smart_garbage_collection_system::_clearItsWastecenter() {
    NOTIFY_RELATION_CLEARED("itsWastecenter");
    itsWastecenter = NULL;
}

void smart_garbage_collection_system::_addOperates_on(road_network* p_road_network) {
    if(p_road_network != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("operates_on", p_road_network, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("operates_on");
        }
    operates_on.add(p_road_network);
}

void smart_garbage_collection_system::_removeOperates_on(road_network* p_road_network) {
    NOTIFY_RELATION_ITEM_REMOVED("operates_on", p_road_network);
    operates_on.remove(p_road_network);
}

void smart_garbage_collection_system::_clearOperates_on() {
    NOTIFY_RELATION_CLEARED("operates_on");
    operates_on.removeAll();
}

void smart_garbage_collection_system::__setOperates_under(weather* p_weather) {
    operates_under = p_weather;
    if(p_weather != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("operates_under", p_weather, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("operates_under");
        }
}

void smart_garbage_collection_system::_setOperates_under(weather* p_weather) {
    if(operates_under != NULL)
        {
            operates_under->_removeInfluences(this);
        }
    __setOperates_under(p_weather);
}

void smart_garbage_collection_system::_clearOperates_under() {
    NOTIFY_RELATION_CLEARED("operates_under");
    operates_under = NULL;
}

void smart_garbage_collection_system::_addServices(Municipality* p_Municipality) {
    if(p_Municipality != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("services", p_Municipality, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("services");
        }
    services.add(p_Municipality);
}

void smart_garbage_collection_system::_removeServices(Municipality* p_Municipality) {
    NOTIFY_RELATION_ITEM_REMOVED("services", p_Municipality);
    services.remove(p_Municipality);
}

void smart_garbage_collection_system::_clearServices() {
    NOTIFY_RELATION_CLEARED("services");
    services.removeAll();
}

maintenance_system* smart_garbage_collection_system::getDo_maintenance_on() const {
    return do_maintenance_on;
}

void smart_garbage_collection_system::setDo_maintenance_on(maintenance_system* p_maintenance_system) {
    if(p_maintenance_system != NULL)
        {
            p_maintenance_system->_setMaintenance_by(this);
        }
    _setDo_maintenance_on(p_maintenance_system);
}

electricity* smart_garbage_collection_system::getItsElectricity() const {
    return itsElectricity;
}

void smart_garbage_collection_system::setItsElectricity(electricity* p_electricity) {
    if(p_electricity != NULL)
        {
            p_electricity->_setItsSmart_garbage_collection_system(this);
        }
    _setItsElectricity(p_electricity);
}

INPUT* smart_garbage_collection_system::getItsINPUT() const {
    return itsINPUT;
}

void smart_garbage_collection_system::setItsINPUT(INPUT* p_INPUT) {
    if(p_INPUT != NULL)
        {
            p_INPUT->_setItsSmart_garbage_collection_system(this);
        }
    _setItsINPUT(p_INPUT);
}

OUTPUT* smart_garbage_collection_system::getItsOUTPUT() const {
    return itsOUTPUT;
}

void smart_garbage_collection_system::setItsOUTPUT(OUTPUT* p_OUTPUT) {
    if(p_OUTPUT != NULL)
        {
            p_OUTPUT->_setItsSmart_garbage_collection_system(this);
        }
    _setItsOUTPUT(p_OUTPUT);
}

Oppurtunities* smart_garbage_collection_system::getItsOppurtunities() const {
    return itsOppurtunities;
}

void smart_garbage_collection_system::setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    if(p_Oppurtunities != NULL)
        {
            p_Oppurtunities->_setItsSmart_garbage_collection_system(this);
        }
    _setItsOppurtunities(p_Oppurtunities);
}

Resources* smart_garbage_collection_system::getItsResources() const {
    return itsResources;
}

void smart_garbage_collection_system::setItsResources(Resources* p_Resources) {
    if(p_Resources != NULL)
        {
            p_Resources->_setItsSmart_garbage_collection_system(this);
        }
    _setItsResources(p_Resources);
}

Risks* smart_garbage_collection_system::getItsRisks() const {
    return itsRisks;
}

void smart_garbage_collection_system::setItsRisks(Risks* p_Risks) {
    if(p_Risks != NULL)
        {
            p_Risks->_setItsSmart_garbage_collection_system(this);
        }
    _setItsRisks(p_Risks);
}

Stakeholders* smart_garbage_collection_system::getItsStakeholders() const {
    return itsStakeholders;
}

void smart_garbage_collection_system::setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(p_Stakeholders != NULL)
        {
            p_Stakeholders->_setItsSmart_garbage_collection_system(this);
        }
    _setItsStakeholders(p_Stakeholders);
}

Standards_Regulations_Compliances* smart_garbage_collection_system::getItsStandards_Regulations_Compliances() const {
    return itsStandards_Regulations_Compliances;
}

void smart_garbage_collection_system::setItsStandards_Regulations_Compliances(Standards_Regulations_Compliances* p_Standards_Regulations_Compliances) {
    if(p_Standards_Regulations_Compliances != NULL)
        {
            p_Standards_Regulations_Compliances->_setItsSmart_garbage_collection_system(this);
        }
    _setItsStandards_Regulations_Compliances(p_Standards_Regulations_Compliances);
}

Threats* smart_garbage_collection_system::getItsThreats() const {
    return itsThreats;
}

void smart_garbage_collection_system::setItsThreats(Threats* p_Threats) {
    if(p_Threats != NULL)
        {
            p_Threats->_setItsSmart_garbage_collection_system(this);
        }
    _setItsThreats(p_Threats);
}

Users_Endusers* smart_garbage_collection_system::getItsUsers_Endusers() const {
    return itsUsers_Endusers;
}

void smart_garbage_collection_system::setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    if(p_Users_Endusers != NULL)
        {
            p_Users_Endusers->_setItsSmart_garbage_collection_system(this);
        }
    _setItsUsers_Endusers(p_Users_Endusers);
}

route_planning_system* smart_garbage_collection_system::getShow_traffic() const {
    return show_traffic;
}

void smart_garbage_collection_system::setShow_traffic(route_planning_system* p_route_planning_system) {
    if(p_route_planning_system != NULL)
        {
            p_route_planning_system->_setGets_relevant_data(this);
        }
    _setShow_traffic(p_route_planning_system);
}

Resident_Citizen_User* smart_garbage_collection_system::getUses() const {
    return uses;
}

void smart_garbage_collection_system::setUses(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(p_Resident_Citizen_User != NULL)
        {
            p_Resident_Citizen_User->_setUsed_by(this);
        }
    _setUses(p_Resident_Citizen_User);
}

void smart_garbage_collection_system::__setDo_maintenance_on(maintenance_system* p_maintenance_system) {
    do_maintenance_on = p_maintenance_system;
    if(p_maintenance_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("do_maintenance_on", p_maintenance_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("do_maintenance_on");
        }
}

void smart_garbage_collection_system::_setDo_maintenance_on(maintenance_system* p_maintenance_system) {
    if(do_maintenance_on != NULL)
        {
            do_maintenance_on->__setMaintenance_by(NULL);
        }
    __setDo_maintenance_on(p_maintenance_system);
}

void smart_garbage_collection_system::_clearDo_maintenance_on() {
    NOTIFY_RELATION_CLEARED("do_maintenance_on");
    do_maintenance_on = NULL;
}

void smart_garbage_collection_system::__setItsElectricity(electricity* p_electricity) {
    itsElectricity = p_electricity;
    if(p_electricity != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsElectricity", p_electricity, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsElectricity");
        }
}

void smart_garbage_collection_system::_setItsElectricity(electricity* p_electricity) {
    if(itsElectricity != NULL)
        {
            itsElectricity->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsElectricity(p_electricity);
}

void smart_garbage_collection_system::_clearItsElectricity() {
    NOTIFY_RELATION_CLEARED("itsElectricity");
    itsElectricity = NULL;
}

void smart_garbage_collection_system::__setItsINPUT(INPUT* p_INPUT) {
    itsINPUT = p_INPUT;
    if(p_INPUT != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsINPUT", p_INPUT, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsINPUT");
        }
}

void smart_garbage_collection_system::_setItsINPUT(INPUT* p_INPUT) {
    if(itsINPUT != NULL)
        {
            itsINPUT->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsINPUT(p_INPUT);
}

void smart_garbage_collection_system::_clearItsINPUT() {
    NOTIFY_RELATION_CLEARED("itsINPUT");
    itsINPUT = NULL;
}

void smart_garbage_collection_system::__setItsOUTPUT(OUTPUT* p_OUTPUT) {
    itsOUTPUT = p_OUTPUT;
    if(p_OUTPUT != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOUTPUT", p_OUTPUT, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOUTPUT");
        }
}

void smart_garbage_collection_system::_setItsOUTPUT(OUTPUT* p_OUTPUT) {
    if(itsOUTPUT != NULL)
        {
            itsOUTPUT->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsOUTPUT(p_OUTPUT);
}

void smart_garbage_collection_system::_clearItsOUTPUT() {
    NOTIFY_RELATION_CLEARED("itsOUTPUT");
    itsOUTPUT = NULL;
}

void smart_garbage_collection_system::__setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    itsOppurtunities = p_Oppurtunities;
    if(p_Oppurtunities != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsOppurtunities", p_Oppurtunities, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsOppurtunities");
        }
}

void smart_garbage_collection_system::_setItsOppurtunities(Oppurtunities* p_Oppurtunities) {
    if(itsOppurtunities != NULL)
        {
            itsOppurtunities->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsOppurtunities(p_Oppurtunities);
}

void smart_garbage_collection_system::_clearItsOppurtunities() {
    NOTIFY_RELATION_CLEARED("itsOppurtunities");
    itsOppurtunities = NULL;
}

void smart_garbage_collection_system::__setItsResources(Resources* p_Resources) {
    itsResources = p_Resources;
    if(p_Resources != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsResources", p_Resources, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsResources");
        }
}

void smart_garbage_collection_system::_setItsResources(Resources* p_Resources) {
    if(itsResources != NULL)
        {
            itsResources->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsResources(p_Resources);
}

void smart_garbage_collection_system::_clearItsResources() {
    NOTIFY_RELATION_CLEARED("itsResources");
    itsResources = NULL;
}

void smart_garbage_collection_system::__setItsRisks(Risks* p_Risks) {
    itsRisks = p_Risks;
    if(p_Risks != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsRisks", p_Risks, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsRisks");
        }
}

void smart_garbage_collection_system::_setItsRisks(Risks* p_Risks) {
    if(itsRisks != NULL)
        {
            itsRisks->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsRisks(p_Risks);
}

void smart_garbage_collection_system::_clearItsRisks() {
    NOTIFY_RELATION_CLEARED("itsRisks");
    itsRisks = NULL;
}

void smart_garbage_collection_system::__setItsStakeholders(Stakeholders* p_Stakeholders) {
    itsStakeholders = p_Stakeholders;
    if(p_Stakeholders != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStakeholders", p_Stakeholders, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStakeholders");
        }
}

void smart_garbage_collection_system::_setItsStakeholders(Stakeholders* p_Stakeholders) {
    if(itsStakeholders != NULL)
        {
            itsStakeholders->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsStakeholders(p_Stakeholders);
}

void smart_garbage_collection_system::_clearItsStakeholders() {
    NOTIFY_RELATION_CLEARED("itsStakeholders");
    itsStakeholders = NULL;
}

void smart_garbage_collection_system::__setItsStandards_Regulations_Compliances(Standards_Regulations_Compliances* p_Standards_Regulations_Compliances) {
    itsStandards_Regulations_Compliances = p_Standards_Regulations_Compliances;
    if(p_Standards_Regulations_Compliances != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStandards_Regulations_Compliances", p_Standards_Regulations_Compliances, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStandards_Regulations_Compliances");
        }
}

void smart_garbage_collection_system::_setItsStandards_Regulations_Compliances(Standards_Regulations_Compliances* p_Standards_Regulations_Compliances) {
    if(itsStandards_Regulations_Compliances != NULL)
        {
            itsStandards_Regulations_Compliances->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsStandards_Regulations_Compliances(p_Standards_Regulations_Compliances);
}

void smart_garbage_collection_system::_clearItsStandards_Regulations_Compliances() {
    NOTIFY_RELATION_CLEARED("itsStandards_Regulations_Compliances");
    itsStandards_Regulations_Compliances = NULL;
}

void smart_garbage_collection_system::__setItsThreats(Threats* p_Threats) {
    itsThreats = p_Threats;
    if(p_Threats != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsThreats", p_Threats, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsThreats");
        }
}

void smart_garbage_collection_system::_setItsThreats(Threats* p_Threats) {
    if(itsThreats != NULL)
        {
            itsThreats->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsThreats(p_Threats);
}

void smart_garbage_collection_system::_clearItsThreats() {
    NOTIFY_RELATION_CLEARED("itsThreats");
    itsThreats = NULL;
}

void smart_garbage_collection_system::__setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    itsUsers_Endusers = p_Users_Endusers;
    if(p_Users_Endusers != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUsers_Endusers", p_Users_Endusers, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
        }
}

void smart_garbage_collection_system::_setItsUsers_Endusers(Users_Endusers* p_Users_Endusers) {
    if(itsUsers_Endusers != NULL)
        {
            itsUsers_Endusers->__setItsSmart_garbage_collection_system(NULL);
        }
    __setItsUsers_Endusers(p_Users_Endusers);
}

void smart_garbage_collection_system::_clearItsUsers_Endusers() {
    NOTIFY_RELATION_CLEARED("itsUsers_Endusers");
    itsUsers_Endusers = NULL;
}

void smart_garbage_collection_system::__setShow_traffic(route_planning_system* p_route_planning_system) {
    show_traffic = p_route_planning_system;
    if(p_route_planning_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("show_traffic", p_route_planning_system, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("show_traffic");
        }
}

void smart_garbage_collection_system::_setShow_traffic(route_planning_system* p_route_planning_system) {
    if(show_traffic != NULL)
        {
            show_traffic->__setGets_relevant_data(NULL);
        }
    __setShow_traffic(p_route_planning_system);
}

void smart_garbage_collection_system::_clearShow_traffic() {
    NOTIFY_RELATION_CLEARED("show_traffic");
    show_traffic = NULL;
}

void smart_garbage_collection_system::__setUses(Resident_Citizen_User* p_Resident_Citizen_User) {
    uses = p_Resident_Citizen_User;
    if(p_Resident_Citizen_User != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("uses", p_Resident_Citizen_User, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("uses");
        }
}

void smart_garbage_collection_system::_setUses(Resident_Citizen_User* p_Resident_Citizen_User) {
    if(uses != NULL)
        {
            uses->__setUsed_by(NULL);
        }
    __setUses(p_Resident_Citizen_User);
}

void smart_garbage_collection_system::_clearUses() {
    NOTIFY_RELATION_CLEARED("uses");
    uses = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedsmart_garbage_collection_system::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("operates_on", false, false);
    {
        OMIterator<road_network*> iter(myReal->operates_on);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("operates_under", false, true);
    if(myReal->operates_under)
        {
            aomsRelations->ADD_ITEM(myReal->operates_under);
        }
    aomsRelations->addRelation("itsBin", false, false);
    {
        OMIterator<bin*> iter(myReal->itsBin);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsCms", false, true);
    if(myReal->itsCms)
        {
            aomsRelations->ADD_ITEM(myReal->itsCms);
        }
    aomsRelations->addRelation("itsTruck", false, false);
    {
        OMIterator<truck*> iter(myReal->itsTruck);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsWastecenter", false, true);
    if(myReal->itsWastecenter)
        {
            aomsRelations->ADD_ITEM(myReal->itsWastecenter);
        }
    aomsRelations->addRelation("itsUserDevice", false, false);
    {
        OMIterator<UserDevice*> iter(myReal->itsUserDevice);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("services", false, false);
    {
        OMIterator<Municipality*> iter(myReal->services);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
    aomsRelations->addRelation("itsStakeholders", false, true);
    if(myReal->itsStakeholders)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholders);
        }
    aomsRelations->addRelation("itsUsers_Endusers", false, true);
    if(myReal->itsUsers_Endusers)
        {
            aomsRelations->ADD_ITEM(myReal->itsUsers_Endusers);
        }
    aomsRelations->addRelation("itsResources", false, true);
    if(myReal->itsResources)
        {
            aomsRelations->ADD_ITEM(myReal->itsResources);
        }
    aomsRelations->addRelation("itsRisks", false, true);
    if(myReal->itsRisks)
        {
            aomsRelations->ADD_ITEM(myReal->itsRisks);
        }
    aomsRelations->addRelation("itsOppurtunities", false, true);
    if(myReal->itsOppurtunities)
        {
            aomsRelations->ADD_ITEM(myReal->itsOppurtunities);
        }
    aomsRelations->addRelation("itsOUTPUT", false, true);
    if(myReal->itsOUTPUT)
        {
            aomsRelations->ADD_ITEM(myReal->itsOUTPUT);
        }
    aomsRelations->addRelation("itsINPUT", false, true);
    if(myReal->itsINPUT)
        {
            aomsRelations->ADD_ITEM(myReal->itsINPUT);
        }
    aomsRelations->addRelation("itsStandards_Regulations_Compliances", false, true);
    if(myReal->itsStandards_Regulations_Compliances)
        {
            aomsRelations->ADD_ITEM(myReal->itsStandards_Regulations_Compliances);
        }
    aomsRelations->addRelation("itsThreats", false, true);
    if(myReal->itsThreats)
        {
            aomsRelations->ADD_ITEM(myReal->itsThreats);
        }
    aomsRelations->addRelation("itsElectricity", false, true);
    if(myReal->itsElectricity)
        {
            aomsRelations->ADD_ITEM(myReal->itsElectricity);
        }
    aomsRelations->addRelation("uses", false, true);
    if(myReal->uses)
        {
            aomsRelations->ADD_ITEM(myReal->uses);
        }
    aomsRelations->addRelation("do_maintenance_on", false, true);
    if(myReal->do_maintenance_on)
        {
            aomsRelations->ADD_ITEM(myReal->do_maintenance_on);
        }
    aomsRelations->addRelation("show_traffic", false, true);
    if(myReal->show_traffic)
        {
            aomsRelations->ADD_ITEM(myReal->show_traffic);
        }
}
//#]

IMPLEMENT_META_P(smart_garbage_collection_system, Default, Default, false, OMAnimatedsmart_garbage_collection_system)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\smart_garbage_collection_system.cpp
*********************************************************************/
