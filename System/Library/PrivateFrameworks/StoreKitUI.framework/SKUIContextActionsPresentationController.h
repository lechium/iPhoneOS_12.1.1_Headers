/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPresentationController.h>

@class UIVisualEffectView;

@interface SKUIContextActionsPresentationController : UIPresentationController {

	UIVisualEffectView* _backgroundView;
	/*^block*/id _dismissalAnimations;

}

@property (nonatomic,retain) UIVisualEffectView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) id dismissalAnimations;                             //@synthesize dismissalAnimations=_dismissalAnimations - In the implementation block
-(void)setDismissalAnimations:(id)arg1 ;
-(id)dismissalAnimations;
-(UIVisualEffectView *)backgroundView;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)shouldRemovePresentersView;
-(void)presentationTransitionWillBegin;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)dismissalTransitionWillBegin;
@end

