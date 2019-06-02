/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ISURLBagObserver.h>
#import <libobjc.A.dylib/SSVPlaybackLeaseDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, SSVFairPlaySubscriptionController, SSVFairPlaySubscriptionStatus, SSVSubscriptionStatus, SSVPlaybackLease, NSString;

@interface MPCloudServiceStatusController : NSObject <ICEnvironmentMonitorObserver, ISURLBagObserver, SSVPlaybackLeaseDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	unsigned long long _accountStoreChangeObservationCount;
	unsigned long long _automaticLeaseRefreshCount;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _cloudLibraryStatusAccessQueue;
	long long _cloudLibraryStatus;
	unsigned long long _cloudLibraryObservationCount;
	NSOperationQueue* _fairPlayOperationQueue;
	unsigned long long _fairPlaySubscriptionStatusObservationCount;
	SSVFairPlaySubscriptionController* _fairPlaySubscriptionController;
	BOOL _hasLoadedMatchStatus;
	BOOL _hasLoadedURLBag;
	SSVFairPlaySubscriptionStatus* _lastKnownFairPlaySubscriptionStatus;
	SSVSubscriptionStatus* _lastKnownSubscriptionStatus;
	unsigned long long _matchStatusObservationCount;
	unsigned long long _matchStatus;
	BOOL _observingNetworkReachability;
	SSVPlaybackLease* _playbackLease;
	BOOL _hasSubscriptionLease;
	BOOL _shouldPlaybackRequireSubscriptionLease;
	unsigned long long _shouldPlaybackRequireSubscriptionLeaseObservationCount;
	BOOL _subscriptionAvailable;
	unsigned long long _subscriptionAvailabilityObservationCount;
	unsigned long long _subscriptionLeaseUsageCount;
	NSOperationQueue* _subscriptionOperationQueue;
	unsigned long long _subscriptionStatusObservationCount;
	unsigned long long _URLBagObservationCount;

}

@property (nonatomic,readonly) SSVPlaybackLease * _existingPlaybackLease; 
@property (nonatomic,readonly) SSVFairPlaySubscriptionStatus * lastKnownFairPlaySubscriptionStatus; 
@property (nonatomic,readonly) unsigned long long matchStatus; 
@property (getter=isSubscriptionAvailable,nonatomic,readonly) BOOL subscriptionAvailable; 
@property (nonatomic,copy,readonly) SSVSubscriptionStatus * subscriptionStatus; 
@property (nonatomic,readonly) BOOL shouldPlaybackRequireSubscriptionLease; 
@property (getter=isCloudLibraryEnabled,nonatomic,readonly) BOOL cloudLibraryEnabled; 
@property (getter=isPurchaseHistoryEnabled,nonatomic,readonly) BOOL purchaseHistoryEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(BOOL)isPurchaseHistoryEnabled;
-(BOOL)isCloudLibraryEnabled;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)endAutomaticallyRefreshingSubscriptionLease;
-(void)endObservingShouldPlaybackRequireSubscriptionLease;
-(void)endObservingSubscriptionLease;
-(void)endObservingSubscriptionStatus;
-(void)getSubscriptionStatusWithOptions:(id)arg1 statusBlock:(/*^block*/id)arg2 ;
-(void)acquireSubscriptionLeaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)refreshSubscriptionLeaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)beginObservingSubscriptionLease;
-(void)beginObservingSubscriptionStatus;
-(void)beginObservingShouldPlaybackRequireSubscriptionLease;
-(void)getFairPlaySubscriptionStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginAutomaticallyRefreshingSubscriptionLease;
-(BOOL)shouldPlaybackRequireSubscriptionLease;
-(SSVSubscriptionStatus *)subscriptionStatus;
-(void)_endUsingSubscriptionLease;
-(void)_beginUsingSubscriptionLeaseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateSubscriptionInformationWithEndReasonType:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(SSVFairPlaySubscriptionStatus *)lastKnownFairPlaySubscriptionStatus;
-(void)performSubscriptionSecureKeyDeliveryRequestOperation:(id)arg1 ;
-(void)_userIdentityStoreDidChange:(id)arg1 ;
-(BOOL)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(BOOL*)arg1 ;
-(void)_updateWithURLBagDictionary:(id)arg1 ;
-(id)_subscriptionOperationQueue;
-(BOOL)_currentCloudLibraryEnabled;
-(BOOL)_currentPurchaseHistoryEnabled;
-(id)_fairPlaySubscriptionController;
-(void)_fairPlaySubscriptionControllerSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_updateMatchStatus;
-(void)_updateForNetworkReachabilityObserversCountChange;
-(void)_beginObservingURLBag;
-(void)_endObservingURLBag;
-(void)_getCurrentFairPlaySubscriptionStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setHasSubscriptionLease:(BOOL)arg1 endReasonType:(unsigned long long)arg2 ;
-(id)_activeAccount;
-(void)bagDidChange:(id)arg1 ;
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3 ;
-(void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned long long)arg2 ;
-(BOOL)isSubscriptionAvailable;
-(unsigned long long)matchStatus;
-(void)beginObservingCloudLibraryEnabled;
-(void)beginObservingFairPlaySubscriptionStatus;
-(void)beginObservingMatchStatus;
-(void)beginObservingPurchaseHistoryEnabled;
-(void)beginObservingSubscriptionAvailability;
-(void)endObservingCloudLibraryEnabled;
-(void)endObservingFairPlaySubscriptionStatus;
-(void)endObservingMatchStatus;
-(void)endObservingPurchaseHistoryEnabled;
-(void)endObservingSubscriptionAvailability;
-(void)getSubscriptionAssetWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)preheatSubscriptionLeaseRequestsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateWithExternalLeaseResponseError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_cloudClientAuthenticationDidChange;
-(SSVPlaybackLease *)_existingPlaybackLease;
-(id)init;
-(void)dealloc;
@end

