/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: weather
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\weather.h
*********************************************************************/

#ifndef weather_H
#define weather_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\omcollec.h>
//## classInstance its_humidity
#include "humidity.h"
//## classInstance its_temperature
#include "temperature.h"
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "EnvPkg.h"
//## link influences
class smart_garbage_collection_system;

//## package EnvPkg

//## class weather
class weather {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedweather;
#endif // _OMINSTRUMENT

#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    weather();
    
    //## auto_generated
    ~weather();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<smart_garbage_collection_system*> getInfluences() const;
    
    //## auto_generated
    void addInfluences(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void removeInfluences(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void clearInfluences();
    
    //## auto_generated
    humidity* getIts_humidity() const;
    
    //## auto_generated
    temperature* getIts_temperature() const;

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMCollection<smart_garbage_collection_system*> influences;		//## link influences
    
    humidity its_humidity;		//## classInstance its_humidity
    
    temperature its_temperature;		//## classInstance its_temperature
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addInfluences(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _removeInfluences(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearInfluences();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedweather : virtual public AOMInstance {
    DECLARE_META(weather, OMAnimatedweather)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\weather.h
*********************************************************************/
