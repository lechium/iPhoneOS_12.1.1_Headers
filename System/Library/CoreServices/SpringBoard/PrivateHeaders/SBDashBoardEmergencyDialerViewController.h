//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBLockScreenEmergencyDialerDelegate.h"

@class NSString, SBLockScreenEmergencyDialerController;

@interface SBDashBoardEmergencyDialerViewController : SBDashBoardViewControllerBase <SBLockScreenEmergencyDialerDelegate>
{
    SBLockScreenEmergencyDialerController *_controller;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001002bcdd4
- (void)_loadEmergencyDialerView;	// IMP=0x00000001002bc950
- (void)emergencyDialer:(id)arg1 willDeactivateWithError:(id)arg2;	// IMP=0x00000001002bc944
- (long long)presentationPriority;	// IMP=0x00000001002bc93c
- (long long)presentationType;	// IMP=0x00000001002bc934
- (void)aggregateBehavior:(id)arg1;	// IMP=0x00000001002bc894
- (void)aggregateAppearance:(id)arg1;	// IMP=0x00000001002bc690
- (_Bool)handleEvent:(id)arg1;	// IMP=0x00000001002bc5e0
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x00000001002bc5d8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001002bc560
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001002bc510
- (void)viewDidLoad;	// IMP=0x00000001002bc4c0
- (void)dealloc;	// IMP=0x00000001002bc458

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

