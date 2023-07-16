/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: block_112
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\block_112.h
*********************************************************************/

#ifndef block_112_H
#define block_112_H

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

//## class block_112
class block_112 {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedblock_112;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    block_112();
    
    //## auto_generated
    ~block_112();
    
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
class OMAnimatedblock_112 : virtual public AOMInstance {
    DECLARE_META(block_112, OMAnimatedblock_112)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\block_112.h
*********************************************************************/
