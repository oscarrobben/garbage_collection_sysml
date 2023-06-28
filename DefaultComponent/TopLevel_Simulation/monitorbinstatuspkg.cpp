/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: TopLevel_Simulation
	Model Element	: monitorbinstatuspkg
//!	Generated Date	: Mon, 19, Jun 2023  
	File Path	: DefaultComponent\TopLevel_Simulation\monitorbinstatuspkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "monitorbinstatuspkg.h"
//#[ ignore
#define secure_connection_established_SERIALIZE OM_NO_OP

#define secure_connection_established_UNSERIALIZE OM_NO_OP

#define secure_connection_established_CONSTRUCTOR secure_connection_established()
//#]

//## package UseCaseAnalysisPkg::monitorbinstatuspkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_monitorbinstatuspkg, UseCaseAnalysisPkg::monitorbinstatuspkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event secure_connection_established()
secure_connection_established::secure_connection_established() {
    NOTIFY_EVENT_CONSTRUCTOR(secure_connection_established)
    setId(secure_connection_established_monitorbinstatuspkg_UseCaseAnalysisPkg_id);
}

bool secure_connection_established::isTypeOf(const short id) const {
    return (secure_connection_established_monitorbinstatuspkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(secure_connection_established, UseCaseAnalysisPkg_monitorbinstatuspkg, UseCaseAnalysisPkg::monitorbinstatuspkg, secure_connection_established())

/*********************************************************************
	File Path	: DefaultComponent\TopLevel_Simulation\monitorbinstatuspkg.cpp
*********************************************************************/
