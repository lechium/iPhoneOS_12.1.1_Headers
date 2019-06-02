/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PlatterKit/PlatterKit-Structs.h>
#import <PlatterKit/PLPreviewInteractionViewControllerTransition.h>

@interface PLPreviewInteractionViewControllerPresentationTransition : PLPreviewInteractionViewControllerTransition

@property (nonatomic,readonly) CGAffineTransform targetTransform; 
-(id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_newAnimator;
-(void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 ;
-(CGAffineTransform)targetTransform;
@end
