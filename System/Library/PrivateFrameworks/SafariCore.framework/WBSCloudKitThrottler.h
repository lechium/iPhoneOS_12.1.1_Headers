/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSCloudKitThrottlerDataStore;
@class NSMutableArray, NSArray;

@interface WBSCloudKitThrottler : NSObject {

	NSMutableArray* _pastOperationsWithinMonitoredPeriod;
	NSArray* _throttlingDistribution;
	double _numberOfSecondsToMonitor;
	unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
	id<WBSCloudKitThrottlerDataStore> _dataStore;

}

@property (nonatomic,retain) id<WBSCloudKitThrottlerDataStore> dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
+(id)_distributionBucketsFromConfiguration:(id)arg1 ;
+(BOOL)policyStringRepresentsValidPolicy:(id)arg1 ;
-(void)setDataStore:(id<WBSCloudKitThrottlerDataStore>)arg1 ;
-(void)_loadRecordOfPastOperations;
-(void)_pruneExpiredOrInvalidOperations;
-(id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
-(void)_addOperationAtDate:(id)arg1 ;
-(void)_saveRecordOfPastOperations;
-(double)_currentMinimumTimeIntervalBetweenOperations;
-(BOOL)_loadDistributionConfiguration:(id)arg1 ;
-(double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
-(double)_minimumTimeBetweenOperationsForOperations:(id)arg1 ;
-(double)_timeIntervalUntilOperationShouldBePruned:(id)arg1 ;
-(BOOL)_throttlerIsActive;
-(double)_test_numberOfSecondsToMonitor;
-(unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
-(id)initWithPolicyString:(id)arg1 ;
-(id)dateOfNextPermittedOperationWithPriority:(long long)arg1 ;
-(void)operationWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2 ;
-(BOOL)permitsOperationWithPriority:(long long)arg1 ;
-(void)setPolicyString:(id)arg1 ;
-(void)reloadRecordOfPastOperations;
-(id<WBSCloudKitThrottlerDataStore>)dataStore;
-(id)init;
-(id)description;
@end

