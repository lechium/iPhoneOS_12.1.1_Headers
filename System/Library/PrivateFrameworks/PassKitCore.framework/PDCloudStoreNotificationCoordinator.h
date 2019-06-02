/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PDPushNotificationConsumer.h>
#import <libobjc.A.dylib/PDCloudStoreContainerDelegate.h>
#import <libobjc.A.dylib/PDScheduledActivityClient.h>
#import <libobjc.A.dylib/PKCloudStoreCoordinatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, PDPushNotificationManager, NSObject, NSSet, NSMutableArray, NSMutableDictionary, PDApplePayCloudStoreContainer, PDPassCloudStoreContainer, NSString;

@interface PDCloudStoreNotificationCoordinator : NSObject <PDPushNotificationConsumer, PDCloudStoreContainerDelegate, PDScheduledActivityClient, PKCloudStoreCoordinatorDelegate> {

	NSHashTable* _observers;
	PDPushNotificationManager* _pushNotificationManager;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSSet* _pushTopics;
	NSMutableArray* _containers;
	NSMutableDictionary* _containersCurrentlyProcessingPushNotifications;
	NSMutableDictionary* _containersThatShouldProcessPushNotifications;
	PDApplePayCloudStoreContainer* _applePayContainer;
	PDPassCloudStoreContainer* _passContainer;

}

@property (nonatomic,retain) PDApplePayCloudStoreContainer * applePayContainer;              //@synthesize applePayContainer=_applePayContainer - In the implementation block
@property (nonatomic,retain) PDPassCloudStoreContainer * passContainer;                      //@synthesize passContainer=_passContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)invalidateServerChangeTokens;
+(BOOL)canInitalizeCloudStoreWithWebService:(id)arg1 ;
-(void)noteAccountDeleted;
-(void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2 ;
-(void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(id)arg1 ;
-(void)cloudStoreContainer:(id)arg1 createdZoneWithName:(id)arg2 ;
-(id)cloudStoreSpecificKeysForItem:(id)arg1 ;
-(void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAndStoreRecordsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canSyncTransactionFromCloudKitForPassUniqueIdentifier:(id)arg1 ;
-(void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PDApplePayCloudStoreContainer *)applePayContainer;
-(void)noteCloudSyncPassesSwitchChanged;
-(void)_initialCloudDatabaseSetupForContainer:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_initialCloudDatabaseSetupForContainer:(id)arg1 operationGroupNameSuffix:(id)arg2 shouldScheduleBackgroundActivity:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_scheduleFirstCloudStoreContainerSetupBackgroundActivityIfNeccessary;
-(void)_unregisterForPushNotifications;
-(id)_errorWithCode:(long long)arg1 description:(id)arg2 ;
-(id)_containerForItemType:(unsigned long long)arg1 ;
-(void)_initialCloudDatabaseSetupForContainer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_containerWithIdentifier:(id)arg1 ;
-(void)_unscheduleBackgroundContainerSetupActivities;
-(void)_performCloudStoreContainerInitalizationBackgroundActivityWithCurrentInterval:(unsigned long long)arg1 nextBackgroundInterval:(unsigned long long)arg2 ;
-(void)_recordAggdCloudStoreBackgroundContainerSetupResult:(BOOL)arg1 forCurrentBackgroundInterval:(unsigned long long)arg2 ;
-(void)_scheduleCloudStoreContainerSetupBackgroundActivityWithNextInterval:(unsigned long long)arg1 ;
-(id)_backgroundActivityNameForBackgroundInterval:(unsigned long long)arg1 ;
-(double)_nextTimeIntervalForBackgroundInterval:(unsigned long long)arg1 ;
-(BOOL)_shouldScheduleInitalCloudStoreContainerSetupBackgroundActivity;
-(id)_containerWithZoneName:(id)arg1 ;
-(void)_processCloudStorePushNotificationForContainer:(id)arg1 ;
-(id)pushNotificationTopics;
-(void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)applyPushNotificationToken:(id)arg1 ;
-(void)cloudStoreContainer:(id)arg1 didChangeContainerState:(unsigned long long)arg2 ;
-(id)initWithPushNotificationManager:(id)arg1 ;
-(void)setPassContainer:(PDPassCloudStoreContainer *)arg1 ;
-(void)setApplePayContainer:(PDApplePayCloudStoreContainer *)arg1 ;
-(PDPassCloudStoreContainer *)passContainer;
-(id)initWithPushNotificationManager:(id)arg1 dataSource:(id)arg2 transactionProcessor:(id)arg3 initalizeCloudStoreManager:(BOOL)arg4 ;
-(void)removeItemsWithRecordNames:(id)arg1 itemClass:(Class)arg2 completion:(/*^block*/id)arg3 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)resetContainerWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_registerForPushNotifications;
@end
