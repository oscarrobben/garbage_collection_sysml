/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ReceiveCollectionSchedulePkg
//!	Generated Date	: Sat, 15, Jul 2023  
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
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//#[ ignore
#define send_schedule_ReceiveCollectionSchedulePkg_UseCaseAnalysisPkg_id 28601
//#]

//## package UseCaseAnalysisPkg::ReceiveCollectionSchedulePkg



//## event send_schedule()
class send_schedule : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedsend_schedule;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    send_schedule();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedsend_schedule : virtual public AOMEvent {
    DECLARE_META_EVENT(send_schedule)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ReceiveCollectionSchedulePkg.h
*********************************************************************/
