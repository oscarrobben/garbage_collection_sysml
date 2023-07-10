/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EmptyBinPkg
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\EmptyBinPkg.cpp
*********************************************************************/

//## auto_generated
#include "EmptyBinPkg.h"
//## package UseCaseAnalysisPkg::EmptyBinPkg



//## event route_collection_evt()
route_collection_evt::route_collection_evt() {
    setId(route_collection_evt_EmptyBinPkg_UseCaseAnalysisPkg_id);
}

bool route_collection_evt::isTypeOf(const short id) const {
    return (route_collection_evt_EmptyBinPkg_UseCaseAnalysisPkg_id==id);
}

//## event collection_route_completed_evt()
collection_route_completed_evt::collection_route_completed_evt() {
    setId(collection_route_completed_evt_EmptyBinPkg_UseCaseAnalysisPkg_id);
}

bool collection_route_completed_evt::isTypeOf(const short id) const {
    return (collection_route_completed_evt_EmptyBinPkg_UseCaseAnalysisPkg_id==id);
}

//## event bin_not_found_evt()
bin_not_found_evt::bin_not_found_evt() {
    setId(bin_not_found_evt_EmptyBinPkg_UseCaseAnalysisPkg_id);
}

bool bin_not_found_evt::isTypeOf(const short id) const {
    return (bin_not_found_evt_EmptyBinPkg_UseCaseAnalysisPkg_id==id);
}

//## event emptying_bin_failure_evt()
emptying_bin_failure_evt::emptying_bin_failure_evt() {
    setId(emptying_bin_failure_evt_EmptyBinPkg_UseCaseAnalysisPkg_id);
}

bool emptying_bin_failure_evt::isTypeOf(const short id) const {
    return (emptying_bin_failure_evt_EmptyBinPkg_UseCaseAnalysisPkg_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EmptyBinPkg.cpp
*********************************************************************/
