//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SBMotionGestureObserver.h"

@class NSMutableArray, NSMutableDictionary, NSString, SBNotificationRowActionFactory;

@interface SBNCTableViewController : UITableViewController <SBMotionGestureObserver>
{
    id <SBNCTableViewControllerDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_orderedSections;	// 16 = 0x10
    NSMutableDictionary *_sectionIDsToRows;	// 24 = 0x18
    NSMutableDictionary *_reusableViewIDsToUnregisteredCellClassNames;	// 32 = 0x20
    NSMutableDictionary *_reusableViewIDsToUnregisteredHeaderClassNames;	// 40 = 0x28
    _Bool _tableViewNeedsReload;	// 48 = 0x30
    _Bool _animationsEnabled;	// 49 = 0x31
    struct {
        unsigned int suppliesInsertionAnimation:1;
        unsigned int suppliesRemovalAnimation:1;
        unsigned int suppliesReplacementAnimation:1;
        unsigned int decidesHighlight:1;
        unsigned int interestedInSelection:1;
        unsigned int suppliesLayoutMode:1;
    } _notificationCenterTableViewControllerDelegateFlags;	// 52 = 0x34
    SBNotificationRowActionFactory *_cellButtonFactory;	// 56 = 0x38
    _Bool _usesTableViewSeparators;	// 64 = 0x40
    _Bool _canDismissBulletins;	// 65 = 0x41
}

