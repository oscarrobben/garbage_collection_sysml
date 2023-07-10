/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_Simulation
	Model Element	: wastecenter
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_Simulation\wastecenter.h
*********************************************************************/

#ifndef wastecenter_H
#define wastecenter_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <aom\aom.h>
//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## link itsMunicipality
class Municipality;

//## link itsWaste_Processing_Company
class Waste_Processing_Company;

//## package Default

//## class wastecenter
class wastecenter {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedwastecenter;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    wastecenter();
    
    //## auto_generated
    ~wastecenter();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Municipality* getItsMunicipality() const;
    
    //## auto_generated
    void setItsMunicipality(Municipality* p_Municipality);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    Waste_Processing_Company* getItsWaste_Processing_Company() const;
    
    //## auto_generated
    void setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsMunicipality(Municipality* p_Municipality);
    
    //## auto_generated
    void _setItsMunicipality(Municipality* p_Municipality);
    
    //## auto_generated
    void _clearItsMunicipality();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
    
    //## auto_generated
    void __setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company);
    
    //## auto_generated
    void _setItsWaste_Processing_Company(Waste_Processing_Company* p_Waste_Processing_Company);
    
    //## auto_generated
    void _clearItsWaste_Processing_Company();

protected :

    Municipality* itsMunicipality;		//## link itsMunicipality
    
    Waste_Processing_Company* itsWaste_Processing_Company;		//## link itsWaste_Processing_Company
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedwastecenter : virtual public AOMInstance {
    DECLARE_META(wastecenter, OMAnimatedwastecenter)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_Simulation\wastecenter.h
*********************************************************************/
