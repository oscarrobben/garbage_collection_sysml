/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: TopLevel_Simulation
	Model Element	: RouteOptimizationPkg
//!	Generated Date	: Fri, 30, Jun 2023  
	File Path	: DefaultComponent\TopLevel_Simulation\RouteOptimizationPkg.h
*********************************************************************/

#ifndef RouteOptimizationPkg_H
#define RouteOptimizationPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//#[ ignore
#define route_optimization_computing_failure_RouteOptimizationPkg_UseCaseAnalysisPkg_id 26801
//#]

//## package UseCaseAnalysisPkg::RouteOptimizationPkg



//## event route_optimization_computing_failure()
class route_optimization_computing_failure : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedroute_optimization_computing_failure;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    route_optimization_computing_failure();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedroute_optimization_computing_failure : virtual public AOMEvent {
    DECLARE_META_EVENT(route_optimization_computing_failure)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\TopLevel_Simulation\RouteOptimizationPkg.h
*********************************************************************/
