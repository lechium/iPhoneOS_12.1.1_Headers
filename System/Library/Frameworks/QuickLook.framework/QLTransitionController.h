/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <libobjc.A.dylib/QLTransitionControllerProtocol.h>

@protocol QLCustomTransitioning, UIViewControllerContextTransitioning;
@class UIView, UINavigationController, QLTransitionContext, UIViewController, QLPreviewController, NSString;

@interface QLTransitionController : NSObject <UIViewControllerAnimatedTransitioning, QLTransitionControllerProtocol> {

	UIView* _transitionBackgroundView;
	UINavigationController* _disabledNavigationController;
	/*^block*/id _startTransitionBlock;
	BOOL _showing;
	QLTransitionContext* _quickLookTransitionContext;
	UIViewController*<QLCustomTransitioning> _animatedController;
	id<UIViewControllerContextTransitioning> _transitionContext;
	id _transitionDriver;
	double _duration;
	unsigned long long _transitionState;

}

@property (retain) QLTransitionContext * quickLookTransitionContext;                           //@synthesize quickLookTransitionContext=_quickLookTransitionContext - In the implementation block
@property (readonly) UIViewController * presenterViewController; 
@property (readonly) QLPreviewController * previewController; 
@property (readonly) UIViewController*<QLCustomTransitioning> animatedController;              //@synthesize animatedController=_animatedController - In the implementation block
@property (__weak) id<UIViewControllerContextTransitioning> transitionContext;                 //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) id transitionDriver;                                                      //@synthesize transitionDriver=_transitionDriver - In the implementation block
@property (assign) double duration;                                                            //@synthesize duration=_duration - In the implementation block
@property (assign) unsigned long long transitionState;                                         //@synthesize transitionState=_transitionState - In the implementation block
@property (assign) BOOL showing;                                                               //@synthesize showing=_showing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)transitionState;
-(void)tearDownTransition:(BOOL)arg1 ;
-(id)transitionDriver;
-(void)updateTransitionWithProgress:(double)arg1 ;
-(void)completeTransition:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)_view:(id)arg1 applyFrameFromTransitionContextAsFinalFrame:(BOOL)arg2 isToView:(BOOL)arg3 ;
-(void)setQuickLookTransitionContext:(QLTransitionContext *)arg1 ;
-(void)setTransitionState:(unsigned long long)arg1 ;
-(QLTransitionContext *)quickLookTransitionContext;
-(void)_performStartBlockIfNeeded;
-(void)_completeOverlayTransition:(BOOL)arg1 ;
-(void)_completeBackgroundTransition:(BOOL)arg1 ;
-(void)_performTransition;
-(void)setUpWithTransitionContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_updateOverlayTransitionWithProgress:(double)arg1 ;
-(void)_updateBackgroundTransitionWithProgress:(double)arg1 ;
-(SCD_Struct_QL4)_requiredVisualStateTransitions;
-(UIViewController*<QLCustomTransitioning>)animatedController;
-(double)transitionDuration:(id)arg1 ;
-(void)completeTransition:(BOOL)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(double)duration;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(QLPreviewController *)previewController;
-(UIViewController *)presenterViewController;
-(BOOL)showing;
-(void)setShowing:(BOOL)arg1 ;
@end

