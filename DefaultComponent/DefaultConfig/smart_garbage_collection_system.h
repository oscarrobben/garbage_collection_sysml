/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: smart_garbage_collection_system
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\smart_garbage_collection_system.h
*********************************************************************/

#ifndef smart_garbage_collection_system_H
#define smart_garbage_collection_system_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omcollec.h>
//## auto_generated
#include <aom\aom.h>
//## link itsINPUT
class INPUT;

//## link itsOUTPUT
class OUTPUT;

//## link itsOppurtunities
class Oppurtunities;

//## link uses
class Resident_Citizen_User;

//## link itsResources
class Resources;

//## link itsRisks
class Risks;

//## link itsStakeholders
class Stakeholders;

//## link itsStandards_Regulations_Compliances
class Standards_Regulations_Compliances;

//## link itsThreats
class Threats;

//## link itsUserDevice
class UserDevice;

//## link itsUsers_Endusers
class Users_Endusers;

//## link itsBin
class bin;

//## link itsCms
class cms;

//## link itsElectricity
class electricity;

//## link do_maintenance_on
class maintenance_system;

//## link show_traffic
class route_planning_system;

//## link itsTruck
class truck;

//## link itsWastecenter
class wastecenter;

//## link operates_under
class weather;

//## link services
class Municipality;

//## link operates_on
class road_network;

//## package Default

//## class smart_garbage_collection_system
class smart_garbage_collection_system {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsmart_garbage_collection_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    smart_garbage_collection_system();
    
    //## auto_generated
    ~smart_garbage_collection_system();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<bin*> getItsBin() const;
    
    //## auto_generated
    void addItsBin(bin* p_bin);
    
    //## auto_generated
    void removeItsBin(bin* p_bin);
    
    //## auto_generated
    void clearItsBin();
    
    //## auto_generated
    cms* getItsCms() const;
    
    //## auto_generated
    void setItsCms(cms* p_cms);
    
    //## auto_generated
    OMIterator<truck*> getItsTruck() const;
    
    //## auto_generated
    void addItsTruck(truck* p_truck);
    
    //## auto_generated
    void removeItsTruck(truck* p_truck);
    
    //## auto_generated
    void clearItsTruck();
    
    //## auto_generated
    OMIterator<UserDevice*> getItsUserDevice() const;
    
    //## auto_generated
    void addItsUserDevice(UserDevice* p_UserDevice);
    
    //## auto_generated
    void removeItsUserDevice(UserDevice* p_UserDevice);
    
    //## auto_generated
    void clearItsUserDevice();
    
    //## auto_generated
    wastecenter* getItsWastecenter() const;
    
    //## auto_generated
    void setItsWastecenter(wastecenter* p_wastecenter);
    
    //## auto_generated
    OMIterator<road_network*> getOperates_on() const;
    
    //## auto_generated
    void addOperates_on(road_network* p_road_network);
    
    //## auto_generated
    void removeOperates_on(road_network* p_road_network);
    
    //## auto_generated
    void clearOperates_on();
    
    //## auto_generated
    weather* getOperates_under() const;
    
    //## auto_generated
    void setOperates_under(weather* p_weather);
    
    //## auto_generated
    OMIterator<Municipality*> getServices() const;
    
    //## auto_generated
    void addServices(Municipality* p_Municipality);
    
    //## auto_generated
    void removeServices(Municipality* p_Municipality);
    
    //## auto_generated
    void clearServices();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMCollection<bin*> itsBin;		//## link itsBin
    
    cms* itsCms;		//## link itsCms
    
    OMCollection<truck*> itsTruck;		//## link itsTruck
    
    OMCollection<UserDevice*> itsUserDevice;		//## link itsUserDevice
    
    wastecenter* itsWastecenter;		//## link itsWastecenter
    
    OMCollection<road_network*> operates_on;		//## link operates_on
    
    weather* operates_under;		//## link operates_under
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsBin(bin* p_bin);
    
    //## auto_generated
    void _removeItsBin(bin* p_bin);
    
    //## auto_generated
    void _clearItsBin();
    
    //## auto_generated
    void __setItsCms(cms* p_cms);
    
