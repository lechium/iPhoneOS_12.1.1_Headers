//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, SBAppSwitcherDefaults, SBApplicationController, SBIconController;

@interface SBAppSwitcherModel : NSObject
{
    NSMutableArray *_recentDisplayItems;	// 8 = 0x8
    NSMutableArray *_recentDisplayItemsForCommandTab;	// 16 = 0x10
    NSMutableDictionary *_displayItemsToRoles;	// 24 = 0x18
    SBAppSwitcherDefaults *_defaults;	// 32 = 0x20
    SBIconController *_iconController;	// 40 = 0x28
    SBApplicationController *_applicationController;	// 48 = 0x30
    id _applicationActivationStateDidChangeObserver;	// 56 = 0x38
    id _applicationLayoutRoleChangedNotificationObserver;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x000000010025b634
- (void).cxx_destruct;	// IMP=0x000000010025da28
- (id)commandTabDisplayItems;	// IMP=0x000000010025da08
- (id)displayItemsForAppsOfRoles:(id)arg1;	// IMP=0x000000010025d834
- (id)mainSwitcherDisplayItems;	// IMP=0x000000010025d730
- (void)remove:(id)arg1;	// IMP=0x000000010025d64c
- (void)addToFront:(id)arg1 role:(long long)arg2;	// IMP=0x000000010025d2c4
- (id)_layoutElementForApplication:(id)arg1;	// IMP=0x000000010025d1c8
- (id)_displayItemForApplication:(id)arg1;	// IMP=0x000000010025d098
- (void)_addApplicationToFront:(id)arg1 role:(long long)arg2;	// IMP=0x000000010025d03c
- (void)_applicationLayoutRoleChanged:(id)arg1;	// IMP=0x000000010025cedc
- (void)_applicationActivationStateDidChange:(id)arg1 withLockScreenViewController:(id)arg2 andLayoutElement:(id)arg3;	// IMP=0x000000010025cdfc
- (void)_registerApplicationNotificationObservers;	// IMP=0x000000010025ca0c
- (void)_warmUpIconForDisplayItem:(id)arg1;	// IMP=0x000000010025c900
- (void)_warmUpRecentIcons;	// IMP=0x000000010025c840
- (void)_pruneRoles;	// IMP=0x000000010025c738
- (id)_displayItemRolesFromPrefsForLoadedDisplayItems:(id)arg1;	// IMP=0x000000010025c514
- (id)_recentsFromPrefs;	// IMP=0x000000010025c0d4
- (id)_recentsFromLegacyPrefs;	// IMP=0x000000010025bd6c
- (void)_saveRecents;	// IMP=0x000000010025bae4
- (void)dealloc;	// IMP=0x000000010025ba3c
- (id)init;	// IMP=0x000000010025b940
- (id)initWithUserDefaults:(id)arg1 andIconController:(id)arg2 andApplicationController:(id)arg3;	// IMP=0x000000010025b6c8

@end

