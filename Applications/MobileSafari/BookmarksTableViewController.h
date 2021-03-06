//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_SFPopoverSizingTableViewController.h"

#import "BookmarksFolderViewController.h"
#import "BookmarksPanelStateRestoring.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDragDelegate.h"
#import "UITableViewDropDelegate.h"
#import "_SFBookmarkInfoViewControllerDelegate.h"

@class NSString, UISearchBar, WebBookmark, WebBookmarkCollection, WebBookmarkList;

@interface BookmarksTableViewController : _SFPopoverSizingTableViewController <UISearchBarDelegate, UITableViewDragDelegate, UITableViewDropDelegate, _SFBookmarkInfoViewControllerDelegate, BookmarksFolderViewController, BookmarksPanelStateRestoring>
{
    WebBookmarkCollection *_collection;	// 8 = 0x8
    WebBookmarkList *_bookmarkList;	// 16 = 0x10
    WebBookmark *_favoritesFolder;	// 24 = 0x18
    UISearchBar *_searchBar;	// 32 = 0x20
    NSString *_userTypedFilter;	// 40 = 0x28
    unsigned long long _skipOffset;	// 48 = 0x30
    _Bool _needsInitialContentOffsetUpdateForTableHeaderView;	// 56 = 0x38
    _Bool _needsContentOffsetUpdate;	// 57 = 0x39
    _Bool _shouldDeferReload;	// 58 = 0x3a
    double _heightOfConcealedContent;	// 64 = 0x40
    WebBookmark *_folder;	// 72 = 0x48
    id <BookmarksTableViewControllerDelegate> _delegate;	// 80 = 0x50
    id <LinkPreviewProvider> _linkPreviewProvider;	// 88 = 0x58
}

@property(nonatomic) __weak id <LinkPreviewProvider> linkPreviewProvider; // @synthesize linkPreviewProvider=_linkPreviewProvider;
@property(nonatomic) __weak id <BookmarksTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WebBookmark *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) WebBookmarkCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;	// IMP=0x0000000100036eac
- (void)updateUserActivityState:(id)arg1;	// IMP=0x0000000100036d9c
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;	// IMP=0x0000000100036d50
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000100036d00
- (long long)_tableView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x0000000100036cf8
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x0000000100036964
- (void)_moveBookmarks:(id)arg1 toFolderID:(int)arg2 toIndex:(unsigned int)arg3 shouldReorder:(_Bool)arg4;	// IMP=0x00000001000365c4
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x0000000100036448
- (_Bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x00000001000363d8
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000363d0
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x00000001000363bc
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000001000363a8
- (id)_dragItemsAtIndexPath:(id)arg1 includingFolders:(_Bool)arg2;	// IMP=0x0000000100036250
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000001000361c4
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;	// IMP=0x000000010003615c
- (void)commitPreviewViewController:(id)arg1;	// IMP=0x0000000100036104
- (id)previewViewControllerForRowAtIndexPath:(id)arg1;	// IMP=0x000000010003600c
- (_Bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;	// IMP=0x0000000100036000
- (_Bool)hasTranslucentAppearance;	// IMP=0x0000000100035f7c
- (id)safari_tableViewScrollPositionSaveIdentifier;	// IMP=0x0000000100035f20
- (id)selectedBookmarks;	// IMP=0x0000000100035d74
@property(readonly, nonatomic) NSString *collectionType;
- (_Bool)restoreStateWithDictionary:(id)arg1;	// IMP=0x0000000100035a14
- (id)currentStateDictionary;	// IMP=0x00000001000358b8
- (void)setScrollViewScrollsToTop:(_Bool)arg1;	// IMP=0x0000000100035870
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00000001000356e8
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x0000000100035488
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000100035024
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x0000000100034fd4
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0000000100034ee0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000927c
- (void)_updateTableViewCellsTextStyleForEditing:(_Bool)arg1;	// IMP=0x0000000100034ce8
- (_Bool)tableView:(id)arg1 shouldSpringLoadRowAtIndexPath:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000100034c78
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100009b6c
- (void)_pushInfoViewControllerForBookmark:(id)arg1;	// IMP=0x0000000100034b88
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100009ac8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000098d4
- (id)_tableViewCellForBookmark:(id)arg1;	// IMP=0x00000001000346dc
- (id)_fontForCurrentTraitCollection;	// IMP=0x000000010003463c
- (id)_grayedOutFavoriteFolderIcon;	// IMP=0x0000000100034588
- (id)_tintedImageNamed:(id)arg1;	// IMP=0x0000000100034438
- (id)bookmarksTableViewCellWithReuseIdentifier:(id)arg1;	// IMP=0x00000001000342ac
- (id)_bookmarkAtIndexPath:(id)arg1;	// IMP=0x0000000100009938
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000100009818
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100009274
- (void)viewDidLayoutSubviews;	// IMP=0x000000010003425c
- (void)_updateContentOffsetIfNeeded;	// IMP=0x000000010003416c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010003411c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100033fec
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100009224
- (void)viewDidLoad;	// IMP=0x0000000100008ff8
- (void)updateSeparatorInset;	// IMP=0x0000000100033f3c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100033d24
- (void)loadView;	// IMP=0x0000000100033c58
- (id)bookmarksNavigationController;	// IMP=0x0000000100009208
@property(readonly, nonatomic) int folderID;
- (void)reloadBookmarks;	// IMP=0x0000000100033b68
- (void)_recreateBookmarkLists;	// IMP=0x00000001000339b0
- (_Bool)_inRootFolder;	// IMP=0x00000001000098a4
- (void)_updateTitle;	// IMP=0x00000001000338c8
- (id)initWithFolder:(id)arg1 inCollection:(id)arg2 skipOffset:(unsigned int)arg3;	// IMP=0x0000000100008c9c
- (id)initWithFolder:(id)arg1 inCollection:(id)arg2;	// IMP=0x0000000100008c3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

