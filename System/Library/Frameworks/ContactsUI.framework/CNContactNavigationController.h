/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactListViewControllerDelegateInternal.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>
#import <libobjc.A.dylib/CNAccountsAndGroupsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerAddContactPresenter.h>

@protocol CNScheduler;
@class CNContactListViewController, CNContactStyle, CNContactStore, CNContactViewController, CNAccountsAndGroupsDataSource, CNContactStoreDataSource, UIKeyCommand, UIAlertController, CNUIUserActivityManager, NSString;

@interface CNContactNavigationController : UINavigationController <CNContactListViewControllerDelegate, CNContactListViewControllerDelegateInternal, CNContactViewControllerDelegate, CNContactContentViewControllerDelegate, CNAccountsAndGroupsViewControllerDelegate, CNContactViewControllerAddContactPresenter> {

	CNContactListViewController* _contactListViewController;
	BOOL _allowsCardEditing;
	BOOL _allowsCardDeletion;
	BOOL _allowsCanceling;
	BOOL _allowsDone;
	BOOL _allowsContactBlocking;
	BOOL _hasPendingShowCard;
	BOOL _ignoresMapsData;
	CNContactStyle* _contactStyle;
	CNContactStore* _contactStore;
	CNContactViewController* _reusableContactViewController;
	CNAccountsAndGroupsDataSource* _accountsAndGroupsDataSource;
	long long _leftButtonBehavior;
	long long _rightButtonBehavior;
	CNContactStoreDataSource* _nonServerDataSource;
	CNContactViewController* _presentedContactViewController;
	UIKeyCommand* _addKeyCommand;
	UIAlertController* _facebookContactsAlertController;
	id<CNScheduler> _backgroundScheduler;
	CNUIUserActivityManager* _activityManager;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                                //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactViewController * reusableContactViewController;                      //@synthesize reusableContactViewController=_reusableContactViewController - In the implementation block
@property (nonatomic,retain) CNAccountsAndGroupsDataSource * accountsAndGroupsDataSource;                  //@synthesize accountsAndGroupsDataSource=_accountsAndGroupsDataSource - In the implementation block
@property (assign,nonatomic) long long leftButtonBehavior;                                                 //@synthesize leftButtonBehavior=_leftButtonBehavior - In the implementation block
@property (assign,nonatomic) long long rightButtonBehavior;                                                //@synthesize rightButtonBehavior=_rightButtonBehavior - In the implementation block
@property (nonatomic,retain) CNContactStoreDataSource * nonServerDataSource;                               //@synthesize nonServerDataSource=_nonServerDataSource - In the implementation block
@property (assign,nonatomic,__weak) CNContactViewController * presentedContactViewController;              //@synthesize presentedContactViewController=_presentedContactViewController - In the implementation block
@property (nonatomic,retain) UIKeyCommand * addKeyCommand;                                                 //@synthesize addKeyCommand=_addKeyCommand - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * facebookContactsAlertController;                   //@synthesize facebookContactsAlertController=_facebookContactsAlertController - In the implementation block
@property (nonatomic,retain) id<CNScheduler> backgroundScheduler;                                          //@synthesize backgroundScheduler=_backgroundScheduler - In the implementation block
@property (assign,nonatomic) BOOL hasPendingShowCard;                                                      //@synthesize hasPendingShowCard=_hasPendingShowCard - In the implementation block
@property (nonatomic,retain) CNUIUserActivityManager * activityManager;                                    //@synthesize activityManager=_activityManager - In the implementation block
@property (assign,nonatomic) BOOL ignoresMapsData;                                                         //@synthesize ignoresMapsData=_ignoresMapsData - In the implementation block
@property (assign,nonatomic) id<CNContactNavigationControllerDelegate> delegate; 
@property (nonatomic,readonly) id<CNContactDataSource> dataSource; 
@property (nonatomic,retain) CNContactStyle * contactStyle;                                                //@synthesize contactStyle=_contactStyle - In the implementation block
@property (assign,nonatomic) BOOL allowsCardEditing;                                                       //@synthesize allowsCardEditing=_allowsCardEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCardDeletion;                                                      //@synthesize allowsCardDeletion=_allowsCardDeletion - In the implementation block
@property (assign,nonatomic) BOOL allowsCanceling;                                                         //@synthesize allowsCanceling=_allowsCanceling - In the implementation block
@property (assign,nonatomic) BOOL allowsDone;                                                              //@synthesize allowsDone=_allowsDone - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                                   //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) BOOL hidesSearchableSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newContactFormatter;
-(void)cancel:(id)arg1 ;
-(void)addContact:(id)arg1 ;
-(id<CNScheduler>)backgroundScheduler;
-(BOOL)hidesSearchableSources;
-(void)setHidesSearchableSources:(BOOL)arg1 ;
-(CNUIUserActivityManager *)activityManager;
-(BOOL)allowsContactBlocking;
-(void)accountsAndGroupsViewControllerDidFinish:(id)arg1 ;
-(BOOL)contactListViewController:(id)arg1 canSelectContact:(id)arg2 ;
-(BOOL)contactListViewController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3 ;
-(void)contactListViewController:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactListViewController:(id)arg1 shouldPresentContact:(id)arg2 shouldScrollToContact:(BOOL)arg3 ;
-(id)initWithDataSource:(id)arg1 allowsLargeTitles:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2 allowsLargeTitles:(BOOL)arg3 ;
-(id)initWithDataSource:(id)arg1 contactFormatter:(id)arg2 applyGroupFilterFromPreferences:(BOOL)arg3 environment:(id)arg4 allowsLargeTitles:(BOOL)arg5 ;
-(void)setAccountsAndGroupsDataSource:(CNAccountsAndGroupsDataSource *)arg1 ;
-(void)setBackgroundScheduler:(id<CNScheduler>)arg1 ;
-(void)selectPreviousContact:(id)arg1 ;
-(void)selectNextContact:(id)arg1 ;
-(void)cancelSearch:(id)arg1 ;
-(id)contactListViewController;
-(void)setShouldDisplayMeContactBanner:(BOOL)arg1 ;
-(BOOL)shouldDisplayMeContactBanner;
-(CNAccountsAndGroupsDataSource *)accountsAndGroupsDataSource;
-(void)presentGroupsViewController:(id)arg1 ;
-(BOOL)allowsCanceling;
-(BOOL)allowsDone;
-(BOOL)allowsCardEditing;
-(UIKeyCommand *)addKeyCommand;
-(void)setAddKeyCommand:(UIKeyCommand *)arg1 ;
-(void)updateLeftNavigationButtonAnimated:(BOOL)arg1 ;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CNContactStoreDataSource *)nonServerDataSource;
-(void)presentAddContactViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)addContactPresenter;
-(BOOL)hasPendingShowCard;
-(void)setHasPendingShowCard:(BOOL)arg1 ;
-(BOOL)ignoresMapsData;
-(void)_cnui_presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)reuseableContactViewControllerConfiguredForContact:(id)arg1 mode:(long long)arg2 ;
-(BOOL)allowsCardDeletion;
-(CNContactViewController *)reusableContactViewController;
-(void)setReusableContactViewController:(CNContactViewController *)arg1 ;
-(void)showCardForContact:(id)arg1 resetFilter:(BOOL)arg2 resetSearch:(BOOL)arg3 fallbackToFirstContact:(BOOL)arg4 scrollToContact:(BOOL)arg5 animated:(BOOL)arg6 ;
-(void)setPresentedContactViewController:(CNContactViewController *)arg1 ;
-(void)showCardForContactIfPossible:(id)arg1 ;
-(CNContactViewController *)presentedContactViewController;
-(BOOL)isPresentedContactViewControllerVisible;
-(void)setNonServerDataSource:(CNContactStoreDataSource *)arg1 ;
-(void)updateNavigationButtonsAnimated:(BOOL)arg1 ;
-(void)popToContactListAndSaveChanges:(BOOL)arg1 ;
-(void)addContact:(id)arg1 animated:(BOOL)arg2 ;
-(void)showCardForContactBeforeIndexPath:(id)arg1 ;
-(void)showCardForContactAfterIndexPath:(id)arg1 ;
-(void)observeOtherFacebookContactsAlert;
-(void)notifyOtherFacebookContactsAlertDidSelectAction;
-(void)setFacebookContactsAlertController:(UIAlertController *)arg1 ;
-(void)otherFacebookContactsAlertDidSelectActionWithNotification:(id)arg1 ;
-(UIAlertController *)facebookContactsAlertController;
-(id)nextResponderForContactListViewController:(id)arg1 ;
-(void)updateNavigationButtonsInSearchMode:(BOOL)arg1 ;
-(void)showUnifiedCardForPerson:(void*)arg1 ;
-(void)searchForString:(id)arg1 ;
-(void)checkForFacebookContactsWithDelay:(double)arg1 allowAlert:(BOOL)arg2 ;
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(void)setAllowsCardEditing:(BOOL)arg1 ;
-(void)setAllowsCardDeletion:(BOOL)arg1 ;
-(void)setAllowsCanceling:(BOOL)arg1 ;
-(void)setAllowsDone:(BOOL)arg1 ;
-(long long)leftButtonBehavior;
-(void)setLeftButtonBehavior:(long long)arg1 ;
-(long long)rightButtonBehavior;
-(void)setRightButtonBehavior:(long long)arg1 ;
-(void)setIgnoresMapsData:(BOOL)arg1 ;
-(void)contactViewController:(id)arg1 didDeleteContact:(id)arg2 ;
-(void)showCardForContact:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithDataSource:(id)arg1 ;
-(CNContactStore *)contactStore;
-(CNContactStyle *)contactStyle;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(void)beginSearch:(id)arg1 ;
-(void)setActivityManager:(CNUIUserActivityManager *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)applicationDidResume;
-(id<CNContactDataSource>)dataSource;
-(void)done:(id)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
@end

