/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKWorkoutBuilder.h>

@protocol HKLiveWorkoutBuilderDelegate;
@class HKLiveWorkoutDataSource, NSArray, HKWorkoutSession;

@interface HKLiveWorkoutBuilder : HKWorkoutBuilder {

	HKLiveWorkoutDataSource* _dataSource;
	NSArray* _additionalDataSources;
	id<HKLiveWorkoutBuilderDelegate> _delegate;
	HKWorkoutSession* _workoutSession;

}

@property (retain) NSArray * additionalDataSources; 
@property (__weak) id<HKLiveWorkoutBuilderDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (__weak,readonly) HKWorkoutSession * workoutSession;              //@synthesize workoutSession=_workoutSession - In the implementation block
@property (assign) BOOL shouldCollectWorkoutEvents; 
@property (retain) HKLiveWorkoutDataSource * dataSource; 
@property (readonly) double elapsedTime; 
-(id)initWithHealthStore:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3 ;
-(void)_resourceQueue_updateElapsedTimeCache;
-(void)setShouldCollectWorkoutEvents:(BOOL)arg1 ;
-(id)initWithHealthStore:(id)arg1 session:(id)arg2 builderConfiguration:(id)arg3 builderIdentifier:(id)arg4 ;
-(void)setAdditionalDataSources:(NSArray *)arg1 ;
-(NSArray *)additionalDataSources;
-(HKWorkoutSession *)workoutSession;
-(void)connectionInterrupted;
-(BOOL)shouldCollectWorkoutEvents;
-(void)clientRemote_didUpdateMetadata:(id)arg1 ;
-(void)clientRemote_didUpdateStatistics:(id)arg1 ;
-(void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4 ;
-(void)setDelegate:(id<HKLiveWorkoutBuilderDelegate>)arg1 ;
-(id<HKLiveWorkoutBuilderDelegate>)delegate;
-(HKLiveWorkoutDataSource *)dataSource;
-(void)setDataSource:(HKLiveWorkoutDataSource *)arg1 ;
-(double)elapsedTime;
-(id)_privateDelegate;
@end
