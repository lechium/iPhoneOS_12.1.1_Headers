//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, UISearchField, UITableView, _UIBackdropView;

@interface VOTUIItemChooserController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    UILabel *_headingLabel;	// 8 = 0x8
    UISearchField *_searchField;	// 16 = 0x10
    UITableView *_table;	// 24 = 0x18
    NSMutableArray *_filteredList;	// 32 = 0x20
    NSMutableDictionary *_items;	// 40 = 0x28
    NSArray *_originalList;	// 48 = 0x30
    NSArray *_itemCategoryMappings;	// 56 = 0x38
    NSArray *_regionDescriptions;	// 64 = 0x40
    long long _totalItemCount;	// 72 = 0x48
    NSArray *_sectionHeaders;	// 80 = 0x50
    long long _category;	// 88 = 0x58
    NSArray *_categories;	// 96 = 0x60
    NSString *_filter;	// 104 = 0x68
    long long _selectedRow;	// 112 = 0x70
    _Bool _activateItem;	// 120 = 0x78
    _UIBackdropView *_backdropView;	// 128 = 0x80
    struct CGRect _keyboardFrame;	// 136 = 0x88
    id <VOTUIItemChooserDelegate> _delegate;	// 168 = 0xa8
}

@property(nonatomic) __weak id <VOTUIItemChooserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100007ab0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000075fc
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000001000074e4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000001000074a8
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00000001000074a4
- (void)_updateSelectedRow:(id)arg1;	// IMP=0x00000001000072ac
- (id)sectionIndexTitlesForTableView:(id)arg1;	// IMP=0x000000010000725c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000010000718c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000100007184
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000100007128
- (_Bool)accessibilityPerformEscape;	// IMP=0x00000001000070e8
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000100007074
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x0000000100006fe8
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x0000000100006e98
- (void)_updatePositionForKeyboard:(struct CGRect)arg1;	// IMP=0x0000000100006cc0
- (double)_positionAccountingForKeyboard:(struct CGRect)arg1;	// IMP=0x0000000100006c2c
- (void)_displayWithList:(id)arg1 fromRotorSwitch:(_Bool)arg2;	// IMP=0x0000000100006448
- (void)_handleSearchFieldTextChange:(id)arg1;	// IMP=0x00000001000061ec
- (_Bool)hostingWindowShouldMoveForReachability;	// IMP=0x00000001000061e4
- (void)hideItemChooser:(_Bool)arg1;	// IMP=0x0000000100005fa8
- (_Bool)accessibilityScroll:(long long)arg1;	// IMP=0x00000001000058c8
- (void)_loadGuidedAccessBundle;	// IMP=0x0000000100005574
- (void)_updateGuidedAccessWindowId:(unsigned int)arg1;	// IMP=0x000000010000532c
- (void)_guidedAccessItemChooserDidShow;	// IMP=0x000000010000529c
- (void)showItemChooser:(id)arg1;	// IMP=0x00000001000050d0
- (id)_constraintsToPositionItem:(id)arg1 identicallyToItem:(id)arg2;	// IMP=0x0000000100004e2c
- (void)viewDidLoad;	// IMP=0x0000000100004218

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

