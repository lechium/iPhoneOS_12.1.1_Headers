/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, CAKeyframeAnimation, UIColor;

@interface CMKFocusView : UIView {

	NSArray* _images;
	CAKeyframeAnimation* _contentsAnimation;
	CAKeyframeAnimation* _boundsAnimation;
	double _animationStartTime;
	double _lastInteractionTime;
	BOOL _fadingOut;
	long long _suspendCount;
	BOOL _shouldFadeOut;
	BOOL _fadeOutStarted;
	double _lastFadeOutTime;
	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) double lastFadeOutTime;              //@synthesize lastFadeOutTime=_lastFadeOutTime - In the implementation block
+(double)minimumTimeBeforeFadeOut;
-(id)nameForLightImage;
-(id)nameForDarkImage;
-(double)dimAfterInteractionDelay;
-(void)_loadImagesWithColor:(id)arg1 imageSize:(CGSize*)arg2 ;
-(void)startAnimatingContents:(BOOL)arg1 bounds:(BOOL)arg2 fadeIn:(BOOL)arg3 ;
-(void)_cancelDelayedFadeOut;
-(id)_createContentsAnimation;
-(id)_createBoundsAnimation;
-(void)_fadeOutDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)resetFadeOutSuspension;
-(void)_cancelDelayedPauseContentsAnimation;
-(void)_fadeOutIfNeeded;
-(void)_pauseContentsAnimation;
-(void)_dimForInactivity;
-(BOOL)_cancelFadeOutForSuspend;
-(void)_animateAlpha:(double)arg1 withDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopContentsAnimation;
-(void)setDefaultContents;
-(void)focusDidEnd;
-(void)cancelFadeOut;
-(void)suspendFadeOut;
-(void)resumeFadeOutResetPending:(BOOL)arg1 ;
-(double)lastFadeOutTime;
-(void)_fadeOut;
-(void)updateLastInteractionTime;
-(void)_cancelDelayedDim;
-(void)_scheduleDelayedDim;
-(id)init;
-(void)dealloc;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(id)initWithColor:(id)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
@end

