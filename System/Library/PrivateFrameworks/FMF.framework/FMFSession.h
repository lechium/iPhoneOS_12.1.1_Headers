/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFXPCInternalClientProtocol.h>

@protocol FMFSessionDelegate, OS_dispatch_queue;
@class NSOperationQueue, NSMutableSet, NSXPCConnection, NSSet, NSMutableDictionary, NSObject, NSString;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {

	BOOL _isModelInitialized;
	id<FMFSessionDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSMutableSet* _internalHandles;
	NSXPCConnection* _connection;
	NSSet* _cachedGetHandlesSharingLocationsWithMe;
	NSSet* _cachedGetHandlesFollowingMyLocation;
	NSMutableDictionary* _cachedLocationForHandleByHandle;
	NSMutableDictionary* _cachedOfferExpirationForHandleByHandle;
	NSMutableDictionary* _cachedCanShareLocationWithHandleByHandle;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_queue> _handlesQueue;

}

@property (nonatomic,retain) NSMutableSet * internalHandles;                                              //@synthesize internalHandles=_internalHandles - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesSharingLocationsWithMe;                              //@synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe - In the implementation block
@property (nonatomic,retain) NSSet * cachedGetHandlesFollowingMyLocation;                                 //@synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedLocationForHandleByHandle;                       //@synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedOfferExpirationForHandleByHandle;                //@synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedCanShareLocationWithHandleByHandle;              //@synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                                //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlesQueue;                                   //@synthesize handlesQueue=_handlesQueue - In the implementation block
@property (assign,nonatomic) BOOL isModelInitialized;                                                     //@synthesize isModelInitialized=_isModelInitialized - In the implementation block
@property (nonatomic,copy) NSSet * handles; 
@property (assign,nonatomic,__weak) id<FMFSessionDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)FMFAllowed;
+(BOOL)FMFRestricted;
+(BOOL)isProvisionedForLocationSharing;
+(BOOL)isAnyAccountManaged;
+(id)sharedInstance;
-(id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)serverProxy;
-(oneway void)didUpdateLocations:(id)arg1 ;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)getHandlesSharingLocationsWithMe;
-(id)getHandlesFollowingMyLocation;
-(id)getFavoritesSharingLocationWithMe;
-(BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)iCloudAccountNameWithCompletion:(/*^block*/id)arg1 ;
-(void)addHandles:(id)arg1 ;
-(void)removeHandles:(id)arg1 ;
-(id)cachedLocationForHandle:(id)arg1 ;
-(void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setHandles:(NSSet *)arg1 ;
-(void)dispatchOnDelegateQueue:(/*^block*/id)arg1 ;
-(void)includeDeviceInAutomations:(/*^block*/id)arg1 ;
-(void)getRecordIdForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExpiredInitTimestamp;
-(void)crashDaemon;
-(void)exit5XXGracePeriod;
-(void)isIn5XXGracePeriodWithCompletion:(/*^block*/id)arg1 ;
-(void)sendIDSPacket:(id)arg1 toHandle:(id)arg2 ;
-(void)dumpStateWithCompletion:(/*^block*/id)arg1 ;
-(void)sessionHandleReport:(/*^block*/id)arg1 ;
-(void)getDataForPerformanceRequest:(/*^block*/id)arg1 ;
-(void)showShareMyLocationiCloudSettingsOffAlert;
-(id)getActiveLocationSharingDevice;
-(double)maxLocatingInterval;
-(id)verifyRestrictionsAndShowDialogIfRequired;
-(BOOL)is5XXError:(id)arg1 ;
-(BOOL)shouldHandleErrorInFWK:(id)arg1 ;
-(void)showShareMyLocationRestrictedAlert;
-(void)locationForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHandlesFollowingMyLocation:(/*^block*/id)arg1 ;
-(void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getHandlesWithPendingOffers:(/*^block*/id)arg1 ;
-(void)canOfferToHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)contactForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAndLocationForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dataForPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)encryptPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)abPreferencesDidChange;
-(void)favoritesForMaxCount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)nearbyLocationsWithCompletion:(/*^block*/id)arg1 ;
-(oneway void)abDidChange;
-(void)getAllLocations:(/*^block*/id)arg1 ;
-(void)getFavoritesWithCompletion:(/*^block*/id)arg1 ;
-(void)addFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeFavorite:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_isNoMappingPacketReturnedError:(id)arg1 ;
-(void)_checkAndDisplayMeDeviceSwitchAlert;
-(void)_sendAutoSwitchMeDevice;
-(void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)approveFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)declineFriendshipRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getPendingFriendshipRequestsWithCompletion:(/*^block*/id)arg1 ;
-(void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)addFence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteFence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getFences:(/*^block*/id)arg1 ;
-(void)fencesForHandles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)modelDidLoad;
-(oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2 ;
-(oneway void)didAddFollowerHandle:(id)arg1 ;
-(oneway void)didRemoveFollowerHandle:(id)arg1 ;
-(oneway void)didStartFollowingHandle:(id)arg1 ;
-(oneway void)didStopFollowingHandle:(id)arg1 ;
-(oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1 ;
-(oneway void)didUpdateFavorites:(id)arg1 ;
-(oneway void)didUpdateFollowers:(id)arg1 ;
-(oneway void)didUpdateFollowing:(id)arg1 ;
-(void)_daemonDidLaunch;
-(void)setHandlesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForFMFDLaunchedNotification;
-(id)__connection;
-(BOOL)isModelInitialized;
-(void)setIsModelInitialized:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlesQueue;
-(NSMutableSet *)internalHandles;
-(BOOL)hasModelInitialized;
-(void)handleIncomingAirDropURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setInternalHandles:(NSMutableSet *)arg1 ;
-(NSSet *)cachedGetHandlesSharingLocationsWithMe;
-(void)setCachedGetHandlesSharingLocationsWithMe:(NSSet *)arg1 ;
-(NSSet *)cachedGetHandlesFollowingMyLocation;
-(void)setCachedGetHandlesFollowingMyLocation:(NSSet *)arg1 ;
-(NSMutableDictionary *)cachedLocationForHandleByHandle;
-(void)setCachedLocationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedOfferExpirationForHandleByHandle;
-(void)setCachedOfferExpirationForHandleByHandle:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)cachedCanShareLocationWithHandleByHandle;
-(void)setCachedCanShareLocationWithHandleByHandle:(NSMutableDictionary *)arg1 ;
-(void)reloadDataIfNotLoaded;
-(BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 ;
-(id)getHandlesWithPendingOffers;
-(void)getPrettyNameForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHideMyLocationEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isMyLocationEnabled;
-(void)forceRefresh;
-(oneway void)networkReachabilityUpdated:(BOOL)arg1 ;
-(void)getHandlesSharingLocationsWithMe:(/*^block*/id)arg1 ;
-(void)locatingInProgressChanged:(id)arg1 ;
-(void)removeDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3 ;
-(void)receivedMappingPacket:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)isMyLocationEnabled:(/*^block*/id)arg1 ;
-(void)getActiveLocationSharingDevice:(/*^block*/id)arg1 ;
-(void)setActiveDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateWithError:(id)arg1 ;
-(void)getAllDevices:(/*^block*/id)arg1 ;
-(void)didReceiveFriendshipRequest:(id)arg1 ;
-(oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2 ;
-(oneway void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(oneway void)didUpdateActiveDeviceList:(id)arg1 ;
-(oneway void)didUpdatePendingOffersForHandles:(id)arg1 ;
-(oneway void)didReceiveServerError:(id)arg1 ;
-(oneway void)didUpdateFences:(id)arg1 ;
-(id)getAllDevices;
-(id)internalConnection;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<FMFSessionDelegate>)arg1 ;
-(id<FMFSessionDelegate>)delegate;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSOperationQueue *)delegateQueue;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(oneway void)setLocations:(id)arg1 ;
-(NSSet *)handles;
@end