@property(nonatomic) _Bool canDismissBulletins; // @synthesize canDismissBulletins=_canDismissBulletins;
@property(nonatomic) _Bool usesTableViewSeparators; // @synthesize usesTableViewSeparators=_usesTableViewSeparators;
@property(nonatomic) __weak id <SBNCTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001004e691c
- (_Bool)_hasFirstBulletinInSectionWithRaiseAction;	// IMP=0x00000001004e67c0
- (void)_updateMotionGestureObservation;	// IMP=0x00000001004e6744
- (void)didReceiveRaiseGesture;	// IMP=0x00000001004e6560
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001004e650c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000001004e64b8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000001004e6434
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x00000001004e642c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001004e62b4
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x00000001004e5ff0
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000001004e5e78
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001004e5d5c
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00000001004e5bbc
- (void)_selectAction:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000001004e5ac8
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;	// IMP=0x00000001004e590c
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00000001004e5870
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001004e586c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001004e52d0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000001004e51e4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000001004e51cc
- (_Bool)hasContent;	// IMP=0x00000001004e5018
- (void)invalidateCachedLayoutData;	// IMP=0x00000001004e4da8
- (void)invalidateSectionAndRowViewHeights:(CDUnknownBlockType)arg1;	// IMP=0x00000001004e4c44
- (id)viewForRow:(id)arg1 inSection:(id)arg2;	// IMP=0x00000001004e4a44
- (id)indexPathForRow:(id)arg1 inSection:(id)arg2;	// IMP=0x00000001004e4908
- (unsigned long long)indexOfSection:(id)arg1;	// IMP=0x00000001004e48f0
- (void)reloadRows:(id)arg1 inSection:(id)arg2;	// IMP=0x00000001004e4800
- (void)replaceWithRow:(id)arg1 row:(id)arg2 inSection:(id)arg3;	// IMP=0x00000001004e469c
- (void)removeRow:(id)arg1 inSection:(id)arg2;	// IMP=0x00000001004e45e4
- (void)addRow:(id)arg1 inSection:(id)arg2;	// IMP=0x00000001004e4590
- (void)insertRow:(id)arg1 beforeRow:(id)arg2 inSection:(id)arg3;	// IMP=0x00000001004e442c
- (void)replaceWithSection:(id)arg1 section:(id)arg2;	// IMP=0x00000001004e42e0
- (void)reloadSections:(id)arg1 withRowPopulator:(CDUnknownBlockType)arg2;	// IMP=0x00000001004e3f84
- (void)reorderSections:(id)arg1;	// IMP=0x00000001004e3f00
- (void)moveSection:(id)arg1 beforeSection:(id)arg2;	// IMP=0x00000001004e3db4
- (void)removeSection:(id)arg1;	// IMP=0x00000001004e3d1c
- (void)insertSection:(id)arg1 beforeSection:(id)arg2;	// IMP=0x00000001004e3bc8
- (void)_performReplacementOperation:(id)arg1;	// IMP=0x00000001004e3218
- (void)_performMoveOperation:(id)arg1;	// IMP=0x00000001004e2b20
- (void)_performRemovalOperation:(id)arg1;	// IMP=0x00000001004e23b0
- (void)_performInsertionOperation:(id)arg1;	// IMP=0x00000001004e1864
- (void)_reloadTableForOperationIfNecessary:(id)arg1;	// IMP=0x00000001004e1128
- (void)performOperationsWithoutAnimation:(CDUnknownBlockType)arg1;	// IMP=0x00000001004e10e0
- (_Bool)_replaceWithRow:(id)arg1 row:(id)arg2 inSection:(id)arg3 dryRun:(_Bool)arg4;	// IMP=0x00000001004e0f20
- (_Bool)_removeRow:(id)arg1 fromSection:(id)arg2 dryRun:(_Bool)arg3;	// IMP=0x00000001004e0dcc
- (_Bool)_insertRow:(id)arg1 atIndex:(unsigned long long)arg2 inSection:(id)arg3 dryRun:(_Bool)arg4;	// IMP=0x00000001004e0ba0
- (void)removeChildRowIfPossible:(id)arg1;	// IMP=0x00000001004e0b9c
- (void)addChildRowIfPossible:(id)arg1;	// IMP=0x00000001004e0b98
- (_Bool)_replaceWithSection:(id)arg1 section:(id)arg2 dryRun:(_Bool)arg3;	// IMP=0x00000001004e0980
- (_Bool)_moveSection:(id)arg1 toIndex:(unsigned long long)arg2 dryRun:(_Bool)arg3;	// IMP=0x00000001004e084c
- (_Bool)_insertSection:(id)arg1 atIndex:(unsigned long long)arg2 dryRun:(_Bool)arg3;	// IMP=0x00000001004e0678
- (_Bool)_removeSection:(id)arg1 dryRun:(_Bool)arg2;	// IMP=0x00000001004e04f4
- (long long)_sectionLocationAtIndexPath:(id)arg1;	// IMP=0x00000001004e0384
- (id)_representedBulletinAtIndexPath:(id)arg1;	// IMP=0x00000001004e0300
- (id)_rowInfoAtIndexPath:(id)arg1;	// IMP=0x00000001004e01bc
- (id)_sectionInfoAtIndexPath:(id)arg1;	// IMP=0x00000001004e00fc
- (id)rowsInSectionWithIdentifier:(id)arg1;	// IMP=0x00000001004e0068
- (id)orderedSections;	// IMP=0x00000001004e0040
- (void)_updateReusableView:(id)arg1 forInterfaceItemInfo:(id)arg2 withLayoutMode:(long long)arg3;	// IMP=0x00000001004dffc4
- (long long)_layoutMode;	// IMP=0x00000001004dff1c
- (void)_updateReusableViews;	// IMP=0x00000001004dfc04
@property(nonatomic) struct CGRect tableViewFrame;
- (void)viewWillLayoutSubviews;	// IMP=0x00000001004dfa70
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001004df9b4
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001004df964
- (void)invalidateData;	// IMP=0x00000001004df90c
- (void)_reloadOrInvalidateTableViewData;	// IMP=0x00000001004df8c8
- (void)reloadTableViewDataIfNecessary;	// IMP=0x00000001004df870
- (void)_reloadTableViewData;	// IMP=0x00000001004df824
- (void)setTableViewNeedsReload;	// IMP=0x00000001004df7d4
- (id)_viewIfLoaded;	// IMP=0x00000001004df784
- (void)viewDidLoad;	// IMP=0x00000001004df11c
- (void)_updateEnhancedContrastSettings:(id)arg1;	// IMP=0x00000001004df110
- (void)_registerOrQueueReusableViewClassForInfo:(id)arg1;	// IMP=0x00000001004df07c
- (void)_registerOrQueueHeaderClassForInfo:(id)arg1;	// IMP=0x00000001004dee54
- (void)_registerOrQueueCellClassForInfo:(id)arg1;	// IMP=0x00000001004dec2c
- (void)_registerOrQueueReusableClass:(Class)arg1 forIdentifier:(id)arg2 registerBlock:(CDUnknownBlockType)arg3 queueBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001004deb5c
- (void)dealloc;	// IMP=0x00000001004de990
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001004de790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
