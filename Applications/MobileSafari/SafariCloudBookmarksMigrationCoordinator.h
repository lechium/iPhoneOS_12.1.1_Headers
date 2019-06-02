//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSCloudBookmarksMigrationCoordinator.h"

#import "WBSCloudBookmarksMigrationCoordinatorLocalDataProvider.h"

@class NSString;

@interface SafariCloudBookmarksMigrationCoordinator : WBSCloudBookmarksMigrationCoordinator <WBSCloudBookmarksMigrationCoordinatorLocalDataProvider>
{
}

+ (id)migrationCoordinator;	// IMP=0x00000001000cc3dc
- (void)getLocalMigrationStateForMigrationCoordinator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cd0b4
- (void)_cloudTabStoreDidUpdate:(id)arg1;	// IMP=0x00000001000cd004
- (_Bool)_evaluateMigrationEnabled;	// IMP=0x00000001000ccf4c
- (_Bool)_evaluateRampEnabled;	// IMP=0x00000001000cced8
- (void)_cloudKitBookmarksAvailabilityDidChange:(id)arg1;	// IMP=0x00000001000ccea0
- (void)_detectedLocalMigrationStateTransition:(id)arg1;	// IMP=0x00000001000ccd5c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000ccc38
- (void)dealloc;	// IMP=0x00000001000ccaa0
- (id)initWithStorage:(id)arg1 syncAgent:(id)arg2 cloudTabDeviceProvider:(id)arg3 windowsDeviceEligibilityFetcher:(id)arg4;	// IMP=0x00000001000cc834

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

