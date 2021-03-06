/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, CAMStageLightOverlayCircleView, CAGradientLayer, CAMStageLightAnimator;

@interface CAMStageLightOverlayView : UIView {

	BOOL _active;
	BOOL _visible;
	long long _orientation;
	double _bottomContentInset;
	UIView* __tintView;
	UIImageView* __vignetteView;
	CAMStageLightOverlayCircleView* __circleView;
	unsigned long long __activeTimerID;
	CAGradientLayer* __gradientLayer;
	CAMStageLightAnimator* __animator;

}

@property (nonatomic,readonly) UIView * _tintView;                                                     //@synthesize _tintView=__tintView - In the implementation block
@property (nonatomic,readonly) UIImageView * _vignetteView;                                            //@synthesize _vignetteView=__vignetteView - In the implementation block
@property (nonatomic,readonly) CAMStageLightOverlayCircleView * _circleView;                           //@synthesize _circleView=__circleView - In the implementation block
@property (assign,setter=_setActiveTimerID:,nonatomic) unsigned long long _activeTimerID;              //@synthesize _activeTimerID=__activeTimerID - In the implementation block
@property (nonatomic,readonly) CAGradientLayer * _gradientLayer;                                       //@synthesize _gradientLayer=__gradientLayer - In the implementation block
@property (setter=_setAnimator:,nonatomic,retain) CAMStageLightAnimator * _animator;                   //@synthesize _animator=__animator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                              //@synthesize active=_active - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible;                                            //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) long long orientation;                                                    //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double bottomContentInset;                                                //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
+(CGRect)circleFrameForBounds:(CGRect)arg1 orientation:(long long)arg2 bottomContentInset:(double)arg3 ;
+(BOOL)_useLargeLayoutForBounds:(CGRect)arg1 ;
+(double)_circleDiameterForBounds:(CGRect)arg1 orientation:(long long)arg2 ;
-(UIView *)_tintView;
-(void)setBottomContentInset:(double)arg1 ;
-(double)bottomContentInset;
-(void)_updateShadowViewsAnimated:(BOOL)arg1 ;
-(void)_updateAnimatorState;
-(CAMStageLightOverlayCircleView *)_circleView;
-(CGRect)_circleFrameForOrientation:(long long)arg1 ;
-(UIImageView *)_vignetteView;
-(unsigned long long)_activeTimerID;
-(void)_setActiveTimerID:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(BOOL)isVisible;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(CAMStageLightAnimator *)_animator;
-(void)_setAnimator:(id)arg1 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(CAGradientLayer *)_gradientLayer;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

