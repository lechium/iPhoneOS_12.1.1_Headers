/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVStackCommonTemplateController.h>

@class NSArray, NSIndexPath, _TVNeedsMoreContentEvaluator, UIViewController, UIView;

@interface _TVStackTemplateController : _TVStackCommonTemplateController {

	NSArray* _viewControllers;
	double _lastLayoutWidth;
	NSArray* _stackSections;
	NSArray* _stackRows;
	NSIndexPath* _lastFocusedIndexPath;
	_TVNeedsMoreContentEvaluator* _needsMoreContentEvaluator;
	UIViewController* _backdropTintViewController;
	UIView* _backdropTintView;

}
-(BOOL)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id*)arg2 ;
-(void)_configureBackgroundTintView;
-(void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(CGPoint*)arg2 ;
-(void)_buildStackSections;
-(void)_updateBackgroundTintView;
-(void)_updateBackgroundTintViewEffects;
-(double)_maxViewWidth;
-(id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2 ;
-(CGSize)_maxContentSize;
-(void)_updateFirstItemRowIndexes;
-(long long)updateCollectionViewControllersAndForceReload:(BOOL)arg1 ;
-(UIEdgeInsets)collectionListMargin;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(id)viewControllers;
@end

