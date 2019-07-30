//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SBFVibrantTableViewHeaderFooterView.h"

#import "SBModalLayoutCaching.h"

@class NSString, SBNotificationsClearButton, UIImageView, UILabel;

@interface SBNotificationCenterHeaderView : _SBFVibrantTableViewHeaderFooterView <SBModalLayoutCaching>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIImageView *_iconImageView;	// 16 = 0x10
    SBNotificationsClearButton *_clearButton;	// 24 = 0x18
    _Bool _showingClear;	// 32 = 0x20
    long long _layoutMode;	// 40 = 0x28
    CDUnknownBlockType _clearButtonVisibleAction;	// 48 = 0x30
    CDUnknownBlockType _clearButtonFinalAction;	// 56 = 0x38
}

+ (double)_titleBaseline;	// IMP=0x000000010000a224
+ (id)titleFontForLayoutMode:(long long)arg1;	// IMP=0x0000000100009b20
@property(copy, nonatomic) CDUnknownBlockType clearButtonFinalAction; // @synthesize clearButtonFinalAction=_clearButtonFinalAction;
@property(copy, nonatomic) CDUnknownBlockType clearButtonVisibleAction; // @synthesize clearButtonVisibleAction=_clearButtonVisibleAction;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
- (void).cxx_destruct;	// IMP=0x000000010000a888
- (void)buttonAction:(id)arg1;	// IMP=0x000000010000a72c
- (void)layoutSubviews;	// IMP=0x000000010000a328
- (void)resetAnimated:(_Bool)arg1;	// IMP=0x000000010000a2dc
- (struct CGRect)_clearButtonFrame;	// IMP=0x000000010000a110
- (struct CGRect)contentBounds;	// IMP=0x000000010000a104
- (void)setHasClearButton:(_Bool)arg1;	// IMP=0x000000010000a030
- (void)_removeClearButton;	// IMP=0x0000000100009ff4
- (void)_addClearButton;	// IMP=0x0000000100009ea4
- (void)setBackgroundView:(id)arg1;	// IMP=0x0000000100009ea0
- (long long)initialGraphicsQuality;	// IMP=0x0000000100009e7c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100009e48
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x0000000100009bb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

