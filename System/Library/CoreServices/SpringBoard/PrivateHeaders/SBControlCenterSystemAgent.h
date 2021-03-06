//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCUIControlCenterSystemAgent.h"

@class NSHashTable, NSString;

@interface SBControlCenterSystemAgent : NSObject <CCUIControlCenterSystemAgent>
{
    NSHashTable *_weakWallpaperBackgroundViews;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010057d420
- (id)hideStatusBarAssertion;	// IMP=0x000000010057d3e0
- (_Bool)isUILocked;	// IMP=0x000000010057d38c
- (void)_controlCenterDidDismiss:(id)arg1;	// IMP=0x000000010057d270
- (void)_controlCenterWillPresent:(id)arg1;	// IMP=0x000000010057d154
- (id)materialBackgroundView;	// IMP=0x000000010057d080
- (id)frontmostApplicationDisplayID;	// IMP=0x000000010057d034
- (id)getFGSceneIdentifiers;	// IMP=0x000000010057ce80
- (_Bool)wifiIsPowered;	// IMP=0x000000010057cd28
- (_Bool)wifiDevicePresent;	// IMP=0x000000010057cbd0
- (void)setWifiPowered:(_Bool)arg1;	// IMP=0x000000010057ca74
- (void)updateWifiDevicePresence;	// IMP=0x000000010057c928
- (_Bool)isInAirplaneMode;	// IMP=0x000000010057c7d0
- (_Bool)isOrientationLocked;	// IMP=0x000000010057c678
- (void)unlockOrientation;	// IMP=0x000000010057c52c
- (void)lockOrientation;	// IMP=0x000000010057c3e0
- (_Bool)wirelessDisplayRouteIsPicked;	// IMP=0x000000010057c288
- (id)nameOfPickedRoute;	// IMP=0x000000010057c128
- (_Bool)handsetRouteIsSelected;	// IMP=0x000000010057bfd0
- (void)setRingerMuted:(_Bool)arg1;	// IMP=0x000000010057be74
- (_Bool)isRingerMuted;	// IMP=0x000000010057bd1c
- (void)promptForUnlockIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000010057b96c
- (void)activateAppWithDisplayID:(id)arg1 url:(id)arg2 unlockIfNecessary:(_Bool)arg3;	// IMP=0x000000010057b5d8
- (void)activateAppWithDisplayID:(id)arg1 url:(id)arg2;	// IMP=0x000000010057b584
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010057b508
- (id)prototypeSettings;	// IMP=0x000000010057b484
- (id)init;	// IMP=0x000000010057b378

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

