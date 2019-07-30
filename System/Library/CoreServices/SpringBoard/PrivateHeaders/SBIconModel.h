//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSOrderedSet, NSSet, SBRootFolder;

@interface SBIconModel : NSObject
{
    NSDictionary *_desiredIconState;	// 8 = 0x8
    NSOrderedSet *_desiredIconStateFlattened;	// 16 = 0x10
    NSMutableDictionary *_leafIconsByIdentifier;	// 24 = 0x18
    NSSet *_hiddenIconTags;	// 32 = 0x20
    NSSet *_visibleIconTags;	// 40 = 0x28
    _Bool _tagsHaveBeenSet;	// 48 = 0x30
    SBRootFolder *_rootFolder;	// 56 = 0x38
    id <SBIconModelStore> _store;	// 64 = 0x40
    id <SBIconModelApplicationDataSource> _applicationDataSource;	// 72 = 0x48
    id <SBIconModelDelegate> _delegate;	// 80 = 0x50
    _Bool _allowsSaving;	// 88 = 0x58
    _Bool _ignoresIconsNotInIconState;	// 89 = 0x59
    _Bool _sortsIconsAlphabetically;	// 90 = 0x5a
    NSSet *_archivedLeafIdentifiers;	// 96 = 0x60
}

@property(copy, nonatomic) NSSet *archivedLeafIdentifiers; // @synthesize archivedLeafIdentifiers=_archivedLeafIdentifiers;
@property(nonatomic) _Bool sortsIconsAlphabetically; // @synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically;
@property(nonatomic) _Bool ignoresIconsNotInIconState; // @synthesize ignoresIconsNotInIconState=_ignoresIconsNotInIconState;
@property(readonly, nonatomic) id <SBIconModelApplicationDataSource> applicationDataSource; // @synthesize applicationDataSource=_applicationDataSource;
@property(readonly, nonatomic) id <SBIconModelStore> store; // @synthesize store=_store;
@property(nonatomic) __weak id <SBIconModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowsSaving; // @synthesize allowsSaving=_allowsSaving;
@property(retain, nonatomic) NSDictionary *leafIconsByIdentifier; // @synthesize leafIconsByIdentifier=_leafIconsByIdentifier;
- (void).cxx_destruct;	// IMP=0x0000000100167c70
- (void)importDesiredIconState:(id)arg1;	// IMP=0x0000000100167ae8
- (_Bool)importState:(id)arg1;	// IMP=0x0000000100167904
- (id)exportFlattenedState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;	// IMP=0x00000001001676e8
- (id)exportPendingState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;	// IMP=0x0000000100167518
- (id)exportState:(_Bool)arg1;	// IMP=0x0000000100167384
- (id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(_Bool)arg2;	// IMP=0x0000000100166e88
- (id)description;	// IMP=0x0000000100166c98
- (void)layout;	// IMP=0x0000000100166924
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;	// IMP=0x000000010016635c
- (void)_replaceAppIconsWithDownloadingIcons;	// IMP=0x00000001001660e0
- (void)saveIconStateIfNeeded;	// IMP=0x0000000100166090
- (void)_saveIconState;	// IMP=0x0000000100165dac
- (void)_saveDesiredIconState;	// IMP=0x0000000100165bc8
- (void)deleteIconState;	// IMP=0x00000001001659a4
- (id)_indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(_Bool *)arg3 replaceExistingIconAtIndexPath:(id *)arg4;	// IMP=0x00000001001652f0
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(_Bool *)arg2 replaceExistingIconAtIndexPath:(id *)arg3;	// IMP=0x00000001001652c0
- (void)clearDesiredIconStateIfPossible;	// IMP=0x000000010016517c
- (void)clearDesiredIconState;	// IMP=0x0000000100164f40
- (_Bool)hasDesiredIconState;	// IMP=0x0000000100164f28
- (id)indexPathForIconInPlatformState:(id)arg1;	// IMP=0x0000000100164e0c
- (void)removeIconForIdentifier:(id)arg1;	// IMP=0x0000000100164cfc
- (void)removeIcon:(id)arg1;	// IMP=0x0000000100164c80
- (void)addIcon:(id)arg1;	// IMP=0x0000000100164ae0
- (id)_unarchiveRootFolder;	// IMP=0x0000000100164120
- (id)_iconState;	// IMP=0x0000000100163d24
- (id)iconState;	// IMP=0x0000000100163bec
- (id)placeholdersByDisplayID;	// IMP=0x0000000100163b90
- (id)applicationWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100163b08
- (id)applicationIconForBundleIdentifier:(id)arg1;	// IMP=0x0000000100163ab0
- (id)leafIconForIdentifier:(id)arg1;	// IMP=0x0000000100163a70
- (id)expectedIconForDisplayIdentifier:(id)arg1;	// IMP=0x0000000100163998
- (id)_applicationIcons;	// IMP=0x0000000100163810
- (id)iconsOfClass:(Class)arg1;	// IMP=0x0000000100163678
- (id)leafIconsWithIdentifiers:(id)arg1;	// IMP=0x00000001001634cc
- (id)leafIcons;	// IMP=0x000000010016345c
- (id)visibleIconIdentifiers;	// IMP=0x0000000100163294
- (void)loadAllIcons;	// IMP=0x0000000100162df8
- (void)addIconForApplication:(id)arg1;	// IMP=0x0000000100162d24
- (id)addBookmarkIconForWebClip:(id)arg1;	// IMP=0x0000000100162c6c
- (id)bookmarkIconForWebClipIdentifier:(id)arg1;	// IMP=0x0000000100162c14
- (id)downloadingIconForBundleIdentifier:(id)arg1;	// IMP=0x0000000100162b28
- (id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000100162a20
- (id)addDownloadingIconForDownload:(id)arg1;	// IMP=0x000000010016292c
- (_Bool)_canAddDownloadingIconForBundleID:(id)arg1;	// IMP=0x00000001001628b4
- (_Bool)isIconVisible:(id)arg1;	// IMP=0x0000000100162648
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;	// IMP=0x00000001001620d4
- (void)localeChanged;	// IMP=0x0000000100162000
- (id)rootFolder;	// IMP=0x0000000100161ff0
- (void)didUnarchiveMetadata:(id)arg1;	// IMP=0x0000000100161fec
- (id)iconModelMetadata;	// IMP=0x0000000100161fe4
- (void)dealloc;	// IMP=0x0000000100161f68
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;	// IMP=0x0000000100161e60

@end

