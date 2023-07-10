/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: truck
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\truck.h
*********************************************************************/

#ifndef truck_H
#define truck_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omcollec.h>
//## link itsCms
class cms;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## link is_serviced_by
class Garbage_Truck_Driver;

//## package Default

//## class truck
class truck {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    truck();
    
    //## auto_generated
    ~truck();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<Garbage_Truck_Driver*> getIs_serviced_by() const;
    
    //## auto_generated
    void addIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void removeIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void clearIs_serviced_by();
    
    //## auto_generated
    cms* getItsCms() const;
    
    //## auto_generated
    void setItsCms(cms* p_cms);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    cms* itsCms;		//## link itsCms
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void _removeIs_serviced_by(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    void _clearIs_serviced_by();
    
    //## auto_generated
    void __setItsCms(cms* p_cms);
    
    //## auto_generated
    void _setItsCms(cms* p_cms);
    
    //## auto_generated
    void _clearItsCms();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();

protected :

    OMCollection<Garbage_Truck_Driver*> is_serviced_by;		//## link is_serviced_by
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\truck.h
*********************************************************************/
