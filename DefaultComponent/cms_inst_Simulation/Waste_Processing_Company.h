/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: Waste_Processing_Company
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\Waste_Processing_Company.h
*********************************************************************/

#ifndef Waste_Processing_Company_H
#define Waste_Processing_Company_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\omlist.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## classInstance employs
class Garbage_Truck_Driver;

//## classInstance operates
class smart_garbage_collection_system;

//## link itsWastecenter
class wastecenter;

//## package ActorPkg

//## actor Waste_Processing_Company
class Waste_Processing_Company {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedWaste_Processing_Company;
#endif // _OMINSTRUMENT

#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
public :

    //## auto_generated
    Waste_Processing_Company();
    
    //## auto_generated
    ~Waste_Processing_Company();
    
    //## auto_generated
    OMIterator<Garbage_Truck_Driver*> getEmploys() const;
    
    //## auto_generated
    Garbage_Truck_Driver* newEmploys();
    
    //## auto_generated
    void deleteEmploys(Garbage_Truck_Driver* p_Garbage_Truck_Driver);
    
    //## auto_generated
    wastecenter* getItsWastecenter() const;
    
    //## auto_generated
    void setItsWastecenter(wastecenter* p_wastecenter);
    
    //## auto_generated
    OMIterator<smart_garbage_collection_system*> getOperates() const;
    
    //## auto_generated
    smart_garbage_collection_system* newOperates();
    
    //## auto_generated
    void deleteOperates(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    OMList<Garbage_Truck_Driver*> employs;		//## classInstance employs
    
    wastecenter* itsWastecenter;		//## link itsWastecenter
    
    OMList<smart_garbage_collection_system*> operates;		//## classInstance operates

public :

    //## auto_generated
    void __setItsWastecenter(wastecenter* p_wastecenter);
    
    //## auto_generated
    void _setItsWastecenter(wastecenter* p_wastecenter);
    
    //## auto_generated
    void _clearItsWastecenter();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedWaste_Processing_Company : virtual public AOMInstance {
    DECLARE_META(Waste_Processing_Company, OMAnimatedWaste_Processing_Company)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\Waste_Processing_Company.h
*********************************************************************/
