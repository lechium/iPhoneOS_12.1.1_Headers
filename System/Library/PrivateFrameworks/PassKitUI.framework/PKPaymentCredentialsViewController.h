/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupHideSetupLaterButtonProtocol.h>
#import <libobjc.A.dylib/PKPaymentProvisioningControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, NSMutableArray, PKTableHeaderView, PKPaymentSetupFooterView, UIImage, PKPaymentCredentialTableViewCell, PKPaymentSetupProduct, NSString;

@interface PKPaymentCredentialsViewController : PKPaymentSetupTableViewController <PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentProvisioningControllerDelegate> {

	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	NSMutableArray* _credentialCaches;
	NSMutableArray* _refundedCredentialCaches;
	PKTableHeaderView* _tableHeader;
	PKPaymentSetupFooterView* _tableFooter;
	BOOL _allowsManualEntry;
	UIImage* _placeHolder;
	PKPaymentCredentialTableViewCell* _sizingCell;
	unsigned long long _maximumNumberOfSelectableCredentials;
	double _cachedHeaderViewWidth;
	BOOL _hideSetupLaterButton;
	PKPaymentSetupProduct* _product;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) BOOL hideSetupLaterButton;                    //@synthesize hideSetupLaterButton=_hideSetupLaterButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentSetupProduct *)product;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)_terminateSetupFlow;
-(BOOL)hideSetupLaterButton;
-(void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentPassUpdatedOnCredential:(id)arg1 ;
-(void)setHideSetupLaterButton:(BOOL)arg1 ;
-(id)initWithProvisioningController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 credentials:(id)arg4 allowsManualEntry:(BOOL)arg5 ;
-(void)_presentManualAddController;
-(void)_startProvisioningForSelectedCards;
-(void)_updateRemoteCredentialCache;
-(void)_updateMaximumSelectableCredentials;
-(void)_updateTableHeaderViewSubtitle;
-(void)_updateForSelectionCount;
-(void)_setPassSnapshotOnCell:(id)arg1 cell:(id)arg2 ;
-(void)_showRefund:(id)arg1 ;
-(void)_startProvisioningForCredentials:(id)arg1 ;
-(unsigned long long)_numberOfSelectedCredentials;
-(void)_setUserInteractionEnabled:(BOOL)arg1 ;
-(void)_presentViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
@end

