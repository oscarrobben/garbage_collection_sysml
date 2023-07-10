/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: Smart_Bins
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\Smart_Bins.h
*********************************************************************/

#ifndef Smart_Bins_H
#define Smart_Bins_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ActorPkg.h"
//## package ActorPkg

//## actor Smart_Bins
class Smart_Bins {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedSmart_Bins;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Smart_Bins();
    
    //## auto_generated
    ~Smart_Bins();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSmart_Bins : virtual public AOMInstance {
    DECLARE_META(Smart_Bins, OMAnimatedSmart_Bins)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\Smart_Bins.h
*********************************************************************/
