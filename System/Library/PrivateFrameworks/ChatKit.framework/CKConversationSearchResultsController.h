/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchResultsUpdating.h>

@protocol CKConversationResultsControllerDelegate;
@class NSArray, CKSpotlightQuery, NSString;

@interface CKConversationSearchResultsController : UITableViewController <UISearchResultsUpdating> {

	id<CKConversationResultsControllerDelegate> _delegate;
	NSArray* _searchResults;
	CKSpotlightQuery* _currentQuery;
	NSString* _selectedChatGUID;

}

@property (nonatomic,retain) NSArray * searchResults;                                                  //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) CKSpotlightQuery * currentQuery;                                          //@synthesize currentQuery=_currentQuery - In the implementation block
@property (nonatomic,retain) NSString * selectedChatGUID;                                              //@synthesize selectedChatGUID=_selectedChatGUID - In the implementation block
@property (assign,nonatomic,__weak) id<CKConversationResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)cancelCurrentQuery;
-(void)_updateTableViewRowHeights;
-(Class)_conversationListCellClass;
-(void)setSelectedChatGUID:(NSString *)arg1 ;
-(NSString *)selectedChatGUID;
-(void)_selectChatGUID:(id)arg1 ;
-(void)setCurrentQuery:(CKSpotlightQuery *)arg1 ;
-(CKSpotlightQuery *)currentQuery;
-(void)setCurrentSearchResultSelected:(BOOL)arg1 ;
-(void)searchEnded;
-(void)dealloc;
-(void)setDelegate:(id<CKConversationResultsControllerDelegate>)arg1 ;
-(id<CKConversationResultsControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
@end
