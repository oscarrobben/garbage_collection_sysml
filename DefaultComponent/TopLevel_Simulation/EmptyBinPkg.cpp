/********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: TopLevel_Simulation
	Model Element	: EmptyBinPkg
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\TopLevel_Simulation\EmptyBinPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EmptyBinPkg.h"
//#[ ignore
#define route_collection_evt_SERIALIZE OM_NO_OP

#define route_collection_evt_UNSERIALIZE OM_NO_OP

#define route_collection_evt_CONSTRUCTOR route_collection_evt()

#define collection_route_completed_evt_SERIALIZE OM_NO_OP

#define collection_route_completed_evt_UNSERIALIZE OM_NO_OP

#define collection_route_completed_evt_CONSTRUCTOR collection_route_completed_evt()

#define bin_not_found_evt_SERIALIZE OM_NO_OP

#define bin_not_found_evt_UNSERIALIZE OM_NO_OP

#define bin_not_found_evt_CONSTRUCTOR bin_not_found_evt()

#define emptying_bin_failure_evt_SERIALIZE OM_NO_OP

#define emptying_bin_failure_evt_UNSERIALIZE OM_NO_OP

#define emptying_bin_failure_evt_CONSTRUCTOR emptying_bin_failure_evt()
//#]

//## package UseCaseAnalysisPkg::EmptyBinPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_EmptyBinPkg, UseCaseAnalysisPkg::EmptyBinPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event route_collection_evt()
route_collection_evt::route_collection_evt() {
    NOTIFY_EVENT_CONSTRUCTOR(route_collection_evt)
    setId(route_collection_evt_EmptyBinPkg_UseCaseAnalysisPkg_id);
}

bool route_collection_evt::isTypeOf(const short id) const {
    return (route_collection_evt_EmptyBinPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(route_collection_evt, UseCaseAnalysisPkg_EmptyBinPkg, UseCaseAnalysisPkg::EmptyBinPkg, route_collection_evt())

//## event collection_route_completed_evt()
collection_route_completed_evt::collection_route_completed_evt() {
    NOTIFY_EVENT_CONSTRUCTOR(collection_route_completed_evt)
    setId(collection_route_completed_evt_EmptyBinPkg_UseCaseAnalysisPkg_id);
}

bool collection_route_completed_evt::isTypeOf(const short id) const {
    return (collection_route_completed_evt_EmptyBinPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(collection_route_completed_evt, UseCaseAnalysisPkg_EmptyBinPkg, UseCaseAnalysisPkg::EmptyBinPkg, collection_route_completed_evt())

//## event bin_not_found_evt()
bin_not_found_evt::bin_not_found_evt() {
    NOTIFY_EVENT_CONSTRUCTOR(bin_not_found_evt)
    setId(bin_not_found_evt_EmptyBinPkg_UseCaseAnalysisPkg_id);
}

bool bin_not_found_evt::isTypeOf(const short id) const {
    return (bin_not_found_evt_EmptyBinPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(bin_not_found_evt, UseCaseAnalysisPkg_EmptyBinPkg, UseCaseAnalysisPkg::EmptyBinPkg, bin_not_found_evt())

//## event emptying_bin_failure_evt()
emptying_bin_failure_evt::emptying_bin_failure_evt() {
    NOTIFY_EVENT_CONSTRUCTOR(emptying_bin_failure_evt)
    setId(emptying_bin_failure_evt_EmptyBinPkg_UseCaseAnalysisPkg_id);
}

bool emptying_bin_failure_evt::isTypeOf(const short id) const {
    return (emptying_bin_failure_evt_EmptyBinPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(emptying_bin_failure_evt, UseCaseAnalysisPkg_EmptyBinPkg, UseCaseAnalysisPkg::EmptyBinPkg, emptying_bin_failure_evt())

/*********************************************************************
	File Path	: DefaultComponent\TopLevel_Simulation\EmptyBinPkg.cpp
*********************************************************************/
