//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface PHCarPlayInCallButtonsView : UIView
{
    int _buttonsMode;	// 8 = 0x8
    float _buttonDistributionScalingFactor;	// 12 = 0xc
    id <PHCarPlayInCallButtonsViewDelegate> _delegate;	// 16 = 0x10
    long long _highlightedControlIndex;	// 24 = 0x18
    NSMutableDictionary *_buttonsDictionary;	// 32 = 0x20
    NSArray *_buttonsArray;	// 40 = 0x28
    NSMutableArray *_buttonDividerViews;	// 48 = 0x30
}

@property(retain) NSMutableArray *buttonDividerViews; // @synthesize buttonDividerViews=_buttonDividerViews;
@property(retain) NSArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(retain) NSMutableDictionary *buttonsDictionary; // @synthesize buttonsDictionary=_buttonsDictionary;
@property float buttonDistributionScalingFactor; // @synthesize buttonDistributionScalingFactor=_buttonDistributionScalingFactor;
@property(nonatomic) long long highlightedControlIndex; // @synthesize highlightedControlIndex=_highlightedControlIndex;
@property id <PHCarPlayInCallButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property int buttonsMode; // @synthesize buttonsMode=_buttonsMode;
- (void).cxx_destruct;	// IMP=0x00000001000cebe4
- (id)preferredFocusEnvironments;	// IMP=0x00000001000ce9e0
- (void)phoneCallStatusChangedNotification:(id)arg1;	// IMP=0x00000001000ce9d4
- (void)callModelChangedNotification:(id)arg1;	// IMP=0x00000001000ce9c8
- (void)buttonWasTapped:(id)arg1;	// IMP=0x00000001000ce958
- (_Bool)shouldShowActionTypeSendToVoicemail;	// IMP=0x00000001000ce8ac
- (id)keyForButtonType:(int)arg1;	// IMP=0x00000001000ce744
- (id)existingButtonsNotInArray:(id)arg1;	// IMP=0x00000001000ce69c
- (id)buttonForButtonType:(int)arg1 createIfNecessary:(_Bool)arg2 createWithHorizontalPositionFraction:(float)arg3;	// IMP=0x00000001000ce348
- (void)updateButtonsForCallModelState;	// IMP=0x00000001000ce0d0
- (float)distributedFractionForUndistributedFraction:(float)arg1;	// IMP=0x00000001000ce098
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forDividerView:(id)arg2;	// IMP=0x00000001000cdf80
- (void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forButton:(id)arg2;	// IMP=0x00000001000cde68
- (void)removeButtons:(id)arg1;	// IMP=0x00000001000cdc88
- (void)setButtonsMode:(int)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000cc930
- (void)setMuted:(_Bool)arg1;	// IMP=0x00000001000cc8dc
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000001000cc8d4
@property(readonly) long long numberOfControls;
- (void)dealloc;	// IMP=0x00000001000cc7ec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000cc608

@end
