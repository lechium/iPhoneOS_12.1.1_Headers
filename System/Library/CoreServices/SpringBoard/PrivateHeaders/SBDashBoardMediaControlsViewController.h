//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardNowPlayingViewController.h"

#import "MPULockScreenMediaControlsDelegate.h"

@class MPULockScreenMediaControlsViewController, NSString;

@interface SBDashBoardMediaControlsViewController : SBDashBoardNowPlayingViewController <MPULockScreenMediaControlsDelegate>
{
    MPULockScreenMediaControlsViewController *_mediaControlsViewController;	// 8 = 0x8
}

+ (Class)viewClass;	// IMP=0x000000010052c844
- (void).cxx_destruct;	// IMP=0x000000010052cd38
- (void)_updatePersistentUpdatesEnabled:(_Bool)arg1;	// IMP=0x000000010052ccd8
- (void)_layoutMediaControls;	// IMP=0x000000010052cbf0
- (_Bool)handleEvent:(id)arg1;	// IMP=0x000000010052cb0c
- (long long)presentationPriority;	// IMP=0x000000010052cb04
- (long long)presentationType;	// IMP=0x000000010052cafc
- (void)mediaControlsViewController:(id)arg1 didReceiveInteractionEvent:(id)arg2;	// IMP=0x000000010052caa4
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x000000010052ca9c
- (void)viewWillLayoutSubviews;	// IMP=0x000000010052ca4c
- (void)viewDidLoad;	// IMP=0x000000010052c858
- (id)initWithMediaControlsViewController:(id)arg1;	// IMP=0x000000010052c7bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
