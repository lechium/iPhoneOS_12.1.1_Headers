/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NPKPaymentWebServiceCompanionTargetDeviceDelegate.h>

@class PKPaymentWebService, NPKPaymentWebServiceCompanionTargetDevice, PKPeerPaymentWebService, PKPeerPaymentAccount, NPKCompanionAgentConnection, NPKPeerPaymentWebServiceCompanionTargetDevice, NSString;

@interface NPKSharedWebServiceProvider : NSObject <NPKPaymentWebServiceCompanionTargetDeviceDelegate> {

	PKPaymentWebService* _webService;
	NPKPaymentWebServiceCompanionTargetDevice* _targetDevice;
	PKPeerPaymentWebService* _peerPaymentWebService;
	PKPeerPaymentAccount* _peerPaymentAccount;
	NPKCompanionAgentConnection* _companionAgentConnection;
	NPKPeerPaymentWebServiceCompanionTargetDevice* _peerPaymentTargetDevice;

}

@property (nonatomic,retain) PKPaymentWebService * webService;                                                     //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentWebService * peerPaymentWebService;                                      //@synthesize peerPaymentWebService=_peerPaymentWebService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccount * peerPaymentAccount;                                            //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,retain) NPKCompanionAgentConnection * companionAgentConnection;                               //@synthesize companionAgentConnection=_companionAgentConnection - In the implementation block
@property (nonatomic,retain) NPKPaymentWebServiceCompanionTargetDevice * targetDevice;                             //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) NPKPeerPaymentWebServiceCompanionTargetDevice * peerPaymentTargetDevice;              //@synthesize peerPaymentTargetDevice=_peerPaymentTargetDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWebServiceProvider;
-(void)setNewAuthRandom:(/*^block*/id)arg1 ;
-(void)setTargetDevice:(NPKPaymentWebServiceCompanionTargetDevice *)arg1 ;
-(PKPaymentWebService *)webService;
-(NPKPaymentWebServiceCompanionTargetDevice *)targetDevice;
-(PKPeerPaymentWebService *)peerPaymentWebService;
-(void)setPeerPaymentAccount:(PKPeerPaymentAccount *)arg1 ;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(NPKCompanionAgentConnection *)companionAgentConnection;
-(void)setCompanionAgentConnection:(NPKCompanionAgentConnection *)arg1 ;
-(id)_webServiceContext;
-(id)_peerPaymentWebServiceContext;
-(id)_peerPaymentAccount;
-(void)_deviceFailedToPair:(id)arg1 ;
-(NPKPeerPaymentWebServiceCompanionTargetDevice *)peerPaymentTargetDevice;
-(void)setPeerPaymentWebService:(PKPeerPaymentWebService *)arg1 ;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 preconditionDescription:(id)arg2 shouldUnregister:(BOOL)arg3 ;
-(void)handlePushToken:(id)arg1 ;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1 ;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)handlePaymentTransactions:(id)arg1 appletStates:(id)arg2 forUniqueIDs:(id)arg3 ;
-(void)handleAppletState:(id)arg1 forUniqueID:(id)arg2 ;
-(void)handleRemoveTransactionsWithIdentifiers:(id)arg1 ;
-(void)handleBalanceUpdate:(id)arg1 forUniqueID:(id)arg2 ;
-(void)archiveWebServiceContext:(id)arg1 ;
-(void)archiveWebServiceBackgroundContext:(id)arg1 ;
-(void)handlePaymentWebServiceContextFromWatch:(id)arg1 ;
-(void)sendWebServiceContextToWatch;
-(void)showPaymentSetupForAppDisplayName:(id)arg1 ;
-(void)sendPaymentOptionsDefaultsToWatch;
-(void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 account:(id)arg2 ;
-(void)handleDownloadAllPaymentPasses;
-(void)checkCompanionPeerPaymentRegistrationState;
-(void)loadWebService;
-(void)setPeerPaymentTargetDevice:(NPKPeerPaymentWebServiceCompanionTargetDevice *)arg1 ;
-(id)init;
-(void)dealloc;
@end
