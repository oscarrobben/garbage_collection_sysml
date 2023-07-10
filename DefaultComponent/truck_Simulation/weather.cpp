/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: weather
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\weather.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "weather.h"
//## link influences
#include "smart_garbage_collection_system.h"
//#[ ignore
#define EnvPkg_weather_weather_SERIALIZE OM_NO_OP
//#]

//## package EnvPkg

//## class weather
weather::weather() {
    NOTIFY_CONSTRUCTOR(weather, weather(), 0, EnvPkg_weather_weather_SERIALIZE);
}

weather::~weather() {
    NOTIFY_DESTRUCTOR(~weather, true);
    cleanUpRelations();
}

OMIterator<smart_garbage_collection_system*> weather::getInfluences() const {
    OMIterator<smart_garbage_collection_system*> iter(influences);
    return iter;
}

void weather::addInfluences(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->_setOperates_under(this);
        }
    _addInfluences(p_smart_garbage_collection_system);
}

void weather::removeInfluences(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            p_smart_garbage_collection_system->__setOperates_under(NULL);
        }
    _removeInfluences(p_smart_garbage_collection_system);
}

void weather::clearInfluences() {
    OMIterator<smart_garbage_collection_system*> iter(influences);
    while (*iter){
        (*iter)->_clearOperates_under();
        iter++;
    }
    _clearInfluences();
}

humidity* weather::getIts_humidity() const {
    return (humidity*) &its_humidity;
}

temperature* weather::getIts_temperature() const {
    return (temperature*) &its_temperature;
}

void weather::cleanUpRelations() {
    {
        OMIterator<smart_garbage_collection_system*> iter(influences);
        while (*iter){
            weather* p_weather = (*iter)->getOperates_under();
            if(p_weather != NULL)
                {
                    (*iter)->__setOperates_under(NULL);
                }
            iter++;
        }
        influences.removeAll();
    }
}

void weather::_addInfluences(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    if(p_smart_garbage_collection_system != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("influences", p_smart_garbage_collection_system, false, false);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("influences");
        }
    influences.add(p_smart_garbage_collection_system);
}

void weather::_removeInfluences(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    NOTIFY_RELATION_ITEM_REMOVED("influences", p_smart_garbage_collection_system);
    influences.remove(p_smart_garbage_collection_system);
}

void weather::_clearInfluences() {
    NOTIFY_RELATION_CLEARED("influences");
    influences.removeAll();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedweather::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("its_humidity", true, true);
    aomsRelations->ADD_ITEM(&myReal->its_humidity);
    aomsRelations->addRelation("its_temperature", true, true);
    aomsRelations->ADD_ITEM(&myReal->its_temperature);
    aomsRelations->addRelation("influences", false, false);
    {
        OMIterator<smart_garbage_collection_system*> iter(myReal->influences);
        while (*iter){
            aomsRelations->ADD_ITEM(*iter);
            iter++;
        }
    }
}
//#]

IMPLEMENT_META_P(weather, EnvPkg, EnvPkg, false, OMAnimatedweather)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\weather.cpp
*********************************************************************/
