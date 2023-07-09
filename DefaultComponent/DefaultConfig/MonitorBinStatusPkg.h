/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: MonitorBinStatusPkg
//!	Generated Date	: Sun, 9, Jul 2023  
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
//#[ ignore
#define secure_connection_established_MonitorBinStatusPkg_UseCaseAnalysisPkg_id 23401

#define connection_request_MonitorBinStatusPkg_UseCaseAnalysisPkg_id 23402

#define connection_comfirm_MonitorBinStatusPkg_UseCaseAnalysisPkg_id 23403

#define terminate_connection_MonitorBinStatusPkg_UseCaseAnalysisPkg_id 23404
//#]

//## package UseCaseAnalysisPkg::MonitorBinStatusPkg



//## event secure_connection_established()
class secure_connection_established : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    secure_connection_established();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event connection_request()
class connection_request : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    connection_request();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event connection_comfirm()
class connection_comfirm : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    connection_comfirm();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event terminate_connection()
class terminate_connection : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    terminate_connection();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\MonitorBinStatusPkg.h
*********************************************************************/
