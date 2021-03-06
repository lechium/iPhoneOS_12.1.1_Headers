//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ATConnectionDelegate.h"
#import "BFFFlowItem.h"

@class ATConnection, NSString;

@interface RestoreFromiTunesController : UIViewController <BFFFlowItem, ATConnectionDelegate>
{
    id <BFFFlowItemDelegate> _delegate;	// 8 = 0x8
    ATConnection *_airTrafficConnection;	// 16 = 0x10
}

+ (id)cloudConfigSkipKey;	// IMP=0x0000000100057204
- (void).cxx_destruct;	// IMP=0x0000000100057998
- (long long)preferredStatusBarStyle;	// IMP=0x0000000100057990
- (void)_showConnectedToiTunesUsingAnimations:(_Bool)arg1;	// IMP=0x00000001000578d8
- (void)_showConnectToiTunesUsingAnimations:(_Bool)arg1;	// IMP=0x00000001000577e8
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000576b8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010005763c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000575c0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000574c8
- (void)dealloc;	// IMP=0x000000010005746c
- (void)connectionWasInterrupted:(id)arg1;	// IMP=0x0000000100057444
- (void)connection:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x0000000100057334
- (void)setDelegate:(id)arg1;	// IMP=0x0000000100057320
- (void)loadView;	// IMP=0x00000001000572b4
- (id)init;	// IMP=0x000000010005720c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

