//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, SBLockScreenManager, SBLockStateAggregator, SBQuietModeStateAggregator;

@interface SBNCSoundController : NSObject
{
    SBLockScreenManager *_lockScreenManager;	// 8 = 0x8
    SBLockStateAggregator *_lockStateAggregator;	// 16 = 0x10
    SBQuietModeStateAggregator *_quietModeStateAggregator;	// 24 = 0x18
    NSMutableDictionary *_playingSounds;	// 32 = 0x20
    NSMutableSet *_requestsRequiringExplicitKill;	// 40 = 0x28
}

@property(retain, nonatomic) NSMutableSet *requestsRequiringExplicitKill; // @synthesize requestsRequiringExplicitKill=_requestsRequiringExplicitKill;
@property(retain, nonatomic) NSMutableDictionary *playingSounds; // @synthesize playingSounds=_playingSounds;
@property(retain, nonatomic) SBQuietModeStateAggregator *quietModeStateAggregator; // @synthesize quietModeStateAggregator=_quietModeStateAggregator;
@property(retain, nonatomic) SBLockStateAggregator *lockStateAggregator; // @synthesize lockStateAggregator=_lockStateAggregator;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
- (void).cxx_destruct;	// IMP=0x0000000100577494
- (id)_soundWithNotificationSound:(id)arg1;	// IMP=0x0000000100576fbc
- (void)_notificationCenterDidDismiss;	// IMP=0x0000000100576fb0
- (void)_hardwareButtonPressed:(id)arg1;	// IMP=0x0000000100576f08
- (_Bool)_isDeviceUILocked;	// IMP=0x0000000100576ebc
- (_Bool)_isQuietModeEnabledAndActive;	// IMP=0x0000000100576e70
- (void)_killSounds;	// IMP=0x0000000100576cec
- (void)stopSoundForNotificationRequest:(id)arg1;	// IMP=0x0000000100576bc8
- (void)playSoundIfPossibleForNotificationRequest:(id)arg1;	// IMP=0x0000000100576b70
- (void)playSoundForNotificationRequest:(id)arg1;	// IMP=0x0000000100576634
- (_Bool)canPlaySoundForNotificationRequest:(id)arg1;	// IMP=0x000000010057625c
- (id)initWithLockScreenManager:(id)arg1 lockStateAggregator:(id)arg2 quietModeStateAggregator:(id)arg3;	// IMP=0x0000000100576058
- (id)init;	// IMP=0x000000010057601c

@end

