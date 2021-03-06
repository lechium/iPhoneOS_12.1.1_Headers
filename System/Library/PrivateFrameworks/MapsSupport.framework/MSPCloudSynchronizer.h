/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/MSPJournaling.h>

@protocol MSPCloudAccess, MSPCloudSynchronizerDelegate;
@class MSPMapsPaths, NSOperationQueue, NSMutableArray, MSPJournal, NSTimer, NSDate, NSString;

@interface MSPCloudSynchronizer : NSObject <MSPJournaling> {

	id<MSPCloudAccess> _access;
	BOOL _started;
	MSPMapsPaths* _paths;
	atomic_flag _didScheduleInitialMerge;
	NSOperationQueue* _taskAttemptsQueue;
	BOOL _needsMerge;
	unsigned long long _countOfInFlightMerges;
	NSMutableArray* _mergeCompletionHandlers;
	MSPJournal* _journal;
	NSTimer* _identityRecheckTimer;
	unsigned long long _failedResolutionAttempts;
	NSDate* _minimumDateAfterTooManyFailedResolutionAttempts;
	long long _loginStatus;
	id<MSPCloudSynchronizerDelegate> _delegate;

}

@property (setter=_setLoginStatus:,getter=_loginStatus) long long loginStatus;              //@synthesize loginStatus=_loginStatus - In the implementation block
@property (assign,nonatomic,__weak) id<MSPCloudSynchronizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_minimumReattemptInterval;
+(double)_timeIntervalToWaitAfterTooManyResolutionAttempts;
+(long long)_maximumResolutionAttemptsCount;
+(long long)_qualityOfServiceForInitialDownload;
+(double)_batchingTimeInterval;
+(double)_identityRecheckInterval;
+(long long)_qualityOfServiceForOpportunisticTask;
+(long long)_qualityOfServiceForUserObservableTask;
+(long long)_boostedQualityOfServiceForOpportunisticTask;
+(long long)_boostedQualityOfServiceForUserObservableTask;
+(double)_timeIntervalToWaitBetweenBoosts;
-(long long)_loginStatus;
-(BOOL)shouldReportState:(id)arg1 ;
-(id)initWithAccess:(id)arg1 ;
-(long long)_boostIfNeededQualityOfServiceForTask:(id)arg1 thatIsUserObservable:(BOOL)arg2 ;
-(void)_availabilityDidChange;
-(void)_setLoginStatus:(long long)arg1 ;
-(void)_beginWaitingForAvailabilityAndStartQueueIfPossible;
-(void)_cancelAllOperationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setNeedsMergeForUserObservableChange:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNeedsMergeWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_scheduleMergeForUserObservableChange:(BOOL)arg1 ;
-(void)_scheduleMergeForUserObservableChange:(BOOL)arg1 isInitialMerge:(BOOL)arg2 ;
-(void)_enqueueOperation:(id)arg1 requireBeingLoggedIn:(BOOL)arg2 ;
-(id)_scheduleTaskIfAny:(id)arg1 isMerge:(BOOL)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_completeOperation:(id)arg1 isMerge:(BOOL)arg2 withError:(id)arg3 canReattempt:(BOOL)arg4 maxAttempts:(unsigned long long)arg5 minimumReattemptDate:(id)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)_wasTaskScheduledWhenTokenCreated:(id)arg1 ;
-(BOOL)_mergesAreSuspendedAfterTooManyFailedResolvingAttempts;
-(BOOL)_shouldContinueAfterFailingResolutionAttempt;
-(void)_taskThatIncludedResolutionAttemptSucceeded;
-(void)_resetTooManyResolvingAttemptsHolds;
-(id)_minimumReattemptDateForProposedDate:(id)arg1 ;
-(id)scheduleTask:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<MSPCloudSynchronizerDelegate>)arg1 ;
-(id<MSPCloudSynchronizerDelegate>)delegate;
-(void)stop;
-(void)start;
@end

