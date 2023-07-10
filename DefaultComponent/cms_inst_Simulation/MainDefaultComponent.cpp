/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: cms_inst_Simulation
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "cms_inst.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            cms_inst * p_cms_inst;
            p_cms_inst = new cms_inst;
            p_cms_inst->startBehavior();
            //#[ configuration DefaultComponent::cms_inst_Simulation 
            //#]
            OXF::start();
            delete p_cms_inst;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\MainDefaultComponent.cpp
*********************************************************************/
