/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Technological_Challenges
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Technological_Challenges.h
*********************************************************************/

#ifndef Technological_Challenges_H
#define Technological_Challenges_H

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

//## class TopLevel::Technological_Challenges
class Technological_Challenges_C {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTechnological_Challenges_C;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Technological_Challenges_C();
    
    //## auto_generated
    ~Technological_Challenges_C();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Threats* getItsThreats() const;
    
    //## auto_generated
    void setItsThreats(Threats* p_Threats);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Threats* itsThreats;		//## link itsThreats
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsThreats(Threats* p_Threats);
    
    //## auto_generated
    void _setItsThreats(Threats* p_Threats);
    
    //## auto_generated
    void _clearItsThreats();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTechnological_Challenges_C : virtual public AOMInstance {
    DECLARE_META(Technological_Challenges_C, OMAnimatedTechnological_Challenges_C)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Technological_Challenges.h
*********************************************************************/
