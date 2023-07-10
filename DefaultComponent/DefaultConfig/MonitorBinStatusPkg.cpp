/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MonitorBinStatusPkg
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\MonitorBinStatusPkg.cpp
*********************************************************************/

//## auto_generated
#include "MonitorBinStatusPkg.h"
//## package UseCaseAnalysisPkg::MonitorBinStatusPkg



//## event secure_connection_established()
secure_connection_established::secure_connection_established() {
    setId(secure_connection_established_MonitorBinStatusPkg_UseCaseAnalysisPkg_id);
}

bool secure_connection_established::isTypeOf(const short id) const {
    return (secure_connection_established_MonitorBinStatusPkg_UseCaseAnalysisPkg_id==id);
}

//## event connection_request()
connection_request::connection_request() {
    setId(connection_request_MonitorBinStatusPkg_UseCaseAnalysisPkg_id);
}

bool connection_request::isTypeOf(const short id) const {
    return (connection_request_MonitorBinStatusPkg_UseCaseAnalysisPkg_id==id);
}

//## event connection_comfirm()
connection_comfirm::connection_comfirm() {
    setId(connection_comfirm_MonitorBinStatusPkg_UseCaseAnalysisPkg_id);
}

bool connection_comfirm::isTypeOf(const short id) const {
    return (connection_comfirm_MonitorBinStatusPkg_UseCaseAnalysisPkg_id==id);
}

//## event terminate_connection()
terminate_connection::terminate_connection() {
    setId(terminate_connection_MonitorBinStatusPkg_UseCaseAnalysisPkg_id);
}

bool terminate_connection::isTypeOf(const short id) const {
    return (terminate_connection_MonitorBinStatusPkg_UseCaseAnalysisPkg_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MonitorBinStatusPkg.cpp
*********************************************************************/
