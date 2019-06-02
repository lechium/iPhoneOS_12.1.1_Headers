/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface _TVConfirmationDialogPresentationController : UIPresentationController {

	UIVisualEffectView* _backdropView;
	/*^block*/id _completedAnimationBlock;
	CGSize _modalSize;

}

@property (nonatomic,readonly) UIVisualEffectView * backdropView; 
@property (assign,nonatomic) CGSize modalSize;                                 //@synthesize modalSize=_modalSize - In the implementation block
@property (nonatomic,copy) id completedAnimationBlock;                         //@synthesize completedAnimationBlock=_completedAnimationBlock - In the implementation block
-(void)_tapGesture:(id)arg1 ;
-(void)_layoutPresentedView;
-(CGSize)modalSize;
-(void)setModalSize:(CGSize)arg1 ;
-(id)completedAnimationBlock;
-(void)setCompletedAnimationBlock:(id)arg1 ;
-(void)dealloc;
-(long long)presentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(UIVisualEffectView *)backdropView;
-(void)dismissalTransitionWillBegin;
@end
