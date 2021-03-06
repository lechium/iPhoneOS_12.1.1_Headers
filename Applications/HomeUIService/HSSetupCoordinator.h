//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFHomeManagerObserver.h"
#import "HFSetupPairingObserver.h"
#import "HSSetupStepDelegate.h"

@class HFSetupAccessoryResult, HMAccessory, HMHome, HMHomeManager, HMSetupAccessoryDescription, NAFuture, NSArray, NSIndexSet, NSString, NSUUID;

@interface HSSetupCoordinator : NSObject <HFHomeManagerObserver, HFSetupPairingObserver, HSSetupStepDelegate>
{
    _Bool _configured;	// 8 = 0x8
    _Bool _disconnected;	// 9 = 0x9
    _Bool _cancelled;	// 10 = 0xa
    id <HSSetupCoordinatorDelegate> _delegate;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    HMHome *_currentHome;	// 32 = 0x20
    NSArray *_homeKitObjectsToSetup;	// 40 = 0x28
    long long _currentHomeKitObjectIndex;	// 48 = 0x30
    HMAccessory *_accessoryForAppPunchOut;	// 56 = 0x38
    HMSetupAccessoryDescription *_setupAccessoryDescription;	// 64 = 0x40
    id <HFSetupPairingController> _pairingController;	// 72 = 0x48
    NSUUID *_homeUUID;	// 80 = 0x50
    NAFuture *_readyToDisplayFuture;	// 88 = 0x58
    HFSetupAccessoryResult *_setupResult;	// 96 = 0x60
    id <HSSetupStep> _currentStep;	// 104 = 0x68
}

@property(nonatomic) __weak id <HSSetupStep> currentStep; // @synthesize currentStep=_currentStep;
@property(retain, nonatomic) HFSetupAccessoryResult *setupResult; // @synthesize setupResult=_setupResult;
@property(retain, nonatomic) NAFuture *readyToDisplayFuture; // @synthesize readyToDisplayFuture=_readyToDisplayFuture;
@property(copy, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(retain, nonatomic) id <HFSetupPairingController> pairingController; // @synthesize pairingController=_pairingController;
@property(readonly, nonatomic) HMSetupAccessoryDescription *setupAccessoryDescription; // @synthesize setupAccessoryDescription=_setupAccessoryDescription;
@property(retain, nonatomic) HMAccessory *accessoryForAppPunchOut; // @synthesize accessoryForAppPunchOut=_accessoryForAppPunchOut;
@property(nonatomic) long long currentHomeKitObjectIndex; // @synthesize currentHomeKitObjectIndex=_currentHomeKitObjectIndex;
@property(copy, nonatomic) NSArray *homeKitObjectsToSetup; // @synthesize homeKitObjectsToSetup=_homeKitObjectsToSetup;
@property(retain, nonatomic) HMHome *currentHome; // @synthesize currentHome=_currentHome;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <HSSetupCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isDisconnected) _Bool disconnected; // @synthesize disconnected=_disconnected;
@property(nonatomic, getter=isConfigured) _Bool configured; // @synthesize configured=_configured;
- (void).cxx_destruct;	// IMP=0x000000010002821c
- (void)_handleSetupResult:(id)arg1;	// IMP=0x0000000100027c98
- (_Bool)_validateSetupStateForStep:(id)arg1;	// IMP=0x0000000100027b9c
- (void)_updateStateAndNotifyDelegate:(long long)arg1;	// IMP=0x0000000100027b38
- (void)_updateHomeFromUUID;	// IMP=0x00000001000274e4
- (void)setupStep:(id)arg1 didPairWithAccessories:(id)arg2 completedInfo:(id)arg3;	// IMP=0x00000001000272c0
- (void)retryPairingForSetupStep:(id)arg1;	// IMP=0x0000000100027098
- (void)clearSetupResultForSetupStep:(id)arg1;	// IMP=0x0000000100026ee4
- (void)setupStep:(id)arg1 handleSetupResult:(id)arg2;	// IMP=0x0000000100026ed4
- (void)setupStep:(id)arg1 didSelectDiscoveredAccessory:(id)arg2;	// IMP=0x0000000100026d04
- (void)setupStep:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100026b08
- (void)setupStepDidFinish:(id)arg1;	// IMP=0x0000000100026800
- (void)setupStepDidCancel:(id)arg1;	// IMP=0x00000001000266d4
- (void)setupStepDidChange:(id)arg1;	// IMP=0x0000000100026310
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x000000010002615c
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;	// IMP=0x0000000100026074
- (void)_startPairingController:(id)arg1;	// IMP=0x0000000100025a60
- (void)_startAutomaticDiscoveryPairingControllerForSetupResult:(id)arg1;	// IMP=0x00000001000258ec
- (void)_startSingleAccessoryPairingControllerForDiscoveredAccessory:(id)arg1;	// IMP=0x000000010002548c
@property(readonly, nonatomic) HMHomeManager *homeManager;
- (_Bool)roomIsRoomForHome:(id)arg1;	// IMP=0x0000000100025344
- (id)roomSelectionRooms;	// IMP=0x0000000100025270
- (id)accessoriesToSetupForDiscoveredAccessory:(id)arg1;	// IMP=0x0000000100024eb0
- (id)_sortedHomeKitObjectsToSetupForAccessories:(id)arg1;	// IMP=0x000000010002485c
@property(readonly, copy, nonatomic) NSIndexSet *remainingPostPairingSetupStates;
@property(readonly, copy, nonatomic) NSIndexSet *requiredPostPairingSetupStates;
- (void)_handleExternalSetupError:(id)arg1;	// IMP=0x00000001000241b0
- (void)setupInterruptedWithError:(id)arg1;	// IMP=0x00000001000240c4
- (void)setupFailedWithError:(id)arg1;	// IMP=0x0000000100023fd8
- (void)configureForInitialState:(long long)arg1 homeUUID:(id)arg2 setupAccessoryDescription:(id)arg3 readyToDisplayFuture:(id)arg4;	// IMP=0x0000000100023d38
- (void)_setupPairingControllerWithAccessoryDescription:(id)arg1;	// IMP=0x0000000100023ae8
@property(readonly, nonatomic) _Bool skipAccessorySetup;
- (id)init;	// IMP=0x00000001000239f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

