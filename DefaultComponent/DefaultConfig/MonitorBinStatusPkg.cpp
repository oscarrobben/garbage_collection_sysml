/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MonitorBinStatusPkg
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\MonitorBinStatusPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "MonitorBinStatusPkg.h"
//#[ ignore
#define secure_connection_established_SERIALIZE OM_NO_OP

#define secure_connection_established_UNSERIALIZE OM_NO_OP

#define secure_connection_established_CONSTRUCTOR secure_connection_established()

#define connection_request_SERIALIZE OM_NO_OP

#define connection_request_UNSERIALIZE OM_NO_OP

#define connection_request_CONSTRUCTOR connection_request()

#define connection_comfirm_SERIALIZE OM_NO_OP

#define connection_comfirm_UNSERIALIZE OM_NO_OP

#define connection_comfirm_CONSTRUCTOR connection_comfirm()

#define terminate_connection_SERIALIZE OM_NO_OP

#define terminate_connection_UNSERIALIZE OM_NO_OP

#define terminate_connection_CONSTRUCTOR terminate_connection()
//#]

//## package UseCaseAnalysisPkg::MonitorBinStatusPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_MonitorBinStatusPkg, UseCaseAnalysisPkg::MonitorBinStatusPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event secure_connection_established()
secure_connection_established::secure_connection_established() {
    NOTIFY_EVENT_CONSTRUCTOR(secure_connection_established)
    setId(secure_connection_established_MonitorBinStatusPkg_UseCaseAnalysisPkg_id);
}

bool secure_connection_established::isTypeOf(const short id) const {
    return (secure_connection_established_MonitorBinStatusPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(secure_connection_established, UseCaseAnalysisPkg_MonitorBinStatusPkg, UseCaseAnalysisPkg::MonitorBinStatusPkg, secure_connection_established())

//## event connection_request()
connection_request::connection_request() {
    NOTIFY_EVENT_CONSTRUCTOR(connection_request)
    setId(connection_request_MonitorBinStatusPkg_UseCaseAnalysisPkg_id);
}

bool connection_request::isTypeOf(const short id) const {
    return (connection_request_MonitorBinStatusPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(connection_request, UseCaseAnalysisPkg_MonitorBinStatusPkg, UseCaseAnalysisPkg::MonitorBinStatusPkg, connection_request())

//## event connection_comfirm()
connection_comfirm::connection_comfirm() {
    NOTIFY_EVENT_CONSTRUCTOR(connection_comfirm)
    setId(connection_comfirm_MonitorBinStatusPkg_UseCaseAnalysisPkg_id);
}

bool connection_comfirm::isTypeOf(const short id) const {
    return (connection_comfirm_MonitorBinStatusPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(connection_comfirm, UseCaseAnalysisPkg_MonitorBinStatusPkg, UseCaseAnalysisPkg::MonitorBinStatusPkg, connection_comfirm())

//## event terminate_connection()
terminate_connection::terminate_connection() {
    NOTIFY_EVENT_CONSTRUCTOR(terminate_connection)
    setId(terminate_connection_MonitorBinStatusPkg_UseCaseAnalysisPkg_id);
}

bool terminate_connection::isTypeOf(const short id) const {
    return (terminate_connection_MonitorBinStatusPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(terminate_connection, UseCaseAnalysisPkg_MonitorBinStatusPkg, UseCaseAnalysisPkg::MonitorBinStatusPkg, terminate_connection())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MonitorBinStatusPkg.cpp
*********************************************************************/
