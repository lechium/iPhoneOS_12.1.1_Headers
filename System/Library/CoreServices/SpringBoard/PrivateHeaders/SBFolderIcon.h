//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIcon.h"

#import "SBFolderObserver.h"
#import "SBIconIndexNodeObserver.h"
#import "SBIconObserver.h"

@class NSHashTable, NSMutableArray, NSMutableSet, NSString, SBFolder;

@interface SBFolderIcon : SBIcon <SBFolderObserver, SBIconObserver, SBIconIndexNodeObserver>
{
    NSMutableArray *_cachedMiniGrids;	// 168 = 0xa8
    SBFolder *_folder;	// 176 = 0xb0
    NSHashTable *_nodeObservers;	// 184 = 0xb8
    NSMutableSet *_finishedDownloadIdentifiers;	// 192 = 0xc0
    long long _progressState;	// 200 = 0xc8
    double _progressPercent;	// 208 = 0xd0
}

+ (Class)_iconGridImageClass;	// IMP=0x0000000100228dd8
+ (unsigned long long)_maxIconsInGridImage;	// IMP=0x0000000100228d94
- (void).cxx_destruct;	// IMP=0x0000000100229d14
- (_Bool)hasFolderIconView;	// IMP=0x0000000100229d0c
- (id)folder;	// IMP=0x0000000100229cfc
- (_Bool)isFolderIcon;	// IMP=0x0000000100229cf4
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;	// IMP=0x0000000100229ca8
- (void)folder:(id)arg1 didAddList:(id)arg2;	// IMP=0x0000000100229c30
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;	// IMP=0x0000000100229ab8
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;	// IMP=0x0000000100229940
- (id)nodeDescriptionWithPrefix:(id)arg1;	// IMP=0x0000000100229928
- (void)removeNodeObserver:(id)arg1;	// IMP=0x000000010022982c
- (void)addNodeObserver:(id)arg1;	// IMP=0x0000000100229718
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;	// IMP=0x0000000100229700
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;	// IMP=0x0000000100229698
- (id)containedNodeIdentifiers;	// IMP=0x0000000100229680
- (_Bool)containsNodeIdentifier:(id)arg1;	// IMP=0x0000000100229668
- (id)nodeIdentifier;	// IMP=0x0000000100229650
- (id)children;	// IMP=0x0000000100229638
- (void)iconAccessoriesDidUpdate:(id)arg1;	// IMP=0x0000000100229604
- (void)iconImageDidUpdate:(id)arg1;	// IMP=0x00000001002295f8
- (id)miniGridCellImageForIcon:(id)arg1;	// IMP=0x00000001002293e8
- (id)gridImages;	// IMP=0x0000000100229264
- (void)purgeCachedImages;	// IMP=0x000000010022920c
- (id)_miniIconGridForPage:(long long)arg1;	// IMP=0x0000000100229010
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1;	// IMP=0x0000000100228fd0
- (unsigned long long)listIndexForContainedIcon:(id)arg1;	// IMP=0x0000000100228dec
- (id)applicationIconsWithBadgesSortedByImportance;	// IMP=0x00000001002287a0
- (void)rootFolderDelegateDidChange:(id)arg1;	// IMP=0x0000000100228608
- (void)_containedIconImageChanged:(id)arg1;	// IMP=0x00000001002281e8
- (void)noteContainedIcon:(id)arg1 replacedIcon:(id)arg2;	// IMP=0x0000000100228100
- (void)noteContainedIconsAdded:(id)arg1 removed:(id)arg2;	// IMP=0x00000001002280a0
- (void)_adjustForIconsAdded:(id)arg1 removed:(id)arg2;	// IMP=0x0000000100227d14
- (double)progressPercent;	// IMP=0x0000000100227d04
- (_Bool)shouldAnimateProgress;	// IMP=0x0000000100227cd8
- (_Bool)progressIsPaused;	// IMP=0x0000000100227cd0
- (long long)progressState;	// IMP=0x0000000100227cc0
- (void)_updateProgress;	// IMP=0x00000001002279c4
- (void)_appPlaceholdersDidChange:(id)arg1;	// IMP=0x000000010022764c
- (void)_updateBadgeValue;	// IMP=0x00000001002271f0
- (void)updateLabel;	// IMP=0x00000001002271e4
- (void)launchFromLocation:(int)arg1 context:(id)arg2;	// IMP=0x0000000100227128
@property(readonly, copy) NSString *description;
- (void)localeChanged;	// IMP=0x000000010022705c
- (id)displayNameForLocation:(int)arg1;	// IMP=0x0000000100227044
- (id)getGenericIconImage:(int)arg1;	// IMP=0x000000010022703c
- (id)generateIconImage:(int)arg1;	// IMP=0x000000010022700c
- (id)rootFolder;	// IMP=0x0000000100226f80
- (void)dealloc;	// IMP=0x0000000100226dac
- (id)initWithFolder:(id)arg1;	// IMP=0x0000000100226b00
- (Class)iconImageViewClassForLocation:(int)arg1;	// IMP=0x00000001002bbde8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

