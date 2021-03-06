/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@class TIUserWordsManager, NSArray, NSString;

@interface SearchUserWordsController : UITableViewController <UISearchResultsUpdating> {

	TIUserWordsManager* _dictionaryController;
	NSArray* _filteredListContent;
	NSArray* _noResults;

}

@property (nonatomic,retain) NSArray * filteredListContent;                          //@synthesize filteredListContent=_filteredListContent - In the implementation block
@property (nonatomic,retain) NSArray * noResults;                                    //@synthesize noResults=_noResults - In the implementation block
@property (nonatomic,retain) TIUserWordsManager * dictionaryController;              //@synthesize dictionaryController=_dictionaryController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)filteredListContent;
-(void)setFilteredListContent:(NSArray *)arg1 ;
-(TIUserWordsManager *)dictionaryController;
-(void)setDictionaryController:(TIUserWordsManager *)arg1 ;
-(NSArray *)noResults;
-(void)filterContentForSearchText:(id)arg1 ;
-(void)setNoResults:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
@end

