
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=None

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  server.obj \
  bin.obj \
  truck.obj \
  wastecenter.obj \
  block_7.obj \
  cms.obj \
  smartbin.obj \
  regularbin.obj \
  open_sensor.obj \
  lid.obj \
  block_19.obj \
  block_21.obj \
  smart_garbage_collection_system.obj \
  sensor.obj \
  audio_sensor.obj \
  temp_sensor.obj \
  fill_sensor.obj \
  humidity_sensor.obj \
  SensorData.obj \
  TruckData.obj \
  RouteData.obj \
  UserDevice.obj \
  interface_48.obj \
  AppData.obj \
  SmartPhone.obj \
  Laptop.obj \
  App.obj \
  electricity.obj \
  tablet.obj \
  road_network.obj \
  weather.obj \
  temperature.obj \
  humidity.obj \
  Garbage_Truck_Driver.obj \
  Resident_Citizen_User.obj \
  Waste_Processing_Company.obj \
  Municipality.obj \
  Smart_Bins.obj \
  Default.obj \
  MonitorBinStatusPkg.obj \
  EmptyBinPkg.obj \
  RouteOptimizationPkg.obj \
  ReceiveCollectionSchedulePkg.obj \
  ReportIssuesPkg.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






server.obj : server.cpp server.h    Default.h cms.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"server.obj" "server.cpp" 



bin.obj : bin.cpp bin.h    Default.h cms.h smart_garbage_collection_system.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"bin.obj" "bin.cpp" 



truck.obj : truck.cpp truck.h    Default.h cms.h smart_garbage_collection_system.h Garbage_Truck_Driver.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"truck.obj" "truck.cpp" 



wastecenter.obj : wastecenter.cpp wastecenter.h    Default.h smart_garbage_collection_system.h Municipality.h Waste_Processing_Company.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"wastecenter.obj" "wastecenter.cpp" 



block_7.obj : block_7.cpp block_7.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"block_7.obj" "block_7.cpp" 



cms.obj : cms.cpp cms.h    Default.h bin.h truck.h smart_garbage_collection_system.h server.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"cms.obj" "cms.cpp" 



smartbin.obj : smartbin.cpp smartbin.h    Default.h sensor.h lid.h Resident_Citizen_User.h electricity.h bin.h cms.h smart_garbage_collection_system.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"smartbin.obj" "smartbin.cpp" 



regularbin.obj : regularbin.cpp regularbin.h    Default.h bin.h cms.h smart_garbage_collection_system.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"regularbin.obj" "regularbin.cpp" 



open_sensor.obj : open_sensor.cpp open_sensor.h    Default.h sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"open_sensor.obj" "open_sensor.cpp" 



lid.obj : lid.cpp lid.h    Default.h smartbin.h open_sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"lid.obj" "lid.cpp" 



block_19.obj : block_19.cpp block_19.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"block_19.obj" "block_19.cpp" 



block_21.obj : block_21.cpp block_21.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"block_21.obj" "block_21.cpp" 



smart_garbage_collection_system.obj : smart_garbage_collection_system.cpp smart_garbage_collection_system.h    Default.h road_network.h weather.h bin.h cms.h truck.h wastecenter.h UserDevice.h Municipality.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"smart_garbage_collection_system.obj" "smart_garbage_collection_system.cpp" 



sensor.obj : sensor.cpp sensor.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"sensor.obj" "sensor.cpp" 



audio_sensor.obj : audio_sensor.cpp audio_sensor.h    Default.h sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"audio_sensor.obj" "audio_sensor.cpp" 



temp_sensor.obj : temp_sensor.cpp temp_sensor.h    Default.h sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"temp_sensor.obj" "temp_sensor.cpp" 



fill_sensor.obj : fill_sensor.cpp fill_sensor.h    Default.h sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"fill_sensor.obj" "fill_sensor.cpp" 



humidity_sensor.obj : humidity_sensor.cpp humidity_sensor.h    Default.h sensor.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"humidity_sensor.obj" "humidity_sensor.cpp" 



SensorData.obj : SensorData.cpp SensorData.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SensorData.obj" "SensorData.cpp" 



TruckData.obj : TruckData.cpp TruckData.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"TruckData.obj" "TruckData.cpp" 



RouteData.obj : RouteData.cpp RouteData.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"RouteData.obj" "RouteData.cpp" 



UserDevice.obj : UserDevice.cpp UserDevice.h    Default.h smart_garbage_collection_system.h App.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"UserDevice.obj" "UserDevice.cpp" 



interface_48.obj : interface_48.cpp interface_48.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"interface_48.obj" "interface_48.cpp" 



AppData.obj : AppData.cpp AppData.h    Default.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"AppData.obj" "AppData.cpp" 



SmartPhone.obj : SmartPhone.cpp SmartPhone.h    Default.h UserDevice.h smart_garbage_collection_system.h App.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"SmartPhone.obj" "SmartPhone.cpp" 



Laptop.obj : Laptop.cpp Laptop.h    Default.h UserDevice.h smart_garbage_collection_system.h App.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Laptop.obj" "Laptop.cpp" 



App.obj : App.cpp App.h    Default.h UserDevice.h Resident_Citizen_User.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"App.obj" "App.cpp" 



electricity.obj : electricity.cpp electricity.h    Default.h smartbin.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"electricity.obj" "electricity.cpp" 



tablet.obj : tablet.cpp tablet.h    Default.h UserDevice.h smart_garbage_collection_system.h App.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"tablet.obj" "tablet.cpp" 



