/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class HKRingsView, _HKShapeView, HKActivitySummary;

@interface HKActivityRingView : UIView {

	HKRingsView* _ringsView;
	_HKShapeView* _maskView;
	BOOL _shouldBypassApplicationStateChecking;
	HKActivitySummary* _activitySummary;
	double _ringInsetPercentage;
	double _emptyRingAlpha;

}

@property (assign,setter=_setRingInsetPercentage:,getter=_ringInsetPercentage,nonatomic) double ringInsetPercentage;                                                               //@synthesize ringInsetPercentage=_ringInsetPercentage - In the implementation block
@property (assign,setter=_setEmptyRingAlpha:,getter=_emptyRingAlpha,nonatomic) double emptyRingAlpha;                                                                              //@synthesize emptyRingAlpha=_emptyRingAlpha - In the implementation block
@property (assign,setter=_setShouldBypassApplicationStateChecking:,getter=_shouldBypassApplicationStateChecking,nonatomic) BOOL shouldBypassApplicationStateChecking;              //@synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;                                                                                                                  //@synthesize activitySummary=_activitySummary - In the implementation block
+(id)_iconSpriteImage;
-(void)_setUpAfterInit;
-(void)_setUpRingsView;
-(void)_updateMaskPath;
-(double)_emptyRingAlpha;
-(void)_updateRingsViewDiameter;
-(void)_updateRingsViewDiameterLegacy;
-(void)_setRingDiameter:(double)arg1 ringInterspacing:(double)arg2 ringThickness:(double)arg3 ;
-(void)_updateAndInterpolateRingsViewDiameterForWidth:(double)arg1 lowerDirective:(id)arg2 higherDirective:(id)arg3 ;
-(void)_setEmptyRingAlpha:(double)arg1 ;
-(void)_setShouldBypassApplicationStateChecking:(BOOL)arg1 ;
-(void)_displayIcons;
-(double)_ringInsetPercentage;
-(void)_setRingInsetPercentage:(double)arg1 ;
-(BOOL)_shouldBypassApplicationStateChecking;
-(HKActivitySummary *)activitySummary;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(void)setActivitySummary:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setActivityRingViewBackgroundTransparent:(BOOL)arg1 ;
-(void)_setActivityRingViewBackgroundColor:(id)arg1 ;
-(void)_setActivitySummary:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)_ringDiameter;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(id)_snapshotImage;
@end

