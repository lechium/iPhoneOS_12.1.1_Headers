//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBProcessObserver.h"
#import "SBLockScreenPluginAgent.h"
#import "SBLockScreenPluginController.h"

@class BSPluginBundle, FBProcess, NSMutableArray, NSString, SBDashBoardAppearance, SBDashBoardBehavior, SBLockOverlayContext, SBLockScreenPluginAction, SBLockScreenPluginAppearanceContext, UIViewController<SBLockScreenPluginViewController>, _UILegibilitySettings;

@interface SBLockScreenPlugin : NSObject <FBProcessObserver, SBLockScreenPluginAgent, SBLockScreenPluginController>
{
    BSPluginBundle *_bundle;	// 8 = 0x8
    NSString *_bundleName;	// 16 = 0x10
    FBProcess *_process;	// 24 = 0x18
    id <SBLockScreenPluginController> _controller;	// 32 = 0x20
    id <SBLockScreenPluginAgent> _agent;	// 40 = 0x28
    SBLockScreenPluginAppearanceContext *_appearance;	// 48 = 0x30
    NSMutableArray *_lifecycleObservers;	// 56 = 0x38
    SBLockOverlayContext *_overlay;	// 64 = 0x40
    CDUnknownBlockType _auxiliaryActivationAnimationBlock;	// 72 = 0x48
    CDUnknownBlockType _auxiliaryDeactivationAnimationBlock;	// 80 = 0x50
    id <SBLockScreenPluginDelegate> _delegate;	// 88 = 0x58
}

+ (id)pluginWithName:(id)arg1 activationContext:(id)arg2;	// IMP=0x000000010018321c
+ (id)_pluginBundleForPluginWithName:(id)arg1;	// IMP=0x0000000100183154
@property(nonatomic) __weak id <SBLockScreenPluginAgent> pluginAgent; // @synthesize pluginAgent=_agent;
@property(copy, nonatomic) CDUnknownBlockType auxiliaryDeactivationAnimationBlock; // @synthesize auxiliaryDeactivationAnimationBlock=_auxiliaryDeactivationAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType auxiliaryActivationAnimationBlock; // @synthesize auxiliaryActivationAnimationBlock=_auxiliaryActivationAnimationBlock;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_bundleName;
@property(retain, nonatomic) SBLockOverlayContext *overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) id <SBLockScreenPluginController> controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id <SBLockScreenPluginDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001001851e4
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100184f34
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100184ee0
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100184de0
- (id)succinctDescription;	// IMP=0x0000000100184d8c
@property(readonly, copy) NSString *description;
- (void)processDidExit:(id)arg1;	// IMP=0x0000000100184c84
- (_Bool)pluginController:(id)arg1 sendAction:(id)arg2;	// IMP=0x0000000100184c10
- (void)pluginController:(id)arg1 updateAppearance:(id)arg2;	// IMP=0x0000000100184b5c
- (void)deactivatePluginController:(id)arg1;	// IMP=0x0000000100184b18
- (void)activatePluginController:(id)arg1;	// IMP=0x0000000100184ad4
- (void)enumerateLifecycleObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010018499c
- (void)removeLifecycleObserver:(id)arg1;	// IMP=0x0000000100184940
- (void)addLifecycleObserver:(id)arg1;	// IMP=0x00000001001848b8
- (_Bool)pluginHandleEvent:(long long)arg1;	// IMP=0x0000000100184850
@property(readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
- (void)pluginDidDeactivateWithContext:(id)arg1;	// IMP=0x0000000100184748
- (void)pluginWillActivateWithContext:(id)arg1;	// IMP=0x0000000100184670
@property(readonly, nonatomic) id <SBLockScreenPluginAppearance> pluginAppearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property(readonly, nonatomic) long long pluginPriority;
- (void)_updateAppearance:(id)arg1;	// IMP=0x00000001001845bc
- (_Bool)handleDashBoardEvent:(id)arg1;	// IMP=0x000000010018453c
@property(readonly, nonatomic) SBDashBoardBehavior *dashBoardBehavior;
@property(readonly, nonatomic) SBDashBoardAppearance *dashBoardAppearance;
- (_Bool)isCapabilityRestricted:(unsigned long long)arg1;	// IMP=0x0000000100183a38
- (id)overrideForElement:(long long)arg1;	// IMP=0x00000001001838cc
- (_Bool)isElementHidden:(long long)arg1;	// IMP=0x0000000100183880
@property(readonly, nonatomic) SBLockScreenPluginAction *unlockAction;
@property(readonly, nonatomic) SBLockScreenPluginAppearanceContext *appearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *viewController;
- (void)dealloc;	// IMP=0x00000001001837dc
- (id)initWithBundle:(id)arg1 activationContext:(id)arg2;	// IMP=0x00000001001833dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly) Class superclass;

@end

