/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ReportIssuesPkg
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ReportIssuesPkg.h
*********************************************************************/

#ifndef ReportIssuesPkg_H
#define ReportIssuesPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//#[ ignore
#define send_report_ReportIssuesPkg_UseCaseAnalysisPkg_id 10801

#define problem_resolved_ReportIssuesPkg_UseCaseAnalysisPkg_id 10802
//#]

//## package UseCaseAnalysisPkg::ReportIssuesPkg



// s
//## event send_report()
class send_report : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    send_report();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event problem_resolved()
class problem_resolved : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    problem_resolved();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ReportIssuesPkg.h
*********************************************************************/
