/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: truck_Simulation
	Model Element	: server
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\truck_Simulation\server.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "server.h"
//#[ ignore
#define Default_server_server_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class TopLevel::server
server_C::server_C() {
    NOTIFY_CONSTRUCTOR_OBJECT(server, server(), 0, Default_server_server_SERIALIZE, server_C);
}

server_C::~server_C() {
    NOTIFY_DESTRUCTOR(~server, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedserver_C::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_OBJECT_P(server, server_C, Default, Default, false, OMAnimatedserver_C)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\truck_Simulation\server.cpp
*********************************************************************/
