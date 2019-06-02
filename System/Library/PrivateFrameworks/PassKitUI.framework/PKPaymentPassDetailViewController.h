/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSectionTableViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPerformActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKLowBalanceReminderSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKCommutePlanRenewalReminderSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentContactResolverDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentPerformActionViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProviderDelegate.h>
#import <libobjc.A.dylib/PKPaymentVerificationControllerDelegate.h>
#import <libobjc.A.dylib/PKPassHeaderViewDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>

@protocol PKPassLibraryDataProvider, PKPaymentDataProvider, OS_dispatch_source, OS_dispatch_group, PKPassDeleteHandler;
@class NSObject, PKPaymentPass, PKLinkedApplication, PKPaymentApplication, PKPaymentWebService, PKPaymentVerificationController, PKPaymentPassDetailActivationFooterView, PKSettingTableCell, PKPaymentTransactionCellController, NSArray, NSDateFormatter, NSNumberFormatter, LAContext, PKExpressPassInformation, PKTransitPassProperties, NSDictionary, NSDateComponentsFormatter, NSNumber, NSMutableDictionary, UIView, PKPassHeaderView, UIVisualEffectView, UISegmentedControl, PKPeerPaymentWebService, PKPeerPaymentController, PKPeerPaymentAccount, PKPeerPaymentContactResolver, PKPeerPaymentPreferences, PKSpinnerHeaderView, PKPeerPaymentPerformActionViewController, NSIndexPath, PKPeerPaymentAccountResolutionController, UIColor, NSString;

@interface PKPaymentPassDetailViewController : PKSectionTableViewController <MFMailComposeViewControllerDelegate, PKPerformActionViewControllerDelegate, PKLowBalanceReminderSetupViewControllerDelegate, PKCommutePlanRenewalReminderSetupViewControllerDelegate, PKPeerPaymentContactResolverDelegate, PKPeerPaymentPerformActionViewControllerDelegate, PKPeerPaymentAccountResolutionControllerDelegate, CNAvatarViewDelegate, PKPaymentDataProviderDelegate, PKPaymentVerificationControllerDelegate, PKPassHeaderViewDelegate, UIViewControllerPreviewingDelegate, UITableViewDataSource, UITableViewDelegate, PSStateRestoration, PKPaymentSetupDelegate> {

	id<PKPassLibraryDataProvider> _passLibraryDataProvider;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	long long _detailViewStyle;
	NSObject*<OS_dispatch_source> _transactionTimer;
	BOOL _deepLinkingEnabled;
	PKPaymentPass* _pass;
	PKLinkedApplication* _linkedApplication;
	PKPaymentApplication* _defaultPaymentApplication;
	PKPaymentWebService* _webService;
	PKPaymentVerificationController* _verificationController;
	PKPaymentPassDetailActivationFooterView* _activationFooter;
	PKSettingTableCell* _messagesSwitch;
	PKSettingTableCell* _transactionsSwitch;
	PKSettingTableCell* _notificationsSwitch;
	PKSettingTableCell* _automaticPresentationSwitch;
	PKSettingTableCell* _expressAccessSwitch;
	PKPaymentTransactionCellController* _transactionCellController;
	NSArray* _transactions;
	NSArray* _transactionCountAndYear;
	NSDateFormatter* _transactionYearFormatter;
	NSNumberFormatter* _transactionCountFormatter;
	NSArray* _devicePaymentApplications;
	NSArray* _contactlessPaymentApplications;
	LAContext* _authenticationContext;
	PKExpressPassInformation* _expressAccessPassInformation;
	BOOL _expressAccessEnabled;
	BOOL _performingCardTransfer;
	PKTransitPassProperties* _transitProperties;
	NSArray* _commuterFields;
	NSArray* _balanceFields;
	NSArray* _arbitraryInfoFields;
	NSDictionary* _balances;
	NSArray* _displayableBalanceFields;
	NSDateComponentsFormatter* _commutePlanRenewalReminderTimeIntervalFormatter;
	NSArray* _tabBarSegments;
	double _headerHeight;
	UIEdgeInsets _headerContentInset;
	double _tabBarHeight;
	BOOL _changingDefaultPaymentApplication;
	NSNumber* _defaultTableViewCellHeightCache;
	double _previousLayoutTableViewWidth;
	CGSize _previousLayoutContentSize;
	NSMutableDictionary* _contextualActionHandlers;
	BOOL _navigationControllerHidesShadow;
	UIView* _headerView;
	PKPassHeaderView* _passHeaderView;
	UIVisualEffectView* _blurView;
	UISegmentedControl* _tabBar;
	UIView* _keyLine;
	BOOL _viewIsDisappearing;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentController* _peerPaymentController;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPeerPaymentContactResolver* _contactResolver;
	PKPeerPaymentPreferences* _peerPaymentPreferences;
	BOOL _loadingPeerPaymentPreferences;
	PKSpinnerHeaderView* _peerPaymentPreferencesHeaderView;
	PKPeerPaymentPerformActionViewController* _peerPaymentActionViewController;
	NSIndexPath* _loadingPeerPaymentAccountActionIndexPath;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionController;
	unsigned long long _peerPaymentAccountResolution;
	BOOL _requestingStatement;
	BOOL _isAppleAccess;
	NSObject*<OS_dispatch_group> _initialLoadGroup;
	BOOL _initialLoadTimedout;
	id<PKPassDeleteHandler> _deleteOverrider;
	UIColor* _primaryTextColor;
	UIColor* _detailTextColor;
	UIColor* _linkTextColor;
	UIColor* _warningTextColor;
	UIColor* _highlightColor;

}

