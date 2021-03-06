/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class _ATXDataStore, NSMutableDictionary, NSString, NSDate, NSMutableArray, _ATXInternalInstallNotification, _ATXInternalUninstallNotification;

@interface _ATXAppInfoManager : NSObject {

	_ATXDataStore* _dataStore;
	NSMutableDictionary* _appInfo;
	NSString* _lastLaunch;
	NSString* _lastEnded;
	NSString* _lastAppActionLaunch;
	NSDate* _lastAppActionLaunchDate;
	NSDate* _lastLaunchDate;
	NSDate* _lastUnlockDate;
	long long _spotlightLaunchCount;
	long long _launchCount;
	NSMutableArray* _installDeltaLog;
	_ATXInternalInstallNotification* _installNotificationListener;
	_ATXInternalUninstallNotification* _uninstallNotificationListener;
	opaque_pthread_rwlock_t _rwlock;

}
+(id)sortArrayAndComputeMedian:(id)arg1 ;
+(id)sharedInstance;
-(void)train;
-(id)initWithDataStore:(id)arg1 ;
-(id)initWithInMemoryStore;
-(void)addExtensionLaunchForBundleId:(id)arg1 date:(id)arg2 ;
-(id)appInfoForBundleId:(id)arg1 ;
-(void)removeAppInfoForBundleId:(id)arg1 ;
-(void)removeInfoForAppAction:(id)arg1 ;
-(void)removeAppLaunchesForBundleId:(id)arg1 ;
-(void)clearAppLaunchInfo;
-(void)clearAppInstallInfo;
-(long long)launchedAppCount;
-(id)totalSlotsInDatastore;
-(void)removeActionDataForBundleId:(id)arg1 ;
-(void)_setupInMemoryCacheWithAppInfoMapLocked:(id)arg1 ;
-(id)lastLaunchDateForBundleId:(id)arg1 ;
-(id)averageSecondsBetweenLaunchesForBundleId:(id)arg1 ;
-(id)medianSecondsBetweenLaunchesForBundleId:(id)arg1 ;
-(id)genreIdForBundleId:(id)arg1 ;
-(id)subGenreIdsForBundleId:(id)arg1 ;
-(id)genreIdsForBundleId:(id)arg1 ;
-(id)app2VecClusterForBundleId:(id)arg1 ;
-(id)lastAppLaunchWithHistory:(id)arg1 ;
-(id)lastAppLaunch;
-(id)lastAppEnded;
-(id)lastAppLaunchDate;
-(id)allActionKeys;
-(id)lastAppActionLaunch;
-(id)lastAppActionLaunchDate;
-(id)lastAppActionLaunchDateForActionKey:(id)arg1 ;
-(id)averageSecondsBetweenAppActionsForActionKey:(id)arg1 ;
-(id)medianSecondsBetweenAppActionsForActionKey:(id)arg1 ;
-(id)lastUnlockDate;
-(id)allAppsWithInstallDate;
-(BOOL)_hasBeenLaunchedForBundleId:(id)arg1 ;
-(id)_getInfoOrCreateForBundleId:(id)arg1 ;
-(void)updateGenreIdsForBundleId:(id)arg1 genreId:(id)arg2 subGenreIds:(id)arg3 ;
-(void)updateApp2VecClusterForBundleId:(id)arg1 app2VecCluster:(id)arg2 ;
-(void)addInstallForBundleId:(id)arg1 date:(id)arg2 ;
-(void)addInstallForBundleInfoMap:(id)arg1 ;
-(void)_addLaunchInfoForBundle:(id)arg1 date:(id)arg2 updateLaunchBlock:(/*^block*/id)arg3 ;
-(void)addLaunchForBundleId:(id)arg1 date:(id)arg2 ;
-(void)addLaunchForAppAction:(id)arg1 date:(id)arg2 ;
-(void)addSpotlightLaunchForBundleId:(id)arg1 date:(id)arg2 ;
-(void)addAverageSecondsBetweenLaunchesForBundleId:(id)arg1 average:(id)arg2 ;
-(void)addMedianSecondsBetweenLaunchesForBundleId:(id)arg1 median:(id)arg2 ;
-(void)addAverageSecondsBetweenAppActionsForActionKey:(id)arg1 average:(id)arg2 ;
-(void)addMedianSecondsBetweenAppActionsForActionKey:(id)arg1 median:(id)arg2 ;
-(void)addScreenLockAtDate:(id)arg1 ;
-(void)removeAppInfoForBundleIds:(id)arg1 ;
-(void)removeInfoForAppActions:(id)arg1 ;
-(void)startInstallDeltaRecording;
-(id)stopInstallDeltaRecording;
-(void)computeAverageAndMedianSecondsBetweenAppLaunches;
-(void)computeAverageAndMedianSecondsBetweenAppActions;
-(void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)arg1 ;
-(void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)arg1 ;
-(void)updateGenreIdsForAllApps;
-(void)updateApp2VecClustersForAllApps;
-(id)allApps;
-(id)init;
-(void)dealloc;
@end

