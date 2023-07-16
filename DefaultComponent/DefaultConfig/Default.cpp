/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Default.h"
//## classInstance Adoption
#include "Adoption.h"
//## classInstance itsCms
#include "cms.h"
//## classInstance Cost_Reduction
#include "Cost_Reduction.h"
//## classInstance DataSecurity_Privacy
#include "DataSecurity_Privacy.h"
//## classInstance Efficiency
#include "Efficiency.h"
//## classInstance Human
#include "Human.h"
//## classInstance Optimized_Collection_Route
#include "Optimized_Collection_Route.h"
//## classInstance part_1
#include "part_1.h"
//## classInstance ResistancetoChange
#include "ResistancetoChange.h"
//## classInstance server
#include "server.h"
//## classInstance itsSmartbin
#include "smartbin.h"
//## classInstance SmartBin_Data
#include "SmartBin_Data.h"
//## classInstance Sustainability
#include "Sustainability.h"
//## classInstance Technological
#include "Technological.h"
//## classInstance Technological_Challenges
#include "Technological_Challenges.h"
//## classInstance Technologie
#include "Technologie.h"
//## auto_generated
#include "App.h"
//## auto_generated
#include "AppData.h"
//## auto_generated
#include "audio_sensor.h"
//## auto_generated
#include "bin.h"
//## auto_generated
#include "block_112.h"
//## auto_generated
#include "block_19.h"
//## auto_generated
#include "block_21.h"
//## auto_generated
#include "block_7.h"
//## auto_generated
#include "block_73.h"
//## auto_generated
#include "electricity.h"
//## auto_generated
#include "fill_sensor.h"
//## auto_generated
#include "humidity_sensor.h"
//## auto_generated
#include "INPUT.h"
//## auto_generated
#include "Laptop.h"
//## auto_generated
#include "lid.h"
//## auto_generated
#include "open_sensor.h"
//## auto_generated
#include "Oppurtunities.h"
//## auto_generated
#include "OUTPUT.h"
//## auto_generated
#include "regularbin.h"
//## auto_generated
#include "Resources.h"
//## auto_generated
#include "Risks.h"
//## auto_generated
#include "RouteData.h"
//## auto_generated
#include "sensor.h"
//## auto_generated
#include "SensorData.h"
//## auto_generated
#include "smart_garbage_collection_system.h"
//## auto_generated
#include "SmartPhone.h"
//## auto_generated
#include "Stakeholders.h"
//## auto_generated
#include "Standards_Regulations_Compliances.h"
//## auto_generated
#include "tablet.h"
//## auto_generated
#include "temp_sensor.h"
//## auto_generated
#include "Threats.h"
//## auto_generated
#include "truck.h"
//## auto_generated
#include "TruckData.h"
//## auto_generated
#include "UserDevice.h"
//## auto_generated
#include "Users_Endusers.h"
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

#define broken_SERIALIZE OM_NO_OP

#define broken_UNSERIALIZE OM_NO_OP

#define broken_CONSTRUCTOR broken()

#define repaired_SERIALIZE OM_NO_OP

#define repaired_UNSERIALIZE OM_NO_OP

#define repaired_CONSTRUCTOR repaired()

#define repair_bin_SERIALIZE OM_NO_OP

#define repair_bin_UNSERIALIZE OM_NO_OP

#define repair_bin_CONSTRUCTOR repair_bin()

#define disp_repair_SERIALIZE OM_NO_OP

#define disp_repair_UNSERIALIZE OM_NO_OP

#define disp_repair_CONSTRUCTOR disp_repair()

#define req_repair_SERIALIZE OM_NO_OP

#define req_repair_UNSERIALIZE OM_NO_OP

#define req_repair_CONSTRUCTOR req_repair()

#define test_SERIALIZE OM_NO_OP

#define test_UNSERIALIZE OM_NO_OP

#define test_CONSTRUCTOR test()

#define addTrash1_SERIALIZE OM_NO_OP

#define addTrash1_UNSERIALIZE OM_NO_OP

#define addTrash1_CONSTRUCTOR addTrash1()

#define addTrash2_SERIALIZE OM_NO_OP

#define addTrash2_UNSERIALIZE OM_NO_OP

#define addTrash2_CONSTRUCTOR addTrash2()

#define throwAway2_SERIALIZE OM_NO_OP

#define throwAway2_UNSERIALIZE OM_NO_OP

#define throwAway2_CONSTRUCTOR throwAway2()

#define broken2_SERIALIZE OM_NO_OP

#define broken2_UNSERIALIZE OM_NO_OP

#define broken2_CONSTRUCTOR broken2()

#define reqEmpty2_SERIALIZE OM_NO_OP

#define reqEmpty2_UNSERIALIZE OM_NO_OP

