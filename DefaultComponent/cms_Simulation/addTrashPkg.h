/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_Simulation
	Model Element	: addTrashPkg
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_Simulation\addTrashPkg.h
*********************************************************************/

#ifndef addTrashPkg_H
#define addTrashPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//#[ ignore
#define addTrash_addTrashPkg_UseCaseAnalysisPkg_id 3601
//#]

//## package UseCaseAnalysisPkg::addTrashPkg



//## event addTrash()
class addTrash : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedaddTrash;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    addTrash();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedaddTrash : virtual public AOMEvent {
    DECLARE_META_EVENT(addTrash)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_Simulation\addTrashPkg.h
*********************************************************************/
