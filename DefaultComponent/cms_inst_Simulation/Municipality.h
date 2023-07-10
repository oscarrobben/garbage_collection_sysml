/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: Municipality
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\Municipality.h
*********************************************************************/

#ifndef Municipality_H
#define Municipality_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\omcollec.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## link owns
class road_network;

//## link uses
class smart_garbage_collection_system;

//## link itsWastecenter
class wastecenter;

//## package ActorPkg

//## actor Municipality
class Municipality {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedMunicipality;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    ////    Additional operations    ////
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////
    
    //## auto_generated
    Municipality();
    
    //## auto_generated
    ~Municipality();
    
    //## auto_generated
    wastecenter* getItsWastecenter() const;
    
    //## auto_generated
    void setItsWastecenter(wastecenter* p_wastecenter);
    
    //## auto_generated
    OMIterator<road_network*> getOwns() const;
    
    //## auto_generated
    void addOwns(road_network* p_road_network);
    
    //## auto_generated
    void removeOwns(road_network* p_road_network);
    
    //## auto_generated
    void clearOwns();
    
    //## auto_generated
    smart_garbage_collection_system* getUses() const;
    
    //## auto_generated
    void setUses(smart_garbage_collection_system* p_smart_garbage_collection_system);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    wastecenter* itsWastecenter;		//## link itsWastecenter
    
    OMCollection<road_network*> owns;		//## link owns
    
    smart_garbage_collection_system* uses;		//## link uses

public :

    //## auto_generated
    void __setItsWastecenter(wastecenter* p_wastecenter);
    
    //## auto_generated
    void _setItsWastecenter(wastecenter* p_wastecenter);
    
    //## auto_generated
    void _clearItsWastecenter();
    
    //## auto_generated
    void _addOwns(road_network* p_road_network);
    
    //## auto_generated
    void _removeOwns(road_network* p_road_network);
    
    //## auto_generated
    void _clearOwns();
    
    //## auto_generated
    void __setUses(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setUses(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearUses();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedMunicipality : virtual public AOMInstance {
    DECLARE_META(Municipality, OMAnimatedMunicipality)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\Municipality.h
*********************************************************************/
