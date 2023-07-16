/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RouteOptimizationPkg
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\RouteOptimizationPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "RouteOptimizationPkg.h"
//#[ ignore
#define route_optimization_computing_failure_SERIALIZE OM_NO_OP

#define route_optimization_computing_failure_UNSERIALIZE OM_NO_OP

#define route_optimization_computing_failure_CONSTRUCTOR route_optimization_computing_failure()
//#]

//## package UseCaseAnalysisPkg::RouteOptimizationPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_RouteOptimizationPkg, UseCaseAnalysisPkg::RouteOptimizationPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event route_optimization_computing_failure()
route_optimization_computing_failure::route_optimization_computing_failure() {
    NOTIFY_EVENT_CONSTRUCTOR(route_optimization_computing_failure)
    setId(route_optimization_computing_failure_RouteOptimizationPkg_UseCaseAnalysisPkg_id);
}

bool route_optimization_computing_failure::isTypeOf(const short id) const {
    return (route_optimization_computing_failure_RouteOptimizationPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(route_optimization_computing_failure, UseCaseAnalysisPkg_RouteOptimizationPkg, UseCaseAnalysisPkg::RouteOptimizationPkg, route_optimization_computing_failure())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RouteOptimizationPkg.cpp
*********************************************************************/
