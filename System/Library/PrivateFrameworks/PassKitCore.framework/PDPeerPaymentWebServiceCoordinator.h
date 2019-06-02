/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PDPushNotificationConsumer.h>
#import <libobjc.A.dylib/PDScheduledActivityClient.h>
#import <libobjc.A.dylib/PDCloudStoreNotificationCoordinatorObserver.h>

@protocol OS_dispatch_queue, PDPeerPaymentWebServiceCoordinatorDataSource, PDWebServiceCoordinatorPassStore;
@class PDPushNotificationManager, NSObject, PDPeerPaymentWebServiceArchiver, PKPeerPaymentWebService, PKPeerPaymentAccount, PDAssertionManager, PDUserNotificationManager, NSMutableArray, PDCloudStoreNotificationCoordinator, PKPaymentWebService, NSString;

@interface PDPeerPaymentWebServiceCoordinator : NSObject <PDPushNotificationConsumer, PDScheduledActivityClient, PDCloudStoreNotificationCoordinatorObserver> {

	PDPushNotificationManager* _pushNotificationManager;
	NSObject*<OS_dispatch_queue> _sharedPeerPaymentWebServiceQueue;
	NSObject*<OS_dispatch_queue> _updateAccountQueue;
	PDPeerPaymentWebServiceArchiver* _archiver;
	PKPeerPaymentWebService* _sharedPeerPaymentWebService;
	PKPeerPaymentAccount* _account;
	PKPeerPaymentAccount* _mockAccount;
	PDAssertionManager* _assertionManager;
	PDUserNotificationManager* _userNotificationManager;
	id<PDPeerPaymentWebServiceCoordinatorDataSource> _dataSource;
	id<PDWebServiceCoordinatorPassStore> _passStore;
	NSMutableArray* _pendingAccountFetches;
	NSMutableArray* _queuedPendingAccountFetches;
	BOOL _isFetchingAccount;
	PDCloudStoreNotificationCoordinator* _cloudStoreNotificationCoordinator;
	PKPaymentWebService* _paymentWebService;

}

@property (nonatomic,retain) PDCloudStoreNotificationCoordinator * cloudStoreNotificationCoordinator;              //@synthesize cloudStoreNotificationCoordinator=_cloudStoreNotificationCoordinator - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                                              //@synthesize paymentWebService=_paymentWebService - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentWebService * sharedPeerPaymentWebService; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)accountWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)registrationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)updateMockAccountBalanceByAddingAmount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)sharedWebService;
-(PKPeerPaymentWebService *)sharedPeerPaymentWebService;
-(void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2 ;
-(PKPaymentWebService *)paymentWebService;
-(PDCloudStoreNotificationCoordinator *)cloudStoreNotificationCoordinator;
-(void)setCloudStoreNotificationCoordinator:(PDCloudStoreNotificationCoordinator *)arg1 ;
-(void)cloudStoreNotificationCoordinator:(id)arg1 createdZoneWithName:(id)arg2 ;
-(id)pushNotificationTopics;
-(void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2 ;
-(void)applyPushNotificationToken:(id)arg1 ;
-(void)_updateSharedCacheWithWebService:(id)arg1 ;
-(void)_updateSharedCacheWithAccount:(id)arg1 ;
-(id)_mockAccountInitialState;
-(void)_schedulePeerPaymentCoordinatorActivities;
-(void)_archiveSharedPeerPaymentWebServiceContext;
-(void)_updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_schedulePeerPaymentReregisterActivityForReason:(id)arg1 ;
-(void)_registerWithPeerPaymentWebService:(id)arg1 registerURL:(id)arg2 pushToken:(id)arg3 completion:(/*^block*/id)arg4 ;
-(unsigned long long)_peerPaymentErrorStateForRegistrationResponse:(id)arg1 error:(id)arg2 ;
-(void)deleteSharedWebServiceWithDiagnosticReason:(id)arg1 ;
-(void)_downloadAssociatedPeerPaymentPassWithCompletion:(/*^block*/id)arg1 ;
-(void)_initalizeCloudStoreIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_shouldAttemptBackgroundPeerPaymentPassDownload;
-(void)_initalizeCloudStoreIfNecessary;
-(void)_performPeerPaymentPassDownloadActivity;
-(void)_performPeerPaymentReregisterActivityForReason:(id)arg1 ;
-(BOOL)_peerPaymentPassExists;
-(void)_handleUpdatedAccount:(id)arg1 withOldAccount:(id)arg2 ;
-(BOOL)_hasAssociatedPeerPaymentPass;
-(void)_completeUpdatingAccount;
-(id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 userNotificationManager:(id)arg4 dataSource:(id)arg5 passStore:(id)arg6 ;
-(void)updateSharedWebServiceContext:(id)arg1 ;
-(void)handlePassLibraryChangedWithPassUniqueIdentifier:(id)arg1 ;
-(void)receivedPeerPaymentMessage:(id)arg1 ;
-(void)handleCompanionSerialNumberChanged;
-(void)handleMigratedAccount:(id)arg1 ;
-(void)submitDeviceScoreIdentifiersForTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_initalizeCloudStore;
-(id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4 passStore:(id)arg5 ;
-(id)initWithPushNotificationManager:(id)arg1 paymentWebService:(id)arg2 assertionManager:(id)arg3 dataSource:(id)arg4 ;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)initalizeCloudStoreIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)registerDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)unregisterDeviceWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end
