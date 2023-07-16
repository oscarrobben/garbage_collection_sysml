/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Risks
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Risks.h
*********************************************************************/

#ifndef Risks_H
#define Risks_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsAdoption
class Adoption_C;

//## link itsDataSecurity_Privacy
class DataSecurity_Privacy_C;

//## link itsTechnological
class Technological_C;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class Risks
class Risks {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedRisks;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Risks();
    
    //## auto_generated
    ~Risks();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Adoption_C* getItsAdoption() const;
    
    //## auto_generated
    void setItsAdoption(Adoption_C* p_Adoption);
    
    //## auto_generated
    DataSecurity_Privacy_C* getItsDataSecurity_Privacy() const;
    
    //## auto_generated
    void setItsDataSecurity_Privacy(DataSecurity_Privacy_C* p_DataSecurity_Privacy);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    Technological_C* getItsTechnological() const;
    
    //## auto_generated
    void setItsTechnological(Technological_C* p_Technological);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Adoption_C* itsAdoption;		//## link itsAdoption
    
    DataSecurity_Privacy_C* itsDataSecurity_Privacy;		//## link itsDataSecurity_Privacy
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    Technological_C* itsTechnological;		//## link itsTechnological
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAdoption(Adoption_C* p_Adoption);
    
    //## auto_generated
    void _setItsAdoption(Adoption_C* p_Adoption);
    
    //## auto_generated
    void _clearItsAdoption();
    
    //## auto_generated
    void __setItsDataSecurity_Privacy(DataSecurity_Privacy_C* p_DataSecurity_Privacy);
    
    //## auto_generated
    void _setItsDataSecurity_Privacy(DataSecurity_Privacy_C* p_DataSecurity_Privacy);
    
    //## auto_generated
    void _clearItsDataSecurity_Privacy();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
    
    //## auto_generated
    void __setItsTechnological(Technological_C* p_Technological);
    
    //## auto_generated
    void _setItsTechnological(Technological_C* p_Technological);
    
    //## auto_generated
    void _clearItsTechnological();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedRisks : virtual public AOMInstance {
    DECLARE_META(Risks, OMAnimatedRisks)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Risks.h
*********************************************************************/
