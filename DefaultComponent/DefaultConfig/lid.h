/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: lid
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\lid.h
*********************************************************************/

#ifndef lid_H
#define lid_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## link itsOpen_sensor
class open_sensor;

//## link itsSmartbin
class smartbin;

//## package Default

//## class lid
class lid {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    lid();
    
    //## auto_generated
    ~lid();
    
    ////    Additional operations    ////
    
    //## auto_generated
    open_sensor* getItsOpen_sensor() const;
    
    //## auto_generated
    void setItsOpen_sensor(open_sensor* p_open_sensor);
    
    //## auto_generated
    smartbin* getItsSmartbin() const;
    
    //## auto_generated
    void setItsSmartbin(smartbin* p_smartbin);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    open_sensor* itsOpen_sensor;		//## link itsOpen_sensor
    
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
	File Path	: DefaultComponent\DefaultConfig\lid.h
*********************************************************************/
