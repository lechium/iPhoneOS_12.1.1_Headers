//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate.h"
#import "SBLockScreenActionProvider.h"

@class NSString, SBAwayBulletinListItem, SBLockOverlayView;

@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate, SBLockScreenActionProvider>
{
    SBLockOverlayView *_bulletinView;	// 8 = 0x8
    _Bool _performedAction;	// 16 = 0x10
    SBAwayBulletinListItem *_bulletinItem;	// 24 = 0x18
}

@property(retain, nonatomic) SBAwayBulletinListItem *bulletinItem; // @synthesize bulletinItem=_bulletinItem;
- (void).cxx_destruct;	// IMP=0x00000001003a0794
- (id)_lockScreenActionContext;	// IMP=0x00000001003a067c
- (id)slideToUnlockText;	// IMP=0x00000001003a0628
- (void)performUnlockAction;	// IMP=0x00000001003a061c
- (void)performSnoozeAction;	// IMP=0x00000001003a05d0
- (id)_snoozeAction;	// IMP=0x00000001003a0570
- (_Bool)_hasSnoozeAction;	// IMP=0x00000001003a0534
- (id)_dismissAction;	// IMP=0x00000001003a04d4
- (void)performDismissAction;	// IMP=0x00000001003a0488
- (id)_alternateAction;	// IMP=0x00000001003a0428
- (_Bool)_hasAlternateAction;	// IMP=0x00000001003a03ec
- (void)performAlternateAction;	// IMP=0x00000001003a03a0
- (void)performAction:(id)arg1;	// IMP=0x00000001003a021c
- (id)_titleForAlternateActionButton;	// IMP=0x00000001003a0168
- (id)_calculatedTitleForAlternateActionButton;	// IMP=0x00000001003a005c
- (id)_customTitleForAlternateActionButton;	// IMP=0x000000010039fffc
- (id)lockScreenActionContext;	// IMP=0x000000010039ff98
- (void)handleTapGestureFromView:(id)arg1;	// IMP=0x000000010039ff8c
- (void)lockButtonPressed:(id)arg1;	// IMP=0x000000010039ff48
- (_Bool)handleVolumeButtonPressed;	// IMP=0x000000010039ff00
- (_Bool)handleVolumeUpButtonPressed;	// IMP=0x000000010039fef4
- (_Bool)handleVolumeDownButtonPressed;	// IMP=0x000000010039fee8
- (void)volumeChanged:(id)arg1;	// IMP=0x000000010039fedc
- (void)updateContent;	// IMP=0x000000010039fd08
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010039fc00
- (void)loadView;	// IMP=0x000000010039fb3c
- (void)dealloc;	// IMP=0x000000010039fac0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010039f9cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

