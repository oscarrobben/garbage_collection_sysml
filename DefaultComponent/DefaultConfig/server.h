/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: server
//!	Generated Date	: Sat, 15, Jul 2023  
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
//## auto_generated
#include <aom\aom.h>
//## link itsCms
class cms;

//## package Default

//## class TopLevel::server
class server_C {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedserver_C;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedserver_C : virtual public AOMInstance {
    DECLARE_META(server_C, OMAnimatedserver_C)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\server.h
*********************************************************************/
