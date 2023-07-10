/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: Default
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## auto_generated
#include "App.h"
//## auto_generated
#include "bin.h"
//## auto_generated
#include "cms.h"
//## auto_generated
#include "electricity.h"
//## auto_generated
#include "lid.h"
//## auto_generated
#include "open_sensor.h"
//## auto_generated
#include "sensor.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//## auto_generated
#include "smartbin.h"
//## auto_generated
#include "truck.h"
//## auto_generated
#include "UserDevice.h"
//## auto_generated
#include "wastecenter.h"
//#[ ignore
#define throwAway_SERIALIZE OM_NO_OP

#define throwAway_UNSERIALIZE OM_NO_OP

#define throwAway_CONSTRUCTOR throwAway()

#define reqEmpty_SERIALIZE OM_NO_OP

#define reqEmpty_UNSERIALIZE OM_NO_OP

#define reqEmpty_CONSTRUCTOR reqEmpty()

#define emptyBin_SERIALIZE OM_NO_OP

#define emptyBin_UNSERIALIZE OM_NO_OP

#define emptyBin_CONSTRUCTOR emptyBin()

#define drive_SERIALIZE OM_NO_OP

#define drive_UNSERIALIZE OM_NO_OP

#define drive_CONSTRUCTOR drive()
//#]

//## package Default


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
}
#endif // _OMINSTRUMENT

//## event throwAway()
throwAway::throwAway() {
    NOTIFY_EVENT_CONSTRUCTOR(throwAway)
    setId(throwAway_Default_id);
}

bool throwAway::isTypeOf(const short id) const {
    return (throwAway_Default_id==id);
}

IMPLEMENT_META_EVENT_P(throwAway, Default, Default, throwAway())

//## event reqEmpty()
reqEmpty::reqEmpty() {
    NOTIFY_EVENT_CONSTRUCTOR(reqEmpty)
    setId(reqEmpty_Default_id);
}

bool reqEmpty::isTypeOf(const short id) const {
    return (reqEmpty_Default_id==id);
}

IMPLEMENT_META_EVENT_P(reqEmpty, Default, Default, reqEmpty())

//## event emptyBin()
emptyBin::emptyBin() {
    NOTIFY_EVENT_CONSTRUCTOR(emptyBin)
    setId(emptyBin_Default_id);
}

bool emptyBin::isTypeOf(const short id) const {
    return (emptyBin_Default_id==id);
}

IMPLEMENT_META_EVENT_P(emptyBin, Default, Default, emptyBin())

//## event drive()
drive::drive() {
    NOTIFY_EVENT_CONSTRUCTOR(drive)
    setId(drive_Default_id);
}

bool drive::isTypeOf(const short id) const {
    return (drive_Default_id==id);
}

IMPLEMENT_META_EVENT_P(drive, Default, Default, drive())

/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\Default.cpp
*********************************************************************/
