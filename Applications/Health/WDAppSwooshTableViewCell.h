//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class HKDisplayCategory, HKDisplayType, HKHorizontalFlowLayout, NSArray, NSLayoutConstraint, NSString, UICollectionView, UILabel;

@interface WDAppSwooshTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UILabel *_headerLabel;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    HKHorizontalFlowLayout *_flowLayout;	// 24 = 0x18
    NSLayoutConstraint *_headerBaselineConstraint;	// 32 = 0x20
    NSLayoutConstraint *_collectionHeightConstraint;	// 40 = 0x28
    struct CGSize _iconSize;	// 48 = 0x30
    NSArray *_marginConstraints;	// 64 = 0x40
    unsigned long long _displayMode;	// 72 = 0x48
    HKDisplayCategory *_category;	// 80 = 0x50
    NSString *_headerText;	// 88 = 0x58
    id <WDAppSwooshTableViewCellDelegate> _delegate;	// 96 = 0x60
    NSArray *_storeItems;	// 104 = 0x68
    HKDisplayType *_displayType;	// 112 = 0x70
}

+ (id)reuseIdentifier;	// IMP=0x00000001000d1f40
+ (id)_headerLabelFont;	// IMP=0x00000001000d1ebc
+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000001000d178c
+ (id)defaultReuseIdentifier;	// IMP=0x00000001000d0d30
@property(retain, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) NSArray *storeItems; // @synthesize storeItems=_storeItems;
@property(nonatomic) __weak id <WDAppSwooshTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (void).cxx_destruct;	// IMP=0x00000001000d2ad8
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000d293c
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000001000d28f8
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000001000d24cc
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000001000d2480
- (id)_storeDetailIdentifier;	// IMP=0x00000001000d2194
- (void)updateStoreData:(id)arg1;	// IMP=0x00000001000d206c
- (void)contentSizeDidChange;	// IMP=0x00000001000d1fd8
- (double)contentHeight;	// IMP=0x00000001000d1f6c
- (double)_headerBaselineOffsetFromTop;	// IMP=0x00000001000d1edc
- (struct CGSize)_iconSize;	// IMP=0x00000001000d1dd8
- (id)_createHeaderLabel;	// IMP=0x00000001000d1b78
- (void)refreshMarginConstraints;	// IMP=0x00000001000d1834
- (void)layoutMarginsDidChange;	// IMP=0x00000001000d17e4
- (void)updateConstraints;	// IMP=0x00000001000d1794
- (void)dealloc;	// IMP=0x00000001000d1714
- (void)_setUpAfterInit;	// IMP=0x00000001000d0f14
- (id)initWithCategory:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000d0e08
- (id)initWithDisplayType:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000d0d5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

