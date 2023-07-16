/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ReportIssuesPkg
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ReportIssuesPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ReportIssuesPkg.h"
//#[ ignore
#define send_report_SERIALIZE OM_NO_OP

#define send_report_UNSERIALIZE OM_NO_OP

#define send_report_CONSTRUCTOR send_report()

#define problem_resolved_SERIALIZE OM_NO_OP

#define problem_resolved_UNSERIALIZE OM_NO_OP

#define problem_resolved_CONSTRUCTOR problem_resolved()
//#]

//## package UseCaseAnalysisPkg::ReportIssuesPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_ReportIssuesPkg, UseCaseAnalysisPkg::ReportIssuesPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event send_report()
send_report::send_report() {
    NOTIFY_EVENT_CONSTRUCTOR(send_report)
    setId(send_report_ReportIssuesPkg_UseCaseAnalysisPkg_id);
}

bool send_report::isTypeOf(const short id) const {
    return (send_report_ReportIssuesPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(send_report, UseCaseAnalysisPkg_ReportIssuesPkg, UseCaseAnalysisPkg::ReportIssuesPkg, send_report())

//## event problem_resolved()
problem_resolved::problem_resolved() {
    NOTIFY_EVENT_CONSTRUCTOR(problem_resolved)
    setId(problem_resolved_ReportIssuesPkg_UseCaseAnalysisPkg_id);
}

bool problem_resolved::isTypeOf(const short id) const {
    return (problem_resolved_ReportIssuesPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(problem_resolved, UseCaseAnalysisPkg_ReportIssuesPkg, UseCaseAnalysisPkg::ReportIssuesPkg, problem_resolved())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ReportIssuesPkg.cpp
*********************************************************************/
