/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: electricity
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\electricity.h
*********************************************************************/

#ifndef electricity_H
#define electricity_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## link itsSmartbin
class smartbin;

//## package Default

//## class electricity
class electricity {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    electricity();
    
    //## auto_generated
    virtual ~electricity();
    
    ////    Additional operations    ////
    
    //## auto_generated
    smartbin* getItsSmartbin() const;
    
    //## auto_generated
    void setItsSmartbin(smartbin* p_smartbin);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    smartbin* itsSmartbin;		//## link itsSmartbin
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSmartbin(smartbin* p_smartbin);
    
    //## auto_generated
    void _setItsSmartbin(smartbin* p_smartbin);
    
    //## auto_generated
    void _clearItsSmartbin();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\electricity.h
*********************************************************************/
