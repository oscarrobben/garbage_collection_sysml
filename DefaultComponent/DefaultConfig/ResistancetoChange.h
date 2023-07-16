/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ResistancetoChange
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ResistancetoChange.h
*********************************************************************/

#ifndef ResistancetoChange_H
#define ResistancetoChange_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsThreats
class Threats;

//## package Default

//## class TopLevel::ResistancetoChange
class ResistancetoChange_C {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedResistancetoChange_C;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ResistancetoChange_C();
    
    //## auto_generated
    ~ResistancetoChange_C();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Threats* getItsThreats() const;
    
    //## auto_generated
    void setItsThreats(Threats* p_Threats);
    
    //## auto_generated
    Threats* getItsThreats_1() const;
    
    //## auto_generated
    void setItsThreats_1(Threats* p_Threats);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Threats* itsThreats;		//## link itsThreats
    
    Threats* itsThreats_1;		//## link itsThreats_1
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsThreats(Threats* p_Threats);
    
    //## auto_generated
    void _setItsThreats(Threats* p_Threats);
    
    //## auto_generated
    void _clearItsThreats();
    
    //## auto_generated
    void __setItsThreats_1(Threats* p_Threats);
    
    //## auto_generated
    void _setItsThreats_1(Threats* p_Threats);
    
    //## auto_generated
    void _clearItsThreats_1();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedResistancetoChange_C : virtual public AOMInstance {
    DECLARE_META(ResistancetoChange_C, OMAnimatedResistancetoChange_C)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ResistancetoChange.h
*********************************************************************/
