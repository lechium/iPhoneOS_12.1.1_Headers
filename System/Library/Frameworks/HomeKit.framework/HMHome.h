/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HMLocationHandlerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMMutableApplicationData.h>

@protocol HMHomeDelegate, HMSetupRemoteService;
@class HMFUnfairLock, NSString, NSUUID, CLLocation, HMUser, HMApplicationData, NSDate, HMHomeManager, HMSetupViewController, HMMutableArray, _HMContext, HMRoom, NSArray;

@interface HMHome : NSObject <_HMLocationHandlerDelegate, NSSecureCoding, HMFMessageReceiver, HMObjectMerge, HMMutableApplicationData> {

	HMFUnfairLock* _lock;
	BOOL _automaticSoftwareUpdateEnabled;
	long long _minimumMediaUserPrivilege;
	BOOL _mediaPeerToPeerEnabled;
	NSString* _mediaPassword;
	BOOL _primary;
	BOOL _notificationsEnabled;
	BOOL _ownerUser;
	BOOL _adminUser;
	BOOL _notificationEnableRequested;
	int _locationAuthorization;
	NSUUID* _uniqueIdentifier;
	id<HMHomeDelegate> _delegate;
	CLLocation* _homeLocation;
	NSString* _name;
	HMUser* _currentUser;
	HMApplicationData* _applicationData;
	NSDate* _notificationsUpdatedTime;
	unsigned long long _homeHubState;
	HMHomeManager* _homeManager;
	HMSetupViewController* _setupViewController;
	id<HMSetupRemoteService> _setupRemoteViewController;
	HMMutableArray* _currentAccessories;
	HMMutableArray* _currentRooms;
	HMMutableArray* _currentZones;
	HMMutableArray* _currentServiceGroups;
	HMMutableArray* _currentActionSets;
	HMMutableArray* _currentTriggerOwnedActionSets;
	HMMutableArray* _currentActions;
	HMMutableArray* _currentTriggers;
	HMMutableArray* _currentUsers;
	HMMutableArray* _currentResidentDevices;
	HMMutableArray* _currentOutgoingInvitations;
	_HMContext* _context;
	NSUUID* _uuid;
	HMRoom* _homeAsRoom;
	HMMutableArray* _currentMediaSystems;

}

