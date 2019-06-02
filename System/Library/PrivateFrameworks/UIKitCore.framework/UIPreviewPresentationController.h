/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:33 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIPreviewPresentationControllerDelegate;
@class UITapGestureRecognizer, UIVisualEffectView, UIWindow, UIView, NSArray, NSHashTable, UIResponder, NSString;

@interface UIPreviewPresentationController : UIPresentationController <UIGestureRecognizerDelegate> {

	BOOL _appliesVisualEffectsToPresentingView;
	id<UIPreviewPresentationControllerDelegate> _previewPresentationDelegate;
	UITapGestureRecognizer* _dismissGestureRecognizer;
	UIVisualEffectView* _presentationContainerEffectView;
	UIWindow* _statusBarWindow;
	UIView* _statusBarSnapshotView;
	NSArray* _keyboardSnapshotters;
	NSHashTable* _keyboardWindows;
	UIResponder* _currentPinnedResponder;
	UIWindow* _presentationWindow;
	/*^block*/id _containerSuperviewFactoryBlock;
	/*^block*/id _containerViewConfigurationBlock;
	/*^block*/id _dismissalTransitionDidEndBlock;

}

@property (assign,nonatomic,__weak) id<UIPreviewPresentationControllerDelegate> previewPresentationDelegate;              //@synthesize previewPresentationDelegate=_previewPresentationDelegate - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * dismissGestureRecognizer;                                           //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL appliesVisualEffectsToPresentingView;                                                   //@synthesize appliesVisualEffectsToPresentingView=_appliesVisualEffectsToPresentingView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * presentationContainerEffectView;                                        //@synthesize presentationContainerEffectView=_presentationContainerEffectView - In the implementation block
@property (nonatomic,retain) UIWindow * statusBarWindow;                                                                  //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
@property (nonatomic,retain) UIView * statusBarSnapshotView;                                                              //@synthesize statusBarSnapshotView=_statusBarSnapshotView - In the implementation block
@property (nonatomic,copy) NSArray * keyboardSnapshotters;                                                                //@synthesize keyboardSnapshotters=_keyboardSnapshotters - In the implementation block
@property (nonatomic,copy) NSHashTable * keyboardWindows;                                                                 //@synthesize keyboardWindows=_keyboardWindows - In the implementation block
@property (assign,nonatomic,__weak) UIResponder * currentPinnedResponder;                                                 //@synthesize currentPinnedResponder=_currentPinnedResponder - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * presentationWindow;                                                        //@synthesize presentationWindow=_presentationWindow - In the implementation block
@property (nonatomic,copy) id containerSuperviewFactoryBlock;                                                             //@synthesize containerSuperviewFactoryBlock=_containerSuperviewFactoryBlock - In the implementation block
@property (nonatomic,copy) id containerViewConfigurationBlock;                                                            //@synthesize containerViewConfigurationBlock=_containerViewConfigurationBlock - In the implementation block
@property (nonatomic,copy) id dismissalTransitionDidEndBlock;                                                             //@synthesize dismissalTransitionDidEndBlock=_dismissalTransitionDidEndBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(BOOL)arg2 ;
+(BOOL)_shouldApplyVisualEffectsToPresentingView;
+(BOOL)_shouldInterdictServiceViewTouches;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(void)presentationTransitionWillBegin;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(UIWindow *)statusBarWindow;
-(void)dismissalTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(id)_fullscreenPresentationSuperview;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1 ;
-(UIVisualEffectView *)presentationContainerEffectView;
-(void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1 ;
-(void)setPreviewPresentationDelegate:(id<UIPreviewPresentationControllerDelegate>)arg1 ;
-(void)setAppliesVisualEffectsToPresentingView:(BOOL)arg1 ;
-(void)setContainerSuperviewFactoryBlock:(id)arg1 ;
-(void)setDismissalTransitionDidEndBlock:(id)arg1 ;
-(id)_presentationContainerView;
-(void)_prepareContainerViewForPresentationTransition;
-(void)_prepareDismissGestureRecognizersIfNeeded;
-(id)containerViewConfigurationBlock;
-(void)_finalizeAfterDismissalTransition;
-(void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1 ;
-(id)containerSuperviewFactoryBlock;
-(void)setPresentationWindow:(UIWindow *)arg1 ;
-(UIWindow *)presentationWindow;
-(BOOL)appliesVisualEffectsToPresentingView;
-(void)_prepareStatusBarForPresentationTransition;
-(void)_prepareKeyboardForPresentationTransition;
-(BOOL)_shouldBlurStatusBar;
-(void)setStatusBarSnapshotView:(UIView *)arg1 ;
-(void)setStatusBarWindow:(UIWindow *)arg1 ;
-(void)setCurrentPinnedResponder:(UIResponder *)arg1 ;
-(void)setKeyboardSnapshotters:(NSArray *)arg1 ;
-(void)setKeyboardWindows:(NSHashTable *)arg1 ;
-(UIView *)statusBarSnapshotView;
-(NSHashTable *)keyboardWindows;
-(NSArray *)keyboardSnapshotters;
-(UIResponder *)currentPinnedResponder;
-(void)_layoutForInteractiveHighlight;
-(void)_layoutForPreview;
-(void)_animatePreviewTransitionIfNeeded:(id)arg1 ;
-(void)_layoutForCancel;
-(id<UIPreviewPresentationControllerDelegate>)previewPresentationDelegate;
-(void)_handleDismissGestureRecognizer:(id)arg1 ;
-(void)setDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)dismissGestureRecognizer;
-(void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1 ;
-(void)_interactiveHighlightTransitionDidEnd:(BOOL)arg1 ;
-(void)_previewTransitionDidEnd:(BOOL)arg1 ;
-(void)_cancelTransitionDidEnd:(BOOL)arg1 ;
-(void)setPresentationContainerEffectView:(UIVisualEffectView *)arg1 ;
-(void)setContainerViewConfigurationBlock:(id)arg1 ;
-(id)dismissalTransitionDidEndBlock;
@end

