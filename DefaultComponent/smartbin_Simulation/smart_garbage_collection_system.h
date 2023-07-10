/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: smart_garbage_collection_system
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\smart_garbage_collection_system.h
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
//## link itsUserDevice
class UserDevice;

//## link itsBin
class bin;

//## link itsCms
class cms;

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

protected :

    OMCollection<Municipality*> services;		//## link services
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
	File Path	: DefaultComponent\smartbin_Simulation\smart_garbage_collection_system.h
*********************************************************************/
