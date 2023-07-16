/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MonitorBinStatusPkg
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\MonitorBinStatusPkg.h
*********************************************************************/

#ifndef MonitorBinStatusPkg_H
#define MonitorBinStatusPkg_H

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
#define secure_connection_established_MonitorBinStatusPkg_UseCaseAnalysisPkg_id 23401

#define connection_request_MonitorBinStatusPkg_UseCaseAnalysisPkg_id 23402

#define connection_comfirm_MonitorBinStatusPkg_UseCaseAnalysisPkg_id 23403

#define terminate_connection_MonitorBinStatusPkg_UseCaseAnalysisPkg_id 23404
//#]

//## package UseCaseAnalysisPkg::MonitorBinStatusPkg



//## event secure_connection_established()
class secure_connection_established : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsecure_connection_established;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    secure_connection_established();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsecure_connection_established : virtual public AOMEvent {
    DECLARE_META_EVENT(secure_connection_established)
};
//#]
#endif // _OMINSTRUMENT

//## event connection_request()
class connection_request : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedconnection_request;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    connection_request();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedconnection_request : virtual public AOMEvent {
    DECLARE_META_EVENT(connection_request)
};
//#]
#endif // _OMINSTRUMENT

//## event connection_comfirm()
class connection_comfirm : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedconnection_comfirm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    connection_comfirm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedconnection_comfirm : virtual public AOMEvent {
    DECLARE_META_EVENT(connection_comfirm)
};
//#]
#endif // _OMINSTRUMENT

//## event terminate_connection()
class terminate_connection : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedterminate_connection;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    terminate_connection();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedterminate_connection : virtual public AOMEvent {
    DECLARE_META_EVENT(terminate_connection)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MonitorBinStatusPkg.h
*********************************************************************/
