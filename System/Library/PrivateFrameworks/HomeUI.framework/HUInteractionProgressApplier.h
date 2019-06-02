/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:37 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUApplier.h>
#import <UIKit/UIInteractionProgressObserver.h>

@class UIInteractionProgress, HUAnimationSettings, HUAnimationApplier, NSString;

@interface HUInteractionProgressApplier : HUApplier <UIInteractionProgressObserver> {

	BOOL _boundProgressValues;
	BOOL _completesAtTargetState;
	BOOL _waitingOnAnimationToComplete;
	UIInteractionProgress* _interactionProgress;
	HUAnimationSettings* _significantProgressChangeAnimationSettings;
	HUAnimationSettings* _transitionAnimationSettings;
	double _animationFromProgress;
	double _animationToProgress;
	HUAnimationApplier* _inFlightAnimation;
	double _previousInteractionProgress;

}

@property (assign,nonatomic) double animationFromProgress;                                                  //@synthesize animationFromProgress=_animationFromProgress - In the implementation block
@property (assign,nonatomic) double animationToProgress;                                                    //@synthesize animationToProgress=_animationToProgress - In the implementation block
@property (nonatomic,retain) HUAnimationApplier * inFlightAnimation;                                        //@synthesize inFlightAnimation=_inFlightAnimation - In the implementation block
@property (assign,nonatomic) double previousInteractionProgress;                                            //@synthesize previousInteractionProgress=_previousInteractionProgress - In the implementation block
@property (assign,nonatomic) BOOL waitingOnAnimationToComplete;                                             //@synthesize waitingOnAnimationToComplete=_waitingOnAnimationToComplete - In the implementation block
@property (nonatomic,readonly) UIInteractionProgress * interactionProgress;                                 //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (nonatomic,retain) HUAnimationSettings * significantProgressChangeAnimationSettings;              //@synthesize significantProgressChangeAnimationSettings=_significantProgressChangeAnimationSettings - In the implementation block
@property (nonatomic,retain) HUAnimationSettings * transitionAnimationSettings;                             //@synthesize transitionAnimationSettings=_transitionAnimationSettings - In the implementation block
@property (assign,nonatomic) BOOL boundProgressValues;                                                      //@synthesize boundProgressValues=_boundProgressValues - In the implementation block
@property (assign,nonatomic) BOOL completesAtTargetState;                                                   //@synthesize completesAtTargetState=_completesAtTargetState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applierWithInteractionProgress:(id)arg1 ;
+(id)applyInteractionProgress:(id)arg1 withApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBoundProgressValues:(BOOL)arg1 ;
-(void)setTransitionAnimationSettings:(HUAnimationSettings *)arg1 ;
-(double)_currentInteractionProgress;
-(void)_updateCurrentProgress;
-(void)_completeSuccessfullyIfAnimationsComplete;
-(BOOL)boundProgressValues;
-(double)previousInteractionProgress;
-(HUAnimationSettings *)transitionAnimationSettings;
-(HUAnimationSettings *)significantProgressChangeAnimationSettings;
-(BOOL)_interactionProgressChangedSignificantly;
-(double)animationFromProgress;
-(double)animationToProgress;
-(HUAnimationApplier *)inFlightAnimation;
-(void)setAnimationFromProgress:(double)arg1 ;
-(void)setAnimationToProgress:(double)arg1 ;
-(void)setInFlightAnimation:(HUAnimationApplier *)arg1 ;
-(BOOL)waitingOnAnimationToComplete;
-(void)setWaitingOnAnimationToComplete:(BOOL)arg1 ;
-(BOOL)complete:(BOOL)arg1 ;
-(void)setPreviousInteractionProgress:(double)arg1 ;
-(void)setSignificantProgressChangeAnimationSettings:(HUAnimationSettings *)arg1 ;
-(id)init;
-(BOOL)isInteractive;
-(UIInteractionProgress *)interactionProgress;
-(id)initWithInteractionProgress:(id)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(BOOL)cancel;
-(BOOL)start;
-(void)setCompletesAtTargetState:(BOOL)arg1 ;
-(BOOL)completesAtTargetState;
@end

