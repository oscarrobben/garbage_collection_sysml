/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Sun, 16, Jul 2023  
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ActorPkg.h"
//## auto_generated
#include "addTrashPkg.h"
//## auto_generated
#include "Default.h"
//## auto_generated
#include "EmptyBinPkg.h"
//## auto_generated
#include "EnvPkg.h"
//## auto_generated
#include "MonitorBinStatusPkg.h"
//## auto_generated
#include "ReceiveCollectionSchedulePkg.h"
//## auto_generated
#include "ReportIssuesPkg.h"
//## auto_generated
#include "RouteOptimizationPkg.h"
//## auto_generated
#include "StakeholderPkg.h"
//## auto_generated
#include "UseCaseAnalysisPkg.h"
//## auto_generated
#include "smartbin.h"
DefaultComponent::DefaultComponent() {
    Default_initRelations();
    Default_startBehavior();
}

int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            smartbin * p_smartbin;
            DefaultComponent initializer_DefaultComponent;
            p_smartbin = new smartbin;
            p_smartbin->startBehavior();
            //#[ configuration DefaultComponent::DefaultConfig 
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
	File Path	: DefaultComponent\DefaultConfig\MainDefaultComponent.cpp
*********************************************************************/
