/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITabBarControllerInterruptibleTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class NSString;

@interface _UITabBarTVTransitioner : NSObject <_UITabBarControllerInterruptibleTransitioning> {

	BOOL _transitionFromRight;
	id<UIViewControllerContextTransitioning> _transitionContext;

}

@property (assign,nonatomic) BOOL transitionFromRight;                                                //@synthesize transitionFromRight=_transitionFromRight - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)setTransitionFromRight:(BOOL)arg1 ;
-(void)interruptTabBarControllerTransition;
-(void)finishTransition;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(BOOL)transitionFromRight;
@end

