/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>
#import <libobjc.A.dylib/SKUIMissingItemDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol OS_dispatch_source;
@class UICollectionView, SKUIViewElementLayoutContext, NSObject, SKUIMissingItemLoader, NSArray, SKUIProgressIndicatorViewElement, NSIndexPath, SKUICarouselPageComponent, NSString;

@interface SKUICarouselPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIMissingItemDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _carouselCollectionView;
	long long _cellCount;
	SKUIViewElementLayoutContext* _cellLayoutContext;
	NSObject*<OS_dispatch_source> _cycleTimer;
	CGSize _itemSize;
	double _itemSpacing;
	SKUIMissingItemLoader* _missingItemLoader;
	NSArray* _modelObjects;
	BOOL _needsHeightCalculation;
	BOOL _needsReload;
	double _itemWidth;
	long long _progressIndicatorCellIndex;
	SKUIProgressIndicatorViewElement* _progressIndicatorElement;
	NSIndexPath* _reloadIndexPath;

}

@property (nonatomic,readonly) SKUICarouselPageComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)sectionContentInset;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithPageComponent:(id)arg1 ;
-(void)_reloadViewElementProperties;
-(long long)applyUpdateType:(long long)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)invalidateCachedLayoutInformation;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2 ;
-(void)prefetchResourcesWithReason:(long long)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)defaultItemPinningStyle;
-(void)collectionView:(id)arg1 carouselLayout:(id)arg2 willApplyLayoutAttributes:(id)arg3 ;
-(BOOL)_indexPathIsProgressIndicator:(id)arg1 ;
-(long long)_currentPageIndex;
-(id)_carouselCollectionView;
-(void)_scrollToItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(double)_actualContentWidth;
-(void)_startCycleTimerIfNecessary;
-(Class)_cellClassForViewElement:(id)arg1 ;
-(void)_cancelCycleTimer;
-(void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2 ;
-(void)_reloadLegacySizing;
-(id)_dequeueCellForViewElement:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3 ;
-(void)_addImpressionForIndex:(long long)arg1 toSession:(id)arg2 ;
-(BOOL)_isItemEnabledAtIndexPath:(id)arg1 ;
-(Class)_cellClassForLockup:(id)arg1 ;
-(id)_dequeueCellForLockup:(id)arg1 collectionView:(id)arg2 indexPath:(id)arg3 ;
-(id)_missingItemLoader;
-(CGSize)_legacyItemSize;
-(double)_legacyItemSpacing;
-(void)_fireCycleTimer;
-(void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3 ;
-(long long)numberOfCells;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
@end

