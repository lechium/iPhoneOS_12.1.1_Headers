/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNAvatarCardControllerDelegate.h>
#import <libobjc.A.dylib/CNContactDataSourceDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <libobjc.A.dylib/CNContactListBannerViewDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CNUIPeopleGroupsGridViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewControllerDelegate.h>
#import <UIKit/UITableViewDragSourceDelegate.h>
#import <UIKit/UITableViewDragDestinationDelegate.h>
#import <libobjc.A.dylib/CNVCardImportControllerPresentationDelegate.h>
#import <libobjc.A.dylib/CNVCardImportControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewControllerDelegate.h>

@protocol CNContactDataSource, CNContactListViewControllerDelegate;
@class CNContact, NSObject, _UIContentUnavailableView, NSString, CNContactFormatter, CNAvatarCardController, UISearchController, UISearchBar, CNContactListBannerView, CNUIContactsEnvironment, CNAvatarViewController, NSArray, CNUIPeopleGroupsGridViewController, CNVCardImportController;

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate, CNContactListBannerViewDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate, CNUIPeopleGroupsGridViewControllerDelegate, CNUIObjectViewControllerDelegate, UITableViewDragSourceDelegate, UITableViewDragDestinationDelegate, CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate, CNAvatarViewControllerDelegate> {

	CNContact* _preferredForNameMeContact;
	BOOL _shouldDisplayMeContactBanner;
	BOOL _shouldAutoHideMeContactBanner;
	BOOL _allowsSearching;
	BOOL _presentsSearchUI;
	BOOL _pendingSearchControllerActivation;
	BOOL _shouldUseLargeTitle;
	BOOL _shouldDisplayGroupsGrid;
	BOOL _shouldAllowDrags;
	BOOL _shouldAllowDrops;
	NSObject*<CNContactDataSource> _dataSource;
	_UIContentUnavailableView* _noContactsView;
	id<CNContactListViewControllerDelegate> _delegate;
	NSString* _meContactBannerFootnoteLabel;
	NSString* _meContactBannerFootnoteValue;
	CNContactFormatter* _contactFormatter;
	CNAvatarCardController* _cardController;
	UISearchController* _searchController;
	UISearchBar* _searchBar;
	/*^block*/id _searchCompletionBlock;
	CNContactListBannerView* _meContactBanner;
	double _contentOffsetDueToMeContactBanner;
	CNUIContactsEnvironment* _environment;
	CNAvatarViewController* _meBannerAvatarController;
	NSArray* _pendingLayoutBlocks;
	CNUIPeopleGroupsGridViewController* _groupsGridController;
	NSArray* _tableViewHeaderConstraints;
	NSString* _pendingSearchQuery;
	CNVCardImportController* _vCardImportController;
	CNContactListViewController* _searchResultsController;

}

