//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconIndexNodeObserver.h"

@class NSString, SBFMappedImageCache, SBIconController, SBIconModel, SBWallpaperController;

@interface SBWallpaperPreviewSnapshotCache : NSObject <SBIconIndexNodeObserver>
{
    SBWallpaperController *_wallpaperController;	// 8 = 0x8
    SBFMappedImageCache *_imageCache;	// 16 = 0x10
    long long _invalidatedLocations;	// 24 = 0x18
    SBIconController *_iconController;	// 32 = 0x20
    SBIconModel *_model;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001003a2150
- (id)_lockScreenSnapshotProvider;	// IMP=0x00000001003a2048
- (id)_homeScreenSnapshotProvider;	// IMP=0x00000001003a1e4c
- (void)_backlightFadeFinished;	// IMP=0x00000001003a1dc8
- (void)_modelDidLayout;	// IMP=0x00000001003a1d60
- (void)_modelWillLayout;	// IMP=0x00000001003a1d0c
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;	// IMP=0x00000001003a1cfc
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;	// IMP=0x00000001003a1cec
- (void)regenerateSnapshotsForLocations:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001003a185c
- (id)homeScreenSnapshot;	// IMP=0x00000001003a1700
- (id)lockScreenSnapshot;	// IMP=0x00000001003a15a4
- (void)invalidateSnapshotsForLocations:(long long)arg1;	// IMP=0x00000001003a1508
- (void)dealloc;	// IMP=0x00000001003a1450
- (id)initWithImageCache:(id)arg1 iconController:(id)arg2 wallpaperController:(id)arg3;	// IMP=0x00000001003a122c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

