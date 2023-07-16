/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ReceiveCollectionSchedulePkg
//!	Generated Date	: Sat, 15, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\ReceiveCollectionSchedulePkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ReceiveCollectionSchedulePkg.h"
//#[ ignore
#define send_schedule_SERIALIZE OM_NO_OP

#define send_schedule_UNSERIALIZE OM_NO_OP

#define send_schedule_CONSTRUCTOR send_schedule()
//#]

//## package UseCaseAnalysisPkg::ReceiveCollectionSchedulePkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_ReceiveCollectionSchedulePkg, UseCaseAnalysisPkg::ReceiveCollectionSchedulePkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event send_schedule()
send_schedule::send_schedule() {
    NOTIFY_EVENT_CONSTRUCTOR(send_schedule)
    setId(send_schedule_ReceiveCollectionSchedulePkg_UseCaseAnalysisPkg_id);
}

bool send_schedule::isTypeOf(const short id) const {
    return (send_schedule_ReceiveCollectionSchedulePkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(send_schedule, UseCaseAnalysisPkg_ReceiveCollectionSchedulePkg, UseCaseAnalysisPkg::ReceiveCollectionSchedulePkg, send_schedule())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ReceiveCollectionSchedulePkg.cpp
*********************************************************************/
