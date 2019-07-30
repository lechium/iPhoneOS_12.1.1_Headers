//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSPointerArray, NSString, SBAppStatusBarSettings;

@interface SBAppStatusBarManager : NSObject <BSDescriptionProviding>
{
    NSHashTable *_disableAlphaChangeAssertions;	// 8 = 0x8
    NSHashTable *_disableUserInteractionChangeAssertions;	// 16 = 0x10
    NSMutableOrderedSet *_windowLevelOverrideReasons;	// 24 = 0x18
    NSMutableDictionary *_windowLevelOverrideMap;	// 32 = 0x20
    NSPointerArray *_statusBarSettingsAssertionsByLevel[11];	// 40 = 0x28
    SBAppStatusBarSettings *_currentStatusBarSettings;	// 128 = 0x80
    NSMutableDictionary *_edgeInsetsDictionary;	// 136 = 0x88
    NSMutableSet *_activeLayoutLayers;	// 144 = 0x90
    double _defaultWindowLevel;	// 152 = 0x98
}

+ (id)sharedInstance;	// IMP=0x00000001004b6ad4
- (void).cxx_destruct;	// IMP=0x00000001004b9188
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001004b8bcc
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001004b8b78
- (id)succinctDescriptionBuilder;	// IMP=0x00000001004b8b5c
- (id)succinctDescription;	// IMP=0x00000001004b8b08
- (void)_applyEdgeInsetsToStatusBar;	// IMP=0x00000001004b8a10
- (void)_updateWindowLevel;	// IMP=0x00000001004b891c
- (void)_setStatusBarValueForPropertyWithAssertions:(id)arg1 setter:(CDUnknownBlockType)arg2;	// IMP=0x00000001004b87a8
- (id)_descriptionForPropertyWithAssertions:(id)arg1;	// IMP=0x00000001004b8728
- (void)_evaluateSettings;	// IMP=0x00000001004b7f2c
- (void)_cleanUpAllStatusBarSettingsAssertions;	// IMP=0x00000001004b7eec
- (void)_didTransitionFromSpringBoard;	// IMP=0x00000001004b7ed0
- (void)_willTransitionToSpringBoard;	// IMP=0x00000001004b7e50
- (void)_modifiedStatusBarSettingsAssertion:(id)arg1;	// IMP=0x00000001004b7e44
- (void)_removeStatusBarSettingsAssertion:(id)arg1;	// IMP=0x00000001004b7c18
- (void)_addStatusBarSettingsAssertion:(id)arg1;	// IMP=0x00000001004b7a6c
- (void)_removeDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;	// IMP=0x00000001004b7a4c
- (void)_addDisableAppStatusBarUserInteractionChangesAssertion:(id)arg1;	// IMP=0x00000001004b7a2c
- (void)_removeDisableAppStatusBarAlphaChangesAssertion:(id)arg1;	// IMP=0x00000001004b78c4
- (void)_addDisableAppStatusBarAlphaChangesAssertion:(id)arg1;	// IMP=0x00000001004b7798
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) struct UIEdgeInsets statusBarEdgeInsets;
- (void)setStatusBarEdgeInsets:(struct UIEdgeInsets)arg1 forLayoutLayer:(unsigned long long)arg2;	// IMP=0x00000001004b75b0
- (void)removeActiveLayoutLayer:(unsigned long long)arg1;	// IMP=0x00000001004b742c
- (void)addActiveLayoutLayer:(unsigned long long)arg1;	// IMP=0x00000001004b72c8
@property(readonly, nonatomic) unsigned long long topmostActiveLayoutLayer;
- (void)removeWindowLevelOverrideReason:(id)arg1;	// IMP=0x00000001004b70f4
- (void)setWindowLevel:(double)arg1 forOverrideReason:(id)arg2;	// IMP=0x00000001004b6f8c
- (void)setDefaultWindowLevel:(double)arg1;	// IMP=0x00000001004b6f74
- (_Bool)isStatusBarUserInteractionEnabled;	// IMP=0x00000001004b6f1c
- (void)setStatusBarUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00000001004b6e60
- (_Bool)isStatusBarHidden;	// IMP=0x00000001004b6e04
- (void)setStatusBarAlpha:(double)arg1;	// IMP=0x00000001004b6d10
- (void)dealloc;	// IMP=0x00000001004b6cc0
- (id)init;	// IMP=0x00000001004b6b98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

