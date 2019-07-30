//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSString, NSTimer, SBSoftwareUpdateInstallOperationLifeCycleHandler, SBSoftwareUpdateInstallOptions, SUAutoInstallOperation, SUDownload;

@interface SBSoftwareUpdateInstallAlertItem : SBBaseSoftwareUpdateAlertItem
{
    unsigned long long _alertStyle;	// 8 = 0x8
    _Bool _undimScreen;	// 16 = 0x10
    _Bool _choseInstallTonight;	// 17 = 0x11
    SBSoftwareUpdateInstallOptions *_installOptions;	// 24 = 0x18
    SUDownload *_download;	// 32 = 0x20
    _Bool _scheduleInstallAlertRepopOnDismiss;	// 40 = 0x28
    NSString *_repopReason;	// 48 = 0x30
    NSTimer *_countdownTimer;	// 56 = 0x38
    unsigned long long _timeLeftUntilInstall;	// 64 = 0x40
    SBSoftwareUpdateInstallOperationLifeCycleHandler *_tryTonightOperationWrapper;	// 72 = 0x48
}

@property(retain, nonatomic, getter=_tryTonightOperationWrapper, setter=_setTryTonightOperationWrapper:) SBSoftwareUpdateInstallOperationLifeCycleHandler *tryTonightOperationWrapper; // @synthesize tryTonightOperationWrapper=_tryTonightOperationWrapper;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_alertStyle;
- (void).cxx_destruct;	// IMP=0x00000001003095c0
- (void)_countdownTimerFired;	// IMP=0x00000001003093bc
- (void)_updateBodyTextForCountdown;	// IMP=0x0000000100309138
- (id)_bodyTextToModelSpecificLocalizedKey:(id)arg1;	// IMP=0x000000010030900c
- (void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1;	// IMP=0x0000000100308f70
- (void)_installUpdateNowFromTimer:(_Bool)arg1;	// IMP=0x0000000100308db4
- (_Bool)_shouldCountdown;	// IMP=0x0000000100308d9c
- (void)_clearCountdownTimer;	// IMP=0x0000000100308d60
- (void)_setTryTonightOperation:(id)arg1;	// IMP=0x0000000100308c84
- (id)_stringFromAlertStyle:(unsigned long long)arg1;	// IMP=0x0000000100308c2c
- (void)performUnlockAction;	// IMP=0x0000000100308be8
- (_Bool)shouldShowInLockScreen;	// IMP=0x0000000100308bdc
- (id)shortLockLabel;	// IMP=0x0000000100308b68
- (id)lockLabel;	// IMP=0x0000000100308af4
- (_Bool)undimsScreen;	// IMP=0x0000000100308ac8
- (_Bool)dismissOnLock;	// IMP=0x0000000100308ac0
- (_Bool)allowLockScreenDismissal;	// IMP=0x0000000100308ab8
- (_Bool)allowMenuButtonDismissal;	// IMP=0x0000000100308ab0
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x00000001003070d0
- (void)willDeactivateForReason:(int)arg1;	// IMP=0x000000010030700c
- (void)_setOccluded:(_Bool)arg1;	// IMP=0x0000000100306f0c
- (id)description;	// IMP=0x0000000100306e60
@property(readonly, nonatomic) __weak SUAutoInstallOperation *tryTonightOperation;
- (void)dealloc;	// IMP=0x0000000100306dec
- (id)initWithDownload:(id)arg1 style:(unsigned long long)arg2 softwareUpdateController:(id)arg3 tryTonightInstallOperation:(id)arg4 installOptions:(id)arg5;	// IMP=0x0000000100306c80
- (id)initWithDownload:(id)arg1 softwareUpdateController:(id)arg2;	// IMP=0x0000000100306c18

@end

