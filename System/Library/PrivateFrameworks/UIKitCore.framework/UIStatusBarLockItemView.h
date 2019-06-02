/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, _UIStatusBarLockItemPadlockView, _UIExpandingGlyphsView, NSString;

@interface UIStatusBarLockItemView : UIStatusBarItemView <CAAnimationDelegate> {

	BOOL _alongsideViewIsBecomingVisible;
	int _animationCount;
	UIView* _viewToAnimateAlongside;
	_UIStatusBarLockItemPadlockView* _padlockView;
	UIView* _textClippingView;
	_UIExpandingGlyphsView* _textView;
	double _padlockViewCenterOffsetFromForegroundViewCenter;
	UIView* _timeItemSnapshot;
	double _timeItemSnapshotCenterOffsetFromForegroundViewCenter;
	double _widthNeededDuringAnimation;
	double _widthNeededForFinalState;
	/*^block*/id _animationCompletionBlock;

}

@property (nonatomic,retain) _UIStatusBarLockItemPadlockView * padlockView;                            //@synthesize padlockView=_padlockView - In the implementation block
@property (nonatomic,retain) UIView * textClippingView;                                                //@synthesize textClippingView=_textClippingView - In the implementation block
@property (nonatomic,retain) _UIExpandingGlyphsView * textView;                                        //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) double padlockViewCenterOffsetFromForegroundViewCenter;                   //@synthesize padlockViewCenterOffsetFromForegroundViewCenter=_padlockViewCenterOffsetFromForegroundViewCenter - In the implementation block
@property (nonatomic,retain) UIView * timeItemSnapshot;                                                //@synthesize timeItemSnapshot=_timeItemSnapshot - In the implementation block
@property (assign,nonatomic) double timeItemSnapshotCenterOffsetFromForegroundViewCenter;              //@synthesize timeItemSnapshotCenterOffsetFromForegroundViewCenter=_timeItemSnapshotCenterOffsetFromForegroundViewCenter - In the implementation block
@property (assign,nonatomic) double widthNeededDuringAnimation;                                        //@synthesize widthNeededDuringAnimation=_widthNeededDuringAnimation - In the implementation block
@property (assign,nonatomic) double widthNeededForFinalState;                                          //@synthesize widthNeededForFinalState=_widthNeededForFinalState - In the implementation block
@property (assign,nonatomic) int animationCount;                                                       //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,copy) id animationCompletionBlock;                                                //@synthesize animationCompletionBlock=_animationCompletionBlock - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewToAnimateAlongside;                                   //@synthesize viewToAnimateAlongside=_viewToAnimateAlongside - In the implementation block
@property (assign,nonatomic) BOOL alongsideViewIsBecomingVisible;                                      //@synthesize alongsideViewIsBecomingVisible=_alongsideViewIsBecomingVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)lockSlideAnimationDuration;
-(BOOL)_isAnimating;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(int)animationCount;
-(void)setAnimationCount:(int)arg1 ;
-(void)setTextView:(_UIExpandingGlyphsView *)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)updateContentsAndWidth;
-(id)accessibilityHUDRepresentation;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(void)jiggleCompletionBlock:(/*^block*/id)arg1 ;
-(void)_beginAnimation;
-(_UIStatusBarLockItemPadlockView *)padlockView;
-(UIView *)timeItemSnapshot;
-(void)setTimeItemSnapshot:(UIView *)arg1 ;
-(void)_endAnimation;
-(BOOL)isExclusive;
-(void)animateUnlockForegroundView:(id)arg1 timeItemSnapshot:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(UIView *)viewToAnimateAlongside;
-(void)setViewToAnimateAlongside:(UIView *)arg1 ;
-(BOOL)alongsideViewIsBecomingVisible;
-(void)setAlongsideViewIsBecomingVisible:(BOOL)arg1 ;
-(void)setPadlockView:(_UIStatusBarLockItemPadlockView *)arg1 ;
-(UIView *)textClippingView;
-(void)setTextClippingView:(UIView *)arg1 ;
-(_UIExpandingGlyphsView *)textView;
-(double)padlockViewCenterOffsetFromForegroundViewCenter;
-(void)setPadlockViewCenterOffsetFromForegroundViewCenter:(double)arg1 ;
-(double)timeItemSnapshotCenterOffsetFromForegroundViewCenter;
-(void)setTimeItemSnapshotCenterOffsetFromForegroundViewCenter:(double)arg1 ;
-(double)widthNeededDuringAnimation;
-(void)setWidthNeededDuringAnimation:(double)arg1 ;
-(double)widthNeededForFinalState;
-(void)setWidthNeededForFinalState:(double)arg1 ;
-(id)animationCompletionBlock;
-(void)setAnimationCompletionBlock:(id)arg1 ;
@end

