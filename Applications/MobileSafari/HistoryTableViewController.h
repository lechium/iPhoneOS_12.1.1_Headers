//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PreviewTableViewController.h"

#import "BookmarksPanelStateRestoring.h"
#import "BookmarksToolbarItemProvider.h"
#import "HistoryTableViewDataSourceDelegate.h"
#import "PreviewTableViewControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDragDelegate.h"

@class HistoryTableViewDataSource, NSArray, NSString, NSTimer, SafariClearBrowsingDataController, UIBarButtonItem, UISearchBar;

@interface HistoryTableViewController : PreviewTableViewController <BookmarksToolbarItemProvider, HistoryTableViewDataSourceDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, UITableViewDragDelegate, BookmarksPanelStateRestoring, PreviewTableViewControllerDelegate>
{
    UIBarButtonItem *_clearHistoryButton;	// 8 = 0x8
    UIBarButtonItem *_doneBarButtonItem;	// 16 = 0x10
    NSTimer *_saveChangesToCloudHistoryTimer;	// 24 = 0x18
    SafariClearBrowsingDataController *_clearDataController;	// 32 = 0x20
    HistoryTableViewDataSource *_historyDataSource;	// 40 = 0x28
    _Bool _needsInitialContentOffsetUpdateForTableHeaderView;	// 48 = 0x30
    _Bool _needsContentOffsetUpdate;	// 49 = 0x31
    UISearchBar *_searchBar;	// 56 = 0x38
    double _heightOfConcealedContent;	// 64 = 0x40
    _Bool _historyWasLoaded;	// 72 = 0x48
    _Bool _allowClearingHistory;	// 73 = 0x49
    id <HistoryTableViewControllerDelegate> _delegate;	// 80 = 0x50
}

@property(nonatomic) __weak id <HistoryTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100084374
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000001000842f0
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000842e8
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x0000000100084268
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100084138
- (id)previewTableViewController:(id)arg1 URLForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100084128
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x00000001000840e4
- (id)_urlForRowAtIndexPath:(id)arg1;	// IMP=0x0000000100084024
- (void)historyTableViewDataSource:(id)arg1 didChangeRowAtIndexPath:(id)arg2 forChangeType:(long long)arg3;	// IMP=0x0000000100083ed8
- (void)historyTableViewDataSource:(id)arg1 didChangeSectionAtIndex:(long long)arg2 forChangeType:(long long)arg3;	// IMP=0x0000000100083dd0
- (void)historyTableViewDataSourceDidChangeContent:(id)arg1;	// IMP=0x0000000100083d7c
- (void)historyTableViewDataSourceWillChangeContent:(id)arg1;	// IMP=0x0000000100083d3c
- (void)historyTableViewDataSourceDidLoadContent:(id)arg1;	// IMP=0x0000000100083cd4
- (id)safari_tableViewScrollPositionSaveIdentifier;	// IMP=0x0000000100083cc4
@property(readonly, nonatomic) NSString *collectionType;
- (_Bool)restoreStateWithDictionary:(id)arg1;	// IMP=0x0000000100083cac
- (id)currentStateDictionary;	// IMP=0x0000000100083c9c
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000100083c30
- (id)tableView:(id)arg1 trailingSwipeActionsForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100083a04
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100083894
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000836b0
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100083694
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000001000835d0
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000010008342c
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000010008332c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100083314
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000001000832f8
- (void)_saveChangesToCloudHistory;	// IMP=0x0000000100083288
- (void)_saveChangesToCloudHistorySoon;	// IMP=0x00000001000831f0
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000001000831b0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000830ec
- (void)_updateContentOffsetIfNeeded;	// IMP=0x0000000100082ff8
- (void)viewDidLayoutSubviews;	// IMP=0x0000000100082f98
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100082f20
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100082ed0
- (void)viewDidLoad;	// IMP=0x0000000100082b94
- (void)_endEditing;	// IMP=0x0000000100082b80
- (void)_clearHistory;	// IMP=0x0000000100082608
- (void)updateClearHistoryButtonEnable;	// IMP=0x00000001000823e4
- (id)_clearHistoryBarButtonItem;	// IMP=0x0000000100082320
- (id)_doneBarButtonItem;	// IMP=0x00000001000822b0
@property(readonly, nonatomic) NSArray *toolbarItems;
- (id)bookmarksNavigationController;	// IMP=0x0000000100082160
- (void)dealloc;	// IMP=0x00000001000820e8
- (id)init;	// IMP=0x0000000100082008

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

