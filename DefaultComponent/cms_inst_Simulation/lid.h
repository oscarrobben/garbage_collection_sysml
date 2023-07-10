/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: lid
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\lid.h
*********************************************************************/

#ifndef lid_H
#define lid_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <aom\aom.h>
//## link itsOpen_sensor
class open_sensor;

//## link itsSmartbin
class smartbin;

//## package Default

//## class lid
class lid {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedlid;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedlid : virtual public AOMInstance {
    DECLARE_META(lid, OMAnimatedlid)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\lid.h
*********************************************************************/
