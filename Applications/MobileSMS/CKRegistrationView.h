//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface CKRegistrationView : UIScrollView
{
    UIImageView *_iconImageView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_verbiageLabel;	// 24 = 0x18
    UILabel *_signingInLabel;	// 32 = 0x20
    UIActivityIndicatorView *_signingInSpinner;	// 40 = 0x28
    UIButton *_learnMoreButton;	// 48 = 0x30
    UIView *_authKitSignInView;	// 56 = 0x38
}

@property(retain, nonatomic) UIView *authKitSignInView; // @synthesize authKitSignInView=_authKitSignInView;
@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UIActivityIndicatorView *signingInSpinner; // @synthesize signingInSpinner=_signingInSpinner;
@property(retain, nonatomic) UILabel *signingInLabel; // @synthesize signingInLabel=_signingInLabel;
@property(retain, nonatomic) UILabel *verbiageLabel; // @synthesize verbiageLabel=_verbiageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;	// IMP=0x0000000100022d48
- (void)_learnMorePressed:(id)arg1;	// IMP=0x0000000100022c58
- (void)layoutSubviews;	// IMP=0x0000000100022440
- (struct CGSize)manualSizeToFitForAuthKitSignInView;	// IMP=0x0000000100022254
- (void)setSigningIn:(_Bool)arg1;	// IMP=0x00000001000217bc

@end

