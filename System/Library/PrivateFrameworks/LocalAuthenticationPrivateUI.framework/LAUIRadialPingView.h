/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LocalAuthenticationPrivateUI/LocalAuthenticationPrivateUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView;

@interface LAUIRadialPingView : UIView {

	UIColor* _color;
	UIView* _container;
	UIView* _primary;
	array<(anonymous namespace)::blur_container, 2> _blurs;
	periodic_animation_state _pulse;
	BOOL _animating_dirty;
	unsigned char _animating_counter;
	BOOL _animating;

}

@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
-(void)_updateViewsWithColor;
-(void)_updateAnimatingAnimated:(BOOL)arg1 ;
-(void)_updateExpandForBlurAtIndex:(unsigned long long)arg1 withDelay:(double)arg2 ;
-(void)_startExpandWithDelay:(double)arg1 ;
-(void)_endExpand;
-(void)_attachPulseAnimationWithDelay:(double)arg1 ;
-(void)_attachExpandAnimationToContainer:(blur_container*)arg1 withDelay:(double)arg2 ;
-(void)_setPulse:(BOOL)arg1 withDelay:(double)arg2 ;
-(void)_setExpand:(BOOL)arg1 forBlurAtIndex:(unsigned long long)arg2 withDelay:(double)arg3 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
@end

