/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Threats
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\Threats.h
*********************************************************************/

#ifndef Threats_H
#define Threats_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Default.h"
//## link itsResistancetoChange
class ResistancetoChange_C;

//## link itsTechnological_Challenges
class Technological_Challenges_C;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## package Default

//## class Threats
class Threats {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedThreats;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Threats();
    
    //## auto_generated
    ~Threats();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ResistancetoChange_C* getItsResistancetoChange() const;
    
    //## auto_generated
    void setItsResistancetoChange(ResistancetoChange_C* p_ResistancetoChange);
    
    //## auto_generated
    ResistancetoChange_C* getItsResistancetoChange_1() const;
    
    //## auto_generated
    void setItsResistancetoChange_1(ResistancetoChange_C* p_ResistancetoChange);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    Technological_Challenges_C* getItsTechnological_Challenges() const;
    
    //## auto_generated
    void setItsTechnological_Challenges(Technological_Challenges_C* p_Technological_Challenges);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ResistancetoChange_C* itsResistancetoChange;		//## link itsResistancetoChange
    
    ResistancetoChange_C* itsResistancetoChange_1;		//## link itsResistancetoChange_1
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    Technological_Challenges_C* itsTechnological_Challenges;		//## link itsTechnological_Challenges
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsResistancetoChange(ResistancetoChange_C* p_ResistancetoChange);
    
    //## auto_generated
    void _setItsResistancetoChange(ResistancetoChange_C* p_ResistancetoChange);
    
    //## auto_generated
    void _clearItsResistancetoChange();
    
    //## auto_generated
    void __setItsResistancetoChange_1(ResistancetoChange_C* p_ResistancetoChange);
    
    //## auto_generated
    void _setItsResistancetoChange_1(ResistancetoChange_C* p_ResistancetoChange);
    
    //## auto_generated
    void _clearItsResistancetoChange_1();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
    
    //## auto_generated
    void __setItsTechnological_Challenges(Technological_Challenges_C* p_Technological_Challenges);
    
    //## auto_generated
    void _setItsTechnological_Challenges(Technological_Challenges_C* p_Technological_Challenges);
    
    //## auto_generated
    void _clearItsTechnological_Challenges();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedThreats : virtual public AOMInstance {
    DECLARE_META(Threats, OMAnimatedThreats)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Threats.h
*********************************************************************/
