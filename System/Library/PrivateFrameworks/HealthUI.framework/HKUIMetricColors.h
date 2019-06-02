/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, HKGradient;

@interface HKUIMetricColors : NSObject {

	UIColor* _keyColor;
	HKGradient* _gradient;
	UIColor* _contextViewPrimaryTextColor;
	UIColor* _contextViewSecondaryTextColor;
	UIColor* _contextViewInfoButtonGlyphColor;
	UIColor* _contextViewInfoButtonBackgroundColor;
	HKGradient* _contentViewChartGradient;

}

@property (nonatomic,retain) UIColor * keyColor;                                          //@synthesize keyColor=_keyColor - In the implementation block
@property (nonatomic,retain) HKGradient * gradient;                                       //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) UIColor * contextViewPrimaryTextColor;                       //@synthesize contextViewPrimaryTextColor=_contextViewPrimaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewSecondaryTextColor;                     //@synthesize contextViewSecondaryTextColor=_contextViewSecondaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewInfoButtonGlyphColor;                   //@synthesize contextViewInfoButtonGlyphColor=_contextViewInfoButtonGlyphColor - In the implementation block
@property (nonatomic,retain) UIColor * contextViewInfoButtonBackgroundColor;              //@synthesize contextViewInfoButtonBackgroundColor=_contextViewInfoButtonBackgroundColor - In the implementation block
@property (nonatomic,retain) HKGradient * contentViewChartGradient;                       //@synthesize contentViewChartGradient=_contentViewChartGradient - In the implementation block
+(id)vitalsColors;
+(id)activityColors;
+(id)bodyMeasurementColors;
+(id)mindfulnessColors;
+(id)reproductiveHealthColors;
+(id)sleepColors;
+(id)resultsColors;
+(id)defaultContextViewColors;
+(id)workoutContextViewColors;
+(id)allergiesClinicalColors;
+(id)conditionsClinicalColors;
+(id)immunizationsClinicalColors;
+(id)labResultsClinicalColors;
+(id)medicationsClinicalColors;
+(id)proceduresClinicalColors;
+(id)vitalsClinicalColors;
+(id)unknownCategoryClinicalColors;
+(id)metricColorsForHeartRateContext:(long long)arg1 ;
-(UIColor *)contextViewPrimaryTextColor;
-(UIColor *)contextViewInfoButtonGlyphColor;
-(UIColor *)contextViewInfoButtonBackgroundColor;
-(UIColor *)contextViewSecondaryTextColor;
-(void)setKeyColor:(UIColor *)arg1 ;
-(void)setContextViewPrimaryTextColor:(UIColor *)arg1 ;
-(void)setContextViewSecondaryTextColor:(UIColor *)arg1 ;
-(void)setContextViewInfoButtonGlyphColor:(UIColor *)arg1 ;
-(void)setContextViewInfoButtonBackgroundColor:(UIColor *)arg1 ;
-(void)setContentViewChartGradient:(HKGradient *)arg1 ;
-(UIColor *)keyColor;
-(HKGradient *)contentViewChartGradient;
-(void)setGradient:(HKGradient *)arg1 ;
-(HKGradient *)gradient;
@end

