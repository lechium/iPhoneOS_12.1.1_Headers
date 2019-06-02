/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/_UIContainerHuggingTableViewController.h>

@class NSArray;

@interface _UIDocumentPickerManagementViewController : _UIContainerHuggingTableViewController {

	NSArray* _allPickers;
	NSArray* _fileTypes;
	unsigned long long _mode;

}

@property (nonatomic,retain) NSArray * allPickers;                 //@synthesize allPickers=_allPickers - In the implementation block
@property (nonatomic,retain) NSArray * fileTypes;                  //@synthesize fileTypes=_fileTypes - In the implementation block
@property (assign,nonatomic) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
-(void)setFileTypes:(NSArray *)arg1 ;
-(NSArray *)fileTypes;
-(id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)setAllPickers:(NSArray *)arg1 ;
-(NSArray *)allPickers;
-(void)switchToggled:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)_doneButtonPressed;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1 ;
-(void)_updateContentSize;
@end

