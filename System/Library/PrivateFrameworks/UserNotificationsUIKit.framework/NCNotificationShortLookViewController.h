/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UserNotificationsUIKit/NCNotificationViewController.h>
#import <libobjc.A.dylib/NCNotificationViewControllerObserving.h>
#import <libobjc.A.dylib/PLViewControllerAnimatorDelegate.h>
#import <libobjc.A.dylib/PLPreviewInteractionManagerDelegate.h>
#import <libobjc.A.dylib/NCBannerPresentationTransitioningDelegateObserver.h>
#import <libobjc.A.dylib/PLExpandedPlatterPresentationControllerDelegate.h>
#import <libobjc.A.dylib/NCLongLookDefaultPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PLPreviewInteractionPresenting.h>

@protocol UIViewControllerContextTransitioning;
@class PLPreviewInteractionManager, UIView, NCBannerPresentationTransitionDelegate, NCNotificationViewController, UIViewController, UITapGestureRecognizer, NSDate, NSHashTable, UIScrollView, NSString;

@interface NCNotificationShortLookViewController : NCNotificationViewController <NCNotificationViewControllerObserving, PLViewControllerAnimatorDelegate, PLPreviewInteractionManagerDelegate, NCBannerPresentationTransitioningDelegateObserver, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, PLPreviewInteractionPresenting> {

	NCBannerPresentationTransitionDelegate* _bannerPresentationTransitionDelegate;
	NCNotificationViewController* _longLookNotificationViewController;
	UIView* _contextDefiningContainerView;
	UIViewController* _contextDefiningViewController;
	UITapGestureRecognizer* _tapGesture;
	NSDate* _tapBeginTime;
	UIView* _audioAccessoryView;
	NSHashTable* _audioAccessoryViewObservers;
	id<UIViewControllerContextTransitioning> _scrollPresentationTransitionContext;
	CGRect _finalPresentedFrameOfViewForPreview;
	BOOL _didScrollPresentLongLookViewController;
	PLPreviewInteractionManager* _previewInteractionManager;
	UIScrollView* _scrollView;

}

