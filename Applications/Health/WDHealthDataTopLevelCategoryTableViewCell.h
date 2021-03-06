//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, UICollectionView;

@interface WDHealthDataTopLevelCategoryTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_topLevelDataCategories;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    double _cachedCategoryNameFittingScaleFactor;	// 24 = 0x18
    id <WDHealthDataTopLevelCategoryTableViewCellDelegate> _delegate;	// 32 = 0x20
}

+ (double)_contentItemHeight;	// IMP=0x00000001001148b4
+ (double)_contentItemWidth;	// IMP=0x000000010011485c
+ (double)_collectionViewWidth;	// IMP=0x0000000100114740
+ (double)contentHeightWithCount:(unsigned long long)arg1;	// IMP=0x0000000100114158
+ (unsigned long long)collectionViewItemsPerRow;	// IMP=0x0000000100114138
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x0000000100114130
+ (id)reuseIdentifier;	// IMP=0x000000010011408c
@property(nonatomic) __weak id <WDHealthDataTopLevelCategoryTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100114fd8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100114e4c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000100114d6c
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100114c34
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100114c1c
- (double)categoryNameLabelFontSize;	// IMP=0x0000000100114bdc
- (double)_categoryNameFittingScaleFactor;	// IMP=0x00000001001149d8
- (double)_categoryNameWidth;	// IMP=0x0000000100114988
- (struct CGSize)_contentItemSize;	// IMP=0x0000000100114924
- (struct CGRect)_collectionViewFrame;	// IMP=0x00000001001147fc
- (void)_setupCollectionView;	// IMP=0x000000010011425c
- (double)contentHeight;	// IMP=0x0000000100114208
- (void)dealloc;	// IMP=0x00000001001140b8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100114058
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100113fc0
- (id)initWithTopLevelDataCategories:(id)arg1;	// IMP=0x0000000100113f10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

