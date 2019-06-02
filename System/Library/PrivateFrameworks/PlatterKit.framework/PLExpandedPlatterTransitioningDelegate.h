/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLViewControllerTransitioningDelegate.h>

@class UIPresentationController, NSString;

@interface PLExpandedPlatterTransitioningDelegate : NSObject <PLViewControllerTransitioningDelegate> {

	UIPresentationController* _presentationController;

}

@property (setter=_setPresentationController:,getter=_presentationController,nonatomic,retain) UIPresentationController * presentationController;              //@synthesize presentationController=_presentationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewControllerAnimator:(id)arg1 willBeginPresentationAnimationWithTransitionContext:(id)arg2 ;
-(void)viewControllerAnimator:(id)arg1 willBeginDismissalAnimationWithTransitionContext:(id)arg2 ;
-(id)previewPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)_presentationController;
-(void)_setPresentationController:(id)arg1 ;
@end

