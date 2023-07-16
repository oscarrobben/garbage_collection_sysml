/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: maintenance_system
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\maintenance_system.h
*********************************************************************/

#ifndef maintenance_system_H
#define maintenance_system_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "EnvPkg.h"
//## link maintenance_by
class smart_garbage_collection_system;

//## package EnvPkg

//## class maintenance_system
class maintenance_system {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedmaintenance_system;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    maintenance_system();
    
    //## auto_generated
    ~maintenance_system();
    
    ////    Additional operations    ////
    
    //## auto_generated
    smart_garbage_collection_system* getMaintenance_by() const;
    
    //## auto_generated
    void setMaintenance_by(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    smart_garbage_collection_system* maintenance_by;		//## link maintenance_by
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setMaintenance_by(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setMaintenance_by(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearMaintenance_by();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedmaintenance_system : virtual public AOMInstance {
    DECLARE_META(maintenance_system, OMAnimatedmaintenance_system)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\maintenance_system.h
*********************************************************************/
