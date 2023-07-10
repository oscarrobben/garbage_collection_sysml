/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: weather
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\weather.cpp
*********************************************************************/

//## auto_generated
#include "weather.h"
//## link influences
#include "smart_garbage_collection_system.h"
//## package EnvPkg

//## class weather
weather::weather() {
}

weather::~weather() {
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
    influences.add(p_smart_garbage_collection_system);
}

void weather::_removeInfluences(smart_garbage_collection_system* p_smart_garbage_collection_system) {
    influences.remove(p_smart_garbage_collection_system);
}

void weather::_clearInfluences() {
    influences.removeAll();
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\weather.cpp
*********************************************************************/
