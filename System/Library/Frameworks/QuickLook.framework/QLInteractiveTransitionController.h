/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLTransitionController.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@class NSString;

@interface QLInteractiveTransitionController : QLTransitionController <UIViewControllerInteractiveTransitioning> {

	double _initialTransitioningViewWidth;
	double _completeProgress;

}

@property (assign,nonatomic) double completeProgress;                   //@synthesize completeProgress=_completeProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)updateTransitionWithProgress:(double)arg1 ;
-(void)completeTransition:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)setCompleteProgress:(double)arg1 ;
-(void)updateTransitionWithProgress:(double)arg1 isFinal:(BOOL)arg2 ;
-(double)completeProgress;
-(double)transitionDuration:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
@end

