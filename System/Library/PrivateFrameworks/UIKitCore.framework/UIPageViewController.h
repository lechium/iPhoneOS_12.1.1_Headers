/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UIQueuingScrollViewDelegate.h>
#import <UIKitCore/_UIQueuingScrollViewDataSource.h>

@protocol UIPageViewControllerDelegate, UIPageViewControllerDataSource;
@class NSArray, _UIPageCurl, UIPanGestureRecognizer, UITapGestureRecognizer, NSMutableArray, NSMutableDictionary, NSHashTable, NSDictionary, _UIPageViewControllerContentView, _UIQueuingScrollView, NSString;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource> {

	id<UIPageViewControllerDelegate> _delegate;
	id<UIPageViewControllerDataSource> _dataSource;
	long long _transitionStyle;
	long long _navigationOrientation;
	long long _spineLocation;
	BOOL _doubleSided;
	BOOL _pageControlRequiresValidation;
	NSArray* _viewControllers;
	_UIPageCurl* _pageCurl;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _stashingViewControllersForRotation;
	NSArray* _viewControllersStashedForRotation;
	BOOL _interfaceRotating;
	NSMutableArray* _rotationSnapshotViews;
	long long _spineLocationPriorToInterfaceRotation;
	UIEdgeInsets _tapRegionInsets;
	CGSize _tapRegionBreadths;
	UIEdgeInsets _effectiveTapRegionInsets;
	CGSize _effectiveTapRegionBreadths;
	CGRect* _tapRegions;
	double _pageSpacing;
	NSMutableDictionary* _cachedViewControllersForCurl;
	NSHashTable* _cachedViewControllersForScroll;
	NSDictionary* _incomingAndOutgoingViewControllersForManualTransition;
	long long _lastKnownNavigationDirection;
	long long _disableAutorotationCount;
	struct {
		unsigned delegateWantsTransitionWillBegin : 1;
		unsigned delegateWantsTransitionCompleted : 1;
		unsigned delegateWantsTransitionsFinished : 1;
		unsigned delegateCustomizesSpineLocationForInterfaceOrientation : 1;
		unsigned delegateSupportedInterfaceOrientations : 1;
		unsigned delegatePreferredInterfaceOrientationForPresentation : 1;
		unsigned dataSourceSuppliesBeforeViewController : 1;
		unsigned dataSourceSuppliesAfterViewController : 1;
		unsigned dataSourceSuppliesPageCount : 1;
		unsigned dataSourceSuppliesPageNumber : 1;
	}  _delegateFlags;
	id<UIPageViewControllerDataSource> _unsafeUnretainedDataSource;
	id<UIPageViewControllerDelegate> _unsafeUnretainedDelegate;

}

