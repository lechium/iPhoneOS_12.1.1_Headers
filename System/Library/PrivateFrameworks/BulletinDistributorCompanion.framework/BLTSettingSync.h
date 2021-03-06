/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <BulletinDistributorCompanion/BLTSettingSyncInternal.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <libobjc.A.dylib/BLTSectionInfoListDelegate.h>
#import <libobjc.A.dylib/BLTSectionConfigurationDelegate.h>
#import <libobjc.A.dylib/BLTSiriActionAppListDelegate.h>

@protocol OS_dispatch_queue;
@class BLTSectionInfoList, BLTSettingSyncSendQueue, BLTSectionInfoSyncCoordinator, NSObject, BLTSectionInfoListBridgeProvider, NSMutableDictionary, BLTSiriActionAppList, BBObserver, NSString;

@interface BLTSettingSync : BLTSettingSyncInternal <BBObserverDelegate, BLTSectionInfoListDelegate, BLTSectionConfigurationDelegate, BLTSiriActionAppListDelegate> {

	BLTSectionInfoList* _sectionInfoList;
	BLTSettingSyncSendQueue* _settingSendQueue;
	unsigned long long _settingSyncSendQueueMaxConcurrentSendCount;
	BLTSectionInfoSyncCoordinator* _sectionInfoSyncCoordinator;
	NSObject*<OS_dispatch_queue> _sectionInfoSyncCoordinatorQueue;
	BOOL _initialSyncPerformed;
	BLTSectionInfoListBridgeProvider* _bridgeProvider;
	NSMutableDictionary* _reloadBBCompletions;
	unsigned long long _stateHandler;
	BLTSiriActionAppList* _siriActionAppList;
	BBObserver* _observer;

}

@property (nonatomic,retain) BBObserver * observer;                 //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3 ;
-(void)sendRemoveSectionWithSectionID:(id)arg1 sent:(/*^block*/id)arg2 ;
-(void)siriActionAppListUpdated:(id)arg1 ;
-(id)_alertingSectionIDs;
-(void)sectionConfiguration:(id)arg1 addedSectionIDs:(id)arg2 removedSectionIDs:(id)arg3 ;
-(void)sendAllSectionInfoWithSpool:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)spoolSectionInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)clearSectionInfoSentCache;
-(id)settingOverrides;
-(id)originalSettings;
-(id)overriddenSettings;
-(id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2 ;
-(void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 fromRemote:(BOOL)arg4 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sectionInfoList:(id)arg1 receivedUpdatedSectionInfoForSectionID:(id)arg2 ;
-(void)sectionInfoList:(id)arg1 receivedRemoveSectionWithSectionID:(id)arg2 ;
-(id)universalSectionIDForSectionID:(id)arg1 ;
-(void)sendSectionInfoWithSectionID:(id)arg1 completion:(/*^block*/id)arg2 spoolToFile:(BOOL)arg3 ;
-(BOOL)isSectionInfoSentCacheEmpty;
-(void)performInitialSyncWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAllSyncComplete;
-(void)performSyncIfNeededForSectionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_initSettingSyncSendQueueMaxConcurrentSendCount;
-(void)_spoolInitialSync;
-(void)_logNotificationSettings;
-(id)_stateDescription;
-(unsigned long long)_fetchSyncState;
-(void)_storeSyncState:(unsigned long long)arg1 ;
-(unsigned long long)_fetchSettingSyncMaxCountOverride;
-(void)_updateAllBBSectionsWithCompletion:(/*^block*/id)arg1 withProgress:(/*^block*/id)arg2 spoolToFile:(BOOL)arg3 ;
-(void)_sendSpooledSyncWithCompletion:(/*^block*/id)arg1 withProgress:(/*^block*/id)arg2 ;
-(void)_setupSectionInfoListWithCompletion:(/*^block*/id)arg1 ;
-(void)_addReloadBBCompletion:(/*^block*/id)arg1 sectionID:(id)arg2 ;
-(void)_callAndRemoveReloadBBCompletion:(/*^block*/id)arg1 sectionID:(id)arg2 ;
-(void)_sendSiriAppListWithInstalled:(NSDictionary*)arg1 removed:(id)arg2 ;
-(void)sendOverrideOnly:(id)arg1 sectionID:(id)arg2 spoolToFile:(BOOL)arg3 ;
-(BOOL)_willSectionIDAlert:(id)arg1 ;
-(void)_sendSectionSubtypeParameterIcons:(id)arg1 sectionID:(id)arg2 waitForAcknowledgement:(BOOL)arg3 spoolToFile:(BOOL)arg4 andCompletion:(/*^block*/id)arg5 ;
-(void)_callReloadBBCompletionsForSectionID:(id)arg1 ;
-(void)dealloc;
-(void)setObserver:(BBObserver *)arg1 ;
-(BBObserver *)observer;
@end

