/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroMemoryEditorBasePlayerViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class MiroMemory, MiroMemoryEditorPosterController, UITableView, UITableViewCell, MiroMemoryTitleStyleCollectionViewController, UIVisualEffectView, NSString;

@interface MiroMemoryEditorTitleViewController : MiroMemoryEditorBasePlayerViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {

	MiroMemory* _memory;
	MiroMemoryEditorPosterController* _posterController;
	UITableView* _tableView;
	UITableViewCell* _collectionViewControllerCell;
	MiroMemoryTitleStyleCollectionViewController* _titleStyleCollectionViewController;
	UIVisualEffectView* _translucentBar;
	long long _activeCellIndex;
	NSString* _activeCellText;

}

@property (nonatomic,retain) UITableViewCell * collectionViewControllerCell;                                                 //@synthesize collectionViewControllerCell=_collectionViewControllerCell - In the implementation block
@property (nonatomic,retain) MiroMemoryTitleStyleCollectionViewController * titleStyleCollectionViewController;              //@synthesize titleStyleCollectionViewController=_titleStyleCollectionViewController - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * translucentBar;                                                            //@synthesize translucentBar=_translucentBar - In the implementation block
@property (assign,nonatomic) long long activeCellIndex;                                                                      //@synthesize activeCellIndex=_activeCellIndex - In the implementation block
@property (nonatomic,retain) NSString * activeCellText;                                                                      //@synthesize activeCellText=_activeCellText - In the implementation block
@property (nonatomic,retain) MiroMemory * memory;                                                                            //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) MiroMemoryEditorPosterController * posterController;                                            //@synthesize posterController=_posterController - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                        //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MiroMemory *)memory;
-(void)setMemory:(MiroMemory *)arg1 ;
-(void)updateFonts;
-(void)keyboardWillHide:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(MiroMemoryEditorPosterController *)posterController;
-(void)setPosterController:(MiroMemoryEditorPosterController *)arg1 ;
-(void)setTranslucentBar:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)translucentBar;
-(void)setActiveCellIndex:(long long)arg1 ;
-(void)setTitleStyleCollectionViewController:(MiroMemoryTitleStyleCollectionViewController *)arg1 ;
-(MiroMemoryTitleStyleCollectionViewController *)titleStyleCollectionViewController;
-(void)attachTranslucentBar;
-(long long)activeCellIndex;
-(NSString *)activeCellText;
-(void)setActiveCellText:(NSString *)arg1 ;
-(id)defaultMemoriesTitleHelper;
-(UITableViewCell *)collectionViewControllerCell;
-(void)setCollectionViewControllerCell:(UITableViewCell *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end

