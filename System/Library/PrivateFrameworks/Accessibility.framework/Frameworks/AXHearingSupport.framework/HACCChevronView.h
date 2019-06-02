/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface HACCChevronView : UIView {

	UIView* _leftGrabberView;
	UIView* _rightGrabberView;
	double _animationDuration;
	long long _state;
	UIColor* _color;
	double _alphaComponent;
	UIView* _tintView;
	UIView* _backgroundView;
	BOOL _unified;
	UIView* _alphaContainerView;

}

@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
-(BOOL)_setUnified:(BOOL)arg1 ;
-(void)_layoutGrabberView:(id)arg1 forState:(long long)arg2 ;
-(CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(BOOL)arg3 ;
-(CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)configureForLightStyle;
-(id)description;
-(long long)state;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setState:(long long)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(BOOL)_setState:(long long)arg1 ;
-(id)initWithColor:(id)arg1 ;
@end

