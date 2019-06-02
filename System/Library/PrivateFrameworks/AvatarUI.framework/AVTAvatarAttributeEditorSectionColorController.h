/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionColorDataSourceDelegate.h>
#import <libobjc.A.dylib/AVTAvatarColorSliderContainerViewDelegate.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorControllerSubSelectionDelegate.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorSectionController.h>

@protocol AVTAvatarAttributeEditorSection, AVTAvatarAttributeEditorControllerSubSelectionDelegate;
@class AVTAvatarAttributeEditorSectionColorDataSource, UIView, UICollectionView, UICollectionViewFlowLayout, AVTAvatarColorSliderContainerView, AVTUIEnvironment, AVTAttributeEditorSectionHeaderView, NSString;

@interface AVTAvatarAttributeEditorSectionColorController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, AVTAvatarAttributeEditorSectionColorDataSourceDelegate, AVTAvatarColorSliderContainerViewDelegate, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTAvatarAttributeEditorSectionController> {

	BOOL _showsHeader;
	BOOL _dontAnimateSelection;
	BOOL _needsScrollToSelected;
	id<AVTAvatarAttributeEditorSection> _section;
	long long _selectedIndex;
	id<AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
	AVTAvatarAttributeEditorSectionColorDataSource* _dataSource;
	UIView* _containerView;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	AVTAvatarColorSliderContainerView* _sliderContainerView;
	AVTUIEnvironment* _environment;
	AVTAvatarAttributeEditorSectionColorController* _subController;
	UIView* _subControllerView;
	AVTAttributeEditorSectionHeaderView* _headerView;

}

@property (nonatomic,readonly) AVTAvatarAttributeEditorSectionColorDataSource * dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                                  //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * collectionViewLayout;                                       //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) AVTAvatarColorSliderContainerView * sliderContainerView;                                 //@synthesize sliderContainerView=_sliderContainerView - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                                        //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) AVTAvatarAttributeEditorSectionColorController * subController;                          //@synthesize subController=_subController - In the implementation block
@property (nonatomic,retain) UIView * subControllerView;                                                              //@synthesize subControllerView=_subControllerView - In the implementation block
@property (assign,nonatomic) double currentRelativeContentOffsetX; 
@property (nonatomic,readonly) BOOL showsHeader;                                                                      //@synthesize showsHeader=_showsHeader - In the implementation block
@property (assign,nonatomic) BOOL dontAnimateSelection;                                                               //@synthesize dontAnimateSelection=_dontAnimateSelection - In the implementation block
@property (assign,nonatomic) BOOL needsScrollToSelected;                                                              //@synthesize needsScrollToSelected=_needsScrollToSelected - In the implementation block
@property (nonatomic,retain) AVTAttributeEditorSectionHeaderView * headerView;                                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIView * sectionView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate; 
@property (nonatomic,readonly) id<AVTAvatarAttributeEditorSection> section;                                           //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                                                                 //@synthesize selectedIndex=_selectedIndex - In the implementation block
+(BOOL)supportsSelection;
+(double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2 ;
+(CGSize)cellSizeFittingWidth:(double)arg1 environment:(id)arg2 ;
+(CGPoint)clampedContentOffsetForOffset:(CGPoint)arg1 collectionView:(id)arg2 ;
+(BOOL)updateCollectionViewLayout:(id)arg1 containerSize:(CGSize)arg2 environment:(id)arg3 forExtended:(BOOL)arg4 withSlider:(BOOL)arg5 subSection:(BOOL)arg6 subSectionHeight:(double)arg7 numberOfItems:(long long)arg8 ;
-(UIView *)sectionView;
-(void)updateWithSection:(id)arg1 ;
-(id)viewForIndex:(long long)arg1 ;
-(void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2 ;
-(CGSize)sizeForItemAtIndex:(long long)arg1 fittingSize:(CGSize)arg2 ;
-(UIEdgeInsets)edgeInsetsFittingSize:(CGSize)arg1 ;
-(unsigned long long)indexForItem:(id)arg1 ;
-(id)prefetchingSectionItemForIndex:(long long)arg1 ;
-(void)updateCell:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)cell:(id)arg1 willDisplayAtIndex:(long long)arg2 ;
-(void)resetToDefaultState;
-(void)invalidateLayoutForNewContainerSize:(CGSize)arg1 ;
-(void)didHighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didUnhighlightItemAtIndex:(long long)arg1 cell:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)didSelectItemAtIndex:(long long)arg1 cell:(id)arg2 ;
-(void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2 ;
-(void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1 ;
-(void)colorDataSource:(id)arg1 didDeselectItemAtIndex:(long long)arg2 ;
-(void)colorDataSource:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)colorDataSource:(id)arg1 didChangeDisplayMode:(long long)arg2 previousDisplayMode:(long long)arg3 ;
-(id)initWithEnvironment:(id)arg1 showsHeader:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg1 showsHeader:(BOOL)arg2 environment:(id)arg3 ;
-(void)createCollectionView;
-(AVTAvatarColorSliderContainerView *)sliderContainerView;
-(void)createSliderContainerView;
-(UIView *)subControllerView;
-(BOOL)showsHeader;
-(void)setSliderContainerView:(AVTAvatarColorSliderContainerView *)arg1 ;
-(AVTAvatarAttributeEditorSectionColorController *)subController;
-(void)setSubControllerView:(UIView *)arg1 ;
-(void)layoutSubviewsForIndex:(long long)arg1 ;
-(void)animateWithSpringAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scrollCollectionViewToOrigin;
-(void)setDontAnimateSelection:(BOOL)arg1 ;
-(void)setSubController:(AVTAvatarAttributeEditorSectionColorController *)arg1 ;
-(void)prepareSubControllerView;
-(BOOL)needsScrollToSelected;
-(void)setNeedsScrollToSelected:(BOOL)arg1 ;
-(void)scrollCollectionViewToSelectedColor;
-(double)heightForSectionHeaderFittingWidth:(double)arg1 ;
-(double)currentRelativeContentOffsetX;
-(void)willDisplayViewForIndex:(long long)arg1 ;
-(void)setCurrentRelativeContentOffsetX:(double)arg1 ;
-(void)updateCollectionViewLayoutWithSizeChanged:(BOOL)arg1 containerSize:(CGSize)arg2 ;
-(BOOL)dontAnimateSelection;
-(void)setSelectedState:(BOOL)arg1 animated:(BOOL)arg2 forCellAtIndexPath:(id)arg3 ;
-(void)showSliderAnimated:(BOOL)arg1 ;
-(void)hideSliderAnimated:(BOOL)arg1 ;
-(void)updateSectionItem:(id)arg1 withVariation:(double)arg2 ;
-(void)colorSliderVariationChanged:(double)arg1 forItem:(id)arg2 ;
-(void)colorSliderDidFinishChangingVariation:(double)arg1 forItem:(id)arg2 ;
-(void)setDelegate:(id<AVTAvatarAttributeEditorControllerSubSelectionDelegate>)arg1 ;
-(id<AVTAvatarAttributeEditorSection>)section;
-(id<AVTAvatarAttributeEditorControllerSubSelectionDelegate>)delegate;
-(UICollectionView *)collectionView;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)reloadData;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(AVTAttributeEditorSectionHeaderView *)headerView;
-(void)setHeaderView:(AVTAttributeEditorSectionHeaderView *)arg1 ;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(AVTAvatarAttributeEditorSectionColorDataSource *)dataSource;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(long long)numberOfItems;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(AVTUIEnvironment *)environment;
@end

