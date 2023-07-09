/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: server
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\server.h
*********************************************************************/

#ifndef server_H
#define server_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## link itsCms
class cms;

//## package Default

//## class TopLevel::server
class server_C {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    server_C();
    
    //## auto_generated
    ~server_C();
    
    ////    Additional operations    ////
    
    //## auto_generated
    cms* getItsCms() const;
    
    //## auto_generated
    void setItsCms(cms* p_cms);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    cms* itsCms;		//## link itsCms
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCms(cms* p_cms);
    
    //## auto_generated
    void _setItsCms(cms* p_cms);
    
    //## auto_generated
    void _clearItsCms();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\server.h
*********************************************************************/
