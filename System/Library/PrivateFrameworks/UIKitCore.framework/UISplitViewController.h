/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKContentRefresh.h>
#import <libobjc.A.dylib/GKURLHandling.h>

@protocol UISplitViewControllerImpl;
@class NSString, UIViewController, UISlidingBarConfiguration, UISlidingBarState, NSArray, UISlidingBarStateRequest, UIBarButtonItem;

@interface UISplitViewController : UIViewController <GKContentRefresh, GKURLHandling> {

	id<UISplitViewControllerImpl> _impl;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * leadingViewController; 
@property (nonatomic,retain) UIViewController * mainViewController; 
@property (nonatomic,retain) UIViewController * trailingViewController; 
@property (nonatomic,copy) UISlidingBarConfiguration * configuration; 
@property (nonatomic,readonly) UISlidingBarState * currentState; 
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest; 
@property (assign,nonatomic) float masterColumnWidth; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle; 
@property (assign,setter=_setPrefersOverlayInRegularWidthPhone:,getter=_prefersOverlayInRegularWidthPhone,nonatomic) BOOL prefersOverlayInRegularWidthPhone; 
@property (assign,setter=_setUsesDeviceOverlayPreferences:,getter=_usesDeviceOverlayPreferences,nonatomic) BOOL usesDeviceOverlayPreferences; 
@property (assign,setter=_setUsesExtraWidePrimaryColumn:,getter=_usesExtraWidePrimaryColumn,nonatomic) BOOL usesExtraWidePrimaryColumn; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL presentsWithGesture; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,readonly) UIBarButtonItem * displayModeButtonItem; 
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction; 
@property (assign,nonatomic) double minimumPrimaryColumnWidth; 
@property (assign,nonatomic) double maximumPrimaryColumnWidth; 
@property (nonatomic,readonly) double primaryColumnWidth; 
@property (assign,nonatomic) long long primaryEdge; 
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+(BOOL)doesOverrideSupportedInterfaceOrientations;
+(BOOL)_devicePrefersOverlayInRegularWidth;
+(BOOL)_automaticDisplayModeOnPhoneUsesOverlayInLandscapeDefaultValue;
-(BOOL)ts_isCollapsedOrCollapsing;
-(void)ts_setPrefersOverlayInRegularWidthPhone:(BOOL)arg1 ;
-(void)ts_setGutterWidth:(double)arg1 ;
-(void)showPrimaryViewWithAnimated:(BOOL)arg1 ;
-(void)hidePrimaryOverlayWithAnimated:(BOOL)arg1 ;
-(BOOL)ts_isCollapsedOrCollapsing;
-(void)ts_setPrefersOverlayInRegularWidthPhone:(BOOL)arg1 ;
-(void)ts_setGutterWidth:(double)arg1 ;
-(void)_gkForceNextContentUpdate;
-(void)_gkResetContents;
-(void)_gkUpdateContentsWithCompletionHandlerAndError:(/*^block*/id)arg1 ;
-(void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2 ;
-(void)_gkSetContentsNeedUpdateWithHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UISplitViewControllerDelegate>)arg1 ;
-(id<UISplitViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusedView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI27*)arg1 ;
-(UISlidingBarConfiguration *)configuration;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(void)_commonInit;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(long long)_subclassPreferredFocusedViewPrioritizationType;
-(BOOL)_handlesCounterRotationForPresentation;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)purgeMemoryForReason:(int)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(BOOL)_shouldSynthesizeSupportedOrientations;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_updateChildContentMargins;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(id)detailViewController;
-(void)removeChildViewController:(id)arg1 ;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2 ;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2 ;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(BOOL)_isRotating;
-(id)masterViewController;
-(BOOL)_usesPanelImpl;
-(BOOL)isCollapsed;
-(UISlidingBarState *)currentState;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(BOOL)_isCollapsed;
-(BOOL)_layoutPrimaryOnRight;
-(NSArray *)possibleStates;
-(void)_animateToRequest:(id)arg1 ;
-(UISlidingBarStateRequest *)stateRequest;
-(UIViewController *)mainViewController;
-(void)setMainViewController:(UIViewController *)arg1 ;
-(UIViewController *)leadingViewController;
-(void)setLeadingViewController:(UIViewController *)arg1 ;
-(UIViewController *)trailingViewController;
-(void)setTrailingViewController:(UIViewController *)arg1 ;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)_willBeginSnapshotSession;
-(void)_didEndSnapshotSession;
-(BOOL)presentsWithGesture;
-(void)setPresentsWithGesture:(BOOL)arg1 ;
-(long long)preferredDisplayMode;
-(void)setPreferredDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(UIBarButtonItem *)displayModeButtonItem;
-(double)preferredPrimaryColumnWidthFraction;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1 ;
-(double)minimumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(double)arg1 ;
-(double)maximumPrimaryColumnWidth;
-(void)setMaximumPrimaryColumnWidth:(double)arg1 ;
-(double)primaryColumnWidth;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(void)setPrimaryEdge:(long long)arg1 ;
-(long long)primaryEdge;
-(float)masterColumnWidth;
-(void)setMasterColumnWidth:(float)arg1 ;
-(float)gutterWidth;
-(void)setGutterWidth:(float)arg1 ;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1 ;
-(NSString *)_displayModeButtonItemTitle;
-(void)_setDisplayModeButtonItemTitle:(id)arg1 ;
-(id)_primaryDimmingView;
-(BOOL)_usesExtraWidePrimaryColumn;
-(void)_setUsesExtraWidePrimaryColumn:(BOOL)arg1 ;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4 ;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2 ;
-(void)toggleMasterVisible:(id)arg1 ;
-(void)unloadViewForced:(BOOL)arg1 ;
-(double)_contentMarginForChildViewController:(id)arg1 ;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(id)_primaryContentResponder;
-(void)_setPrefersOverlayInRegularWidthPhone:(BOOL)arg1 ;
-(BOOL)_prefersOverlayInRegularWidthPhone;
-(void)_setUsesDeviceOverlayPreferences:(BOOL)arg1 ;
-(BOOL)_usesDeviceOverlayPreferences;
-(CGSize)_super_sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)_super_willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_super_viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_super_preferredFocusedView;
-(id)_super_preferredFocusEnvironments;
-(BOOL)_super_shouldUpdateFocusInContext:(id)arg1 ;
-(unsigned long long)_super_supportedInterfaceOrientations;
-(long long)_super_preferredInterfaceOrientationForPresentation;
-(void)_super_removeChildViewController:(id)arg1 ;
-(void)_super_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_super_childViewControllersToSendViewWillTransitionToSize;
-(BOOL)_super_disableAutomaticKeyboardBehavior;
-(id)_panelImpl;
-(void)_updateDisplayModeButtonItem;
@end

