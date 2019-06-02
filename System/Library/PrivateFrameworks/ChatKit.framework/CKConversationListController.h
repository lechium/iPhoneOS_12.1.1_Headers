/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/CKCloudKitSyncProgressViewControllerDelegate.h>
#import <libobjc.A.dylib/IMCloudKitEventHandler.h>
#import <libobjc.A.dylib/CKConversationResultsControllerDelegate.h>
#import <libobjc.A.dylib/CKConversationListCellDelegate.h>
#import <UIKit/UITableViewDragDestinationDelegate.h>
#import <libobjc.A.dylib/CKTranscriptPreviewControllerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UITableView, NSIndexPath, CKConversationList, CKMessagesController, CKCloudKitSyncProgressViewController, UIBarButtonItem, CKScheduledUpdater, UIView, NSArray, CKConversation, UISearchController, CKConversationSearchResultsController, NSString;

@interface CKConversationListController : UITableViewController <UISearchControllerDelegate, UISearchBarDelegate, CKCloudKitSyncProgressViewControllerDelegate, IMCloudKitEventHandler, CKConversationResultsControllerDelegate, CKConversationListCellDelegate, UITableViewDragDestinationDelegate, CKTranscriptPreviewControllerDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate> {

	UITableView* _table;
	NSIndexPath* _previouslySelectedIndexPath;
	unsigned _isVisible : 1;
	unsigned _willRotate : 1;
	BOOL _isInitialLoad;
	BOOL _isInitialAppearance;
	BOOL _isShowingSwipeDeleteConfirmation;
	BOOL _shouldUseFastPreviewText;
	CKConversationList* _conversationList;
	CKMessagesController* _messagesController;
	CKCloudKitSyncProgressViewController* _syncProgressViewController;
	UIBarButtonItem* _currentEditButtonItem;
	CKScheduledUpdater* _updater;
	UIView* _noMessagesDialogView;
	NSArray* _frozenConversations;
	unsigned long long _filteredConversationCount;
	long long _filterMode;
	NSArray* _filteredWhitelistedConversations;
	NSArray* _filteredJunkConversations;
	NSArray* _nonPlaceholderConversations;
	CKConversation* _conversationChangingPinState;
	double _conversationCellHeight;
	UISearchController* _searchController;
	CKConversationSearchResultsController* _searchResultsController;
	UIBarButtonItem* _composeButton;
	/*^block*/id _searchCompletion;

}

