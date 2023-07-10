/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_Simulation
	Model Element	: addTrashPkg
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_Simulation\addTrashPkg.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "addTrashPkg.h"
//#[ ignore
#define addTrash_SERIALIZE OM_NO_OP

#define addTrash_UNSERIALIZE OM_NO_OP

#define addTrash_CONSTRUCTOR addTrash()
//#]

//## package UseCaseAnalysisPkg::addTrashPkg


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(UseCaseAnalysisPkg_addTrashPkg, UseCaseAnalysisPkg::addTrashPkg)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event addTrash()
addTrash::addTrash() {
    NOTIFY_EVENT_CONSTRUCTOR(addTrash)
    setId(addTrash_addTrashPkg_UseCaseAnalysisPkg_id);
}

bool addTrash::isTypeOf(const short id) const {
    return (addTrash_addTrashPkg_UseCaseAnalysisPkg_id==id);
}

IMPLEMENT_META_EVENT_P(addTrash, UseCaseAnalysisPkg_addTrashPkg, UseCaseAnalysisPkg::addTrashPkg, addTrash())

/*********************************************************************
	File Path	: DefaultComponent\cms_Simulation\addTrashPkg.cpp
*********************************************************************/
