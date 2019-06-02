/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIForceInteractionController.h>

@protocol UIViewControllerContextTransitioning;
@class UIInteractionProgress, NSDictionary, _UIStatesFeedbackGenerator, NSMutableDictionary, NSString;

@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition <UIInteractionProgressObserver, UIViewControllerAnimatedTransitioning, UIForceInteractionController> {

	UIInteractionProgress* _interactionProgress;
	unsigned long long _targetPresentationPhase;
	NSDictionary* _viewsParticipatingInCommitTransition;
	_UIStatesFeedbackGenerator* _feedbackGenerator;
	NSMutableDictionary* _animationsByPresentationPhase;
	id<UIViewControllerContextTransitioning> _transitionContext;

}

@property (nonatomic,retain) UIInteractionProgress * interactionProgress;                                    //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (assign,nonatomic) unsigned long long targetPresentationPhase;                                     //@synthesize targetPresentationPhase=_targetPresentationPhase - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * animationsByPresentationPhase;                            //@synthesize animationsByPresentationPhase=_animationsByPresentationPhase - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) NSDictionary * viewsParticipatingInCommitTransition;                            //@synthesize viewsParticipatingInCommitTransition=_viewsParticipatingInCommitTransition - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;                                 //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
+(id)performCommitTransitionWithDelegate:(id)arg1 forViewController:(id)arg2 previewViewController:(id)arg3 previewInteractionController:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)setInteractionProgress:(UIInteractionProgress *)arg1 ;
-(UIInteractionProgress *)interactionProgress;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)updateInteractiveTransition:(double)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(id)initWithInteractionProgress:(id)arg1 targetPresentationPhase:(unsigned long long)arg2 ;
-(void)setViewsParticipatingInCommitTransition:(NSDictionary *)arg1 ;
-(void)setAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forPresentationPhase:(unsigned long long)arg3 ;
-(void)setAnimationsByPresentationPhase:(NSMutableDictionary *)arg1 ;
-(void)setTargetPresentationPhase:(unsigned long long)arg1 ;
-(NSMutableDictionary *)animationsByPresentationPhase;
-(unsigned long long)targetPresentationPhase;
-(void)_layoutForPresentationPhase:(unsigned long long)arg1 ;
-(void)_completeAnimationWithPresentationPhase:(unsigned long long)arg1 finished:(BOOL)arg2 ;
-(void)_animateRevealTransition:(id)arg1 ;
-(void)_animateCommitTransition:(id)arg1 ;
-(void)_animateDismissTransition:(id)arg1 ;
-(void)_animatePreviewTransition:(id)arg1 ;
-(NSDictionary *)viewsParticipatingInCommitTransition;
@end

