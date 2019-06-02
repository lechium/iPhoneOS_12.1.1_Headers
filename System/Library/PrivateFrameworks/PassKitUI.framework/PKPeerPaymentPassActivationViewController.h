/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/AAUIDeviceToDeviceEncryptionHelperDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKPeerPaymentCredential, PKPeerPaymentWebService, RemoteUIController, UIImage, PKPeerPaymentSetupFlowHeroView, NSString;

@interface PKPeerPaymentPassActivationViewController : PKExplanationViewController <PKPaymentSetupViewControllerDelegate, AAUIDeviceToDeviceEncryptionHelperDelegate, PKExplanationViewControllerDelegate, RemoteUIControllerDelegate, PKExplanationViewDelegate> {

	PKPaymentProvisioningController* _provisioningController;
	PKPeerPaymentCredential* _credential;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	unsigned long long _state;
	PKPeerPaymentWebService* _peerPaymentWebService;
	RemoteUIController* _termsController;
	UIImage* _passSnapShot;
	BOOL _shouldShowAddDebitCardViewController;
	PKPeerPaymentSetupFlowHeroView* _heroView;
	BOOL _presentedDeviceToDeviceEncryptionFlow;

}

@property (assign,nonatomic) BOOL presentedDeviceToDeviceEncryptionFlow;              //@synthesize presentedDeviceToDeviceEncryptionFlow=_presentedDeviceToDeviceEncryptionFlow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleError:(id)arg1 ;
-(void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(/*^block*/id)arg2 ;
-(void)_presentTermsAndConditionsWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentIdentityVerificationWithError:(id)arg1 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)viewControllerDidCancelSetupFlow:(id)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(CGSize)_snapshotSize;
-(void)_beginSetup;
-(void)_handleActivatedState;
-(void)_handleNextStep;
-(void)_presentMissingTLKsAlert;
-(void)_presentActivationFailedErrorAlert;
-(void)_checkCloudStoreState;
-(void)_presentSetupWillCompleteLaterAlertController;
-(void)_presentDeviceToDeviceEncryptionFlow;
-(void)_provisionPeerPaymentPass;
-(void)_processCloudStorePCSError;
-(void)_initalizeCloudStoreWithTargetDevice:(id)arg1 ifNecessaryWithCompletion:(/*^block*/id)arg2 ;
-(void)_resetApplyPayManateeView;
-(void)_presentAlertControllerForError:(id)arg1 ;
-(id)_titleStringForState;
-(id)_bodyStringForState;
-(void)_setShowSpinner:(BOOL)arg1 ;
-(BOOL)_shouldShowAddDebitCardViewController;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 credential:(id)arg4 passSnapShot:(id)arg5 ;
-(void)setPresentedDeviceToDeviceEncryptionFlow:(BOOL)arg1 ;
-(void)_terminateSetupFlow;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)_presentAddDebitCardViewController;
-(BOOL)presentedDeviceToDeviceEncryptionFlow;
-(void)viewDidLoad;
-(void)_setState:(unsigned long long)arg1 ;
@end

