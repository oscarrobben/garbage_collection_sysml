/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/

#ifndef Default_H
#define Default_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class App;

//## auto_generated
class AppData;

//## auto_generated
class Laptop;

//## auto_generated
class RouteData;

//## auto_generated
class SensorData;

//## auto_generated
class SmartPhone;

//## auto_generated
class TruckData;

//## auto_generated
class UserDevice;

//## auto_generated
class audio_sensor;

//## auto_generated
class bin;

//## auto_generated
class block_19;

//## auto_generated
class block_21;

//## auto_generated
class block_7;

//## auto_generated
class cms;

//## auto_generated
class cms_inst;

//## auto_generated
class electricity;

//## auto_generated
class fill_sensor;

//## auto_generated
class humidity_sensor;

//## auto_generated
class interface_48;

//## auto_generated
class lid;

//## auto_generated
class open_sensor;

//## auto_generated
class regularbin;

//## auto_generated
class sensor;

//## classInstance server
class server_C;

//## auto_generated
class smart_garbage_collection_system;

//## auto_generated
class smartbin;

//## auto_generated
class tablet;

//## auto_generated
class temp_sensor;

//## auto_generated
class truck;

//## auto_generated
class wastecenter;

//#[ ignore
#define throwAway_Default_id 18601

#define reqEmpty_Default_id 18602
//#]

//## package Default


//## classInstance server
extern server_C server;

//## event throwAway()
class throwAway : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    throwAway();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event reqEmpty()
class reqEmpty : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqEmpty();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.h
*********************************************************************/