@property (nonatomic,retain) CNAvatarCardController * cardController;                                //@synthesize cardController=_cardController - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;                                  //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,copy) id searchCompletionBlock;                                                 //@synthesize searchCompletionBlock=_searchCompletionBlock - In the implementation block
@property (nonatomic,retain) CNContactListBannerView * meContactBanner;                              //@synthesize meContactBanner=_meContactBanner - In the implementation block
@property (nonatomic,readonly) CNContact * preferredForNameMeContact; 
@property (nonatomic,readonly) double contentOffsetDueToMeContactBanner;                             //@synthesize contentOffsetDueToMeContactBanner=_contentOffsetDueToMeContactBanner - In the implementation block
@property (nonatomic,readonly) _UIContentUnavailableView * noContactsView;                           //@synthesize noContactsView=_noContactsView - In the implementation block
@property (nonatomic,readonly) BOOL presentsSearchUI;                                                //@synthesize presentsSearchUI=_presentsSearchUI - In the implementation block
@property (nonatomic,readonly) CNUIContactsEnvironment * environment;                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CNAvatarViewController * meBannerAvatarController;                      //@synthesize meBannerAvatarController=_meBannerAvatarController - In the implementation block
@property (nonatomic,retain) NSArray * pendingLayoutBlocks;                                          //@synthesize pendingLayoutBlocks=_pendingLayoutBlocks - In the implementation block
@property (nonatomic,retain) CNUIPeopleGroupsGridViewController * groupsGridController;              //@synthesize groupsGridController=_groupsGridController - In the implementation block
@property (nonatomic,retain) NSArray * tableViewHeaderConstraints;                                   //@synthesize tableViewHeaderConstraints=_tableViewHeaderConstraints - In the implementation block
@property (nonatomic,retain) NSString * pendingSearchQuery;                                          //@synthesize pendingSearchQuery=_pendingSearchQuery - In the implementation block
@property (assign,nonatomic) BOOL pendingSearchControllerActivation;                                 //@synthesize pendingSearchControllerActivation=_pendingSearchControllerActivation - In the implementation block
@property (nonatomic,retain) CNVCardImportController * vCardImportController;                        //@synthesize vCardImportController=_vCardImportController - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseLargeTitle;                                             //@synthesize shouldUseLargeTitle=_shouldUseLargeTitle - In the implementation block
@property (nonatomic,retain) CNContactListViewController * searchResultsController;                  //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayGroupsGrid;                                           //@synthesize shouldDisplayGroupsGrid=_shouldDisplayGroupsGrid - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowDrags;                                                  //@synthesize shouldAllowDrags=_shouldAllowDrags - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowDrops;                                                  //@synthesize shouldAllowDrops=_shouldAllowDrops - In the implementation block
@property (nonatomic,readonly) id<CNContactDataSource> originalDataSource; 
@property (assign,nonatomic,__weak) id<CNContactListViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<CNContactDataSource> dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayMeContactBanner;                                      //@synthesize shouldDisplayMeContactBanner=_shouldDisplayMeContactBanner - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoHideMeContactBanner;                                     //@synthesize shouldAutoHideMeContactBanner=_shouldAutoHideMeContactBanner - In the implementation block
@property (nonatomic,copy) NSString * meContactBannerFootnoteLabel;                                  //@synthesize meContactBannerFootnoteLabel=_meContactBannerFootnoteLabel - In the implementation block
@property (nonatomic,copy) NSString * meContactBannerFootnoteValue;                                  //@synthesize meContactBannerFootnoteValue=_meContactBannerFootnoteValue - In the implementation block
@property (assign,nonatomic) BOOL allowsSearching;                                                   //@synthesize allowsSearching=_allowsSearching - In the implementation block
@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
@property (nonatomic,readonly) NSArray * selectedContacts; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                  //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emptyContact;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNAvatarCardController *)cardController;
-(void)setCardController:(CNAvatarCardController *)arg1 ;
-(id)presentingViewControllerForAvatarCardController:(id)arg1 ;
-(long long)avatarCardController:(id)arg1 presentationResultForLocation:(CGPoint)arg2 ;
-(void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1 ;
-(void)contactStoreDidChangeWithNotification:(id)arg1 ;
-(id)hostingViewControllerForController:(id)arg1 ;
-(void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2 ;
-(void)setAllowsSearching:(BOOL)arg1 ;
-(id)initWithDataSource:(id)arg1 searchable:(BOOL)arg2 environment:(id)arg3 shouldUseLargeTitle:(BOOL)arg4 ;
-(id)createTableView;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 shouldUseLargeTitle:(BOOL)arg3 ;
-(void)cancelSearch:(id)arg1 ;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg1 ;
-(BOOL)shouldDisplayMeContactBanner;
-(void)searchForString:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id<CNContactDataSource>)originalDataSource;
-(BOOL)selectContact:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)reloadContacts;
-(void)startSearchingForString:(id)arg1 ;
-(void)peopleGroupsGridViewControllerDidChange:(id)arg1 ;
-(void)_applicationEnteringForeground:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 shouldUseLargeTitle:(BOOL)arg2 ;
-(void)contactDataSourceDidChange:(id)arg1 ;
-(BOOL)presentsSearchUI;
-(void)_updateTableViewRowHeight;
-(void)_updateCountStringNow:(BOOL)arg1 ;
-(BOOL)shouldAllowDrags;
-(void)setShouldAllowDrags:(BOOL)arg1 ;
-(void)setShouldAllowDrops:(BOOL)arg1 ;
-(void)_searchBarDidEndEditing:(id)arg1 ;
-(void)configureNavigationBarForLargeTitles;
-(BOOL)shouldAllowDrops;
-(BOOL)shouldUseLargeTitle;
-(void)performWhenViewIsLaidOut:(/*^block*/id)arg1 ;
-(void)refreshTableViewHeader;
-(BOOL)hasNoContacts;
-(NSArray *)pendingLayoutBlocks;
-(void)setPendingLayoutBlocks:(NSArray *)arg1 ;
-(BOOL)pendingSearchControllerActivation;
-(void)setPendingSearchControllerActivation:(BOOL)arg1 ;
-(BOOL)updateFrameAndDisplayNoContactsViewIfNeeded;
-(id)_contactAtIndexPath:(id)arg1 ;
-(void)_contactCountTelemetry:(unsigned long long)arg1 ;
-(CNUIPeopleGroupsGridViewController *)groupsGridController;
-(void)refreshTableViewHeaderIfVisible;
-(void)setSearchCompletionBlock:(id)arg1 ;
-(id)searchCompletionBlock;
-(NSString *)pendingSearchQuery;
-(void)setPendingSearchQuery:(NSString *)arg1 ;
-(_UIContentUnavailableView *)noContactsView;
-(BOOL)isHandlingSearch;
-(BOOL)canSelectContactAtIndexPath:(id)arg1 ;
-(BOOL)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1 ;
-(CNContact *)preferredForNameMeContact;
-(BOOL)shouldDisplayGroupsGrid;
-(BOOL)shouldAutoHideMeContactBanner;
-(NSArray *)tableViewHeaderConstraints;
-(CNAvatarViewController *)meBannerAvatarController;
-(void)setMeBannerAvatarController:(CNAvatarViewController *)arg1 ;
-(CNContactListBannerView *)meContactBanner;
-(NSString *)meContactBannerFootnoteLabel;
-(NSString *)meContactBannerFootnoteValue;
-(void)setGroupsGridController:(CNUIPeopleGroupsGridViewController *)arg1 ;
-(void)setTableViewHeaderConstraints:(NSArray *)arg1 ;
-(id)dragItemsForIndexPath:(id)arg1 ;
-(CNVCardImportController *)vCardImportController;
-(void)setVCardImportController:(CNVCardImportController *)arg1 ;
-(void)contactDataSourceMeContactDidChange:(id)arg1 ;
-(void)contactDataSourceDidChangeDisplayName:(id)arg1 ;
-(void)vCardImportController:(id)arg1 presentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)vCardImportController:(id)arg1 didSaveContacts:(id)arg2 ;
-(void)vCardImportControllerDidCompleteQueue:(id)arg1 ;
-(void)didUpdateContentForAvatarViewController:(id)arg1 ;
-(void)setupForMultiSelection;
-(NSArray *)selectedContacts;
-(void)setMeContactBannerFootnoteLabel:(NSString *)arg1 ;
-(void)setMeContactBannerFootnoteValue:(NSString *)arg1 ;
-(void)setShouldDisplayGroupsGrid:(BOOL)arg1 ;
-(void)startSearching;
-(void)setShouldAutoHideMeContactBanner:(BOOL)arg1 ;
-(BOOL)allowsSearching;
-(void)setMeContactBanner:(CNContactListBannerView *)arg1 ;
-(double)contentOffsetDueToMeContactBanner;
-(BOOL)isSearching;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setSearchResultsController:(CNContactListViewController *)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CNContactListViewControllerDelegate>)arg1 ;
-(id<CNContactListViewControllerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UISearchController *)searchController;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(NSObject*<CNContactDataSource>)dataSource;
-(void)setDataSource:(NSObject*<CNContactDataSource>)arg1 ;
-(id)_sections;
-(void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(CNUIContactsEnvironment *)environment;
-(CNContactListViewController *)searchResultsController;
-(void)willPresentSearchController:(id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(CGPoint)arg4 ;
-(void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2 ;
-(BOOL)_tableView:(id)arg1 canHandleDropSession:(id)arg2 ;
-(id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3 ;
@end
