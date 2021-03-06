/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFPopoverSizingTableViewController.h>
#import <libobjc.A.dylib/_SFBookmarkInfoViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFBookmarkTextEntryTableViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol _SFBookmarkInfoViewControllerDelegate;
@class WebBookmarkCollection, WebBookmark, _SFBookmarkTextEntryTableViewCell, _SFSiteIconView, NSArray, UITextField, NSString;

@interface _SFBookmarkInfoViewController : _SFPopoverSizingTableViewController <_SFBookmarkInfoViewControllerDelegate, _SFBookmarkTextEntryTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	WebBookmarkCollection* _collection;
	WebBookmark* _parentBookmark;
	BOOL _addingBookmark;
	BOOL _saveWhenDismissed;
	_SFBookmarkTextEntryTableViewCell* _titleCell;
	_SFBookmarkTextEntryTableViewCell* _addressCell;
	_SFSiteIconView* _iconImageView;
	unsigned long long _editingField;
	BOOL _didSelectFolder;
	BOOL _folderPickerExpanded;
	BOOL _addingToFavorites;
	NSArray* _folders;
	long long _selectedFolderIndex;
	UITextField* _textFieldToRestoreFirstResponder;
	BOOL _enableAddFolder;
	id<_SFBookmarkInfoViewControllerDelegate> _delegate;
	WebBookmark* _bookmark;

}

@property (assign,nonatomic,__weak) id<_SFBookmarkInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WebBookmark * bookmark;                                                 //@synthesize bookmark=_bookmark - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 toFavorites:(BOOL)arg4 willBeDisplayedModally:(BOOL)arg5 ;
-(void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1 ;
-(BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1 ;
-(BOOL)hasTranslucentAppearance;
-(void)updateTranslucentAppearance;
-(id)backgroundColorUsingTranslucentAppearance:(BOOL)arg1 ;
-(void)_saveButtonPressed;
-(void)_bookmarksDidReload:(id)arg1 ;
-(void)saveChanges;
-(BOOL)_canEditFieldsInCurrentViewController;
-(void)_didBeginEditingTextField:(id)arg1 ;
-(void)_didChangeEditingTextField:(id)arg1 ;
-(void)_setFolderPickerExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeActionsForTextFields;
-(void)_addActionsForTextFields;
-(id)_titleCell;
-(void)_createCellsIfNeeded;
-(void)updateBookmarkIcon;
-(void)_reloadFolderInfoForced:(BOOL)arg1 ;
-(void)_updateCellValues;
-(CGPoint)_centerForIconView;
-(UIEdgeInsets)_cellInset;
-(void)_updateSaveButton;
-(BOOL)canSaveChanges;
-(id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 ;
-(BOOL)_isIndexPathForNewFolderRow:(id)arg1 ;
-(void)_createNewFolder;
-(void)_editField:(unsigned long long)arg1 ;
-(long long)_numberOfExpandedFolderPickerRows;
-(id)_cellForNewFolderRowWithTableView:(id)arg1 ;
-(id)_cellForExpandedFolderAtIndex:(long long)arg1 withTableView:(id)arg2 ;
-(id)_cellForParentBookmarkWithTableView:(id)arg1 ;
-(id)_dequeueFolderPickerCellFromTableView:(id)arg1 ;
-(id)_iconForViewCellGivenBookmark:(id)arg1 ;
-(BOOL)isEditingField;
-(void)_returnWasPressedInTextField:(id)arg1 ;
-(void)_valuesChanged;
-(void)_updateIconViewFrame;
-(void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2 ;
-(BOOL)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1 ;
-(id)initWithBookmarkForFavorites:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 ;
-(BOOL)titleCellHasText;
-(WebBookmark *)bookmark;
-(void)setBookmark:(WebBookmark *)arg1 ;
-(void)setParent:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<_SFBookmarkInfoViewControllerDelegate>)arg1 ;
-(id<_SFBookmarkInfoViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)cancel;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
@end