road_network.obj : road_network.cpp road_network.h    smart_garbage_collection_system.h Municipality.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"road_network.obj" "road_network.cpp" 



weather.obj : weather.cpp weather.h    smart_garbage_collection_system.h humidity.h temperature.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"weather.obj" "weather.cpp" 



temperature.obj : temperature.cpp temperature.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"temperature.obj" "temperature.cpp" 



humidity.obj : humidity.cpp humidity.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"humidity.obj" "humidity.cpp" 



Garbage_Truck_Driver.obj : Garbage_Truck_Driver.cpp Garbage_Truck_Driver.h    truck.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Garbage_Truck_Driver.obj" "Garbage_Truck_Driver.cpp" 



Resident_Citizen_User.obj : Resident_Citizen_User.cpp Resident_Citizen_User.h    App.h smartbin.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Resident_Citizen_User.obj" "Resident_Citizen_User.cpp" 



Waste_Processing_Company.obj : Waste_Processing_Company.cpp Waste_Processing_Company.h    smart_garbage_collection_system.h Garbage_Truck_Driver.h wastecenter.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Waste_Processing_Company.obj" "Waste_Processing_Company.cpp" 



Municipality.obj : Municipality.cpp Municipality.h    smart_garbage_collection_system.h road_network.h wastecenter.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Municipality.obj" "Municipality.cpp" 



Smart_Bins.obj : Smart_Bins.cpp Smart_Bins.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Smart_Bins.obj" "Smart_Bins.cpp" 



Default.obj : Default.cpp Default.h    bin.h truck.h wastecenter.h block_7.h cms.h smartbin.h regularbin.h open_sensor.h lid.h block_19.h block_21.h smart_garbage_collection_system.h sensor.h audio_sensor.h temp_sensor.h fill_sensor.h humidity_sensor.h SensorData.h TruckData.h RouteData.h UserDevice.h interface_48.h AppData.h SmartPhone.h Laptop.h App.h electricity.h tablet.h server.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Default.obj" "Default.cpp" 



MonitorBinStatusPkg.obj : MonitorBinStatusPkg.cpp MonitorBinStatusPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MonitorBinStatusPkg.obj" "MonitorBinStatusPkg.cpp" 



EmptyBinPkg.obj : EmptyBinPkg.cpp EmptyBinPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"EmptyBinPkg.obj" "EmptyBinPkg.cpp" 



RouteOptimizationPkg.obj : RouteOptimizationPkg.cpp RouteOptimizationPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"RouteOptimizationPkg.obj" "RouteOptimizationPkg.cpp" 



ReceiveCollectionSchedulePkg.obj : ReceiveCollectionSchedulePkg.cpp ReceiveCollectionSchedulePkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ReceiveCollectionSchedulePkg.obj" "ReceiveCollectionSchedulePkg.cpp" 



ReportIssuesPkg.obj : ReportIssuesPkg.cpp ReportIssuesPkg.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"ReportIssuesPkg.obj" "ReportIssuesPkg.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist server.obj erase server.obj
	if exist bin.obj erase bin.obj
	if exist truck.obj erase truck.obj
	if exist wastecenter.obj erase wastecenter.obj
	if exist block_7.obj erase block_7.obj
	if exist cms.obj erase cms.obj
	if exist smartbin.obj erase smartbin.obj
	if exist regularbin.obj erase regularbin.obj
	if exist open_sensor.obj erase open_sensor.obj
	if exist lid.obj erase lid.obj
	if exist block_19.obj erase block_19.obj
	if exist block_21.obj erase block_21.obj
	if exist smart_garbage_collection_system.obj erase smart_garbage_collection_system.obj
	if exist sensor.obj erase sensor.obj
	if exist audio_sensor.obj erase audio_sensor.obj
	if exist temp_sensor.obj erase temp_sensor.obj
	if exist fill_sensor.obj erase fill_sensor.obj
	if exist humidity_sensor.obj erase humidity_sensor.obj
	if exist SensorData.obj erase SensorData.obj
	if exist TruckData.obj erase TruckData.obj
	if exist RouteData.obj erase RouteData.obj
	if exist UserDevice.obj erase UserDevice.obj
	if exist interface_48.obj erase interface_48.obj
	if exist AppData.obj erase AppData.obj
	if exist SmartPhone.obj erase SmartPhone.obj
	if exist Laptop.obj erase Laptop.obj
	if exist App.obj erase App.obj
	if exist electricity.obj erase electricity.obj
	if exist tablet.obj erase tablet.obj
	if exist road_network.obj erase road_network.obj
	if exist weather.obj erase weather.obj
	if exist temperature.obj erase temperature.obj
	if exist humidity.obj erase humidity.obj
	if exist Garbage_Truck_Driver.obj erase Garbage_Truck_Driver.obj
	if exist Resident_Citizen_User.obj erase Resident_Citizen_User.obj
	if exist Waste_Processing_Company.obj erase Waste_Processing_Company.obj
	if exist Municipality.obj erase Municipality.obj
	if exist Smart_Bins.obj erase Smart_Bins.obj
	if exist Default.obj erase Default.obj
	if exist MonitorBinStatusPkg.obj erase MonitorBinStatusPkg.obj
	if exist EmptyBinPkg.obj erase EmptyBinPkg.obj
	if exist RouteOptimizationPkg.obj erase RouteOptimizationPkg.obj
	if exist ReceiveCollectionSchedulePkg.obj erase ReceiveCollectionSchedulePkg.obj
	if exist ReportIssuesPkg.obj erase ReportIssuesPkg.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
