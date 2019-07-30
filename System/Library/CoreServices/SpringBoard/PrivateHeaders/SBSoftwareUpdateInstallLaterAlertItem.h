//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSString, SBSoftwareUpdateInstallOperationLifeCycleHandler;

@interface SBSoftwareUpdateInstallLaterAlertItem : SBBaseSoftwareUpdateAlertItem
{
    SBSoftwareUpdateInstallOperationLifeCycleHandler *_tryTonightOperationLifeCycleHandler;	// 8 = 0x8
    NSString *_repopReason;	// 16 = 0x10
    _Bool _choseInstallTonight;	// 24 = 0x18
    _Bool _scheduleInstallAlertRepopOnDismiss;	// 25 = 0x19
}

@property(retain, nonatomic) SBSoftwareUpdateInstallOperationLifeCycleHandler *tryTonightOperationLifeCycleHandler; // @synthesize tryTonightOperationLifeCycleHandler=_tryTonightOperationLifeCycleHandler;
- (void).cxx_destruct;	// IMP=0x000000010030aaa0
- (void)_scheduleInstallAlertRepopOnDismissWithReason:(id)arg1;	// IMP=0x000000010030a9bc
- (_Bool)shouldShowInLockScreen;	// IMP=0x000000010030a9b4
- (_Bool)undimsScreen;	// IMP=0x000000010030a9ac
- (_Bool)dismissOnLock;	// IMP=0x000000010030a9a4
- (_Bool)allowLockScreenDismissal;	// IMP=0x000000010030a99c
- (_Bool)allowMenuButtonDismissal;	// IMP=0x000000010030a994
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;	// IMP=0x0000000100309da4
- (void)willDeactivateForReason:(int)arg1;	// IMP=0x0000000100309c58
- (id)initWithDescriptor:(id)arg1 softwareUpdateController:(id)arg2 tryTonightOperationLifeCycleHandler:(id)arg3;	// IMP=0x0000000100309b74

@end

