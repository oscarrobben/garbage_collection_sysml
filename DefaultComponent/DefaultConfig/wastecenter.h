/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: wastecenter
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\wastecenter.h
*********************************************************************/

#ifndef wastecenter_H
#define wastecenter_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## link itsMunicipality
class Municipality;

//## link itsWaste_Processing_Company
class Waste_Processing_Company;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class wastecenter
class wastecenter {
    ////    Constructors and destructors    ////
    
public :

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
    
    Municipality* itsMunicipality;		//## link itsMunicipality
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    Waste_Processing_Company* itsWaste_Processing_Company;		//## link itsWaste_Processing_Company
    
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
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\wastecenter.h
*********************************************************************/
