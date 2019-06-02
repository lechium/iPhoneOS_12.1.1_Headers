/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HDWorkoutCondenserAnalyticsAccumulator : NSObject {

	BOOL _hasProcessedWorkout;
	long long _workoutsToCondense;
	long long _workoutsToRecondense;
	long long _condensedWorkouts;
	long long _processedWorkouts;
	long long _createdSeries;
	long long _deletedSamples;

}

@property (assign,nonatomic) long long workoutsToCondense;                //@synthesize workoutsToCondense=_workoutsToCondense - In the implementation block
@property (assign,nonatomic) long long workoutsToRecondense;              //@synthesize workoutsToRecondense=_workoutsToRecondense - In the implementation block
@property (assign,nonatomic) long long condensedWorkouts;                 //@synthesize condensedWorkouts=_condensedWorkouts - In the implementation block
@property (assign,nonatomic) long long processedWorkouts;                 //@synthesize processedWorkouts=_processedWorkouts - In the implementation block
@property (assign,nonatomic) long long createdSeries;                     //@synthesize createdSeries=_createdSeries - In the implementation block
@property (assign,nonatomic) long long deletedSamples;                    //@synthesize deletedSamples=_deletedSamples - In the implementation block
@property (assign,nonatomic) BOOL hasProcessedWorkout;                    //@synthesize hasProcessedWorkout=_hasProcessedWorkout - In the implementation block
-(long long)deletedSamples;
-(void)setDeletedSamples:(long long)arg1 ;
-(void)setWorkoutsToCondense:(long long)arg1 ;
-(void)setWorkoutsToRecondense:(long long)arg1 ;
-(void)setCondensedWorkouts:(long long)arg1 ;
-(void)setProcessedWorkouts:(long long)arg1 ;
-(void)setCreatedSeries:(long long)arg1 ;
-(long long)workoutsToCondense;
-(long long)workoutsToRecondense;
-(long long)condensedWorkouts;
-(long long)processedWorkouts;
-(long long)createdSeries;
-(void)setHasProcessedWorkout:(BOOL)arg1 ;
-(BOOL)hasProcessedWorkout;
-(id)init;
-(id)description;
@end