#define reqEmpty2_CONSTRUCTOR reqEmpty2()

#define broken1_SERIALIZE OM_NO_OP

#define broken1_UNSERIALIZE OM_NO_OP

#define broken1_CONSTRUCTOR broken1()

#define repaired2_SERIALIZE OM_NO_OP

#define repaired2_UNSERIALIZE OM_NO_OP

#define repaired2_CONSTRUCTOR repaired2()

#define emptyBin2_SERIALIZE OM_NO_OP

#define emptyBin2_UNSERIALIZE OM_NO_OP

#define emptyBin2_CONSTRUCTOR emptyBin2()

#define req_repair2_SERIALIZE OM_NO_OP

#define req_repair2_UNSERIALIZE OM_NO_OP

#define req_repair2_CONSTRUCTOR req_repair2()

#define emptyBin1_SERIALIZE OM_NO_OP

#define emptyBin1_UNSERIALIZE OM_NO_OP

#define emptyBin1_CONSTRUCTOR emptyBin1()

#define req_repair1_SERIALIZE OM_NO_OP

#define req_repair1_UNSERIALIZE OM_NO_OP

#define req_repair1_CONSTRUCTOR req_repair1()

#define disp_repair1_SERIALIZE OM_NO_OP

#define disp_repair1_UNSERIALIZE OM_NO_OP

#define disp_repair1_CONSTRUCTOR disp_repair1()

#define repaired1_SERIALIZE OM_NO_OP

#define repaired1_UNSERIALIZE OM_NO_OP

#define repaired1_CONSTRUCTOR repaired1()

#define reqEmpty1_SERIALIZE OM_NO_OP

#define reqEmpty1_UNSERIALIZE OM_NO_OP

#define reqEmpty1_CONSTRUCTOR reqEmpty1()

#define disp_repair2_SERIALIZE OM_NO_OP

#define disp_repair2_UNSERIALIZE OM_NO_OP

#define disp_repair2_CONSTRUCTOR disp_repair2()

#define drive1_SERIALIZE OM_NO_OP

#define drive1_UNSERIALIZE OM_NO_OP

#define drive1_CONSTRUCTOR drive1()

#define throwAway1_SERIALIZE OM_NO_OP

#define throwAway1_UNSERIALIZE OM_NO_OP

#define throwAway1_CONSTRUCTOR throwAway1()

#define drive2_SERIALIZE OM_NO_OP

#define drive2_UNSERIALIZE OM_NO_OP

#define drive2_CONSTRUCTOR drive2()

#define select1_SERIALIZE OM_NO_OP

#define select1_UNSERIALIZE OM_NO_OP

#define select1_CONSTRUCTOR select1()

#define select2_SERIALIZE OM_NO_OP

#define select2_UNSERIALIZE OM_NO_OP

#define select2_CONSTRUCTOR select2()

#define disp_repair0_SERIALIZE OM_NO_OP

#define disp_repair0_UNSERIALIZE OM_NO_OP

#define disp_repair0_CONSTRUCTOR disp_repair0()
//#]

//## package Default


//## classInstance Adoption
Adoption_C Adoption;

//## classInstance Cost_Reduction
Cost_Reduction_C Cost_Reduction;

//## classInstance DataSecurity_Privacy
DataSecurity_Privacy_C DataSecurity_Privacy;

//## classInstance Efficiency
Efficiency_C Efficiency;

//## classInstance Human
Human_C Human;

//## classInstance Optimized_Collection_Route
Optimized_Collection_Route_C Optimized_Collection_Route;

//## classInstance ResistancetoChange
ResistancetoChange_C ResistancetoChange;

//## classInstance SmartBin_Data
SmartBin_Data_C SmartBin_Data;

//## classInstance Sustainability
Sustainability_C Sustainability;

//## classInstance Technological
Technological_C Technological;

//## classInstance Technological_Challenges
Technological_Challenges_C Technological_Challenges;

//## classInstance Technologie
Technologie_C Technologie;

//## classInstance itsCms
cms itsCms;

//## classInstance itsSmartbin
smartbin itsSmartbin;

//## classInstance part_1
part_1_C part_1;

//## classInstance server
server_C server;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances();

IMPLEMENT_META_PACKAGE(Default, Default)
#endif // _OMINSTRUMENT

