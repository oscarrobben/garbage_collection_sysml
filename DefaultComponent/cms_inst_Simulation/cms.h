/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20172539
	Component	: DefaultComponent 
	Configuration 	: cms_inst_Simulation
	Model Element	: cms
//!	Generated Date	: Mon, 10, Jul 2023  
	File Path	: DefaultComponent\cms_inst_Simulation\cms.h
*********************************************************************/

#ifndef cms_H
#define cms_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omcollec.h>
//## auto_generated
#include <aom\aom.h>
//## class cms
#include "bool_emptyReq_ProxyFlowPropertyInterface.h"
//## link itsBin
class bin;

//## link itsServer
class server_C;

//## link itsSmart_garbage_collection_system
class smart_garbage_collection_system;

//## link itsTruck
class truck;

//## package Default

//## class cms
class cms : public bool_emptyReq_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package Default
    class p_cms_C : public bool_emptyReq_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_cms_C();
        
        //## auto_generated
        virtual ~p_cms_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectCms(cms* part);
        
        //## auto_generated
        bool_emptyReq_ProxyFlowPropertyInterface* getItsBool_emptyReq_ProxyFlowPropertyInterface();
        
        //## auto_generated
        virtual void setEmptyReq(bool p_emptyReq);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_emptyReq_ProxyFlowPropertyInterface(bool_emptyReq_ProxyFlowPropertyInterface* p_bool_emptyReq_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_emptyReq_ProxyFlowPropertyInterface* itsBool_emptyReq_ProxyFlowPropertyInterface;		//## link itsBool_emptyReq_ProxyFlowPropertyInterface
    };
    
    //## package Default
    class p_smartbin_C : public bool_emptyReq_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_smartbin_C();
        
        //## auto_generated
        virtual ~p_smartbin_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectCms(cms* part);
        
        //## auto_generated
        bool_emptyReq_ProxyFlowPropertyInterface* getItsBool_emptyReq_ProxyFlowPropertyInterface();
        
        //## auto_generated
        virtual void setEmptyReq(bool p_emptyReq);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsBool_emptyReq_ProxyFlowPropertyInterface(bool_emptyReq_ProxyFlowPropertyInterface* p_bool_emptyReq_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        bool_emptyReq_ProxyFlowPropertyInterface* itsBool_emptyReq_ProxyFlowPropertyInterface;		//## link itsBool_emptyReq_ProxyFlowPropertyInterface
    };
//#]

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcms;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    cms();
    
    //## auto_generated
    ~cms();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMIterator<bin*> getItsBin() const;
    
    //## auto_generated
    void addItsBin(bin* p_bin);
    
    //## auto_generated
    void removeItsBin(bin* p_bin);
    
    //## auto_generated
    void clearItsBin();
    
    //## auto_generated
    server_C* getItsServer() const;
    
    //## auto_generated
    void setItsServer(server_C* p_server);
    
    //## auto_generated
    smart_garbage_collection_system* getItsSmart_garbage_collection_system() const;
    
    //## auto_generated
    void setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    OMIterator<truck*> getItsTruck() const;
    
    //## auto_generated
    void addItsTruck(truck* p_truck);
    
    //## auto_generated
    void removeItsTruck(truck* p_truck);
    
    //## auto_generated
    void clearItsTruck();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    OMCollection<bin*> itsBin;		//## link itsBin
    
    server_C* itsServer;		//## link itsServer
    
    smart_garbage_collection_system* itsSmart_garbage_collection_system;		//## link itsSmart_garbage_collection_system
    
    OMCollection<truck*> itsTruck;		//## link itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void _addItsBin(bin* p_bin);
    
    //## auto_generated
    void _removeItsBin(bin* p_bin);
    
    //## auto_generated
    void _clearItsBin();
    
    //## auto_generated
    void __setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _setItsSmart_garbage_collection_system(smart_garbage_collection_system* p_smart_garbage_collection_system);
    
    //## auto_generated
    void _clearItsSmart_garbage_collection_system();
    
    //## auto_generated
    void _addItsTruck(truck* p_truck);
    
    //## auto_generated
    void _removeItsTruck(truck* p_truck);
    
    //## auto_generated
    void _clearItsTruck();
    
    //## auto_generated
    p_cms_C* getP_cms() const;
    
    //## auto_generated
    p_cms_C* get_p_cms() const;
    
    //## auto_generated
    p_smartbin_C* getP_smartbin() const;
    
    //## auto_generated
    p_smartbin_C* get_p_smartbin() const;

protected :

    //## auto_generated
    void initRelations();
    
//#[ ignore
    p_cms_C p_cms;
    
    p_smartbin_C p_smartbin;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcms : virtual public AOMInstance {
    DECLARE_META(cms, OMAnimatedcms)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\cms_inst_Simulation\cms.h
*********************************************************************/
