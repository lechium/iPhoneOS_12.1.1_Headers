/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIStorePageCollectionViewDelegate <UICollectionViewDelegateFlowLayout>
@optional
-(void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
-(id)backgroundColorForSection:(long long)arg1;
-(void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
-(BOOL)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
-(UIEdgeInsets*)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 pinningGroupForItemAtIndexPath:(id)arg3;
-(long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
-(void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
-(id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;
-(id)indexPathsForGradientItemsInCollectionView:(id)arg1 layout:(id)arg2;

@end

