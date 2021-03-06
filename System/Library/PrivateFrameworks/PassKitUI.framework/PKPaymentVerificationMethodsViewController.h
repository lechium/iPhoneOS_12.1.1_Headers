/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupFieldsViewController.h>

@class PKPaymentSetupVerificationMethodTableController, PKPaymentVerificationController, PKPaymentProvisioningController, NSString;

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController {

	PKPaymentSetupVerificationMethodTableController* _methodTableController;
	long long _verificationStatus;
	PKPaymentVerificationController* _verificationController;
	PKPaymentProvisioningController* _provisioningController;
	NSString* _stepIdentifier;

}

@property (nonatomic,readonly) PKPaymentVerificationController * verificationController;              //@synthesize verificationController=_verificationController - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,copy) NSString * stepIdentifier;                                                 //@synthesize stepIdentifier=_stepIdentifier - In the implementation block
-(void)_terminateSetupFlow;
-(id)initWithVerificationController:(id)arg1 ;
-(id)initWithVerificationController:(id)arg1 fieldsModel:(id)arg2 ;
-(void)_handleVerificationFinished;
-(void)_loadVerificationOptions;
-(id)defaultHeaderViewTitle;
-(void)setStepIdentifier:(NSString *)arg1 ;
-(id)_requestErrorAlertController:(id)arg1 ;
-(id)defaultHeaderViewSubTitle;
-(id)_newVerificationRequest;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
-(id)initWithVerificationController:(id)arg1 verificationChannels:(id)arg2 ;
-(PKPaymentVerificationController *)verificationController;
-(id)_setupAssistantVerificationAlert;
-(id)visibleFieldIdentifiers;
-(void)handleNextButtonTapped:(id)arg1 ;
-(NSString *)stepIdentifier;
-(PKPaymentProvisioningController *)provisioningController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_configure;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

