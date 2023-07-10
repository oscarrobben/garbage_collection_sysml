/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EmptyBinPkg
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\EmptyBinPkg.h
*********************************************************************/

#ifndef EmptyBinPkg_H
#define EmptyBinPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//#[ ignore
#define route_collection_evt_EmptyBinPkg_UseCaseAnalysisPkg_id 3001

#define collection_route_completed_evt_EmptyBinPkg_UseCaseAnalysisPkg_id 3002

#define bin_not_found_evt_EmptyBinPkg_UseCaseAnalysisPkg_id 3003

#define emptying_bin_failure_evt_EmptyBinPkg_UseCaseAnalysisPkg_id 3004
//#]

//## package UseCaseAnalysisPkg::EmptyBinPkg



//## event route_collection_evt()
class route_collection_evt : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    route_collection_evt();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event collection_route_completed_evt()
class collection_route_completed_evt : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    collection_route_completed_evt();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event bin_not_found_evt()
class bin_not_found_evt : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    bin_not_found_evt();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event emptying_bin_failure_evt()
class emptying_bin_failure_evt : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    emptying_bin_failure_evt();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EmptyBinPkg.h
*********************************************************************/
