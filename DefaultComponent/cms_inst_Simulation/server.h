/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: server
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\server.h
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
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
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
	File Path	: DefaultComponent\cms_inst_Simulation\server.h
*********************************************************************/
