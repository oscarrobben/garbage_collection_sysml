/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//## auto_generated
#include "Default.h"
//## classInstance server
#include "server.h"
//## auto_generated
#include "App.h"
//## auto_generated
#include "AppData.h"
//## auto_generated
#include "audio_sensor.h"
//## auto_generated
#include "bin.h"
//## auto_generated
#include "block_19.h"
//## auto_generated
#include "block_21.h"
//## auto_generated
#include "block_7.h"
//## auto_generated
#include "cms.h"
//## auto_generated
#include "cms_inst.h"
//## auto_generated
#include "electricity.h"
//## auto_generated
#include "fill_sensor.h"
//## auto_generated
#include "humidity_sensor.h"
//## auto_generated
#include "interface_48.h"
//## auto_generated
#include "Laptop.h"
//## auto_generated
#include "lid.h"
//## auto_generated
#include "open_sensor.h"
//## auto_generated
#include "regularbin.h"
//## auto_generated
#include "RouteData.h"
//## auto_generated
#include "sensor.h"
//## auto_generated
#include "SensorData.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//## auto_generated
#include "smartbin.h"
//## auto_generated
#include "SmartPhone.h"
//## auto_generated
#include "tablet.h"
//## auto_generated
#include "temp_sensor.h"
//## auto_generated
#include "truck.h"
//## auto_generated
#include "TruckData.h"
//## auto_generated
#include "UserDevice.h"
//## auto_generated
#include "wastecenter.h"
//## package Default


//## classInstance server
server_C server;

//## event throwAway()
throwAway::throwAway() {
    setId(throwAway_Default_id);
}

bool throwAway::isTypeOf(const short id) const {
    return (throwAway_Default_id==id);
}

//## event reqEmpty()
reqEmpty::reqEmpty() {
    setId(reqEmpty_Default_id);
}

bool reqEmpty::isTypeOf(const short id) const {
    return (reqEmpty_Default_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
