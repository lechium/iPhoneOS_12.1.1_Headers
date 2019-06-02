/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AssistantCallbackController.h>
#import <libobjc.A.dylib/SetupUIConfigDelegateResult.h>
#import <libobjc.A.dylib/AutoGuessSetup.h>
#import <libobjc.A.dylib/BaseStationSetup.h>

@class NSDictionary, NSMutableSet, NSString, NSDate;

@interface AUSetupController : AssistantCallbackController <SetupUIConfigDelegateResult, AutoGuessSetup, BaseStationSetup> {

	id _context;
	BSConfigurationContextRef _configContext;
	BOOL _autoJoinState;
	BOOL _scanningState;
	BOOL _busy;
	BOOL _initializedBasePasswordFlag;
	BOOL _performingManualRead;
	BOOL _needToNilBonjour;
	NSMutableSet* _setupDelegates;
	id _uiConfigDelegate;
	NSString* _autoGuessSetupRecommendation;
	NSDictionary* _lastInstrumentation;
	BOOL _rememberDiskPassword;
	NSDate* _lastHeardFromDevice;
	NSString* _lastSystemName;
	NSString* _lastDNSName;
	NSString* _keychainBasePassword;
	NSString* _keychainWiFiPassword;
	NSString* _keychainDiskPassword;
	BOOL _activeTask;

}

