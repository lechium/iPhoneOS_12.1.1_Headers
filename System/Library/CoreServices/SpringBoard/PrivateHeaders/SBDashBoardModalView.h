//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "SBLockScreenModalView.h"

@class NSString, SBDashBoardModalButton, SBDashBoardStatusTextViewController, UIButton, UIImage, UIImageView, UILabel, _UILegibilitySettings;

@interface SBDashBoardModalView : SBDashBoardViewBase <SBLockScreenModalView>
{
    id <SBDashBoardModalViewDelegate> _delegate;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
    SBDashBoardModalButton *_primaryActionButton;	// 40 = 0x28
    UIButton *_secondaryActionButton;	// 48 = 0x30
    NSString *_overrideFooterText;	// 56 = 0x38
    SBDashBoardStatusTextViewController *_statusTextViewController;	// 64 = 0x40
    _UILegibilitySettings *_legibilitySettings;	// 72 = 0x48
    _Bool _showsStatusText;	// 80 = 0x50
    _Bool _needsTitleConstraints;	// 81 = 0x51
    _Bool _needsSubTitleConstraints;	// 82 = 0x52
    _Bool _needsPrimaryActionConstraints;	// 83 = 0x53
    _Bool _needsSecondaryActionConstraints;	// 84 = 0x54
    _Bool _needsImageConstraints;	// 85 = 0x55
    _Bool _showsDateView;	// 86 = 0x56
}

@property(nonatomic) _Bool showsDateView; // @synthesize showsDateView=_showsDateView;
@property(retain, nonatomic, getter=_imageView, setter=_setImageView:) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic, getter=_secondaryActionButton, setter=_setSecondaryActionButton:) UIButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
@property(retain, nonatomic, getter=_primaryActionButton, setter=_setPrimaryActionButton:) SBDashBoardModalButton *primaryActionButton; // @synthesize primaryActionButton=_primaryActionButton;
@property(retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool showsStatusText; // @synthesize showsStatusText=_showsStatusText;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) __weak id <SBDashBoardModalViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000ae370
- (void)_buttonTapped:(id)arg1;	// IMP=0x00000001000ae1dc
- (id)_secondaryActionFont;	// IMP=0x00000001000ae1c8
- (id)_primaryActionFont;	// IMP=0x00000001000ae1b0
- (id)_subtitleFont;	// IMP=0x00000001000ae110
- (id)_titleFont;	// IMP=0x00000001000ae070
- (void)_positionBottomElementWithLayoutAnchor:(id)arg1 lessThanOrEqual:(_Bool)arg2;	// IMP=0x00000001000adaa8
- (void)updateConstraints;	// IMP=0x00000001000ac868
- (void)layoutSubviews;	// IMP=0x00000001000ac6d0
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *footerText;
@property(copy, nonatomic) NSString *secondaryActionButtonText;
@property(copy, nonatomic) NSString *primaryActionButtonText;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *titleText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000abc18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

