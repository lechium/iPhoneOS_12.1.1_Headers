//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBDateLabelDelegate.h"
#import "SBStarkBannerItemObserver.h"
#import "SBUIBannerView.h"

@class NSString, SBStarkBannerItem, SBUIBannerContext, SBUIStarkBannerViewButton, UIImageView, UILabel, UILabel<NCNotificationDateLabel>;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView>
{
    id <SBStarkSessionConfiguring> _configuration;	// 8 = 0x8
    SBUIBannerContext *_context;	// 16 = 0x10
    SBStarkBannerItem *_bannerItem;	// 24 = 0x18
    UIImageView *_categoryImageView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    double _titleAscender;	// 48 = 0x30
    UILabel *_subTitleLabel;	// 56 = 0x38
    double _subTitleAscender;	// 64 = 0x40
    SBUIStarkBannerViewButton *_okButton;	// 72 = 0x48
    SBUIStarkBannerViewButton *_actionButton;	// 80 = 0x50
    struct UIEdgeInsets _contentInsets;	// 88 = 0x58
    UILabel<NCNotificationDateLabel> *_relevanceDateLabel;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001005a08fc
- (void)dateLabelDidChange:(id)arg1;	// IMP=0x00000001005a08f0
- (void)starkBannerItemDidReloadDisplayProperties:(id)arg1;	// IMP=0x00000001005a0604
- (_Bool)shouldBorrowScreen;	// IMP=0x00000001005a05fc
- (id)bannerContext;	// IMP=0x00000001005a05ec
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000001005a05e4
- (void)layoutSubviews;	// IMP=0x00000001005a0004
- (void)_layoutForButton:(id)arg1 contentFrame:(struct CGRect)arg2;	// IMP=0x000000010059ff34
- (_Bool)_shouldShowOKButton;	// IMP=0x000000010059ff04
- (void)_setRelevanceDate:(id)arg1;	// IMP=0x000000010059fc14
- (id)_defaultRelevanceDateFont;	// IMP=0x000000010059fa98
- (id)_titleFont;	// IMP=0x000000010059fa3c
- (_Bool)_hasSubtitle;	// IMP=0x000000010059f9e0
- (struct UIEdgeInsets)_contentInsetsForActionType:(long long)arg1;	// IMP=0x000000010059f9b0
- (struct UIEdgeInsets)_categoryImageInsets;	// IMP=0x000000010059f99c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010059f990
- (void)dealloc;	// IMP=0x000000010059f91c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010059f908
- (id)initWithConfiguration:(id)arg1 context:(id)arg2;	// IMP=0x000000010059f2d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

