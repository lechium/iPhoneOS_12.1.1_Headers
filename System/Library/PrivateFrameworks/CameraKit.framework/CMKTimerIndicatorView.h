/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, CMKAnimationDelegate;

@interface CMKTimerIndicatorView : UIView {

	BOOL __performingStyleAnimation;
	long long _style;
	UIView* __dimmingView;
	UILabel* __countdownLabel;
	long long __startingTicks;
	long long __remainingTicks;
	long long __labelOrientation;
	CMKAnimationDelegate* __animationDelegate;
	long long __deferredLabelOrientation;

}

@property (nonatomic,readonly) UIView * _dimmingView;                                                                                             //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (nonatomic,readonly) UILabel * _countdownLabel;                                                                                         //@synthesize _countdownLabel=__countdownLabel - In the implementation block
@property (nonatomic,readonly) long long _startingTicks;                                                                                          //@synthesize _startingTicks=__startingTicks - In the implementation block
@property (nonatomic,readonly) long long _remainingTicks;                                                                                         //@synthesize _remainingTicks=__remainingTicks - In the implementation block
@property (assign,setter=_setLabelOrientation:,nonatomic) long long _labelOrientation;                                                            //@synthesize _labelOrientation=__labelOrientation - In the implementation block
@property (nonatomic,readonly) CMKAnimationDelegate * _animationDelegate;                                                                         //@synthesize _animationDelegate=__animationDelegate - In the implementation block
@property (assign,setter=_setPerformingStyleAnimation:,getter=_isPerformingStyleAnimation,nonatomic) BOOL _performingStyleAnimation;              //@synthesize _performingStyleAnimation=__performingStyleAnimation - In the implementation block
@property (assign,setter=_setDeferredOrientation:,nonatomic) long long _deferredLabelOrientation;                                                 //@synthesize _deferredLabelOrientation=__deferredLabelOrientation - In the implementation block
@property (assign,nonatomic) long long style;                                                                                                     //@synthesize style=_style - In the implementation block
-(void)cam_rotateWithDeviceOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_commonCMKTimerIndicatorViewInitialization;
-(void)stopCountdown;
-(void)resetWithNumberOfTicks:(long long)arg1 ;
-(void)startCountdownWithAnimationDelegate:(id)arg1 ;
-(id)_fontForStyle:(long long)arg1 ;
-(void)_updateCountdownLabelWithTicksRemaining;
-(void)_layoutCountdownLabelForStyle:(long long)arg1 ;
-(CGRect)_landscapeSwapBoundsCoordinates:(CGRect)arg1 ;
-(BOOL)_isPerformingStyleAnimation;
-(void)_layoutCountdownLabelForSmallStyle;
-(void)_layoutCountdownLabelForLargeStyle;
-(void)_updateFromChangeToStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setPerformingStyleAnimation:(BOOL)arg1 ;
-(void)_transitionDimmingViewFromStyle:(long long)arg1 ;
-(long long)_deferredLabelOrientation;
-(void)_handleOrientationChange:(long long)arg1 ;
-(void)_setDeferredOrientation:(long long)arg1 ;
-(void)_addDecrementAnimationForTick:(long long)arg1 ;
-(void)_addDimmingAnimationForTick:(long long)arg1 ;
-(id)_decrementAnimationForTick:(long long)arg1 ;
-(id)_dimmingAnimationForTick:(long long)arg1 ;
-(id)_finalDimmingAnimation;
-(void)_setLabelOrientation:(long long)arg1 ;
-(UILabel *)_countdownLabel;
-(long long)_startingTicks;
-(long long)_remainingTicks;
-(long long)_labelOrientation;
-(CMKAnimationDelegate *)_animationDelegate;
-(void)decrement;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(void)layoutSubviews;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(UIView *)_dimmingView;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
@end

