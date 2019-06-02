/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/IKAppDocumentDelegate.h>
#import <libobjc.A.dylib/SKUIMediaQueryDelegate.h>
#import <libobjc.A.dylib/SKUIModalSourceViewProvider.h>
#import <libobjc.A.dylib/SKUINavigationBarControllerDelegate.h>
#import <libobjc.A.dylib/SKUINavigationBarDisplayConfiguring.h>
#import <libobjc.A.dylib/SKUINavigationPaletteProvider.h>
#import <libobjc.A.dylib/SKUIToolbarControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/SKUIResourceLoaderDelegate.h>
#import <libobjc.A.dylib/SKUIViewControllerTesting.h>
#import <libobjc.A.dylib/SKUIScrollingTabAppearanceStatusObserver.h>
#import <libobjc.A.dylib/SKUIScrollingTabNestedPagedScrolling.h>

@class UIView, UIViewController, NSArray, IKAppDocument, SSVLoadURLOperation, SKUIMediaQueryEvaluator, SKUINavigationBarController, SKUIToolbarController, NSNumber, NSSet, NSDictionary, NSValue, NSString, SKUIMetricsPageRenderEvent, SKUIMetricsDOMChangeQueue, UIScrollView;

@interface SKUIDocumentContainerViewController : SKUIViewController <IKAppDocumentDelegate, SKUIMediaQueryDelegate, SKUIModalSourceViewProvider, SKUINavigationBarControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUINavigationPaletteProvider, SKUIToolbarControllerDelegate, UIViewControllerTransitioningDelegate, SKUIResourceLoaderDelegate, SKUIViewControllerTesting, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling> {

	UIViewController* _beforeErrorChildViewController;
	UIViewController* _childViewController;
	NSArray* _defaultLeftBarButtonItems;
	IKAppDocument* _document;
	double _lastBottomLayoutGuideLength;
	double _lastTopLayoutGuideLength;
	SSVLoadURLOperation* _loadURLOperation;
	BOOL _makeSearchBarFirstResponderOnLoad;
	SKUIMediaQueryEvaluator* _mediaQueryEvaluator;
	SKUINavigationBarController* _navigationBarController;
	BOOL _selectSearchBarContentOnBecomingFirstResponder;
	SKUIToolbarController* _toolbarController;
	NSNumber* _orientationAtDisappear;
	NSNumber* _pageResponseAbsoluteTime;
	NSSet* _personalizationItems;
	NSDictionary* _presentationOptions;
	SCD_Struct_SK8 _scrollingTabAppearanceStatus;
	NSArray* _searchBarControllers;
	NSValue* _sizeAtDisappear;
	unsigned long long _templateViewElementType;
	CGSize _viewSize;
	NSString* _urlString;
	/*^block*/id _pendingSizeTransitionCompletion;
	SKUIMetricsPageRenderEvent* _pageRenderEvent;
	SKUIMetricsDOMChangeQueue* _domChangeTimingQueue;

}

