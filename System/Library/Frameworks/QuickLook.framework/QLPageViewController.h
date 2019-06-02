/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKitCore/UIPageViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UIPageViewControllerDelegate, QLPageViewControllerDataSource, UIScrollViewDelegate;
@class NSMapTable, UIScrollView, QLDelegateProxy, UIViewController, NSString;

@interface QLPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate> {

	NSMapTable* _pages;
	unsigned long long _nextPageIndex;
	CGPoint _scrollingStartOffset;
	id<UIPageViewControllerDelegate> _definedDelegate;
	UIScrollView* _scrollView;
	QLDelegateProxy* _scrollViewDelegateProxy;
	QLDelegateProxy* _pageViewControllerDelegateProxy;
	double _interPageSpacing;
	long long _currentPageIndexForAppliedParallaxEffect;
	BOOL _pageClipsToBounds[3];
	BOOL _isTransitioning;
	unsigned long long _currentPageIndex;
	id<QLPageViewControllerDataSource> _indexedDataSource;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	double _parallaxIntensity;

}

@property (assign,nonatomic) unsigned long long currentPageIndex;                                      //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * currentPage; 
@property (assign,nonatomic,__weak) id<QLPageViewControllerDataSource> indexedDataSource;              //@synthesize indexedDataSource=_indexedDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;                       //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (nonatomic,__weak,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) double parallaxIntensity;                                                 //@synthesize parallaxIntensity=_parallaxIntensity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setCurrentPageIndex:(unsigned long long)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_viewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2 ;
-(void)_unsetParallaxEffect;
-(id)_retrieveAndStoreViewControllerAtIndex:(unsigned long long)arg1 offset:(unsigned long long)arg2 ;
-(id<QLPageViewControllerDataSource>)indexedDataSource;
-(void)_rearrangeCachedViewControllersWithNewCurrentPageIndex:(long long)arg1 ;
-(void)_setViewControllers:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_cachedViewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2 ;
-(void)_loadAndCacheViewControllersBeforeAndAfterIndex:(long long)arg1 ;
-(void)_applyParallaxEffectWithTransitionProgress:(double)arg1 ;
-(unsigned long long)_indexOfViewController:(id)arg1 ;
-(void)setCurrentPageIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)clearInternalCache;
-(void)setParallaxIntensity:(double)arg1 ;
-(void)setIndexedDataSource:(id<QLPageViewControllerDataSource>)arg1 ;
-(double)parallaxIntensity;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(UIScrollView *)scrollView;
-(UIViewController *)currentPage;
-(id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)_setUp;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
@end
