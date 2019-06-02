/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCViewControllerAnimatedTransitioning.h>

@protocol NCBannerPresentationAnimatorDelegate;
@class UIGestureRecognizer, NSString;

@interface NCBannerPresentationAnimator : NSObject <NCViewControllerAnimatedTransitioning> {

	BOOL _presenting;
	id<NCBannerPresentationAnimatorDelegate> _transitionAnimatorDelegate;
	UIGestureRecognizer* _activeGesture;

}

@property (assign,nonatomic,__weak) id<NCBannerPresentationAnimatorDelegate> transitionAnimatorDelegate;              //@synthesize transitionAnimatorDelegate=_transitionAnimatorDelegate - In the implementation block
@property (assign,getter=isPresenting,nonatomic) BOOL presenting;                                                     //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * activeGesture;                                                     //@synthesize activeGesture=_activeGesture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIGestureRecognizer *)activeGesture;
-(void)setActiveGesture:(UIGestureRecognizer *)arg1 ;
-(void)setTransitionAnimatorDelegate:(id<NCBannerPresentationAnimatorDelegate>)arg1 ;
-(void)_animatePresentationOfViewController:(id)arg1 withContext:(id)arg2 ;
-(void)_animateDismissalOfViewController:(id)arg1 withContext:(id)arg2 ;
-(id<NCBannerPresentationAnimatorDelegate>)transitionAnimatorDelegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(BOOL)isPresenting;
-(void)setPresenting:(BOOL)arg1 ;
@end

