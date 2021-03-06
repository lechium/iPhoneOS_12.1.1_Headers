//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBApplicationPlaceholderDelegate.h"
#import "SBApplicationPlaceholderLifecycleObserver.h"
#import "SBIconObserver.h"

@class NSMutableDictionary, NSMutableSet, NSString, SBApplicationController, SBApplicationLibraryObserver;

@interface SBApplicationPlaceholderController : NSObject <SBIconObserver, SBApplicationPlaceholderLifecycleObserver, SBApplicationPlaceholderDelegate>
{
    SBApplicationController *_appController;	// 8 = 0x8
    SBApplicationLibraryObserver *_lsWorkspaceObserver;	// 16 = 0x10
    NSMutableDictionary *_placeholdersByBundleID;	// 24 = 0x18
    NSMutableSet *_pendingAdded;	// 32 = 0x20
    NSMutableSet *_pendingInstalled;	// 40 = 0x28
    NSMutableSet *_pendingCancelled;	// 48 = 0x30
    NSMutableSet *_removingPlaceholderProxies;	// 56 = 0x38
    _Bool _hasDownloadedFromStore;	// 64 = 0x40
    _Bool _usingNetwork;	// 65 = 0x41
}

+ (id)sharedInstance;	// IMP=0x00000001005b77b4
- (void).cxx_destruct;	// IMP=0x00000001005bb4b4
- (void)iconAccessoriesDidUpdate:(id)arg1;	// IMP=0x00000001005bb274
- (_Bool)placeholderShouldAllowPausing:(id)arg1;	// IMP=0x00000001005bb220
- (void)_postPlaceholdersDidChangeForAdded:(id)arg1 modified:(id)arg2 removed:(id)arg3;	// IMP=0x00000001005baf9c
- (void)_downloadsEnded;	// IMP=0x00000001005baf84
- (void)_finishPlaceholder:(id)arg1;	// IMP=0x00000001005bae7c
- (void)_dropGrabbedIconIfNecessary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001005ba9a8
- (void)_removeDownloadingIcons:(id)arg1 saveState:(_Bool)arg2;	// IMP=0x00000001005ba68c
- (void)_swapDownloadingIcon:(id)arg1 forApplicationIcon:(id)arg2 placeholderProxy:(id)arg3;	// IMP=0x00000001005b9df8
- (void)_removePlaceholders:(id)arg1 forInstall:(_Bool)arg2;	// IMP=0x00000001005b9140
- (void)_addPlaceholders:(id)arg1;	// IMP=0x00000001005b8818
- (void)_processPendingProxies;	// IMP=0x00000001005b8580
- (void)applicationPlaceholdersNetworkUsageChanged:(_Bool)arg1;	// IMP=0x00000001005b8500
- (void)applicationPlaceholdersCancelled:(id)arg1;	// IMP=0x00000001005b82c4
- (void)applicationPlaceholdersInstalled:(id)arg1;	// IMP=0x00000001005b8088
- (void)applicationPlaceholdersAdded:(id)arg1;	// IMP=0x00000001005b7df0
- (_Bool)isUsingNetwork;	// IMP=0x00000001005b7de0
- (_Bool)hasDownloadedStoreApplication;	// IMP=0x00000001005b7dd0
- (id)placeholderForDisplayID:(id)arg1;	// IMP=0x00000001005b7d94
- (id)placeholdersByDisplayID;	// IMP=0x00000001005b7d84
- (void)dealloc;	// IMP=0x00000001005b7d24
- (id)init;	// IMP=0x00000001005b7878

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

