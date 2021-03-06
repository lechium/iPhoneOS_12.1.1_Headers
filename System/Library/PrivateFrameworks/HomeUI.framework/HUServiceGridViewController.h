/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUControllableItemCollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class HUGridLayoutOptions, NSString;

@interface HUServiceGridViewController : HUControllableItemCollectionViewController <UICollectionViewDelegateFlowLayout> {

	BOOL _shouldShowLoadingState;
	unsigned long long _contentMargins;
	long long _scrollDirection;

}

@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions; 
@property (assign,nonatomic) unsigned long long contentMargins;                //@synthesize contentMargins=_contentMargins - In the implementation block
@property (assign,nonatomic) long long scrollDirection;                        //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingState;                      //@synthesize shouldShowLoadingState=_shouldShowLoadingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)layoutOptionsDidChange;
-(id)initWithItemManager:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)_defaultLayoutOptionsForViewSize:(CGSize)arg1 ;
-(CGSize)preferredContentSizeForCollectionViewContentSize:(CGSize)arg1 ;
-(BOOL)shouldShowLoadingState;
-(void)setShouldShowLoadingState:(BOOL)arg1 ;
-(void)_layoutSectionHeaders;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(unsigned long long)contentMargins;
-(void)setContentMargins:(unsigned long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(long long)scrollDirection;
-(void)setScrollDirection:(long long)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
@end