@property (assign,setter=_setDidScrollPresentLongLookViewController:,getter=_didScrollPresentLongLookViewController,nonatomic) BOOL didScrollPresentLongLookViewController;              //@synthesize didScrollPresentLongLookViewController=_didScrollPresentLongLookViewController - In the implementation block
@property (getter=_scrollView,nonatomic,retain) UIScrollView * scrollView;                                                                                                               //@synthesize scrollView=_scrollView - In the implementation block
@property (getter=_presentedLongLookViewController,nonatomic,readonly) NCNotificationViewController * presentedLongLookViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PLPreviewInteractionManager * previewInteractionManager;                                                                                                  //@synthesize previewInteractionManager=_previewInteractionManager - In the implementation block
@property (nonatomic,readonly) UIView * viewForPreview; 
@property (nonatomic,readonly) CGRect initialPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalDismissedFrameOfViewForPreview; 
+(long long)materialRecipeForLegibilitySettings:(id)arg1 ;
-(id)_initWithNotificationRequest:(id)arg1 revealingAdditionalContentOnPresentation:(BOOL)arg2 ;
-(BOOL)_setNotificationRequest:(id)arg1 ;
-(BOOL)_isPresentingCustomContentProvidingViewController;
-(void)_updateWithProvidedStaticContent;
-(void)_updateWithProvidedAuxiliaryOptionsContent;
-(BOOL)isShortLook;
-(BOOL)didReceiveNotificationRequest:(id)arg1 ;
-(BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_presentedLongLookViewController;
-(void)_loadLookView;
-(void)_notificationViewControllerViewDidLoad;
-(void)notificationViewControllerWillPresent:(id)arg1 ;
-(void)notificationViewControllerDidPresent:(id)arg1 ;
-(void)_updateScrollViewContentSize;
-(void)notificationViewControllerWillDismiss:(id)arg1 ;
-(void)notificationViewControllerDidDismiss:(id)arg1 ;
-(BOOL)_shouldPadScrollViewContentSizeHeight;
-(void)presentLongLookAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2 ;
-(void)customContentDidLoadExtension:(id)arg1 ;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
-(BOOL)isContentExtensionVisible:(id)arg1 ;
-(void)expandAndPlayAudioMessage;
-(BOOL)shouldRestorePresentingShortLookOnDismiss;
-(void)setInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isCoalescedNotificationBundle;
-(id)effectiveGroupName;
-(void)setCustomContentHomeAffordanceVisible:(BOOL)arg1 ;
-(void)setCustomContentHomeAffordanceGestureRecognizer:(id)arg1 ;
-(long long)materialRecipe;
-(BOOL)wantsUseableContainerBoundsForTransitionWithDelegate:(id)arg1 ;
-(unsigned long long)backgroundMaterialOptions;
-(unsigned long long)overlayMaterialOptions;
-(CGRect)expandedPlatterPresentationController:(id)arg1 frameForTransitionViewInPresentationSuperview:(id)arg2 ;
-(UIView *)viewForPreview;
-(PLPreviewInteractionManager *)previewInteractionManager;
-(id)_newPreviewInteractionManager;
-(void)_presentLongLookViaPreviewInteraction:(/*^block*/id)arg1 ;
-(void)_loadExtensionIfNecessary;
-(void)_configureScrollViewIfNecessary;
-(id)_notificationShortLookViewIfLoaded;
-(void)_handleTapOnView:(id)arg1 ;
-(void)_expandCoalescedNotificationBundle;
-(void)_setAudioAccessoryView:(id)arg1 ;
-(id)_longLookNotificationViewController;
-(void)_loadPresentationContainerViewIfNecessary;
-(void)_presentLongLookAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setDidScrollPresentLongLookViewController:(BOOL)arg1 ;
-(void)_handlePresentedContentDismissalWithTrigger:(long long)arg1 ;
-(CGRect)initialPresentedFrameOfViewForPreview;
-(CGRect)_frameForTransitionViewInScrollView;
-(void)_presentLongLookForScrollAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_completeScrollPresentation;
-(BOOL)_tryDismissingShortLookInScrollView:(id)arg1 ;
-(void)viewControllerAnimator:(id)arg1 didEndPresentationAnimation:(BOOL)arg2 withTransitionContext:(id)arg3 ;
-(id)presentedViewControllerForPreviewInteractionManager:(id)arg1 ;
-(id)transitioningDelegateForPreviewInteractionManager:(id)arg1 ;
-(id)containerViewForPreviewInteractionManager:(id)arg1 ;
-(BOOL)previewInteractionManager:(id)arg1 shouldBeginInteractionWithTouchAtLocation:(CGPoint)arg2 ;
-(void)previewInteractionManagerWillBeginUserInteraction:(id)arg1 ;
-(void)previewInteractionManagerDidEndUserInteraction:(id)arg1 ;
-(void)previewInteractionManager:(id)arg1 shouldFinishInteractionWithCompletionBlock:(/*^block*/id)arg2 ;
-(BOOL)previewInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1 ;
-(void)previewInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2 ;
-(void)previewInteractionManager:(id)arg1 declinedDismissingPresentedContentWithTrigger:(long long)arg2 ;
-(BOOL)previewInteractionManagerShouldUseHapticTouch:(id)arg1 ;
-(CGRect)finalPresentedFrameOfViewForPreview;
-(CGRect)finalDismissedFrameOfViewForPreview;
-(void)addAudioAccessoryViewObserver:(id)arg1 ;
-(void)removeAudioAccesoryViewObserver:(id)arg1 ;
-(BOOL)_didScrollPresentLongLookViewController;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)_scrollView;
-(BOOL)_setDelegate:(id)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(id)_legibilitySettings;
@end