@property (assign,nonatomic) id<PKPassDeleteHandler> deleteOverrider;              //@synthesize deleteOverrider=_deleteOverrider - In the implementation block
@property (assign,nonatomic) UIColor * primaryTextColor;                           //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (assign,nonatomic) UIColor * detailTextColor;                            //@synthesize detailTextColor=_detailTextColor - In the implementation block
@property (assign,nonatomic) UIColor * linkTextColor;                              //@synthesize linkTextColor=_linkTextColor - In the implementation block
@property (assign,nonatomic) UIColor * warningTextColor;                           //@synthesize warningTextColor=_warningTextColor - In the implementation block
@property (assign,nonatomic) UIColor * highlightColor;                             //@synthesize highlightColor=_highlightColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLinkTextColor:(UIColor *)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(UIColor *)primaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(void)_reloadView;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)peerPaymentPerformActionViewControllerDidCancel:(id)arg1 ;
-(void)peerPaymentPerformActionViewControllerDidPerformAction:(id)arg1 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(BOOL)pkui_prefersNavigationBarShadowHidden;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1 ;
-(void)_handleProvisioningError:(id)arg1 ;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeVerificationPresentation;
-(id)initWithPass:(id)arg1 webService:(id)arg2 peerPaymentWebService:(id)arg3 style:(long long)arg4 passLibraryDataProvider:(id)arg5 paymentServiceDataProvider:(id)arg6 ;
-(void)setDeleteOverrider:(id<PKPassDeleteHandler>)arg1 ;
-(void)_done:(id)arg1 ;
-(void)_updatePassProperties;
-(void)_passSettingsChanged:(id)arg1 ;
-(BOOL)_updateHeaderHeightDeterminingLayout:(BOOL)arg1 ;
-(id)_createTabBarWithSelectedIndex:(long long)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(double)_offscreenHeaderHeight;
-(void)reloadSection:(unsigned long long)arg1 ;
-(long long)rowAnimationForReloadingSection:(unsigned long long)arg1 ;
-(void)_updateTabBarWithSegments:(id)arg1 ;
-(void)_tabBarSegmentChanged:(id)arg1 ;
-(void)_reloadPassAndView;
-(void)_updateTabBar;
-(void)passHeaderViewDidChangePass:(id)arg1 ;
-(id<PKPassDeleteHandler>)deleteOverrider;
-(void)contactsDidChangeForContactResolver:(id)arg1 ;
-(void)lowBalanceReminderValueDidChange:(id)arg1 ;
-(void)_handlePeerPaymentAccountDidChangeNotification:(id)arg1 ;
-(void)_updatePeerPaymentAccount;
-(void)presentTransactionDetailsForTransaction:(id)arg1 animated:(BOOL)arg2 ;
-(void)performActionViewControllerDidCancel:(id)arg1 ;
-(void)performActionViewControllerDidPerformAction:(id)arg1 ;
-(void)_applyDefaultStaticStylingToCell:(id)arg1 ;
-(long long)rowAnimationForDeletingSection:(unsigned long long)arg1 ;
-(long long)rowAnimationForInsertingSection:(unsigned long long)arg1 ;
-(id)_transactionDetailViewControllerForTransaction:(id)arg1 ;
-(id)_contactKeysToFetch;
-(void)_updateDisplayableBalancesWithBalances:(id)arg1 updateTableView:(BOOL)arg2 ;
-(void)_updatePeerPaymentPreferences;
-(void)_reloadTransactionSectionsAnimated:(BOOL)arg1 ;
-(void)_updateTransitProperties;
-(void)_cancelPendingTransactionTimer;
-(void)_normalizeContentOffset;
-(void)_reloadTransactionsWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateAccessExpressPassInformation;
-(void)_updateDisplayableBalances;
-(void)_setTransitProperties:(id)arg1 ;
-(BOOL)_shouldShowAccountActions;
-(unsigned long long)_numberOfPeerPaymentBalanceActionsEnabled;
-(BOOL)_shouldShowAutomaticPresentation;
-(id)_availableActions;
-(unsigned long long)_contactBankCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(unsigned long long)_cardInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(BOOL)_shouldShowEmployeeInformation;
-(BOOL)_shouldShowBillingAddressCell;
-(BOOL)_canDoManualIdentityVerification;
-(BOOL)_shouldShowTermsCell;
-(BOOL)_shouldShowPrivacyPolicyCell;
-(id)_headerTitleForPassStateSection;
-(BOOL)_showsTransactionHistorySwitch;
-(BOOL)_hasActionOfType:(unsigned long long)arg1 ;
-(id)_footerTextForPassStateSection;
-(BOOL)_shouldShowServiceMode;
-(BOOL)_isJapaneseRegion;
-(unsigned long long)_passOperationsCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(long long)_transitCellGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(unsigned long long)_passStateSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(BOOL)_transactionDeepLinkingEnabled;
-(unsigned long long)_employeeInfoSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(unsigned long long)_privacyTermsSectionGenerateCellWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(id)_linkedAppCellForTableView:(id)arg1 ;
-(id)_paymentApplicationsCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_automaticPresentationCellForTableView:(id)arg1 ;
-(id)_expressAccessCellForTableView:(id)arg1 ;
-(id)_messagesSwitchCellForTableView:(id)arg1 ;
-(id)_transactionsSwitchCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_commuterRouteCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_availableActionCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_remindersConfigurationCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_linkedApplicationCellForTableView:(id)arg1 ;
-(id)_transactionCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_moreTransactionsCellForTableView:(id)arg1 ;
-(id)_infoCellWithDescription:(id)arg1 forTableView:(id)arg2 ;
-(id)_transactionCountByYearCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_deviceAccountNumberCellForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)_arbitraryInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_balanceCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_billingAddressCellForTableView:(id)arg1 ;
-(id)_peerPaymentMoneyActionCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentAccountActionCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentManualIdentityVerificationCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentAutomaticallyAcceptPaymentsCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(id)_peerPaymentStatementCellForTableView:(id)arg1 ;
-(id)_peerPaymentCardInfoCellForRowIndex:(long long)arg1 tableView:(id)arg2 ;
-(BOOL)_transactionCellEditActionsGenerateWithOutput:(id*)arg1 forRowIndex:(long long)arg2 tableView:(id)arg3 ;
-(CGPoint)_normalizedContentOffsetForTargetOffset:(CGPoint)arg1 ;
-(id)_footerViewForPassStateSection;
-(double)_footerViewHeightForPassStateSectionWithTableView:(id)arg1 ;
-(double)_paymentTransactionCellHeightForIndexPath:(id)arg1 tableView:(id)arg2 ;
-(double)_defaultTableViewCellHeight;
-(void)_didSelectPassStateSection;
-(void)_didSelectAvailableActionAtRow:(long long)arg1 ;
-(void)_didSelectTransitTicketAtRow:(long long)arg1 ;
-(void)_didSelectReminderConfigurationRowAtIndex:(long long)arg1 ;
-(void)_didSelectTransactionAtRow:(long long)arg1 ;
-(void)_didSelectTransactionCountByYearAtIndexPath:(id)arg1 ;
-(void)_didSelectContactBankSectionAtIndexPath:(long long)arg1 ;
-(void)_didSelectBillingAddress;
-(void)_didSelectPrivacySectionAtRow:(long long)arg1 ;
-(void)_didSelectPassOperationsSectionAtIndexPath:(id)arg1 ;
-(void)_didSelectPaymentApplicationSectionRowAtIndexPath:(id)arg1 ;
-(void)_didSelectPeerPaymentMoneyActionAtRow:(long long)arg1 ;
-(void)_didSelectPeerPaymentAccountActionAtIndexPath:(id)arg1 ;
-(void)_didSelectAutomaticallyAcceptPaymentsPreferenceAtIndexPath:(id)arg1 ;
-(void)_didSelectPeerPaymentManualIdentityVerificationAtIndexPath:(id)arg1 ;
-(void)_didSelectPeerPaymentStatementAtIndexPath:(id)arg1 ;
-(void)_startPendingTransactionTimer;
-(BOOL)_transactionSectionsDataIsChangedForNewTransactions:(id)arg1 oldTransactions:(id)arg2 newTransactionCountByYear:(id)arg3 oldTransactionCountByYear:(id)arg4 ;
-(void)_applyDefaultDynamicStylingToCell:(id)arg1 ;
-(id)_defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2 ;
-(id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 reuseIdentifier:(id)arg4 forTableView:(id)arg5 ;
-(id)_subtitleCellForTableView:(id)arg1 ;
-(id)_disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2 ;
-(id)_linkCellWithText:(id)arg1 forTableView:(id)arg2 ;
-(void)presentTermsAndConditions;
-(BOOL)_shouldShowTransferCell;
-(void)_didSelectTransferCardAtIndexPath:(id)arg1 ;
-(void)_didSelectDeleteCard;
-(id)_infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4 ;
-(id)_imageViewCellForImage:(id)arg1 contentMode:(long long)arg2 forTableView:(id)arg3 ;
-(id)_cellForField:(id)arg1 tableView:(id)arg2 ;
-(id)_transferCardCellForTableView:(id)arg1 ;
-(BOOL)_shouldShowDeleteCell;
-(id)_deleteCardCellForTableView:(id)arg1 ;
-(BOOL)_shouldShowContactCell;
-(void)_automaticPresentationSwitchChanged:(id)arg1 ;
-(void)_expressAccessSwitchChanged:(id)arg1 ;
-(void)_messagesSwitchChanged:(id)arg1 ;
-(void)_transactionsSwitchChanged:(id)arg1 ;
-(void)_notificationSwitchChanged:(id)arg1 ;
-(void)_presentMerchantDetailsViewWithTransaction:(id)arg1 forCell:(id)arg2 ;
-(id)commutePlanRenewalReminderTimeIntervalFormatter;
-(void)_refreshPaymentApplicationsSelection;
-(unsigned long long)_peerPaymentBalanceActionForRowIndex:(unsigned long long)arg1 ;
-(id)_checkmarkCellWithText:(id)arg1 forTableView:(id)arg2 ;
-(id)_transactionYearFormatter;
-(id)_transactionCountFormatter;
-(void)_updatePeerPaymentPreferencesWithNewPreferences:(id)arg1 ;
-(void)_updatePeerPaymentPreferencesSectionVisibilityAndReloadIfNecessary;
-(void)presentTopUp;
-(void)_didSelectTransferToBank;
-(void)_doneLoadingPeerPaymentAccountAction;
-(void)_showPeerPaymentActionViewControllerForAction:(unsigned long long)arg1 ;
-(void)_openPaymentSetup;
-(BOOL)_peerPaymentBalanceActionEnabled:(unsigned long long)arg1 ;
-(void)updateActivationFooterViewContents;
-(void)_activationFooterPressed:(id)arg1 ;
-(void)_openPaymentSetupWithNetworkWhitelist:(id)arg1 paymentSetupMode:(long long)arg2 ;
-(void)_presentContactBankViewController;
-(void)_callIssuer;
-(void)_emailIssuer;
-(void)_openIssuerWebsite;
-(void)_preflightWatchForTransferWithCompletion:(/*^block*/id)arg1 ;
-(id)_disabledCellWithText:(id)arg1 forTableView:(id)arg2 ;
-(id)_spinnerCellForTableView:(id)arg1 ;
-(id)_activationFooterView;
-(void)_setExpressAccessEnabled:(BOOL)arg1 paymentSetupContext:(long long)arg2 authenticationCredential:(id)arg3 ;
-(void)commutePlanRenewalReminderValueDidChange:(id)arg1 ;
-(id)initWithPass:(id)arg1 webService:(id)arg2 style:(long long)arg3 dataProvider:(id)arg4 ;
-(id)_switchCellWithText:(id)arg1 forTableView:(id)arg2 ;
-(void)_peerPaymentPaymentRequestPreferenceChanged:(id)arg1 ;
-(void)_presentNotImplementedAlertWithRadarNumber:(long long)arg1 ;
-(unsigned long long)_rowIndexForPeerPaymentBalanceActionRow:(unsigned long long)arg1 ;
-(double)_heightForPassStateSectionWithTableView:(id)arg1 ;
-(UIColor *)detailTextColor;
-(void)setDetailTextColor:(UIColor *)arg1 ;
-(UIColor *)linkTextColor;
-(UIColor *)warningTextColor;
-(void)setWarningTextColor:(UIColor *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
@end

