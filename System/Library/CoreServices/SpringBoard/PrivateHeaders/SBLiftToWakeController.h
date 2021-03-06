//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CMWakeGestureDelegate.h"

@class CMWakeGestureManager, NSHashTable, NSString, SBIdleTimerDefaults;

@interface SBLiftToWakeController : NSObject <CMWakeGestureDelegate>
{
    CMWakeGestureManager *_wakeGestureManager;	// 8 = 0x8
    long long _wakeGestureState;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    SBIdleTimerDefaults *_idleTimerDefaults;	// 32 = 0x20
    _Bool _screenOn;	// 40 = 0x28
    _Bool _isEnabled;	// 41 = 0x29
    _Bool _observingCMWakeGestureManager;	// 42 = 0x2a
}

+ (id)sharedController;	// IMP=0x0000000100267130
@property(retain, nonatomic, getter=_idleTimerDefaults, setter=_setIdleTimerDefaults:) SBIdleTimerDefaults *idleTimerDefaults; // @synthesize idleTimerDefaults=_idleTimerDefaults;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_isEnabled;
- (void).cxx_destruct;	// IMP=0x0000000100268618
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;	// IMP=0x0000000100268330
- (void)_sendTransitionToObservers:(long long)arg1;	// IMP=0x0000000100268108
- (void)_stopObservingIfNecessary;	// IMP=0x000000010026802c
- (void)_startObservingIfNecessary;	// IMP=0x0000000100267ed0
- (void)_handleBacklightLevelChanged:(id)arg1;	// IMP=0x0000000100267ca8
- (void)_reconsiderEnablement;	// IMP=0x0000000100267960
- (_Bool)_isObservingWakeGestureManager;	// IMP=0x0000000100267950
- (void)_screenTurnedOn;	// IMP=0x000000010026788c
- (void)_screenTurnedOff;	// IMP=0x00000001002677c0
- (void)_ignoredTransition:(long long)arg1;	// IMP=0x00000001002676c8
- (void)removeObserver:(id)arg1;	// IMP=0x0000000100267640
- (void)addObserver:(id)arg1;	// IMP=0x00000001002675c8
@property(readonly, copy) NSString *description;
- (id)initWithBacklightController:(id)arg1 idleTimerDefaults:(id)arg2;	// IMP=0x0000000100267264
- (id)init;	// IMP=0x00000001002671b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

