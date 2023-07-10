/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ReportIssuesPkg
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ReportIssuesPkg.cpp
*********************************************************************/

//## auto_generated
#include "ReportIssuesPkg.h"
//## package UseCaseAnalysisPkg::ReportIssuesPkg



//## event send_report()
send_report::send_report() {
    setId(send_report_ReportIssuesPkg_UseCaseAnalysisPkg_id);
}

bool send_report::isTypeOf(const short id) const {
    return (send_report_ReportIssuesPkg_UseCaseAnalysisPkg_id==id);
}

//## event problem_resolved()
problem_resolved::problem_resolved() {
    setId(problem_resolved_ReportIssuesPkg_UseCaseAnalysisPkg_id);
}

bool problem_resolved::isTypeOf(const short id) const {
    return (problem_resolved_ReportIssuesPkg_UseCaseAnalysisPkg_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ReportIssuesPkg.cpp
*********************************************************************/
