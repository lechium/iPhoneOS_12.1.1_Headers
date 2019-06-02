/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentVerificationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupHideSetupLaterButtonProtocol.h>

@class PKPaymentSetupFooterView, RemoteUIController, CLInUseAssertion, UINotificationFeedbackGenerator, PKPaymentVerificationController, NSTimer, NSString, PKPaymentProvisioningController;

@interface PKPaymentSetupProvisioningFieldsViewController : PKPaymentSetupFieldsViewController <UITextFieldDelegate, RemoteUIControllerDelegate, PKPaymentVerificationControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {

	PKPaymentSetupFooterView* _cardDetailsFooterView;
	RemoteUIController* _termsUIController;
	CLInUseAssertion* _CLInUse;
	BOOL _termsPresented;
	UINotificationFeedbackGenerator* _cardAddedFeedbackGenerator;
	PKPaymentVerificationController* _verificationController;
	BOOL _waitForActivation;
	/*^block*/id _waitForActivationCompletionHandler;
	NSTimer* _waitForActivationTimer;
	NSString* _activatingPaymentPassUniqueID;
	BOOL _hideSetupLaterButton;
	PKPaymentProvisioningController* _paymentProvisioningController;
	/*^block*/id _continueActionHandler;

}

@property (nonatomic,retain) PKPaymentProvisioningController * paymentProvisioningController;              //@synthesize paymentProvisioningController=_paymentProvisioningController - In the implementation block
@property (assign,nonatomic) BOOL hideSetupLaterButton;                                                    //@synthesize hideSetupLaterButton=_hideSetupLaterButton - In the implementation block
@property (nonatomic,copy) id continueActionHandler;                                                       //@synthesize continueActionHandler=_continueActionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(id)initWithWebService:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4 ;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(void)handleNextButtonTapped:(id)arg1 ;
-(void)setContinueActionHandler:(id)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 ;
-(PKPaymentProvisioningController *)paymentProvisioningController;
-(void)suppressFooterViewManualEntryButton;
-(void)suppressFooterViewSkipCardButton;
-(void)setNotificationTextInFooterView:(id)arg1 ;
-(BOOL)hideSetupLaterButton;
-(void)suppressFooterViewSetupLaterButton;
-(void)updateFieldsModelWithPaymentCredential:(id)arg1 ;
-(id)newPaymentRequirementsRequest;
-(id)newPaymentEligibilityRequest;
-(void)resetAllFieldsAndProvisioningState;
-(void)requestRequirements:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_performEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_performTermsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performProvisionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performFinishWithCompletion:(/*^block*/id)arg1 ;
-(void)updateFieldsModelWithRequirementsResponse:(id)arg1 ;
-(void)showEligibilityIssueWithReason:(long long)arg1 learnMoreURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestEligibility:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)acceptTerms;
-(void)displayTermsForEligibility:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)newPaymentProvisioningRequest;
-(void)showProvisioningError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestProvisioning:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)handlePassSuccessfullyAdded:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setHideSetupLaterButton:(BOOL)arg1 ;
-(void)addDifferentCard:(id)arg1 ;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)defaultFields;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupFieldsModel:(id)arg4 ;
-(void)displayTermsForTermsURL:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)continueActionHandler;
-(void)resetProvisioningState;
-(void)handleNextActionError:(id)arg1 shouldContinue:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)handleNextActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_provisioningLocalizedProgressDescriptionDidChange:(id)arg1 ;
-(void)_passLibraryDidChange:(id)arg1 ;
-(void)_provisioningStateDidChange:(id)arg1 ;
-(id)_cardDetailsFooterView;
-(void)setupLater:(id)arg1 ;
-(void)_waitForActivation:(id)arg1 ;
-(void)_waitForActivationDidTimeout:(id)arg1 ;
-(void)_cleanupWaitForActivation;
-(void)_didActivatePaymentPass:(id)arg1 ;
-(void)_requestWaitForActivation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handlePassSuccessfullyAdded:(id)arg1 ;
-(void)_showVerifiedUI;
-(BOOL)_shouldShowAutomaticSelectionForPass:(id)arg1 ;
-(BOOL)_shouldShowVerificationMethodsForPass:(id)arg1 ;
-(void)_showAutomaticSelectionForPass:(id)arg1 ;
-(void)_showVerificationMethodsForPass:(id)arg1 ;
-(void)_handleNextCredentialWithPresentationDelay:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)showPrivacy:(id)arg1 ;
-(void)setPaymentProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)footerView;
@end

