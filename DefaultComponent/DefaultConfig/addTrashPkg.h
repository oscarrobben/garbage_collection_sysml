/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: addTrashPkg
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\addTrashPkg.h
*********************************************************************/

#ifndef addTrashPkg_H
#define addTrashPkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//#[ ignore
#define addTrash_addTrashPkg_UseCaseAnalysisPkg_id 3601
//#]

//## package UseCaseAnalysisPkg::addTrashPkg



//## event addTrash()
class addTrash : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    addTrash();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\addTrashPkg.h
*********************************************************************/
