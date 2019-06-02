/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class NSDictionary, NSString, NSMutableArray, NSMapTable, NSArray, NSData, NSDate, NSSet;

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol> {

	NSDictionary* _accountConfig;
	NSString* _serviceToken;
	NSString* _uniqueID;
	NSString* _service;
	NSMutableArray* _devices;
	NSMutableArray* _suppressedDevices;
	id _delegateContext;
	NSMapTable* _delegateToInfo;
	NSMapTable* _registrationDelegateToInfo;
	BOOL _devicesLoaded;
	BOOL _isEnabled;
	NSString* _loginID;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,retain) NSString * loginID;                                       //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName; 
@property (nonatomic,readonly) NSString * primaryServiceName; 
@property (nonatomic,readonly) NSString * pushTopic; 
@property (nonatomic,readonly) int accountType; 
@property (nonatomic,readonly) BOOL isInTransientRegistrationState; 
@property (nonatomic,readonly) BOOL isTransientCloudPairingAccount; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isUserDisabled; 
@property (nonatomic,readonly) BOOL canSend; 
@property (nonatomic,readonly) BOOL isUsableForOuterMessaging; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * nearbyDevices; 
@property (nonatomic,readonly) NSArray * suppressedDevices; 
@property (nonatomic,readonly) NSDictionary * profileInfo; 
@property (nonatomic,readonly) NSArray * aliases; 
@property (nonatomic,readonly) NSArray * aliasStrings; 
@property (nonatomic,readonly) NSArray * vettedAliases; 
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,retain) NSDictionary * accountInfo; 
@property (nonatomic,readonly) int registrationStatus; 
@property (assign,setter=_setIsEnabled:,nonatomic) BOOL _isEnabled; 
@property (nonatomic,__weak,readonly) NSArray * registeredURIs; 
@property (nonatomic,__weak,readonly) NSData * registrationCertificate; 
@property (nonatomic,__weak,readonly) NSDate * dateRegistered; 
@property (nonatomic,__weak,readonly) NSDate * nextRegistrationDate; 
@property (nonatomic,__weak,readonly) NSData * pushToken; 
@property (nonatomic,__weak,readonly) NSString * regionID; 
@property (nonatomic,__weak,readonly) NSString * regionBasePhoneNumber; 
@property (nonatomic,__weak,readonly) NSDictionary * regionServerContext; 
@property (nonatomic,__weak,readonly) NSString * profileID; 
@property (nonatomic,readonly) NSSet * activeAliases; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isUserDisabled;
-(NSString *)uniqueID;
-(void)setAuthToken:(id)arg1 ;
-(NSArray *)aliases;
-(void)addAliases:(id)arg1 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(void)_connect;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2 ;
-(void)account:(id)arg1 dependentDevicesUpdatedUponReconnect:(id)arg2 ;
-(void)account:(id)arg1 localDeviceAdded:(id)arg2 ;
-(void)account:(id)arg1 localDeviceRemoved:(id)arg2 ;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 group:(id)arg2 ;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 group:(id)arg5 ;
-(NSArray *)suppressedDevices;
-(void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(/*^block*/id)arg2 callbackBlock:(/*^block*/id)arg3 postCallbacksBlock:(/*^block*/id)arg4 ;
-(void)_setIsEnabled:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4 ;
-(BOOL)canSend;
-(NSArray *)nearbyDevices;
-(BOOL)isUsableForOuterMessaging;
-(NSDate *)nextRegistrationDate;
-(NSDate *)dateRegistered;
-(NSString *)regionBasePhoneNumber;
-(NSDictionary *)regionServerContext;
-(void)deactivateAndPurgeIdentify;
-(void)_callNearbyDevicesChanged;
-(void)_reloadCachedDevices;
-(NSSet *)activeAliases;
-(void)activateAlias:(id)arg1 ;
-(void)deactivateAlias:(id)arg1 ;
-(void)setLoginID:(NSString *)arg1 ;
-(void)_loadCachedDevices;
-(BOOL)_isiCloudPairingService;
-(BOOL)isInTransientRegistrationState;
-(id)_objectForKey:(id)arg1 ;
-(BOOL)_isInvisibleAlias:(id)arg1 ;
-(void)_updateDependentDevicesWithDevicesInfo:(id)arg1 ;
-(void)_callDevicesChanged;
-(id)_keychainRegistration;
-(id)_registeredURIs;
-(void)_callRegistrationDelegatesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isTransientCloudPairingAccount;
-(void)_callConnectedDevicesChanged;
-(void)_callCloudConnectedDevicesChanged;
-(NSString *)regionID;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(id)registrationInfo;
-(NSString *)pushTopic;
-(NSDictionary *)profileInfo;
-(NSArray *)vettedAliases;
-(void)authenticateAccount;
-(void)removeAliases:(id)arg1 ;
-(void)unvalidateAliases:(id)arg1 ;
-(void)validateAliases:(id)arg1 ;
-(void)registerAccount;
-(void)unregisterAccount;
-(void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 ;
-(void)validateProfile;
-(void)setAccountInfo:(NSDictionary *)arg1 ;
-(int)registrationStatus;
-(int)accountType;
-(NSString *)profileID;
-(NSArray *)aliasStrings;
-(void)updateAccountWithAccountInfo:(id)arg1 ;
-(NSArray *)registeredURIs;
-(void)passwordUpdated;
-(NSData *)registrationCertificate;
-(void)_reregisterAndReidentify:(BOOL)arg1 ;
-(NSArray *)devices;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(NSString *)primaryServiceName;
-(NSDictionary *)accountInfo;
-(NSData *)pushToken;
-(void)setPassword:(id)arg1 ;
-(NSString *)loginID;
-(void)addRegistrationDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeRegistrationDelegate:(id)arg1 ;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(id)connectedDevices;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isActive;
-(BOOL)_isEnabled;
-(NSString *)displayName;
-(NSString *)serviceName;
-(NSArray *)handles;
@end
