/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: RouteOptimizationPkg
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\RouteOptimizationPkg.h
*********************************************************************/

#ifndef RouteOptimizationPkg_H
#define RouteOptimizationPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//#[ ignore
#define route_optimization_computing_failure_RouteOptimizationPkg_UseCaseAnalysisPkg_id 26801
//#]

//## package UseCaseAnalysisPkg::RouteOptimizationPkg



//## event route_optimization_computing_failure()
class route_optimization_computing_failure : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    route_optimization_computing_failure();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\RouteOptimizationPkg.h
*********************************************************************/
