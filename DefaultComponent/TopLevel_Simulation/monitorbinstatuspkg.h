/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: TopLevel_Simulation
	Model Element	: monitorbinstatuspkg
//!	Generated Date	: Mon, 19, Jun 2023  
	File Path	: DefaultComponent\TopLevel_Simulation\monitorbinstatuspkg.h
*********************************************************************/

#ifndef monitorbinstatuspkg_H
#define monitorbinstatuspkg_H

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
#define secure_connection_established_monitorbinstatuspkg_UseCaseAnalysisPkg_id 23401
//#]

//## package UseCaseAnalysisPkg::monitorbinstatuspkg



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

#endif
/*********************************************************************
	File Path	: DefaultComponent\TopLevel_Simulation\monitorbinstatuspkg.h
*********************************************************************/
