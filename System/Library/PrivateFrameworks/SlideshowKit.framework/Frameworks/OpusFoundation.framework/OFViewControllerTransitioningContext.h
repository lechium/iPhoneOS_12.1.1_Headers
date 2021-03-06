/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFViewControllerTransitioningContext <NSObject>
@property (assign,nonatomic) double progressVelocity; 
@required
-(void)cancelInteractiveTransitionWithVelocity:(double)arg1;
-(void)setProgressVelocity:(double)arg1;
-(void)updateNonInteractiveTransitionWithProgress:(double)arg1;
-(void)finishInteractiveTransitionWithVelocity:(double)arg1;
-(void)makeTransitionInteractiveWithInteractor:(id)arg1 andProgress:(double)arg2;
-(BOOL)isRubberBanding;
-(double)progressVelocity;
-(BOOL)wasCancelled;
-(BOOL)doEaseIn;
-(BOOL)doEaseOut;
-(id)containerView;
-(BOOL)isInteractive;
-(void)completeTransition:(BOOL)arg1;
-(void)updateInteractiveTransition:(double)arg1;
-(void)startInteractiveTransition;
-(double)progress;
-(id)fromViewController;
-(id)toViewController;
-(BOOL)initiallyInteractive;
-(BOOL)isCompleting;

@end