@property (nonatomic,copy,readonly) NSArray * accessories; 
@property (nonatomic,copy,readonly) NSArray * rooms; 
@property (nonatomic,copy,readonly) NSArray * zones; 
@property (nonatomic,copy,readonly) NSArray * serviceGroups; 
@property (nonatomic,readonly) HMUser * currentUser; 
@property (nonatomic,copy,readonly) NSArray * users; 
@property (nonatomic,copy,readonly) NSArray * actionSets; 
@property (nonatomic,copy,readonly) NSArray * triggers; 
@property (getter=isAutomaticSoftwareUpdateEnabled,readonly) BOOL automaticSoftwareUpdateEnabled; 
@property (readonly) long long minimumMediaUserPrivilege; 
@property (getter=isMediaPeerToPeerEnabled,readonly) BOOL mediaPeerToPeerEnabled; 
@property (copy,readonly) NSString * mediaPassword; 
@property (assign,nonatomic,__weak) HMHomeManager * homeManager;                                               //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CLLocation * homeLocation;                                                        //@synthesize homeLocation=_homeLocation - In the implementation block
@property (assign,nonatomic,__weak) HMSetupViewController * setupViewController;                               //@synthesize setupViewController=_setupViewController - In the implementation block
@property (assign,nonatomic,__weak) id<HMSetupRemoteService> setupRemoteViewController;                        //@synthesize setupRemoteViewController=_setupRemoteViewController - In the implementation block
@property (nonatomic,retain) HMUser * currentUser;                                                             //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentAccessories;                                              //@synthesize currentAccessories=_currentAccessories - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentRooms;                                                    //@synthesize currentRooms=_currentRooms - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentZones;                                                    //@synthesize currentZones=_currentZones - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentServiceGroups;                                            //@synthesize currentServiceGroups=_currentServiceGroups - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentActionSets;                                               //@synthesize currentActionSets=_currentActionSets - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentTriggerOwnedActionSets;                                   //@synthesize currentTriggerOwnedActionSets=_currentTriggerOwnedActionSets - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentActions;                                                  //@synthesize currentActions=_currentActions - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentTriggers;                                                 //@synthesize currentTriggers=_currentTriggers - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentUsers;                                                    //@synthesize currentUsers=_currentUsers - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentResidentDevices;                                          //@synthesize currentResidentDevices=_currentResidentDevices - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentOutgoingInvitations;                                      //@synthesize currentOutgoingInvitations=_currentOutgoingInvitations - In the implementation block
@property (getter=isAutomaticSoftwareUpdateEnabled) BOOL automaticSoftwareUpdateEnabled; 
@property (assign) long long minimumMediaUserPrivilege; 
@property (getter=isMediaPeerToPeerEnabled) BOOL mediaPeerToPeerEnabled; 
@property (copy) NSString * mediaPassword; 
@property (assign,getter=isOwnerUser,nonatomic) BOOL ownerUser;                                                //@synthesize ownerUser=_ownerUser - In the implementation block
@property (assign,getter=isAdminUser,nonatomic) BOOL adminUser;                                                //@synthesize adminUser=_adminUser - In the implementation block
@property (nonatomic,copy) NSDate * notificationsUpdatedTime;                                                  //@synthesize notificationsUpdatedTime=_notificationsUpdatedTime - In the implementation block
@property (assign,nonatomic) int locationAuthorization;                                                        //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (assign,nonatomic) BOOL notificationEnableRequested;                                                 //@synthesize notificationEnableRequested=_notificationEnableRequested - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMRoom * homeAsRoom;                                                              //@synthesize homeAsRoom=_homeAsRoom - In the implementation block
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                                    //@synthesize primary=_primary - In the implementation block
@property (assign,getter=areNotificationsEnabled,nonatomic) BOOL notificationsEnabled;                         //@synthesize notificationsEnabled=_notificationsEnabled - In the implementation block
@property (nonatomic,retain) HMMutableArray * currentMediaSystems;                                             //@synthesize currentMediaSystems=_currentMediaSystems - In the implementation block
@property (nonatomic,copy,readonly) NSArray * triggerOwnedActionSets; 
@property (assign,nonatomic,__weak) id<HMHomeDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long homeHubState;                                                //@synthesize homeHubState=_homeHubState - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (nonatomic,readonly) HMApplicationData * applicationData; 
+(BOOL)accessorySupportsMediaAccessControl:(id)arg1 ;
+(id)generateMediaPasswordWithError:(id*)arg1 ;
+(BOOL)isValidMediaPassword:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)setCurrentUser:(HMUser *)arg1 ;
-(void)addAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setNotificationsEnabled:(BOOL)arg1 ;
-(void)_notifyDelegateOfTriggerUpdated:(id)arg1 ;
-(void)didUpdateAuthorization:(int)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)mergeWithNewObjectNoMergeCount:(id)arg1 ;
-(void)updateAccessForUser:(id)arg1 administrator:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateAccessForUser:(id)arg1 remoteAccess:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(void)_removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createAndAddActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3 ;
-(void)_handleAppDataUpdatedNotification:(id)arg1 ;
-(void)updateApplicationData:(id)arg1 forRoom:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)notifyDelegateOfAppDataUpdateForRoom:(id)arg1 ;
-(void)updateApplicationData:(id)arg1 forServiceGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1 ;
-(void)_removeServices:(id)arg1 ;
-(void)setHomeAsRoom:(HMRoom *)arg1 ;
-(HMRoom *)homeAsRoom;
-(void)_setupBuiltinActionSets:(id)arg1 ;
-(HMMutableArray *)currentUsers;
-(void)sendConfigureBulletinNotification;
-(void)_updateLocation:(id)arg1 ;
-(HMMutableArray *)currentMediaSystems;
-(id)createActionSetWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3 ;
-(HMMutableArray *)currentTriggerOwnedActionSets;
-(void)_unconfigureHome;
-(unsigned long long)_mergeCurrentHomeRoomsWithNewHomeRooms:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeZonesWithNewHomeZones:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeAccessoriesWithNewHomeAccessories:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeServiceGroupsWithNewHomeServiceGroups:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeTriggerOwnedActionSetsWithNewHomeActionSets:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeTriggersWithNewHomeTriggers:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeUsersWithNewHomeUsers:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeResidentDevicesWithNewHomeResidentDevices:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeInvitationsWithNewHomeInvitations:(id)arg1 operations:(id)arg2 ;
-(unsigned long long)_mergeCurrentHomeMediaSystemsWithNewMediaSystems:(id)arg1 operations:(id)arg2 ;
-(void)_notifyDelegateOfAppDataUpdate;
-(void)_notifyDelegateOfHomeHubStateUpdate;
-(unsigned long long)_mergeRoomsForMergeCollection:(id)arg1 currentRooms:(id)arg2 ;
-(HMMutableArray *)currentZones;
-(HMMutableArray *)currentAccessories;
-(unsigned long long)_mergeAccessoriesForMergeCollection:(id)arg1 currentAccessories:(id)arg2 ;
-(HMMutableArray *)currentServiceGroups;
-(HMMutableArray *)currentTriggers;
-(void)_notifyDelegateOfTriggerRemoved:(id)arg1 ;
-(void)_notifyDelegateOfTriggerAdded:(id)arg1 ;
-(HMMutableArray *)currentOutgoingInvitations;
-(void)_configureOutgoingInvitiation:(id)arg1 ;
-(void)_notifyDelegateOfRemovedMediaSystem:(id)arg1 ;
-(void)_notifyDelegateOfAddedMediaSystem:(id)arg1 ;
-(void)_handleHomeRenamedNotification:(id)arg1 ;
-(void)_handleHomeLocationUpdateNotificaton:(id)arg1 ;
-(void)_handleRoomAddedNotification:(id)arg1 ;
-(void)_handleRoomRemovedNotification:(id)arg1 ;
-(void)_handleZoneAddedNotification:(id)arg1 ;
-(void)_handleZoneRemovedNotification:(id)arg1 ;
-(void)_handleServiceGroupAddedNotification:(id)arg1 ;
-(void)_handleServiceGroupRemovedNotification:(id)arg1 ;
-(void)_handleActionSetAddedNotification:(id)arg1 ;
-(void)_handleActionSetRemovedNotification:(id)arg1 ;
-(void)_handleTimerTriggerAddedNotification:(id)arg1 ;
-(void)_handleEventTriggerAddedNotification:(id)arg1 ;
-(void)_handleEventTriggerOwnerDeviceNotification:(id)arg1 ;
-(void)_handleEventTriggerOwnerUserNotification:(id)arg1 ;
-(void)_handleTriggerRemovedNotification:(id)arg1 ;
-(void)_handleAccessoryAddedNotification:(id)arg1 ;
-(void)_handleAddAccessoryProgressNotification:(id)arg1 ;
-(void)_handleRegisteredProgressNotification:(id)arg1 ;
-(void)_handleAccessoryRemovedNotification:(id)arg1 ;
-(void)_handleUserAddedNotification:(id)arg1 ;
-(void)_handleUserInvitationsUpdatedNotification:(id)arg1 ;
-(void)_handleUpdatedUserAccessNotification:(id)arg1 ;
-(void)_handleUpdatedPresenceAuthNotification:(id)arg1 ;
-(void)_handleUpdatedPresenceComputeNotification:(id)arg1 ;
-(void)_handleUserRemovedNotification:(id)arg1 ;
-(void)_handleBlockedStateNotification:(id)arg1 ;
-(void)_handlePairedAccessoryErrorNotification:(id)arg1 ;
-(void)_handleMultipleCharacteristicValuesUpdated:(id)arg1 ;
-(void)_handleRequestAccessorySetupCodeRequestKey:(id)arg1 ;
-(void)_handleAddedResidentDevice:(id)arg1 ;
-(void)_handleRemovedResidentDevice:(id)arg1 ;
-(void)_handleUpdatedResidentDevice:(id)arg1 ;
-(void)_handleNotificationsEnabled:(id)arg1 ;
-(void)_handleAccessoryInfoUpdatedNotification:(id)arg1 ;
-(void)_handleAccessoryReprovisionedNotification:(id)arg1 ;
-(void)_handleAccessoryReprovisionStateUpdate:(id)arg1 ;
-(void)_handleMediaSystemAddedNotification:(id)arg1 ;
-(void)_handleMediaSystemRemovedNotification:(id)arg1 ;
-(void)_handleHomeHubStateUpdatedNotification:(id)arg1 ;
-(void)_addTrigger:(id)arg1 triggerUUID:(id)arg2 message:(id)arg3 ;
-(void)_addIdentifier:(id)arg1 bridgeUUID:(id)arg2 ;
-(void)_callProgressHandler:(/*^block*/id)arg1 updatingAccessoryDescription:(id)arg2 fromMessage:(id)arg3 ;
-(void)_removeIdentifier:(id)arg1 bridgeUUID:(id)arg2 ;
-(void)_startSearchForAccessoriesNeedingReprovisioning;
-(void)handleStartWithError:(id)arg1 response:(id)arg2 ;
-(void)_reprovisionAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_retrieveLocation;
-(void)_updateInvitation:(id)arg1 invitationState:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_enableNotifications:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)notificationEnableRequested;
-(void)setNotificationEnableRequested:(BOOL)arg1 ;
-(void)_handleRuntimeStateUpdate:(id)arg1 ;
-(HMSetupViewController *)setupViewController;
-(id<HMSetupRemoteService>)setupRemoteViewController;
-(void)setSetupViewController:(HMSetupViewController *)arg1 ;
-(void)handleDaemonInterruptedNotification:(id)arg1 ;
-(void)handleUIApplicationWillResignActiveNotification:(id)arg1 ;
-(void)_launchSetupViewController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyDelegateOfAppDataUpdateForRoom:(id)arg1 ;
-(void)_notifyDelegateOfAppDataUpdateForServiceGroup:(id)arg1 ;
-(void)_notifyDelegateOfAppDataUpdateForActionSet:(id)arg1 ;
-(id)_getContainerForAppData:(id)arg1 ;
-(void)_invokeDelegateForAppData:(id)arg1 ;
-(void)_notifyDelegateOfAccessControlUpdateForUser:(id)arg1 ;
-(void)_notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1 ;
-(void)_removeIncompatibleTrigger:(id)arg1 ;
-(void)updateApplicationData:(id)arg1 forAppDataContainerWithUUID:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_updateApplicationData:(id)arg1 forAppDataContainerWithUUID:(id)arg2 appDataContainerUUIDKeyName:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 homeAsRoomUUID:(id)arg3 homeAsRoomName:(id)arg4 actionSets:(id)arg5 ;
-(void)__configureWithContext:(id)arg1 homeManager:(id)arg2 ;
-(id)controlTargets;
-(id)targetControllers;
-(void)unconfigureHome;
-(void)notifyDelegatesOfExecution:(id)arg1 actionSet:(id)arg2 ;
-(void)removeServices:(id)arg1 ;
-(void)startSearchForAccessoriesNeedingReprovisioning;
-(void)updateForUser:(id)arg1 presenceAuthorizationStatus:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_cancelInvitation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_acceptInvitation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reEnableNotifications;
-(void)notifyDelegateOfAppDataUpdateForActionSet:(id)arg1 ;
-(void)notifyDelegateOfAccessControlUpdateForUser:(id)arg1 ;
-(void)notifyDelegateOfAccesoryInvitationsUpdateForUser:(id)arg1 ;
-(void)updateApplicationData:(id)arg1 forActionSet:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSetupRemoteViewController:(id<HMSetupRemoteService>)arg1 ;
-(void)setCurrentAccessories:(HMMutableArray *)arg1 ;
-(void)setCurrentZones:(HMMutableArray *)arg1 ;
-(void)setCurrentServiceGroups:(HMMutableArray *)arg1 ;
-(void)setCurrentTriggerOwnedActionSets:(HMMutableArray *)arg1 ;
-(void)setCurrentTriggers:(HMMutableArray *)arg1 ;
-(void)setCurrentUsers:(HMMutableArray *)arg1 ;
-(void)setCurrentOutgoingInvitations:(HMMutableArray *)arg1 ;
-(void)setCurrentMediaSystems:(HMMutableArray *)arg1 ;
-(void)_addAccessory:(id)arg1 appID:(id)arg2 password:(id)arg3 setupCodeDeferred:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_addAndSetupAccessoriesWithSetupPayload:(id)arg1 browseRequest:(id)arg2 suggestedRoomName:(id)arg3 legacyAPI:(BOOL)arg4 trustedOrigin:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_unblockAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_performBatchCharacteristicRequest:(id)arg1 ;
-(void)addAccessory:(id)arg1 password:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addAndSetupAccessoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addAndSetupAccessoriesWithPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addAndSetUpNewAccessoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addAccessoryWithSetupPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addAndSetupAccessoriesWithSetupPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)servicesWithTypes:(id)arg1 ;
-(void)unblockAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addRoomWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addZoneWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addServiceGroupWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeServiceGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_manageUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_inviteWithUserInformation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_createFailedAccessoriesListFromError:(id)arg1 ;
-(void)_addUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)inviteUsersWithInviteInformation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)manageUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)administrator;
-(void)addUsersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addUserWithoutConfirmation:(id)arg1 privilege:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addUser:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_addActionSetWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_executeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)builtinActionSetOfType:(id)arg1 ;
-(void)_addTrigger:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeTrigger:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_userDidConfirmExecution:(BOOL)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeMediaSystem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userDidConfirmExecution:(BOOL)arg1 ofTrigger:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)userDidConfirmExecution:(BOOL)arg1 ofTriggerWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_queryRemoteAccessWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_enableRemoteAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryRemoteAccessWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableRemoteAccess:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTrigger:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerSetupProgressHandler:(/*^block*/id)arg1 forAccessory:(id)arg2 ;
-(void)startPairingWithAccessory:(id)arg1 accessorySetupDescription:(id)arg2 setupRemoteViewController:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelPairingForAccessoryWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)continuePairingForAccessoryWithUUID:(id)arg1 setupCode:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopDiscoveringSymptomsForNearbyDevices;
-(void)startDiscoveringSymptomsForNearbyDevices;
-(void)performBatchCharacteristicRequest:(id)arg1 ;
-(void)executeActionSet:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateApplicationData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)userDidRespondToConsentRequestForSetupAccessoryDescription:(id)arg1 withResponse:(long long)arg2 ;
-(void)updateAutomaticSoftwareUpdateEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reprovisionAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateMediaPeerToPeerEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateMinimumMediaUserPrivilege:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateMediaPassword:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startPairingWithAccessoryDescription:(id)arg1 setupRemoteViewController:(id)arg2 progress:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelPairingForAccessoryWithDescription:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeMediaSystem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeServiceGroup:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addServiceGroupWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeZone:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enableNotifications:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addActionSetWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addTrigger:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addZoneWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addRoomWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)assignAccessory:(id)arg1 toRoom:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)homeAccessControlForUser:(id)arg1 ;
-(BOOL)areNotificationsEnabled;
-(void)inviteUsers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeUserWithoutConfirmation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMHomeManager *)homeManager;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(NSArray *)actionSets;
-(BOOL)isOwnerUser;
-(BOOL)isAdminUser;
-(void)setCurrentActionSets:(HMMutableArray *)arg1 ;
-(HMMutableArray *)currentActionSets;
-(id)actionSetWithUUID:(id)arg1 ;
-(id)triggerOwnedActionSetWithUUID:(id)arg1 ;
-(NSArray *)users;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)accessoryWithUUID:(id)arg1 ;
-(id)roomWithUUID:(id)arg1 ;
-(id)zoneWithUUID:(id)arg1 ;
-(id)serviceGroupWithUUID:(id)arg1 ;
-(id)triggerWithUUID:(id)arg1 ;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(void)_registerNotificationHandlers;
-(NSArray *)accessories;
-(id)roomForEntireHome;
-(CLLocation *)homeLocation;
-(long long)minimumMediaUserPrivilege;
-(BOOL)isMediaPeerToPeerEnabled;
-(NSString *)mediaPassword;
-(NSArray *)rooms;
-(NSArray *)zones;
-(NSArray *)serviceGroups;
-(NSArray *)triggers;
-(HMUser *)currentUser;
-(NSDate *)notificationsUpdatedTime;
-(NSArray *)triggerOwnedActionSets;
-(void)setOwnerUser:(BOOL)arg1 ;
-(BOOL)isPrimary;
-(id)outgoingInvitations;
-(id)mediaSystems;
-(id)residentDevices;
-(BOOL)isAutomaticSoftwareUpdateEnabled;
-(unsigned long long)homeHubState;
-(void)setPrimary:(BOOL)arg1 ;
-(id)messageDestination;
-(id)roomWithName:(id)arg1 ;
-(id)zoneWithName:(id)arg1 ;
-(void)_removeAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)serviceGroupWithName:(id)arg1 ;
-(id)actionSetWithName:(id)arg1 ;
-(id)triggerWithName:(id)arg1 ;
-(void)setNotificationsUpdatedTime:(NSDate *)arg1 ;
-(void)setHomeLocation:(CLLocation *)arg1 ;
-(void)setAutomaticSoftwareUpdateEnabled:(BOOL)arg1 ;
-(void)setMinimumMediaUserPrivilege:(long long)arg1 ;
-(void)setMediaPeerToPeerEnabled:(BOOL)arg1 ;
-(void)setMediaPassword:(NSString *)arg1 ;
-(void)removeAccessory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAdminUser:(BOOL)arg1 ;
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMMutableArray *)currentActions;
-(void)setCurrentActions:(HMMutableArray *)arg1 ;
-(HMApplicationData *)applicationData;
-(void)setApplicationData:(HMApplicationData *)arg1 ;
-(HMMutableArray *)currentRooms;
-(void)setCurrentRooms:(HMMutableArray *)arg1 ;
-(void)setCurrentResidentDevices:(HMMutableArray *)arg1 ;
-(HMMutableArray *)currentResidentDevices;
-(int)locationAuthorization;
-(void)setLocationAuthorization:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(NSUUID *)uuid;
-(void)setDelegate:(id<HMHomeDelegate>)arg1 ;
-(id<HMHomeDelegate>)delegate;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(void)invalidate;
-(void)_invalidate;
-(NSUUID *)uniqueIdentifier;
-(id)location;
-(id)owner;
-(id)_privateDelegate;
@end
