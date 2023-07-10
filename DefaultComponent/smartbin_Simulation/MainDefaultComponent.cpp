/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: smartbin_Simulation
	Model Element	: smartbin_Simulation
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\smartbin_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "smartbin.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            smartbin * p_smartbin;
            p_smartbin = new smartbin;
            p_smartbin->startBehavior();
            //#[ configuration DefaultComponent::smartbin_Simulation 
            //#]
            OXF::start();
            delete p_smartbin;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\smartbin_Simulation\MainDefaultComponent.cpp
*********************************************************************/
