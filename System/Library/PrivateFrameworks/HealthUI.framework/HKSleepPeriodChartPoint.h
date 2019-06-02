/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@class NSArray, NSDate, NSNumber, HKSleepChartPointUserInfo, NSString;

@interface HKSleepPeriodChartPoint : NSObject <HKChartPoint> {

	BOOL _highlighted;
	NSArray* _asleepOffsets;
	NSArray* _inBedOffsets;
	NSDate* _xValue;
	NSNumber* _upperGoal;
	NSNumber* _lowerGoal;
	HKSleepChartPointUserInfo* _userInfo;

}

@property (nonatomic,retain) NSArray * asleepOffsets;                           //@synthesize asleepOffsets=_asleepOffsets - In the implementation block
@property (nonatomic,retain) NSArray * inBedOffsets;                            //@synthesize inBedOffsets=_inBedOffsets - In the implementation block
@property (nonatomic,retain) NSDate * xValue;                                   //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,retain) NSNumber * upperGoal;                              //@synthesize upperGoal=_upperGoal - In the implementation block
@property (nonatomic,retain) NSNumber * lowerGoal;                              //@synthesize lowerGoal=_lowerGoal - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) HKSleepChartPointUserInfo * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)xValueAsGenericType;
-(id)allYValues;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(NSNumber *)upperGoal;
-(NSNumber *)lowerGoal;
-(NSArray *)asleepOffsets;
-(NSArray *)inBedOffsets;
-(void)setAsleepOffsets:(NSArray *)arg1 ;
-(void)setInBedOffsets:(NSArray *)arg1 ;
-(void)setUpperGoal:(NSNumber *)arg1 ;
-(void)setLowerGoal:(NSNumber *)arg1 ;
-(NSDate *)xValue;
-(void)setXValue:(NSDate *)arg1 ;
-(id)yValue;
-(HKSleepChartPointUserInfo *)userInfo;
-(void)setUserInfo:(HKSleepChartPointUserInfo *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
@end

