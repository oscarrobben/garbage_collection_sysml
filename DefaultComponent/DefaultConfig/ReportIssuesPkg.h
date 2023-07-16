/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ReportIssuesPkg
//!	Generated Date	: Sat, 15, Jul 2023  
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
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//#[ ignore
#define send_report_ReportIssuesPkg_UseCaseAnalysisPkg_id 10801

#define problem_resolved_ReportIssuesPkg_UseCaseAnalysisPkg_id 10802
//#]

//## package UseCaseAnalysisPkg::ReportIssuesPkg



// s
//## event send_report()
class send_report : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsend_report;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    send_report();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsend_report : virtual public AOMEvent {
    DECLARE_META_EVENT(send_report)
};
//#]
#endif // _OMINSTRUMENT

//## event problem_resolved()
class problem_resolved : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedproblem_resolved;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    problem_resolved();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedproblem_resolved : virtual public AOMEvent {
    DECLARE_META_EVENT(problem_resolved)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ReportIssuesPkg.h
*********************************************************************/
