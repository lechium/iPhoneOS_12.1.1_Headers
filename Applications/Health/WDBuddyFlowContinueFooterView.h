//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton;

@interface WDBuddyFlowContinueFooterView : UIView
{
    double _width;	// 8 = 0x8
    double _bottomInset;	// 16 = 0x10
    NSLayoutConstraint *_continueButtonBaselineConstraint;	// 24 = 0x18
    NSLayoutConstraint *_continueButtonBaselineToBottomConstraint;	// 32 = 0x20
    UIButton *_continueButton;	// 40 = 0x28
}

@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
- (void).cxx_destruct;	// IMP=0x0000000100044d60
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100044c3c
- (void)_updateForCurrentSizeCategory;	// IMP=0x0000000100044b4c
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 bottomInset:(double)arg3 width:(double)arg4;	// IMP=0x00000001000446d4

@end

