//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSNumber;

@interface SVSStarkConfirmationSnippetView : UIView
{
    id <SVSStarkConfirmationSnippetViewDelegate> _delegate;	// 8 = 0x8
    NSArray *_confirmationButtons;	// 16 = 0x10
    double _confirmationButtonYOrigin;	// 24 = 0x18
    NSNumber *_buttonHeight;	// 32 = 0x20
    NSNumber *_buttonWidth;	// 40 = 0x28
}

@property(retain, nonatomic) NSNumber *buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(retain, nonatomic) NSNumber *buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic, getter=_confirmationButtonYOrigin) double confirmationButtonYOrigin; // @synthesize confirmationButtonYOrigin=_confirmationButtonYOrigin;
@property(readonly, nonatomic) NSArray *confirmationButtons; // @synthesize confirmationButtons=_confirmationButtons;
@property(nonatomic) __weak id <SVSStarkConfirmationSnippetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010007fd98
- (id)preferredFocusEnvironments;	// IMP=0x000000010007fc40
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000010007faa8
- (void)confirmationButton:(id)arg1 tappedWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010007f9dc
- (_Bool)_textWrapsInButton:(id)arg1 forWidth:(double)arg2;	// IMP=0x000000010007f92c
- (void)layoutSubviews;	// IMP=0x000000010007f1c8
- (double)_confirmationButtonYOriginInBounds:(struct CGRect)arg1;	// IMP=0x000000010007f0d0
- (void)enableReadAgainButton;	// IMP=0x000000010007ef6c
- (id)initWithFrame:(struct CGRect)arg1 confirmationButtons:(id)arg2 delegate:(id)arg3;	// IMP=0x000000010007eb00

@end

