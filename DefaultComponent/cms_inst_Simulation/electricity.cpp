/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: electricity
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\electricity.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "electricity.h"
//## link itsSmartbin
#include "smartbin.h"
//#[ ignore
#define Default_electricity_electricity_SERIALIZE OM_NO_OP
//#]

//## package Default

//## class electricity
electricity::electricity() {
    NOTIFY_CONSTRUCTOR(electricity, electricity(), 0, Default_electricity_electricity_SERIALIZE);
    itsSmartbin = NULL;
}

electricity::~electricity() {
    NOTIFY_DESTRUCTOR(~electricity, true);
    cleanUpRelations();
}

smartbin* electricity::getItsSmartbin() const {
    return itsSmartbin;
}

void electricity::setItsSmartbin(smartbin* p_smartbin) {
    if(p_smartbin != NULL)
        {
            p_smartbin->_setItsElectricity(this);
        }
    _setItsSmartbin(p_smartbin);
}

void electricity::cleanUpRelations() {
    if(itsSmartbin != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSmartbin");
            electricity* p_electricity = itsSmartbin->getItsElectricity();
            if(p_electricity != NULL)
                {
                    itsSmartbin->__setItsElectricity(NULL);
                }
            itsSmartbin = NULL;
        }
}

void electricity::__setItsSmartbin(smartbin* p_smartbin) {
    itsSmartbin = p_smartbin;
    if(p_smartbin != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSmartbin", p_smartbin, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSmartbin");
        }
}

void electricity::_setItsSmartbin(smartbin* p_smartbin) {
    if(itsSmartbin != NULL)
        {
            itsSmartbin->__setItsElectricity(NULL);
        }
    __setItsSmartbin(p_smartbin);
}

void electricity::_clearItsSmartbin() {
    NOTIFY_RELATION_CLEARED("itsSmartbin");
    itsSmartbin = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedelectricity::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSmartbin", false, true);
    if(myReal->itsSmartbin)
        {
            aomsRelations->ADD_ITEM(myReal->itsSmartbin);
        }
}
//#]

IMPLEMENT_META_P(electricity, Default, Default, false, OMAnimatedelectricity)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\electricity.cpp
*********************************************************************/
