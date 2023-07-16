/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DataSecurity_Privacy
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\DataSecurity_Privacy.h
*********************************************************************/

#ifndef DataSecurity_Privacy_H
#define DataSecurity_Privacy_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsRisks
class Risks;

//## package Default

//## class TopLevel::DataSecurity_Privacy
class DataSecurity_Privacy_C {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDataSecurity_Privacy_C;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DataSecurity_Privacy_C();
    
    //## auto_generated
    ~DataSecurity_Privacy_C();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Risks* getItsRisks() const;
    
    //## auto_generated
    void setItsRisks(Risks* p_Risks);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Risks* itsRisks;		//## link itsRisks
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsRisks(Risks* p_Risks);
    
    //## auto_generated
    void _setItsRisks(Risks* p_Risks);
    
    //## auto_generated
    void _clearItsRisks();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDataSecurity_Privacy_C : virtual public AOMInstance {
    DECLARE_META(DataSecurity_Privacy_C, OMAnimatedDataSecurity_Privacy_C)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DataSecurity_Privacy.h
*********************************************************************/
