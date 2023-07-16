/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Technologie
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Technologie.h
*********************************************************************/

#ifndef Technologie_H
#define Technologie_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsResources
class Resources;

//## package Default

//## class TopLevel::Technologie
class Technologie_C {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTechnologie_C;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Technologie_C();
    
    //## auto_generated
    ~Technologie_C();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Resources* getItsResources() const;
    
    //## auto_generated
    void setItsResources(Resources* p_Resources);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Resources* itsResources;		//## link itsResources
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsResources(Resources* p_Resources);
    
    //## auto_generated
    void _setItsResources(Resources* p_Resources);
    
    //## auto_generated
    void _clearItsResources();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTechnologie_C : virtual public AOMInstance {
    DECLARE_META(Technologie_C, OMAnimatedTechnologie_C)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Technologie.h
*********************************************************************/
