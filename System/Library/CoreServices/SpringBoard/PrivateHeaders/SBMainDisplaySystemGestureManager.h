//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureManager.h"

@class SBGestureDefaults;

@interface SBMainDisplaySystemGestureManager : SBSystemGestureManager
{
    SBGestureDefaults *_gestureDefaults;	// 8 = 0x8
    _Bool _multitaskingGesturesEnabled;	// 16 = 0x10
}

@property(nonatomic, getter=_isMultitaskingGesturesEnabled, setter=_setMultitaskingGesturesEnabled:) _Bool multitaskingGesturesEnabled; // @synthesize multitaskingGesturesEnabled=_multitaskingGesturesEnabled;
- (void).cxx_destruct;	// IMP=0x0000000100383968
- (void)_updateUserPreferences;	// IMP=0x00000001003838ec
- (_Bool)_isTouchGestureWithType:(unsigned long long)arg1;	// IMP=0x00000001003838c4
- (_Bool)_shouldEnableSystemGestureWithType:(unsigned long long)arg1;	// IMP=0x0000000100383734
- (_Bool)_isGestureWithTypeAllowed:(unsigned long long)arg1;	// IMP=0x00000001003834f8
- (void)_evaluateEnablement;	// IMP=0x00000001003834a8
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100383424
- (id)initWithDisplay:(id)arg1;	// IMP=0x0000000100383188

@end

