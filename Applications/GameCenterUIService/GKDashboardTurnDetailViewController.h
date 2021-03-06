//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKDetailViewController.h"

@class GKTurnBasedMatch, NSLayoutConstraint, UIButton, UILabel, UIView;

@interface GKDashboardTurnDetailViewController : GKDetailViewController
{
    _Bool _shouldShowPlay;	// 8 = 0x8
    _Bool _shouldShowQuit;	// 9 = 0x9
    GKTurnBasedMatch *_match;	// 16 = 0x10
    UIView *_contentVerticalCenteringView;	// 24 = 0x18
    UIView *_turnDetailContentView;	// 32 = 0x20
    UILabel *_playingWithLabel;	// 40 = 0x28
    UILabel *_createdLabel;	// 48 = 0x30
    UIButton *_firstButton;	// 56 = 0x38
    UIButton *_secondButton;	// 64 = 0x40
    NSLayoutConstraint *_secondButtonCenteringConstraint;	// 72 = 0x48
}

@property(nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint; // @synthesize secondButtonCenteringConstraint=_secondButtonCenteringConstraint;
@property(nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(nonatomic) UILabel *createdLabel; // @synthesize createdLabel=_createdLabel;
@property(nonatomic) UILabel *playingWithLabel; // @synthesize playingWithLabel=_playingWithLabel;
@property(nonatomic) UIView *turnDetailContentView; // @synthesize turnDetailContentView=_turnDetailContentView;
@property(nonatomic) UIView *contentVerticalCenteringView; // @synthesize contentVerticalCenteringView=_contentVerticalCenteringView;
@property(nonatomic) _Bool shouldShowQuit; // @synthesize shouldShowQuit=_shouldShowQuit;
@property(nonatomic) _Bool shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
- (void)handleTurnBasedEvent:(id)arg1;	// IMP=0x0000000100013cf8
- (void)turnOK:(id)arg1;	// IMP=0x0000000100013ce4
- (void)removeMatch:(id)arg1;	// IMP=0x0000000100013a0c
- (void)quitMatch:(id)arg1;	// IMP=0x000000010001348c
- (void)disableButtons;	// IMP=0x000000010001342c
- (void)chooseMatch:(id)arg1;	// IMP=0x00000001000131b0
- (void)declineInvitation:(id)arg1;	// IMP=0x0000000100012ed8
- (void)acceptInvitation:(id)arg1;	// IMP=0x0000000100012c78
- (void)refreshPresenter;	// IMP=0x0000000100012c0c
- (id)preferredFocusEnvironments;	// IMP=0x0000000100012b88
- (id)playingWithString;	// IMP=0x00000001000128a8
- (void)viewDidLoad;	// IMP=0x00000001000123f4
- (void)dealloc;	// IMP=0x0000000100012378
- (id)initWithTurnBasedMatch:(id)arg1;	// IMP=0x000000010001225c

@end

