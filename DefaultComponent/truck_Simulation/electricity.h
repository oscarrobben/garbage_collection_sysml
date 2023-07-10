/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: electricity
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\electricity.h
*********************************************************************/

#ifndef electricity_H
#define electricity_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <aom\aom.h>
//## link itsSmartbin
class smartbin;

//## package Default

//## class electricity
class electricity {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedelectricity;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedelectricity : virtual public AOMInstance {
    DECLARE_META(electricity, OMAnimatedelectricity)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\electricity.h
*********************************************************************/