@property (nonatomic,retain) SKUIMetricsPageRenderEvent * pageRenderEvent;                     //@synthesize pageRenderEvent=_pageRenderEvent - In the implementation block
@property (nonatomic,retain) SKUIMetricsDOMChangeQueue * domChangeTimingQueue;                 //@synthesize domChangeTimingQueue=_domChangeTimingQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * navigationPaletteView; 
@property (nonatomic,readonly) UIScrollView * scrollingTabNestedPagingScrollView; 
+(BOOL)allowsChildViewControllerNavigationBarManagement;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(id)childViewController;
-(void)mediaQueryEvaluatorDidChange:(id)arg1 ;
-(id)mediaQueryEvaluator:(id)arg1 valueForKey:(id)arg2 ;
-(void)documentDidUpdate:(id)arg1 ;
-(UIView *)navigationPaletteView;
-(void)skui_viewWillAppear:(BOOL)arg1 ;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(id)navigationBarTintColor;
-(long long)navigationBarTintAdjustmentMode;
-(id)navigationBarTitleTextTintColor;
-(BOOL)prefersNavigationBarHidden;
-(BOOL)performTestWithName:(id)arg1 options:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didLoadAllForReason:(long long)arg2 ;
-(void)resourceLoaderDidBeginLoading:(id)arg1 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)scrollingTabAppearanceStatusWasUpdated:(SCD_Struct_SK8)arg1 ;
-(UIScrollView *)scrollingTabNestedPagingScrollView;
-(id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 clientContext:(id)arg3 ;
-(void)_showAccountViewControllerWithURL:(id)arg1 ;
-(void)documentNeedsUpdate:(id)arg1 ;
-(void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3 ;
-(void)documentScrollToTop:(id)arg1 ;
-(id)impressionableViewElementsForDocument:(id)arg1 ;
-(BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2 ;
-(id)additionalLeftBarButtonItemForNavigationBarController:(id)arg1 ;
-(id)additionalRightBarButtonItemForNavigationBarController:(id)arg1 ;
-(id)_sidepackViewControllerWithOptions:(id)arg1 clientContext:(id)arg2 ;
-(id)_newViewControllerWithTemplateElement:(id)arg1 options:(id)arg2 clientContext:(id)arg3 ;
-(void)_skui_applicationDidEnterBackground:(id)arg1 ;
-(void)documentDidSendMessage:(id)arg1 ;
-(void)setPageRenderEvent:(SKUIMetricsPageRenderEvent *)arg1 ;
-(SKUIMetricsPageRenderEvent *)pageRenderEvent;
-(void)setDomChangeTimingQueue:(SKUIMetricsDOMChangeQueue *)arg1 ;
-(void)_enqueueLoadURLOperation;
-(void)_submitPageRenderIfPossible;
-(void)_sendOnViewAttributesChangeWithAttributes:(id)arg1 viewWillAppear:(BOOL)arg2 ;
-(void)_reloadNavigationBarControllerIfNeeded;
-(BOOL)_shouldFillNavigationBarContentsBasedOnNavigationBarViewElement;
-(id)_navigationBarViewElement;
-(void)_reloadNavigationPalette;
-(void)_reloadNavigationBarController;
-(void)_reloadDefaultBarButtonItems;
-(id)_toolbarViewElement;
-(void)_reloadToolbar;
-(SKUIMetricsDOMChangeQueue *)domChangeTimingQueue;
-(void)_onReportPlatformJsonTimes:(id)arg1 ;
-(void)_onReportDOMChange:(id)arg1 ;
-(void)_onReportRequestTimes:(id)arg1 ;
-(void)_onReportDocumentReady:(id)arg1 ;
-(void)_reloadPageData;
-(void)_skui_applicationWillEnterForeground:(id)arg1 ;
-(void)_finishLoadOperationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_redirectToURL:(id)arg1 ;
-(void)_networkTypeChangeNotification:(id)arg1 ;
-(void)_showLegacyStorePageWithRequest:(id)arg1 page:(id)arg2 pageType:(long long)arg3 URLResponse:(id)arg4 ;
-(void)_finishLegacyProtocolOperationForResponse:(id)arg1 dataProvider:(id)arg2 dictionary:(id)arg3 ;
-(/*^block*/id)pendingSizeTransitionCompletion;
-(void)_reloadNavigationItemContents;
-(BOOL)_makeSearchBarFirstResponderOnLoad;
-(BOOL)_selectSearchBarContentOnBecomingFirstResponder;
-(void)_setMakeSearchBarFirstResponderOnLoad:(BOOL)arg1 ;
-(void)_setSelectSearchBarContentOnBecomingFirstResponder:(BOOL)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)reloadData;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)contentScrollView;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)toolbarItems;
-(id)previewMenuItems;
-(void)_setChildViewController:(id)arg1 ;
@end