void Default_initRelations() {
    {
        {
            itsSmartbin.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Default_startBehavior() {
    bool done = true;
    done &= itsSmartbin.startBehavior();
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances() {
    OM_SET_INSTANCE_NAME(&server, server, "server", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&ResistancetoChange, ResistancetoChange, "ResistancetoChange", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Technological_Challenges, Technological_Challenges, "Technological_Challenges", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Technologie, Technologie, "Technologie", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Human, Human, "Human", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&DataSecurity_Privacy, DataSecurity_Privacy, "DataSecurity_Privacy", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Technological, Technological, "Technological", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Adoption, Adoption, "Adoption", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Efficiency, Efficiency, "Efficiency", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Sustainability, Sustainability, "Sustainability", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&part_1, part_1, "part_1", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Cost_Reduction, Cost_Reduction, "Cost_Reduction", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&SmartBin_Data, SmartBin_Data, "SmartBin_Data", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&Optimized_Collection_Route, Optimized_Collection_Route, "Optimized_Collection_Route", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsSmartbin, smartbin, "itsSmartbin", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsCms, cms, "itsCms", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Default_OMInitializer::Default_OMInitializer() {
    Default_initRelations();
    Default_startBehavior();
}

Default_OMInitializer::~Default_OMInitializer() {
}
//#]

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

//## event broken()
broken::broken() {
    NOTIFY_EVENT_CONSTRUCTOR(broken)
    setId(broken_Default_id);
}

bool broken::isTypeOf(const short id) const {
    return (broken_Default_id==id);
}

IMPLEMENT_META_EVENT_P(broken, Default, Default, broken())

//## event repaired()
repaired::repaired() {
    NOTIFY_EVENT_CONSTRUCTOR(repaired)
    setId(repaired_Default_id);
}

bool repaired::isTypeOf(const short id) const {
    return (repaired_Default_id==id);
}

IMPLEMENT_META_EVENT_P(repaired, Default, Default, repaired())

//## event repair_bin()
repair_bin::repair_bin() {
    NOTIFY_EVENT_CONSTRUCTOR(repair_bin)
    setId(repair_bin_Default_id);
}

bool repair_bin::isTypeOf(const short id) const {
    return (repair_bin_Default_id==id);
}

IMPLEMENT_META_EVENT_P(repair_bin, Default, Default, repair_bin())

//## event disp_repair()
disp_repair::disp_repair() {
    NOTIFY_EVENT_CONSTRUCTOR(disp_repair)
    setId(disp_repair_Default_id);
}

bool disp_repair::isTypeOf(const short id) const {
    return (disp_repair_Default_id==id);
}

IMPLEMENT_META_EVENT_P(disp_repair, Default, Default, disp_repair())

//## event req_repair()
req_repair::req_repair() {
    NOTIFY_EVENT_CONSTRUCTOR(req_repair)
    setId(req_repair_Default_id);
}

bool req_repair::isTypeOf(const short id) const {
    return (req_repair_Default_id==id);
}

IMPLEMENT_META_EVENT_P(req_repair, Default, Default, req_repair())

//## event test()
test::test() {
    NOTIFY_EVENT_CONSTRUCTOR(test)
    setId(test_Default_id);
}

bool test::isTypeOf(const short id) const {
    return (test_Default_id==id);
}

IMPLEMENT_META_EVENT_P(test, Default, Default, test())

//## event addTrash1()
addTrash1::addTrash1() {
    NOTIFY_EVENT_CONSTRUCTOR(addTrash1)
    setId(addTrash1_Default_id);
}

bool addTrash1::isTypeOf(const short id) const {
    return (addTrash1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(addTrash1, Default, Default, addTrash1())

//## event addTrash2()
addTrash2::addTrash2() {
    NOTIFY_EVENT_CONSTRUCTOR(addTrash2)
    setId(addTrash2_Default_id);
}

bool addTrash2::isTypeOf(const short id) const {
    return (addTrash2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(addTrash2, Default, Default, addTrash2())

//## event throwAway2()
throwAway2::throwAway2() {
    NOTIFY_EVENT_CONSTRUCTOR(throwAway2)
    setId(throwAway2_Default_id);
}

bool throwAway2::isTypeOf(const short id) const {
    return (throwAway2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(throwAway2, Default, Default, throwAway2())

//## event broken2()
broken2::broken2() {
    NOTIFY_EVENT_CONSTRUCTOR(broken2)
    setId(broken2_Default_id);
}

bool broken2::isTypeOf(const short id) const {
    return (broken2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(broken2, Default, Default, broken2())

//## event reqEmpty2()
reqEmpty2::reqEmpty2() {
    NOTIFY_EVENT_CONSTRUCTOR(reqEmpty2)
    setId(reqEmpty2_Default_id);
}

bool reqEmpty2::isTypeOf(const short id) const {
    return (reqEmpty2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(reqEmpty2, Default, Default, reqEmpty2())

//## event broken1()
broken1::broken1() {
    NOTIFY_EVENT_CONSTRUCTOR(broken1)
    setId(broken1_Default_id);
}

bool broken1::isTypeOf(const short id) const {
    return (broken1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(broken1, Default, Default, broken1())

//## event repaired2()
repaired2::repaired2() {
    NOTIFY_EVENT_CONSTRUCTOR(repaired2)
    setId(repaired2_Default_id);
}

bool repaired2::isTypeOf(const short id) const {
    return (repaired2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(repaired2, Default, Default, repaired2())

//## event emptyBin2()
emptyBin2::emptyBin2() {
    NOTIFY_EVENT_CONSTRUCTOR(emptyBin2)
    setId(emptyBin2_Default_id);
}

bool emptyBin2::isTypeOf(const short id) const {
    return (emptyBin2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(emptyBin2, Default, Default, emptyBin2())

//## event req_repair2()
req_repair2::req_repair2() {
    NOTIFY_EVENT_CONSTRUCTOR(req_repair2)
    setId(req_repair2_Default_id);
}

bool req_repair2::isTypeOf(const short id) const {
    return (req_repair2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(req_repair2, Default, Default, req_repair2())

//## event emptyBin1()
emptyBin1::emptyBin1() {
    NOTIFY_EVENT_CONSTRUCTOR(emptyBin1)
    setId(emptyBin1_Default_id);
}

bool emptyBin1::isTypeOf(const short id) const {
    return (emptyBin1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(emptyBin1, Default, Default, emptyBin1())

//## event req_repair1()
req_repair1::req_repair1() {
    NOTIFY_EVENT_CONSTRUCTOR(req_repair1)
    setId(req_repair1_Default_id);
}

bool req_repair1::isTypeOf(const short id) const {
    return (req_repair1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(req_repair1, Default, Default, req_repair1())

//## event disp_repair1()
disp_repair1::disp_repair1() {
    NOTIFY_EVENT_CONSTRUCTOR(disp_repair1)
    setId(disp_repair1_Default_id);
}

bool disp_repair1::isTypeOf(const short id) const {
    return (disp_repair1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(disp_repair1, Default, Default, disp_repair1())

//## event repaired1()
repaired1::repaired1() {
    NOTIFY_EVENT_CONSTRUCTOR(repaired1)
    setId(repaired1_Default_id);
}

bool repaired1::isTypeOf(const short id) const {
    return (repaired1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(repaired1, Default, Default, repaired1())

//## event reqEmpty1()
reqEmpty1::reqEmpty1() {
    NOTIFY_EVENT_CONSTRUCTOR(reqEmpty1)
    setId(reqEmpty1_Default_id);
}

bool reqEmpty1::isTypeOf(const short id) const {
    return (reqEmpty1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(reqEmpty1, Default, Default, reqEmpty1())

//## event disp_repair2()
disp_repair2::disp_repair2() {
    NOTIFY_EVENT_CONSTRUCTOR(disp_repair2)
    setId(disp_repair2_Default_id);
}

bool disp_repair2::isTypeOf(const short id) const {
    return (disp_repair2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(disp_repair2, Default, Default, disp_repair2())

//## event drive1()
drive1::drive1() {
    NOTIFY_EVENT_CONSTRUCTOR(drive1)
    setId(drive1_Default_id);
}

bool drive1::isTypeOf(const short id) const {
    return (drive1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(drive1, Default, Default, drive1())

//## event throwAway1()
throwAway1::throwAway1() {
    NOTIFY_EVENT_CONSTRUCTOR(throwAway1)
    setId(throwAway1_Default_id);
}

bool throwAway1::isTypeOf(const short id) const {
    return (throwAway1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(throwAway1, Default, Default, throwAway1())

//## event drive2()
drive2::drive2() {
    NOTIFY_EVENT_CONSTRUCTOR(drive2)
    setId(drive2_Default_id);
}

bool drive2::isTypeOf(const short id) const {
    return (drive2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(drive2, Default, Default, drive2())

//## event select1()
select1::select1() {
    NOTIFY_EVENT_CONSTRUCTOR(select1)
    setId(select1_Default_id);
}

bool select1::isTypeOf(const short id) const {
    return (select1_Default_id==id);
}

IMPLEMENT_META_EVENT_P(select1, Default, Default, select1())

//## event select2()
select2::select2() {
    NOTIFY_EVENT_CONSTRUCTOR(select2)
    setId(select2_Default_id);
}

bool select2::isTypeOf(const short id) const {
    return (select2_Default_id==id);
}

IMPLEMENT_META_EVENT_P(select2, Default, Default, select2())

//## event disp_repair0()
disp_repair0::disp_repair0() {
    NOTIFY_EVENT_CONSTRUCTOR(disp_repair0)
    setId(disp_repair0_Default_id);
}

bool disp_repair0::isTypeOf(const short id) const {
    return (disp_repair0_Default_id==id);
}

IMPLEMENT_META_EVENT_P(disp_repair0, Default, Default, disp_repair0())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
