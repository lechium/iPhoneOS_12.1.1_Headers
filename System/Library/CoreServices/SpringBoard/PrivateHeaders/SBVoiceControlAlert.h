//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBDashBoardExternalBehaviorProviding.h"

@class NSString;

@interface SBVoiceControlAlert : SBAlert <SBDashBoardExternalBehaviorProviding>
{
    struct {
        unsigned int shouldBeActivated:1;
        unsigned int isReadyToBeActivated:1;
        unsigned int hasBeenActivated:1;
    } _voiceControlFlags;	// 8 = 0x8
}

+ (void)_setNextRecognitionAudioInputPathForSession:(id)arg1 resetting:(_Bool)arg2;	// IMP=0x000000010043f0fc
+ (void)setNextRecognitionAudioInputPaths:(id)arg1;	// IMP=0x000000010043f0c0
+ (void)_configureSession:(id)arg1 forAlert:(id)arg2;	// IMP=0x000000010043dfbc
+ (_Bool)_bluetoothDevicesPickable;	// IMP=0x000000010043ddf4
+ (void)bluetoothDeviceTerminatedVoiceControl:(id)arg1;	// IMP=0x000000010043dd88
+ (void)bluetoothDeviceRequestedVoiceControl:(id)arg1;	// IMP=0x000000010043db10
+ (_Bool)resetVoiceControlIfNecessary:(_Bool)arg1;	// IMP=0x000000010043da0c
+ (_Bool)shouldEnterVoiceControl;	// IMP=0x000000010043d4fc
+ (void)unregisterForAlerts;	// IMP=0x000000010043d408
+ (void)registerForAlerts;	// IMP=0x000000010043d314
+ (id)pendingOrActiveAlert;	// IMP=0x000000010043d284
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;	// IMP=0x000000010043efb8
- (double)autoDimTime;	// IMP=0x000000010043efb0
- (_Bool)handleMenuButtonTap;	// IMP=0x000000010043ef50
- (void)handleHeadsetButtonUpFromActivation:(_Bool)arg1;	// IMP=0x000000010043eec8
- (void)_proximityChanged:(id)arg1;	// IMP=0x000000010043ed4c
- (void)dealloc;	// IMP=0x000000010043ec60
- (void)cancel;	// IMP=0x000000010043eb90
- (void)cancelIfNotActivated;	// IMP=0x000000010043eb68
- (void)activateWhenReady;	// IMP=0x000000010043eb34
- (id)initFromMenuButton;	// IMP=0x000000010043e8fc
- (void)activate;	// IMP=0x000000010043e804
- (void)deactivate;	// IMP=0x000000010043e6dc
- (_Bool)allowsEventOnlySuspension;	// IMP=0x000000010043e6d4
- (id)initFromBluetoothDevice:(id)arg1;	// IMP=0x000000010043e624
- (id)initFromWiredHeadsetButton;	// IMP=0x000000010043e518
- (id)init;	// IMP=0x000000010043e460
- (void)_setRoutingAttributesForWiredHeadset:(_Bool)arg1;	// IMP=0x000000010043e3c4
- (_Bool)recognitionSessionWillBeginAction:(id)arg1;	// IMP=0x000000010043e344
- (void)_workspaceActivate;	// IMP=0x000000010043e340
- (id)_session;	// IMP=0x000000010043e284
- (void)_makeActive;	// IMP=0x000000010043d2ac
- (void)_resign;	// IMP=0x000000010043d290

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