@property (assign,nonatomic) BOOL activeTask;                                         //@synthesize activeTask=_activeTask - In the implementation block
@property (nonatomic,readonly) NSMutableSet * setupDelegates;                         //@synthesize setupDelegates=_setupDelegates - In the implementation block
@property (assign,nonatomic) id<SetupUIConfigDelegate> uiConfigDelegate;              //@synthesize uiConfigDelegate=_uiConfigDelegate - In the implementation block
@property (assign,nonatomic) id context;                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * autoGuessSetupRecommendation;                 //@synthesize autoGuessSetupRecommendation=_autoGuessSetupRecommendation - In the implementation block
@property (nonatomic,retain) NSDictionary * lastInstrumentation;                      //@synthesize lastInstrumentation=_lastInstrumentation - In the implementation block
@property (nonatomic,retain) NSDictionary * bonjourRecord; 
@property (assign,nonatomic) BOOL rememberBasePassword; 
@property (assign,nonatomic) BOOL rememberWiFiPassword; 
@property (assign,nonatomic) BOOL rememberDiskPassword;                               //@synthesize rememberDiskPassword=_rememberDiskPassword - In the implementation block
@property (nonatomic,retain) NSString * keychainBasePassword; 
@property (nonatomic,retain) NSString * keychainWiFiPassword; 
@property (nonatomic,retain) NSString * keychainDiskPassword; 
@property (nonatomic,readonly) NSDate * lastHeardFromDevice;                          //@synthesize lastHeardFromDevice=_lastHeardFromDevice - In the implementation block
@property (nonatomic,retain) NSString * lastSystemName;                               //@synthesize lastSystemName=_lastSystemName - In the implementation block
@property (nonatomic,retain) NSString * lastDNSName;                                  //@synthesize lastDNSName=_lastDNSName - In the implementation block
@property (retain) NSDictionary * restoreRecommendation; 
+(id)setupController;
+(void)initialize;
-(int)cancelTask;
-(int)closeAllConnections;
-(void)applicationDidEnterBackgroundNotification:(id)arg1 ;
-(NSDictionary *)lastInstrumentation;
-(void)setLastInstrumentation:(NSDictionary *)arg1 ;
-(int)subclassAssistantCallback:(AssistantCallbackContext*)arg1 ;
-(NSMutableSet *)setupDelegates;
-(void)setUiConfigDelegate:(id<SetupUIConfigDelegate>)arg1 ;
-(int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2 ;
-(int)updateSettingsAsync;
-(int)cancelSetup;
-(void)setupUIConfigResult:(int)arg1 withOptions:(id)arg2 ;
-(int)closeAllConnections:(BOOL)arg1 ;
-(void)setLastDNSName:(NSString *)arg1 ;
-(void)setLastSystemName:(NSString *)arg1 ;
-(void)setAutoGuessSetupRecommendation:(NSString *)arg1 ;
-(BOOL)activeTask;
-(id<SetupUIConfigDelegate>)uiConfigDelegate;
-(int)copyValue:(id*)arg1 forBSSetting:(int)arg2 ;
-(int)copyValue:(id*)arg1 forSettingPath:(id)arg2 ;
-(int)stateForProblem:(unsigned)arg1 ;
-(BOOL)rememberBasePassword;
-(void)setRememberBasePassword:(BOOL)arg1 ;
-(BOOL)rememberWiFiPassword;
-(void)setRememberWiFiPassword:(BOOL)arg1 ;
-(BOOL)rememberDiskPassword;
-(void)setRememberDiskPassword:(BOOL)arg1 ;
-(int)readPropertyListFromBaseAsync:(id)arg1 ;
-(void)handleBusyStart;
-(void)setupWiFiState;
-(BaseStationRef)bsRef;
-(int)getValue:(id*)arg1 forBSSetting:(int)arg2 ;
-(NSDictionary *)bonjourRecord;
-(void)updateRememberKeychainFlagsButSkipBasePassword:(BOOL)arg1 ;
-(void)loadKeychainBasePassword;
-(void)loadKeychainWirelessPassword;
-(void)deleteKeychainBasePassword;
-(int)updateKeychainWithPasswords;
-(void)saveKeychainBasePassword;
-(void)setKeychainBasePassword:(NSString *)arg1 ;
-(id)bestKeychainMACAddress;
-(NSString *)keychainBasePassword;
-(int)getValue:(id*)arg1 forSettingPath:(id)arg2 ;
-(void)setKeychainWiFiPassword:(NSString *)arg1 ;
-(void)setActiveTask:(BOOL)arg1 ;
-(int)setupWithTargetNetwork:(id)arg1 ;
-(int)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2 ;
-(int)setValue:(id)arg1 forBSSetting:(int)arg2 ;
-(int)setValue:(id)arg1 forSettingPath:(id)arg2 ;
-(BOOL)hasACPFeature:(unsigned)arg1 ;
-(long long)unignoredProblemCount;
-(id)validateAllSettingsAndGetErrors;
-(id)validateSettingsAndGetErrors:(id)arg1 ;
-(int)ignoreProblemCode:(unsigned)arg1 ;
-(int)unIgnoreProblemCode:(unsigned)arg1 ;
-(NSString *)keychainWiFiPassword;
-(NSString *)keychainDiskPassword;
-(void)setKeychainDiskPassword:(NSString *)arg1 ;
-(int)joinAsync;
-(int)joinAndBrowseAsync;
-(int)readAllPropertiesFromBaseAsync;
-(id)snapshotChangedKeys;
-(void)snapshotResetAll;
-(BOOL)snapshotDirty;
-(int)snapshotPush;
-(int)snapshotPop:(BOOL)arg1 ;
-(id)allKeychainMACAddresses;
-(void)updateRememberKeychainFlagsIfInitializing;
-(int)updateKeychainWithPasswordsWithStatus:(int)arg1 ;
-(void)saveKeychainWirelessPassword;
-(void)deleteKeychainWirelessPassword;
-(int)rpcSystemInterfacesAsync;
-(int)rpcStartRemoteBrowse:(id)arg1 withService:(id)arg2 ;
-(int)rpcRefreshBSSettingAsync:(int)arg1 ;
-(int)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1 ;
-(int)rpcRenewDHCPLeaseAsync;
-(int)rpcWPSStartAsync:(BOOL)arg1 dayPass:(BOOL)arg2 timeout:(unsigned)arg3 ;
-(int)rpcWPSStopAsync;
-(int)rpcWPSAllowClientAsync:(id)arg1 ;
-(unsigned)taskCode;
-(int)busyState;
-(int)taskRestartAsync;
-(int)taskRestoreDefaultsAsync:(BOOL)arg1 ;
-(int)taskUploadFirmwareAsync:(id)arg1 ;
-(int)taskEraseDiskAsync:(id)arg1 ;
-(int)taskArchiveDiskAsync:(id)arg1 ;
-(int)setMonitorForChanges:(BOOL)arg1 ;
-(NSDate *)lastHeardFromDevice;
-(void)setBonjourRecord:(NSDictionary *)arg1 ;
-(long long)ethernetPortCount;
-(NSString *)autoGuessSetupRecommendation;
-(NSString *)lastSystemName;
-(NSString *)lastDNSName;
-(void)resetWiFiState;
-(BOOL)performingManualRead;
-(void)handleBusyComplete;
-(void)updateLastHeardFromDevice;
-(void)handleSetupComplete:(int)arg1 ;
-(void)handleTaskComplete;
-(void)logChangesToCCL;
-(id)targetBaseInfoDict;
-(BOOL)isMonitoring;
-(int)taskState;
-(id)init;
-(void)dealloc;
-(void)setContext:(id)arg1 ;
-(id)context;
-(BOOL)dirty;
@end

