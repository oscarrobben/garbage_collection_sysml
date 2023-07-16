/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EmptyBinPkg
//!	Generated Date	: Sat, 15, Jul 2023  
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
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//#[ ignore
#define route_collection_evt_EmptyBinPkg_UseCaseAnalysisPkg_id 3001

#define collection_route_completed_evt_EmptyBinPkg_UseCaseAnalysisPkg_id 3002

#define bin_not_found_evt_EmptyBinPkg_UseCaseAnalysisPkg_id 3003

#define emptying_bin_failure_evt_EmptyBinPkg_UseCaseAnalysisPkg_id 3004
//#]

//## package UseCaseAnalysisPkg::EmptyBinPkg



//## event route_collection_evt()
class route_collection_evt : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedroute_collection_evt;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    route_collection_evt();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedroute_collection_evt : virtual public AOMEvent {
    DECLARE_META_EVENT(route_collection_evt)
};
//#]
#endif // _OMINSTRUMENT

//## event collection_route_completed_evt()
class collection_route_completed_evt : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcollection_route_completed_evt;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    collection_route_completed_evt();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcollection_route_completed_evt : virtual public AOMEvent {
    DECLARE_META_EVENT(collection_route_completed_evt)
};
//#]
#endif // _OMINSTRUMENT

//## event bin_not_found_evt()
class bin_not_found_evt : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedbin_not_found_evt;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    bin_not_found_evt();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedbin_not_found_evt : virtual public AOMEvent {
    DECLARE_META_EVENT(bin_not_found_evt)
};
//#]
#endif // _OMINSTRUMENT

//## event emptying_bin_failure_evt()
class emptying_bin_failure_evt : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedemptying_bin_failure_evt;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    emptying_bin_failure_evt();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedemptying_bin_failure_evt : virtual public AOMEvent {
    DECLARE_META_EVENT(emptying_bin_failure_evt)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EmptyBinPkg.h
*********************************************************************/
