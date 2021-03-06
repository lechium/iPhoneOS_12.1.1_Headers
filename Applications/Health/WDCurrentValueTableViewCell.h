//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "HKDateCacheObserver.h"
#import "WDDashboardCellForceTouchDelegate.h"
#import "WDDashboardCellPrimaryValueSourceDelegate.h"

@class HKDateCache, HKDisplayCategory, HKGradientView, NSString, UIImageView, UILabel;

@interface WDCurrentValueTableViewCell : UITableViewCell <WDDashboardCellPrimaryValueSourceDelegate, HKDateCacheObserver, WDDashboardCellForceTouchDelegate>
{
    HKGradientView *_backgroundGradientView;	// 8 = 0x8
    UIImageView *_categoryIcon;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_currentValueLabel;	// 32 = 0x20
    UILabel *_contextLabel;	// 40 = 0x28
    HKDateCache *_dateCache;	// 48 = 0x30
    HKDisplayCategory *_displayCategory;	// 56 = 0x38
    id <WDCurrentValueTableViewCellDelegate> _delegate;	// 64 = 0x40
    unsigned long long _marginMode;	// 72 = 0x48
    id <WDDashboardCellPrimaryValueSource> _primaryValueSource;	// 80 = 0x50
}

+ (double)preferredHeight;	// IMP=0x00000001000d9b38
@property(retain, nonatomic) id <WDDashboardCellPrimaryValueSource> primaryValueSource; // @synthesize primaryValueSource=_primaryValueSource;
@property(nonatomic) unsigned long long marginMode; // @synthesize marginMode=_marginMode;
- (void).cxx_destruct;	// IMP=0x00000001000db824
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;	// IMP=0x00000001000db7e8
- (struct CGRect)forceTouchFrame;	// IMP=0x00000001000db71c
- (void)primaryValueSourceDidUpdate:(id)arg1;	// IMP=0x00000001000db698
- (id)_contextLabelText;	// IMP=0x00000001000db5b8
- (id)_currentValueTextWithFontScaledBy:(double)arg1;	// IMP=0x00000001000db3a4
- (id)_titleLabelTextWithFontScaledBy:(double)arg1;	// IMP=0x00000001000db128
- (void)_updateTimeBasedUI;	// IMP=0x00000001000db050
- (void)_updateBackgroundGradient;	// IMP=0x00000001000dafb4
- (void)_updateUI;	// IMP=0x00000001000dad90
- (void)_setupSubviews;	// IMP=0x00000001000da9b8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000da8b4
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000da838
- (double)calculatedContentHeightForLargeTextWithSize:(struct CGSize)arg1;	// IMP=0x00000001000da6e8
- (void)_adjustValueLabelSizeForLargeTextForWidth:(double)arg1;	// IMP=0x00000001000da604
- (void)_layoutSubviewsForLargeText;	// IMP=0x00000001000da1f4
- (void)_layoutSubviews;	// IMP=0x00000001000d9bf8
- (void)layoutSubviews;	// IMP=0x00000001000d9b44
- (void)setDisplayCategory:(id)arg1;	// IMP=0x00000001000d9a18
- (void)dealloc;	// IMP=0x00000001000d99bc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000d9988
- (id)initWithReuseIdentifier:(id)arg1 dateCache:(id)arg2 delegate:(id)arg3;	// IMP=0x00000001000d9880

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

