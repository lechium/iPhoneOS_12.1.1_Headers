/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@protocol MFAutocompleteResultsTableViewControllerDelegate;
@class NSMutableArray, _MFAutocompleteResultsTableViewModel, UIColor, NSArray;

@interface MFAutocompleteResultsTableViewController : UITableViewController {

	NSMutableArray* _searchResults;
	NSMutableArray* _suggestedSearchResults;
	NSMutableArray* _serverSearchResults;
	_MFAutocompleteResultsTableViewModel* _tableViewModel;
	BOOL _tableViewNeedsReload;
	BOOL _cellAnimationsEnabled;
	BOOL _deferTableViewUpdates;
	BOOL _shouldHighlightCompleteMatches;
	BOOL _shouldDimIrrelevantInformation;
	UIColor* _cellBackgroundColor;
	id<MFAutocompleteResultsTableViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<MFAutocompleteResultsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * contactRecipients;                                              //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,readonly) NSArray * suggestedRecipients;                                            //@synthesize suggestedSearchResults=_suggestedSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * directoryServerRecipients;                                      //@synthesize serverSearchResults=_serverSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * allRecipients; 
@property (nonatomic,retain) UIColor * cellBackgroundColor;                                              //@synthesize cellBackgroundColor=_cellBackgroundColor - In the implementation block
@property (assign,getter=areCellAnimationsEnabled,nonatomic) BOOL cellAnimationsEnabled;                 //@synthesize cellAnimationsEnabled=_cellAnimationsEnabled - In the implementation block
@property (assign,getter=isDeferringTableViewUpdates,nonatomic) BOOL deferTableViewUpdates;              //@synthesize deferTableViewUpdates=_deferTableViewUpdates - In the implementation block
@property (assign,nonatomic) BOOL shouldHighlightCompleteMatches;                                        //@synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches - In the implementation block
@property (assign,nonatomic) BOOL shouldDimIrrelevantInformation;                                        //@synthesize shouldDimIrrelevantInformation=_shouldDimIrrelevantInformation - In the implementation block
+(id)cellBackgroundColorForInlineDisplay;
+(id)cellBackgroundColorForPopoverDisplay;
-(unsigned long long)numberOfResults;
-(void)setCellBackgroundColor:(UIColor *)arg1 ;
-(void)setShouldHighlightCompleteMatches:(BOOL)arg1 ;
-(UIColor *)cellBackgroundColor;
-(void)setShouldDimIrrelevantInformation:(BOOL)arg1 ;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(NSArray *)allRecipients;
-(BOOL)confirmSelectedRecipient;
-(void)setDeferTableViewUpdates:(BOOL)arg1 ;
-(void)setCellAnimationsEnabled:(BOOL)arg1 ;
-(void)_updateTableViewModelAnimated:(BOOL)arg1 ;
-(id)_combinedResults;
-(id)_flattenedIndexPaths;
-(void)_selectSearchResultsRecipientAtIndexPath:(id)arg1 ;
-(id)_recipientAtIndexPath:(id)arg1 ;
-(id)_indexPathForRecipient:(id)arg1 ;
-(double)_tableViewHeaderHeight;
-(BOOL)containsRecipient:(id)arg1 ;
-(NSArray *)contactRecipients;
-(NSArray *)suggestedRecipients;
-(NSArray *)directoryServerRecipients;
-(BOOL)areCellAnimationsEnabled;
-(BOOL)isDeferringTableViewUpdates;
-(BOOL)shouldHighlightCompleteMatches;
-(BOOL)shouldDimIrrelevantInformation;
-(void)presentSearchResults:(id)arg1 ;
-(void)invalidateSearchResultRecipient:(id)arg1 ;
-(Class)recipientTableViewCellClass;
-(void)resetScrollPosition;
-(void)dealloc;
-(void)setDelegate:(id<MFAutocompleteResultsTableViewControllerDelegate>)arg1 ;
-(id<MFAutocompleteResultsTableViewControllerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)clear;
@end

