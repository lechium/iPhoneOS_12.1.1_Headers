/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACHWorkoutEvaluationWorkoutProperties;

@interface ACHWorkoutEvaluationEnvironment : NSObject {

	ACHWorkoutEvaluationWorkoutProperties* _workout;
	unsigned long long _numberOfFirstPartyWorkoutsOver5MinutesWithType;
	unsigned long long _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
	double _bestKilocaloriesForType;

}

@property (nonatomic,readonly) ACHWorkoutEvaluationWorkoutProperties * workout;                                                 //@synthesize workout=_workout - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesWithType;                               //@synthesize numberOfFirstPartyWorkoutsOver5MinutesWithType=_numberOfFirstPartyWorkoutsOver5MinutesWithType - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;              //@synthesize numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek=_numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek - In the implementation block
@property (nonatomic,readonly) double bestKilocaloriesForType;                                                                  //@synthesize bestKilocaloriesForType=_bestKilocaloriesForType - In the implementation block
-(ACHWorkoutEvaluationWorkoutProperties *)workout;
-(unsigned long long)numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
-(id)initWithWorkout:(id)arg1 numberOfFirstPartyWorkoutsOver5MinutesWithType:(unsigned long long)arg2 numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek:(unsigned long long)arg3 bestKilocaloriesForType:(double)arg4 ;
-(unsigned long long)numberOfFirstPartyWorkoutsOver5MinutesWithType;
-(double)bestKilocaloriesForType;
@end

