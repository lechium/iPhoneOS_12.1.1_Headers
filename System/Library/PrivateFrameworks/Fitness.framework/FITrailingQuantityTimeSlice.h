/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDate, HKQuantityType, HKQuantity;

@interface FITrailingQuantityTimeSlice : NSObject {

	NSArray* _uncommittedSamples;
	NSArray* _committedSamples;
	NSDate* _lastCommitDate;
	BOOL _finalized;
	HKQuantityType* _quantityType;
	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _committedTotal;

}

@property (nonatomic,readonly) HKQuantityType * quantityType;                    //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * committedSamples;                       //@synthesize committedSamples=_committedSamples - In the implementation block
@property (nonatomic,readonly) BOOL finalized;                                   //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,readonly) HKQuantity * committedTotal;                      //@synthesize committedTotal=_committedTotal - In the implementation block
@property (nonatomic,readonly) double committedDuration; 
@property (nonatomic,readonly) HKQuantity * committedAndAddedTotal; 
-(BOOL)finalized;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 committedSamples:(id)arg4 uncommittedSamples:(id)arg5 lastCommitDate:(id)arg6 committedTotal:(id)arg7 finalized:(BOOL)arg8 ;
-(id)autoCommitDateForSamples:(id)arg1 ;
-(id)_commitingSamples:(id)arg1 toPreviousCommittedTotal:(id)arg2 toPreviousCommittedSamples:(id)arg3 untilDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 ;
-(id)committingUntilDate:(id)arg1 ;
-(id)settingStartDate:(id)arg1 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 ;
-(HKQuantity *)committedAndAddedTotal;
-(double)committedDuration;
-(double)activeDurationUntilDate:(id)arg1 ;
-(id)addingSample:(id)arg1 error:(id*)arg2 ;
-(id)addingSamples:(id)arg1 error:(id*)arg2 ;
-(id)settingEndDate:(id)arg1 ;
-(id)settingTotalQuantityLimit:(id)arg1 ;
-(NSArray *)committedSamples;
-(HKQuantity *)committedTotal;
-(id)_totalByCommittingSample:(id)arg1 toPreviousTotal:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(HKQuantityType *)quantityType;
-(id)description;
@end

