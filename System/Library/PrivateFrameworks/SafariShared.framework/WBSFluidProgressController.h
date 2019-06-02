/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFluidProgressControllerDelegate, WBSFluidProgressControllerWindowDelegate;
@interface WBSFluidProgressController : NSObject {

	id<WBSFluidProgressControllerDelegate> _delegate;
	id<WBSFluidProgressControllerWindowDelegate> _windowDelegate;

}

@property (__weak) id<WBSFluidProgressControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) id<WBSFluidProgressControllerWindowDelegate> windowDelegate;              //@synthesize windowDelegate=_windowDelegate - In the implementation block
-(void)_updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)startRocketEffectWithProgressStateSource:(id)arg1 ;
-(void)frontmostTabDidChange;
-(id<WBSFluidProgressControllerWindowDelegate>)windowDelegate;
-(void)animationStepCompleted:(id)arg1 ;
-(void)setWindowDelegate:(id<WBSFluidProgressControllerWindowDelegate>)arg1 ;
-(void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(BOOL)arg2 ;
-(void)finishFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)startFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)updateFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)cancelFluidProgressWithProgressStateSource:(id)arg1 ;
-(void)setDelegate:(id<WBSFluidProgressControllerDelegate>)arg1 ;
-(id<WBSFluidProgressControllerDelegate>)delegate;
@end
