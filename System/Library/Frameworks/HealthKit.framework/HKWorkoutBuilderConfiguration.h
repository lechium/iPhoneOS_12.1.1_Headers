/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, HKWorkoutConfiguration, HKQuantity, NSUUID;

@interface HKWorkoutBuilderConfiguration : HKTaskConfiguration {

	BOOL _shouldCollectWorkoutEvents;
	HKDevice* _device;
	HKWorkoutConfiguration* _workoutConfiguration;
	unsigned long long _goalType;
	HKQuantity* _goal;
	NSUUID* _associatedSessionUUID;

}

@property (nonatomic,copy) HKDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long goalType;                              //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,copy) HKQuantity * goal;                                          //@synthesize goal=_goal - In the implementation block
@property (nonatomic,copy) NSUUID * associatedSessionUUID;                             //@synthesize associatedSessionUUID=_associatedSessionUUID - In the implementation block
@property (assign,nonatomic) BOOL shouldCollectWorkoutEvents;                          //@synthesize shouldCollectWorkoutEvents=_shouldCollectWorkoutEvents - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAssociatedSessionUUID:(NSUUID *)arg1 ;
-(void)setShouldCollectWorkoutEvents:(BOOL)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(HKDevice *)device;
-(void)setWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 ;
-(void)setGoalType:(unsigned long long)arg1 ;
-(void)setGoal:(HKQuantity *)arg1 ;
-(unsigned long long)goalType;
-(HKQuantity *)goal;
-(void)setDevice:(HKDevice *)arg1 ;
-(NSUUID *)associatedSessionUUID;
-(BOOL)shouldCollectWorkoutEvents;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

