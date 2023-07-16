/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: alarm
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\alarm.h
*********************************************************************/

#ifndef alarm_H
#define alarm_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsSmartbin
class smartbin;

//## package Default

//## class alarm
class alarm {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedalarm;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    alarm();
    
    //## auto_generated
    ~alarm();
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedalarm : virtual public AOMInstance {
    DECLARE_META(alarm, OMAnimatedalarm)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\alarm.h
*********************************************************************/