@property (nonatomic,retain) NSIndexPath * previouslySelectedIndexPath;                                      //@synthesize previouslySelectedIndexPath=_previouslySelectedIndexPath - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * currentEditButtonItem;                                        //@synthesize currentEditButtonItem=_currentEditButtonItem - In the implementation block
@property (assign,nonatomic) BOOL isShowingSwipeDeleteConfirmation;                                          //@synthesize isShowingSwipeDeleteConfirmation=_isShowingSwipeDeleteConfirmation - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowPendingCell; 
@property (nonatomic,retain) CKScheduledUpdater * updater;                                                   //@synthesize updater=_updater - In the implementation block
@property (nonatomic,retain) UIView * noMessagesDialogView;                                                  //@synthesize noMessagesDialogView=_noMessagesDialogView - In the implementation block
@property (nonatomic,copy) NSArray * frozenConversations;                                                    //@synthesize frozenConversations=_frozenConversations - In the implementation block
@property (assign,nonatomic) unsigned long long filteredConversationCount;                                   //@synthesize filteredConversationCount=_filteredConversationCount - In the implementation block
@property (assign,nonatomic) long long filterMode;                                                           //@synthesize filterMode=_filterMode - In the implementation block
@property (nonatomic,retain) NSArray * filteredWhitelistedConversations;                                     //@synthesize filteredWhitelistedConversations=_filteredWhitelistedConversations - In the implementation block
@property (nonatomic,retain) NSArray * filteredJunkConversations;                                            //@synthesize filteredJunkConversations=_filteredJunkConversations - In the implementation block
@property (nonatomic,retain) NSArray * nonPlaceholderConversations;                                          //@synthesize nonPlaceholderConversations=_nonPlaceholderConversations - In the implementation block
@property (nonatomic,retain) CKConversation * conversationChangingPinState;                                  //@synthesize conversationChangingPinState=_conversationChangingPinState - In the implementation block
@property (assign,nonatomic) double conversationCellHeight;                                                  //@synthesize conversationCellHeight=_conversationCellHeight - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                          //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) CKConversationSearchResultsController * searchResultsController;                //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeButton;                                                //@synthesize composeButton=_composeButton - In the implementation block
@property (nonatomic,copy) id searchCompletion;                                                              //@synthesize searchCompletion=_searchCompletion - In the implementation block
@property (nonatomic,retain) CKCloudKitSyncProgressViewController * syncProgressViewController;              //@synthesize syncProgressViewController=_syncProgressViewController - In the implementation block
@property (assign,nonatomic) BOOL shouldUseFastPreviewText;                                                  //@synthesize shouldUseFastPreviewText=_shouldUseFastPreviewText - In the implementation block
@property (assign,nonatomic,__weak) CKConversationList * conversationList;                                   //@synthesize conversationList=_conversationList - In the implementation block
@property (assign,nonatomic,__weak) CKMessagesController * messagesController;                               //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,readonly) BOOL isVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKScheduledUpdater *)updater;
-(void)setUpdater:(CKScheduledUpdater *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(id)activeConversations;
-(id)actionsForTranscriptPreviewController:(id)arg1 ;
-(id)searcher:(id)arg1 conversationForChatGUID:(id)arg2 ;
-(void)searcher:(id)arg1 userDidSelectChatGUID:(id)arg2 messageGUID:(id)arg3 ;
-(void)searcher:(id)arg1 userDidDeleteChatGUID:(id)arg2 ;
-(void)searcherDidComplete:(id)arg1 ;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)prepareForSuspend;
-(void)performResumeDeferredSetup;
-(void)_increaseContrastDidChange:(id)arg1 ;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)cloudKitSyncProgressViewController:(id)arg1 actionButtonWasPressed:(long long)arg2 errors:(id)arg3 ;
-(long long)filterMode;
-(unsigned long long)filteredConversationCount;
-(NSArray *)frozenConversations;
-(NSArray *)filteredWhitelistedConversations;
-(NSArray *)filteredJunkConversations;
-(NSArray *)nonPlaceholderConversations;
-(void)setFilterMode:(long long)arg1 ;
-(void)updateConversationList;
-(void)setConversationList:(CKConversationList *)arg1 ;
-(void)beginHoldingConversationListUpdatesForKey:(id)arg1 ;
-(void)_chatWatermarkDidChange:(id)arg1 ;
-(void)_conversationListDidFinishLoadingConversations:(id)arg1 ;
-(void)_conversationListDidChange:(id)arg1 ;
-(void)_chatParticipantsChangedNotification:(id)arg1 ;
-(void)_conversationIsFilteredChangedNotification:(id)arg1 ;
-(void)_conversationDisplayNameChangedNotification:(id)arg1 ;
-(void)_conversationMuteDidChangeNotification:(id)arg1 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg1 ;
-(void)_conversationSpamFilteringStateChangedNotification:(id)arg1 ;
-(void)_conversationContactPhotosEnabledChangedNotification:(id)arg1 ;
-(void)_multiWayCallStateChanged:(id)arg1 ;
-(void)_reloadVisibleConversationList:(id)arg1 ;
-(void)_chatRegistryLastMessageLoadedNotification:(id)arg1 ;
-(void)invalidateCellLayout;
-(Class)conversationListCellClass;
-(void)setConversationCellHeight:(double)arg1 ;
-(void)updateConversationSelection;
-(void)noteUnreadCountsChanged;
-(void)updateSMSSpamConversationsDisplayName;
-(void)_updateConversationListNeedsResort:(BOOL)arg1 ;
-(void)_updateFilteredConversationLists;
-(void)_updateConversationFilteredFlagsAndReportSpam;
-(UIBarButtonItem *)currentEditButtonItem;
-(UIBarButtonItem *)composeButton;
-(void)updateCurrentEditButton;
-(void)editButtonTapped:(id)arg1 ;
-(void)setCurrentEditButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)isShowingSwipeDeleteConfirmation;
-(BOOL)_shouldKeepSelection;
-(BOOL)shouldShowPendingCell;
-(void)setPreviouslySelectedIndexPath:(NSIndexPath *)arg1 ;
-(void)setFrozenConversations:(NSArray *)arg1 ;
-(id)_indexPaths:(id)arg1 containingHandleWithUID:(id)arg2 ;
-(void)_updateNonPlaceholderConverationLists;
-(void)updateFilterControl:(id)arg1 ;
-(void)updateNavigationItems;
-(void)updateNoMessagesDialog;
-(UIView *)noMessagesDialogView;
-(void)setNoMessagesDialogView:(UIView *)arg1 ;
-(void)setFilteredWhitelistedConversations:(NSArray *)arg1 ;
-(void)setFilteredJunkConversations:(NSArray *)arg1 ;
-(void)setFilteredConversationCount:(unsigned long long)arg1 ;
-(void)setNonPlaceholderConversations:(NSArray *)arg1 ;
-(id)searchCompletion;
-(void)setSearchCompletion:(id)arg1 ;
-(NSIndexPath *)previouslySelectedIndexPath;
-(id)_mergeUnsentComposition:(id)arg1 withDroppedComposition:(id)arg2 ;
-(void)endHoldingConversationListUpdatesForKey:(id)arg1 ;
-(void)_updateToolbarItems;
-(double)conversationCellHeight;
-(void)registerForCloudKitEventsWithDelayedRegistration:(BOOL)arg1 ;
-(CKConversationList *)conversationList;
-(CKMessagesController *)messagesController;
-(void)_endHoldingUpdatesOnViewWillAppear;
-(BOOL)_shouldResizeNavigationBar;
-(void)updateMarginWidth;
-(void)_updateSyncProgressIfNeeded;
-(void)markAsReadButtonTappedForIndexPath:(id)arg1 ;
-(BOOL)shouldUseFastPreviewText;
-(void)setShouldUseFastPreviewText:(BOOL)arg1 ;
-(void)composeButtonClicked:(id)arg1 ;
-(void)markAsReadButtonTapped:(id)arg1 ;
-(void)batchDeleteButtonTapped:(id)arg1 ;
-(void)_endHoldingUpdatesForBatchEditing:(BOOL)arg1 ;
-(void)_showConversationWithComposition:(id)arg1 atIndexPath:(id)arg2 ;
-(void)pinConversationButtonTappedForIndexPath:(id)arg1 setPinned:(BOOL)arg2 ;
-(void)muteConversationButtonTappedForIndexPath:(id)arg1 setMuted:(BOOL)arg2 ;
-(void)deleteButtonTappedForIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 cellToUpdate:(id)arg3 ;
-(void)_filterCellSelectionChanged:(id)arg1 ;
-(CKConversation *)conversationChangingPinState;
-(void)setConversationChangingPinState:(CKConversation *)arg1 ;
-(void)setIsShowingSwipeDeleteConfirmation:(BOOL)arg1 ;
-(void)selectDefaultConversationAnimated:(BOOL)arg1 ;
-(void)endHoldingAllConversationListUpdatesForKey:(id)arg1 ;
-(void)selectConversationClosestToDeletedIndex:(unsigned long long)arg1 ;
-(void)_cancelDeletion:(/*^block*/id)arg1 ;
-(void)_dismissDetailsController:(id)arg1 ;
-(unsigned long long)_indexOfDefaultConversation;
-(void)_selectConversationAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)_indexOfConverationClosestToDeletedIndex:(unsigned long long)arg1 ;
-(CKCloudKitSyncProgressViewController *)syncProgressViewController;
-(void)_updateSyncProgressIfNeededWithProgressController:(id)arg1 ;
-(void)unregisterForCloudKitEvents;
-(void)setSyncProgressViewController:(CKCloudKitSyncProgressViewController *)arg1 ;
-(void)_beginAccountRepairIfNeeded;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(void)avatarHeaderWasTappedForConversation:(id)arg1 inCell:(id)arg2 ;
-(void)_conversationPinStateChangedNotification:(id)arg1 ;
-(void)_conversationMessageWasSent:(id)arg1 ;
-(void)_groupsChanged:(id)arg1 ;
-(void)conversationWillBeMarkedRead:(id)arg1 ;
-(void)scrollToTop;
-(void)performSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareForResume;
-(void)selectNextSequentialConversation:(BOOL)arg1 ;
-(void)registerForCloudKitEventsImmediately;
-(void)setMessagesController:(CKMessagesController *)arg1 ;
-(void)setSearchResultsController:(CKConversationSearchResultsController *)arg1 ;
-(void)setComposeButton:(UIBarButtonItem *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isVisible;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_CK8*)arg1 ;
-(void)_updateInsets;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(id)inputAccessoryView;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)committedViewControllerForPreviewViewController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)viewDidUnload;
-(long long)preferredStatusBarStyle;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(void)significantTimeChange;
-(CKConversationSearchResultsController *)searchResultsController;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(BOOL)_tableView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
@end

