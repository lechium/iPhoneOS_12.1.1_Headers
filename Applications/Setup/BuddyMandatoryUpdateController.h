//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BFFSplashController.h"

#import "BFFFlowItem.h"
#import "SUManagerClientDelegate.h"

@class NSObject<OS_dispatch_queue>, NSString, NSTimer, SUDescriptor;

@interface BuddyMandatoryUpdateController : BFFSplashController <SUManagerClientDelegate, BFFFlowItem>
{
    _Bool _isUpdateMandatory;	// 8 = 0x8
    id <BFFFlowItemDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_updateScanQueue;	// 24 = 0x18
    SUDescriptor *_update;	// 32 = 0x20
    long long _autoInstallTimeRemaining;	// 40 = 0x28
    NSTimer *_autoInstallTimer;	// 48 = 0x30
}

+ (_Bool)hasCloudConfiguration;	// IMP=0x00000001000aa85c
+ (id)availableUpdate;	// IMP=0x00000001000aa468
+ (_Bool)shouldOfferUpdate:(id)arg1;	// IMP=0x00000001000a9a20
+ (_Bool)controllerNeedsToRunForClass:(Class)arg1;	// IMP=0x00000001000a8b30
+ (id)cloudConfigSkipKey;	// IMP=0x00000001000a8b28
@property(retain) NSTimer *autoInstallTimer; // @synthesize autoInstallTimer=_autoInstallTimer;
@property long long autoInstallTimeRemaining; // @synthesize autoInstallTimeRemaining=_autoInstallTimeRemaining;
@property _Bool isUpdateMandatory; // @synthesize isUpdateMandatory=_isUpdateMandatory;
@property(retain) SUDescriptor *update; // @synthesize update=_update;
@property(retain) NSObject<OS_dispatch_queue> *updateScanQueue; // @synthesize updateScanQueue=_updateScanQueue;
@property(nonatomic) __weak id <BFFFlowItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001000aa97c
- (void)beginInstall;	// IMP=0x00000001000aa310
- (id)autoInstallAlertMessageForTimeRemaining:(long long)arg1;	// IMP=0x00000001000aa06c
- (void)showAutoInstallAlert;	// IMP=0x00000001000a9b04
- (void)installNowTapped;	// IMP=0x00000001000a9a14
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000a98b4
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a8ebc
- (id)init;	// IMP=0x00000001000a8ba4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