    //## auto_generated
    void _setItsCms(cms* p_cms);
    
    //## auto_generated
    void _clearItsCms();
    
    //## auto_generated
    void _addItsTruck(truck* p_truck);
    
    //## auto_generated
    void _removeItsTruck(truck* p_truck);
    
    //## auto_generated
    void _clearItsTruck();
    
    //## auto_generated
    void _addItsUserDevice(UserDevice* p_UserDevice);
    
    //## auto_generated
    void _removeItsUserDevice(UserDevice* p_UserDevice);
    
    //## auto_generated
    void _clearItsUserDevice();
    
    //## auto_generated
    void __setItsWastecenter(wastecenter* p_wastecenter);
    
    //## auto_generated
    void _setItsWastecenter(wastecenter* p_wastecenter);
    
    //## auto_generated
    void _clearItsWastecenter();
    
    //## auto_generated
    void _addOperates_on(road_network* p_road_network);
    
    //## auto_generated
    void _removeOperates_on(road_network* p_road_network);
    
    //## auto_generated
    void _clearOperates_on();
    
    //## auto_generated
    void __setOperates_under(weather* p_weather);
    
    //## auto_generated
    void _setOperates_under(weather* p_weather);
    
    //## auto_generated
    void _clearOperates_under();
    
    //## auto_generated
    void _addServices(Municipality* p_Municipality);
    
    //## auto_generated
    void _removeServices(Municipality* p_Municipality);
    
    //## auto_generated
    void _clearServices();
    
    //## auto_generated
    maintenance_system* getDo_maintenance_on() const;
    
    //## auto_generated
    void setDo_maintenance_on(maintenance_system* p_maintenance_system);
    
    //## auto_generated
    electricity* getItsElectricity() const;
    
    //## auto_generated
    void setItsElectricity(electricity* p_electricity);
    
    //## auto_generated
    INPUT* getItsINPUT() const;
    
    //## auto_generated
    void setItsINPUT(INPUT* p_INPUT);
    
    //## auto_generated
    OUTPUT* getItsOUTPUT() const;
    
    //## auto_generated
    void setItsOUTPUT(OUTPUT* p_OUTPUT);
    
    //## auto_generated
    Oppurtunities* getItsOppurtunities() const;
    
    //## auto_generated
    void setItsOppurtunities(Oppurtunities* p_Oppurtunities);
    
    //## auto_generated
    Resources* getItsResources() const;
    
    //## auto_generated
    void setItsResources(Resources* p_Resources);
    
    //## auto_generated
    Risks* getItsRisks() const;
    
    //## auto_generated
    void setItsRisks(Risks* p_Risks);
    
    //## auto_generated
    Stakeholders* getItsStakeholders() const;
    
    //## auto_generated
    void setItsStakeholders(Stakeholders* p_Stakeholders);
    
    //## auto_generated
    Standards_Regulations_Compliances* getItsStandards_Regulations_Compliances() const;
    
    //## auto_generated
    void setItsStandards_Regulations_Compliances(Standards_Regulations_Compliances* p_Standards_Regulations_Compliances);
    
    //## auto_generated
    Threats* getItsThreats() const;
    
    //## auto_generated
    void setItsThreats(Threats* p_Threats);
    
    //## auto_generated
    Users_Endusers* getItsUsers_Endusers() const;
    
    //## auto_generated
    void setItsUsers_Endusers(Users_Endusers* p_Users_Endusers);
    
    //## auto_generated
    route_planning_system* getShow_traffic() const;
    
    //## auto_generated
    void setShow_traffic(route_planning_system* p_route_planning_system);
    
    //## auto_generated
    Resident_Citizen_User* getUses() const;
    
    //## auto_generated
    void setUses(Resident_Citizen_User* p_Resident_Citizen_User);

protected :

    maintenance_system* do_maintenance_on;		//## link do_maintenance_on
    
    electricity* itsElectricity;		//## link itsElectricity
    
    INPUT* itsINPUT;		//## link itsINPUT
    
    OUTPUT* itsOUTPUT;		//## link itsOUTPUT
    
    Oppurtunities* itsOppurtunities;		//## link itsOppurtunities
    
    Resources* itsResources;		//## link itsResources
    
