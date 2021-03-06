/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, UIImageView, CMKTimelapseShutterRingView, UIActivityIndicatorView;

@interface CMKShutterButton : UIButton {

	BOOL _pulsing;
	BOOL _spinning;
	BOOL _showDisabled;
	long long _buttonMode;
	UIView* __outerView;
	UIImageView* __outerImageView;
	CMKTimelapseShutterRingView* __timelapseOuterView;
	UIView* __innerView;
	UIActivityIndicatorView* __progressActivityIndicatorView;
	CMKShutterButtonSpec _spec;

}

@property (assign,setter=_setSpec:,nonatomic) CMKShutterButtonSpec spec;                              //@synthesize spec=_spec - In the implementation block
@property (nonatomic,readonly) UIView * _outerView;                                                   //@synthesize _outerView=__outerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _outerImageView;                                         //@synthesize _outerImageView=__outerImageView - In the implementation block
@property (nonatomic,readonly) CMKTimelapseShutterRingView * _timelapseOuterView;                     //@synthesize _timelapseOuterView=__timelapseOuterView - In the implementation block
@property (nonatomic,readonly) UIView * _innerView;                                                   //@synthesize _innerView=__innerView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * _progressActivityIndicatorView;              //@synthesize _progressActivityIndicatorView=__progressActivityIndicatorView - In the implementation block
@property (assign,nonatomic) long long buttonMode;                                                    //@synthesize buttonMode=_buttonMode - In the implementation block
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing;                                           //@synthesize pulsing=_pulsing - In the implementation block
@property (assign,getter=isSpinning,nonatomic) BOOL spinning;                                         //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) BOOL showDisabled;                                                       //@synthesize showDisabled=_showDisabled - In the implementation block
+(id)shutterButtonWithDesiredSpec:(CMKShutterButtonSpec)arg1 ;
+(id)tinyShutterButton;
+(id)shutterButton;
+(id)smallShutterButton;
-(void)setButtonMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_commonCMKShutterButtonInitialization;
-(id)_outerImageForMode:(long long)arg1 ;
-(double)_borderWidthForMode:(long long)arg1 ;
-(id)_colorForMode:(long long)arg1 ;
-(UIActivityIndicatorView *)_progressActivityIndicatorView;
-(void)_setSpec:(CMKShutterButtonSpec)arg1 ;
-(void)setShowDisabled:(BOOL)arg1 ;
-(void)_updateOuterAndInnerLayers;
-(UIView *)_innerView;
-(CGSize)_sizeForMode:(long long)arg1 ;
-(double)_cornerRadiusForMode:(long long)arg1 ;
-(void)_performHighlightAnimation;
-(void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_updateSpinningAnimations;
-(double)_innerCircleDiameter;
-(BOOL)_isStopMode:(long long)arg1 ;
-(BOOL)_shouldUseImageViewForMode:(long long)arg1 ;
-(BOOL)_shouldUseTimelapseOuterViewForMode:(long long)arg1 ;
-(UIImageView *)_outerImageView;
-(CMKTimelapseShutterRingView *)_timelapseOuterView;
-(BOOL)showDisabled;
-(BOOL)isPulsing;
-(void)setPulsing:(BOOL)arg1 ;
-(long long)buttonMode;
-(void)setButtonMode:(long long)arg1 ;
-(BOOL)isSpinning;
-(UIView *)_outerView;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setSpinning:(BOOL)arg1 ;
-(CMKShutterButtonSpec)spec;
@end

