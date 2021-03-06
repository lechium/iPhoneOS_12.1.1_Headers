/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, HKQuantity;

@interface FIUIWorkoutSegment : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	HKQuantity* _activeEnergy;
	HKQuantity* _distance;
	double _elapsedTime;

}

@property (nonatomic,copy) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergy;              //@synthesize activeEnergy=_activeEnergy - In the implementation block
@property (nonatomic,retain) HKQuantity * distance;                  //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double elapsedTime;                     //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)_decimalNumberFormatter;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setElapsedTime:(double)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)formattedActiveEnergyValueForUnit:(id)arg1 ;
-(id)formattedDistanceValueForUnit:(id)arg1 ;
-(id)formattedDurationValueWithFormattingManager:(id)arg1 ;
-(id)formattedPaceUsingFormatType:(long long)arg1 formattingManager:(id)arg2 ;
-(void)setActiveEnergy:(HKQuantity *)arg1 ;
-(HKQuantity *)activeEnergy;
-(id)description;
-(void)setDistance:(HKQuantity *)arg1 ;
-(HKQuantity *)distance;
-(double)elapsedTime;
@end