    Risks* itsRisks;		//## link itsRisks
    
    Stakeholders* itsStakeholders;		//## link itsStakeholders
    
    Standards_Regulations_Compliances* itsStandards_Regulations_Compliances;		//## link itsStandards_Regulations_Compliances
    
    Threats* itsThreats;		//## link itsThreats
    
    Users_Endusers* itsUsers_Endusers;		//## link itsUsers_Endusers
    
    OMCollection<Municipality*> services;		//## link services
    
    route_planning_system* show_traffic;		//## link show_traffic
    
    Resident_Citizen_User* uses;		//## link uses

public :

    //## auto_generated
    void __setDo_maintenance_on(maintenance_system* p_maintenance_system);
    
    //## auto_generated
    void _setDo_maintenance_on(maintenance_system* p_maintenance_system);
    
    //## auto_generated
    void _clearDo_maintenance_on();
    
    //## auto_generated
    void __setItsElectricity(electricity* p_electricity);
    
    //## auto_generated
    void _setItsElectricity(electricity* p_electricity);
    
    //## auto_generated
    void _clearItsElectricity();
    
    //## auto_generated
    void __setItsINPUT(INPUT* p_INPUT);
    
    //## auto_generated
    void _setItsINPUT(INPUT* p_INPUT);
    
    //## auto_generated
    void _clearItsINPUT();
    
    //## auto_generated
    void __setItsOUTPUT(OUTPUT* p_OUTPUT);
    
    //## auto_generated
    void _setItsOUTPUT(OUTPUT* p_OUTPUT);
    
    //## auto_generated
    void _clearItsOUTPUT();
    
    //## auto_generated
    void __setItsOppurtunities(Oppurtunities* p_Oppurtunities);
    
    //## auto_generated
    void _setItsOppurtunities(Oppurtunities* p_Oppurtunities);
    
    //## auto_generated
    void _clearItsOppurtunities();
    
    //## auto_generated
    void __setItsResources(Resources* p_Resources);
    
    //## auto_generated
    void _setItsResources(Resources* p_Resources);
    
    //## auto_generated
    void _clearItsResources();
    
    //## auto_generated
    void __setItsRisks(Risks* p_Risks);
    
    //## auto_generated
    void _setItsRisks(Risks* p_Risks);
    
    //## auto_generated
    void _clearItsRisks();
    
    //## auto_generated
    void __setItsStakeholders(Stakeholders* p_Stakeholders);
    
    //## auto_generated
    void _setItsStakeholders(Stakeholders* p_Stakeholders);
    
    //## auto_generated
    void _clearItsStakeholders();
    
    //## auto_generated
    void __setItsStandards_Regulations_Compliances(Standards_Regulations_Compliances* p_Standards_Regulations_Compliances);
    
    //## auto_generated
    void _setItsStandards_Regulations_Compliances(Standards_Regulations_Compliances* p_Standards_Regulations_Compliances);
    
    //## auto_generated
    void _clearItsStandards_Regulations_Compliances();
    
    //## auto_generated
    void __setItsThreats(Threats* p_Threats);
    
    //## auto_generated
    void _setItsThreats(Threats* p_Threats);
    
    //## auto_generated
    void _clearItsThreats();
    
    //## auto_generated
    void __setItsUsers_Endusers(Users_Endusers* p_Users_Endusers);
    
    //## auto_generated
    void _setItsUsers_Endusers(Users_Endusers* p_Users_Endusers);
    
    //## auto_generated
    void _clearItsUsers_Endusers();
    
    //## auto_generated
    void __setShow_traffic(route_planning_system* p_route_planning_system);
    
    //## auto_generated
    void _setShow_traffic(route_planning_system* p_route_planning_system);
    
    //## auto_generated
    void _clearShow_traffic();
    
    //## auto_generated
    void __setUses(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void _setUses(Resident_Citizen_User* p_Resident_Citizen_User);
    
    //## auto_generated
    void _clearUses();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsmart_garbage_collection_system : virtual public AOMInstance {
    DECLARE_META(smart_garbage_collection_system, OMAnimatedsmart_garbage_collection_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\smart_garbage_collection_system.h
*********************************************************************/
