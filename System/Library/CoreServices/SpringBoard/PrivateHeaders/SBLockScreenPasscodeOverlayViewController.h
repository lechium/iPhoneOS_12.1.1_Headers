//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayViewController.h"

#import "SBUIPasscodeLockViewDelegate.h"

@class NSString, SBUIPasscodeViewWithLockScreenStyle;

@interface SBLockScreenPasscodeOverlayViewController : SBLockOverlayViewController <SBUIPasscodeLockViewDelegate>
{
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;	// 8 = 0x8
    _Bool _attemptingUnlock;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;	// IMP=0x00000001000e46d0
- (void)_invalidOrFail:(id)arg1;	// IMP=0x00000001000e467c
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(_Bool)arg2;	// IMP=0x00000001000e4134
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;	// IMP=0x00000001000e40e0
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;	// IMP=0x00000001000e40d0
- (void)passcodeLockViewPasscodeEntered:(id)arg1;	// IMP=0x00000001000e40c0
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;	// IMP=0x00000001000e3fcc
- (id)_newPasscodeView;	// IMP=0x00000001000e3e5c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000e3de4
- (void)loadView;	// IMP=0x00000001000e3d08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

