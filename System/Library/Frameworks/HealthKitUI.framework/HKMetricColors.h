/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKitUI/HealthKitUI-Structs.h>
@class UIColor, NSString;

@interface HKMetricColors : NSObject {

	UIColor* _gradientLightColor;
	UIColor* _gradientDarkColor;
	UIColor* _adjustmentButtonBackgroundColor;
	UIColor* _nonGradientTextColor;
	UIColor* _buttonTextColor;
	UIColor* _buttonDisabledTextColor;
	UIColor* _valueDisplayColor;
	NSString* _workoutRingColorIdentifier;

}

@property (nonatomic,retain) UIColor * gradientLightColor;                           //@synthesize gradientLightColor=_gradientLightColor - In the implementation block
@property (nonatomic,retain) UIColor * gradientDarkColor;                            //@synthesize gradientDarkColor=_gradientDarkColor - In the implementation block
@property (nonatomic,retain) UIColor * adjustmentButtonBackgroundColor;              //@synthesize adjustmentButtonBackgroundColor=_adjustmentButtonBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * nonGradientTextColor;                         //@synthesize nonGradientTextColor=_nonGradientTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                              //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonDisabledTextColor;                      //@synthesize buttonDisabledTextColor=_buttonDisabledTextColor - In the implementation block
@property (nonatomic,retain) UIColor * valueDisplayColor;                            //@synthesize valueDisplayColor=_valueDisplayColor - In the implementation block
@property (nonatomic,retain) NSString * workoutRingColorIdentifier;                  //@synthesize workoutRingColorIdentifier=_workoutRingColorIdentifier - In the implementation block
+(id)clockColors;
+(id)distanceColors;
+(id)elapsedTimeColors;
+(id)heartRateColors;
+(id)paceColors;
+(id)noMetricColors;
+(id)energyColors;
+(id)briskColors;
+(id)sedentaryColors;
+(CGGradientRef)newGradientForStartColor:(id)arg1 endColor:(id)arg2 ;
+(id)keyColors;
+(id)systemGrayTextColor;
+(id)metricColorsForGoalTypeIdentifier:(unsigned long long)arg1 ;
-(void)setGradientLightColor:(UIColor *)arg1 ;
-(void)setGradientDarkColor:(UIColor *)arg1 ;
-(void)setNonGradientTextColor:(UIColor *)arg1 ;
-(void)setAdjustmentButtonBackgroundColor:(UIColor *)arg1 ;
-(void)setButtonDisabledTextColor:(UIColor *)arg1 ;
-(void)setValueDisplayColor:(UIColor *)arg1 ;
-(void)setWorkoutRingColorIdentifier:(NSString *)arg1 ;
-(UIColor *)buttonDisabledTextColor;
-(UIColor *)valueDisplayColor;
-(NSString *)workoutRingColorIdentifier;
-(UIColor *)buttonTextColor;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(UIColor *)nonGradientTextColor;
-(UIColor *)gradientDarkColor;
-(UIColor *)gradientLightColor;
-(UIColor *)adjustmentButtonBackgroundColor;
@end

