/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupRequiresPreflightProtocol.h>
#import <libobjc.A.dylib/PKPaymentProvisioningControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupHideSetupLaterButtonProtocol.h>

@class UIImage, PKPaymentCredentialMetadataTableController, PKPaymentCredential, PKPaymentSetupProduct, NSString;

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentSetupRequiresPreflightProtocol, PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {

	UIImage* _passSnapshotPlaceHolder;
	unsigned long long _credentialProvisioningType;
	unsigned long long _displayType;
	PKPaymentCredentialMetadataTableController* _metadataController;
	PKPaymentCredential* _paymentCredential;
	PKPaymentSetupProduct* _setupProduct;
	BOOL _allowsManualEntry;
	BOOL _previouslyAcceptedTerms;
	BOOL _shouldAutoProvision;
	UIImage* _passSnapshot;

}

@property (assign,nonatomic) BOOL shouldAutoProvision;              //@synthesize shouldAutoProvision=_shouldAutoProvision - In the implementation block
@property (nonatomic,copy) UIImage * passSnapshot;                  //@synthesize passSnapshot=_passSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)_terminateSetupFlow;
-(UIImage *)passSnapshot;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5 allowsManualEntry:(BOOL)arg6 previouslyAcceptedTerms:(BOOL)arg7 ;
-(void)setPassSnapshot:(UIImage *)arg1 ;
-(void)setShouldAutoProvision:(BOOL)arg1 ;
-(void)_skipCard;
-(void)_updatePassSnapshotHeader;
-(void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)newPaymentRequirementsRequest;
-(id)newPaymentEligibilityRequest;
-(void)_preflightCredentialFieldsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(void)_performTermsWithCompletion:(/*^block*/id)arg1 ;
-(void)_performProvisionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performFinishWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(/*^block*/id)arg1 ;
-(id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
-(id)_defaultHeaderViewSubTitleForLocalCredential;
-(id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
-(id)readonlyFieldIdentifiers;
-(void)paymentPassUpdatedOnCredential:(id)arg1 ;
-(void)addDifferentCard:(id)arg1 ;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)defaultFields;
-(BOOL)shouldAutoProvision;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)isComplete;
@end