@property (assign,nonatomic) BOOL accessibilityScreenChangeOnScroll; 
@property (nonatomic,readonly) long long _transitionStyle; 
@property (nonatomic,readonly) long long _navigationOrientation; 
@property (setter=_setViewControllers:,nonatomic,retain) NSArray * _viewControllers;                                                  //@synthesize viewControllers=_viewControllers - In the implementation block
@property (setter=_setViewControllersStashedForRotation:,nonatomic,retain) NSArray * _viewControllersStashedForRotation;              //@synthesize viewControllersStashedForRotation=_viewControllersStashedForRotation - In the implementation block
@property (getter=_isPageControlVisible,nonatomic,readonly) BOOL _pageControlVisible; 
@property (nonatomic,readonly) _UIPageViewControllerContentView * _contentView; 
@property (nonatomic,readonly) _UIQueuingScrollView * _scrollView; 
@property (assign,setter=_setPageSpacing:,nonatomic) double _pageSpacing; 
@property (getter=_isInterfaceRotating,nonatomic,readonly) BOOL _interfaceRotating;                                                   //@synthesize interfaceRotating=_interfaceRotating - In the implementation block
@property (assign,nonatomic,__weak) id<UIPageViewControllerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<UIPageViewControllerDataSource> dataSource; 
@property (nonatomic,readonly) long long transitionStyle; 
@property (nonatomic,readonly) long long navigationOrientation; 
@property (nonatomic,readonly) long long spineLocation; 
@property (assign,getter=isDoubleSided,nonatomic) BOOL doubleSided; 
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) NSArray * viewControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+(BOOL)doesOverrideSupportedInterfaceOrientations;
+(BOOL)_isSupportedTransitionStyle:(long long)arg1 ;
+(BOOL)_isNavigationOrientation:(long long)arg1 supportedForTransitionStyle:(long long)arg2 ;
+(BOOL)_isSpineLocation:(long long)arg1 supportedForTransitionStyle:(long long)arg2 ;
+(id)stringForSpineLocation:(long long)arg1 ;
+(id)_outgoingViewControllerKeys;
+(id)_incomingViewControllerKeys;
-(void)setAccessibilityScreenChangeOnScroll:(BOOL)arg1 ;
-(BOOL)accessibilityScreenChangeOnScroll;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIPageViewControllerDelegate>)arg1 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(id<UIPageViewControllerDelegate>)delegate;
-(_UIPageViewControllerContentView *)_contentView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusedView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSArray *)gestureRecognizers;
-(_UIQueuingScrollView *)_scrollView;
-(id<UIPageViewControllerDataSource>)dataSource;
-(void)setDataSource:(id<UIPageViewControllerDataSource>)arg1 ;
-(NSArray *)viewControllers;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)_deepestUnambiguousResponder;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(BOOL)_shouldSynthesizeSupportedOrientations;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)viewWillUnload;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(NSArray *)_viewControllers;
-(id)_pageControl;
-(double)_pageSpacing;
-(long long)_transitionStyle;
-(BOOL)_isPageControlVisible;
-(long long)navigationOrientation;
-(void)_contentViewFrameOrBoundsDidChange;
-(void)_pageControlValueChanged:(id)arg1 ;
-(void)_updatePageControlViaDataSourceIfNecessary;
-(void)_setSpineLocation:(long long)arg1 ;
-(void)_setPageSpacing:(double)arg1 ;
-(id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(BOOL)_canHandleGestures;
-(long long)_navigationOrientation;
-(UIEdgeInsets)_effectiveTapRegionInsets;
-(void)_invalidateEffectiveTapRegions;
-(CGSize)_effectiveTapRegionBreadths;
-(void)_setViewControllers:(id)arg1 withCurlOfType:(long long)arg2 fromLocation:(CGPoint)arg3 direction:(long long)arg4 animated:(BOOL)arg5 notifyDelegate:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)_setViewControllers:(id)arg1 withScrollInDirection:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_child:(id)arg1 canBeginAppearanceTransition:(BOOL)arg2 ;
-(void)_child:(id)arg1 beginAppearanceTransition:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)_childCanEndAppearanceTransition:(id)arg1 ;
-(void)_childEndAppearanceTransition:(id)arg1 ;
-(void)_child:(id)arg1 endAppearanceTransitionIfPossible:(BOOL)arg2 ;
-(long long)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(long long)arg1 ;
-(void)_invalidatePageCurl;
-(void)_setViewControllersStashedForRotation:(id)arg1 ;
-(void)_sendChildViewWill:(BOOL)arg1 appear:(BOOL)arg2 animated:(BOOL)arg3 ;
-(NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(long long)arg1 ;
-(id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(NSRange)arg2 ;
-(id)_viewControllersForPendingSpineLocation:(long long)arg1 ;
-(void)_child:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)_child:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2 ;
-(id)_viewControllerBefore:(BOOL)arg1 viewController:(id)arg2 ;
-(void)_beginDisablingInterfaceAutorotation;
-(void)_endDisablingInterfaceAutorotation;
-(BOOL)_isCurrentViewControllerStateValid;
-(id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)_populateOutgoingViewControllersInMap:(id)arg1 ;
-(void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(long long)arg3 ;
-(void)_setViewControllers:(id)arg1 ;
-(id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(long long)arg2 ;
-(void)_invalidateViewControllersStashedForCurlFromDataSource;
-(void)_cacheViewControllerForScroll:(id)arg1 ;
-(id)_viewControllerAfterViewController:(id)arg1 ;
-(id)_viewControllerBeforeViewController:(id)arg1 ;
-(CGRect*)_tapRegions;
-(long long)transitionStyle;
-(BOOL)_shouldFlipInRightToLeft;
-(BOOL)_shouldNavigateInDirection:(long long*)arg1 inResponseToVelocity:(double*)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3 ;
-(BOOL)_shouldNavigateInDirection:(long long*)arg1 inResponseToTapGestureRecognizer:(id)arg2 ;
-(BOOL)_shouldBeginNavigationInDirection:(long long*)arg1 inResponseToPanGestureRecognizer:(id)arg2 ;
-(id)_incomingViewControllersForGestureDrivenCurlInDirection:(long long)arg1 ;
-(long long)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(double*)arg2 ;
-(BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(double*)arg1 ;
-(id)_queuingScrollView:(id)arg1 viewBefore:(BOOL)arg2 view:(id)arg3 ;
-(void)_flushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_handlePagingInDirection:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)queuingScrollView:(id)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(BOOL)arg5 ;
-(void)queuingScrollView:(id)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7 ;
-(void)queuingScrollView:(id)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7 ;
-(void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2 ;
-(void)queuingScrollViewDidFinishScrolling:(id)arg1 ;
-(BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg1 ;
-(void)queuingScrollView:(id)arg1 attemptToPageInDirection:(long long)arg2 ;
-(id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2 ;
-(id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2 ;
-(void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(BOOL)arg3 ;
-(long long)spineLocation;
-(BOOL)isDoubleSided;
-(void)setDoubleSided:(BOOL)arg1 ;
-(UIEdgeInsets)_tapRegionInsets;
-(void)_setTapRegionInsets:(UIEdgeInsets)arg1 ;
-(CGSize)_tapRegionBreadths;
-(void)_setTapRegionBreadths:(CGSize)arg1 ;
-(CGRect)_disabledScrollingRegion;
-(void)_setDisabledScrollingRegion:(CGRect)arg1 ;
-(CGSize)_contentSizeForSize:(CGSize)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)_viewControllersStashedForRotation;
-(BOOL)_isInterfaceRotating;
@end

