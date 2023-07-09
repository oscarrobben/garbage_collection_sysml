/*********************************************************************
	Rhapsody	: 9.0 
	Login		: adria
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ReceiveCollectionSchedulePkg
//!	Generated Date	: Sun, 9, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ReceiveCollectionSchedulePkg.h
*********************************************************************/

#ifndef ReceiveCollectionSchedulePkg_H
#define ReceiveCollectionSchedulePkg_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//#[ ignore
#define send_schedule_ReceiveCollectionSchedulePkg_UseCaseAnalysisPkg_id 28601
//#]

//## package UseCaseAnalysisPkg::ReceiveCollectionSchedulePkg



//## event send_schedule()
class send_schedule : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    send_schedule();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ReceiveCollectionSchedulePkg.h
*********************************************************************/
