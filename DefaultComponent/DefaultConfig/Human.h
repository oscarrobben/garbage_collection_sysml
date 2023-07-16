/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Human
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Human.h
*********************************************************************/

#ifndef Human_H
#define Human_H

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

//## class TopLevel::Human
class Human_C {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHuman_C;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Human_C();
    
    //## auto_generated
    ~Human_C();
    
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
class OMAnimatedHuman_C : virtual public AOMInstance {
    DECLARE_META(Human_C, OMAnimatedHuman_C)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Human.h
*********************************************************************/
