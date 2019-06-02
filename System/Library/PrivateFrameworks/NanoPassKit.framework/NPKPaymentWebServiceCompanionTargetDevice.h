/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentWebServiceTargetDeviceProtocol.h>
#import <libobjc.A.dylib/PKPaymentWebServiceArchiver.h>

@protocol NPKPaymentWebServiceCompanionTargetDeviceDelegate, OS_dispatch_queue;
@class IDSService, NPKCompanionAgentConnection, NSMutableDictionary, NSObject, NRActiveDeviceAssertion, NSString;

@interface NPKPaymentWebServiceCompanionTargetDevice : NSObject <IDSServiceDelegate, PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver> {

	id<NPKPaymentWebServiceCompanionTargetDeviceDelegate> _delegate;
	unsigned long long _context;
	IDSService* _provisioningService;
	NPKCompanionAgentConnection* _companionAgentConnection;
	NSMutableDictionary* _outstandingRequests;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _responseQueue;
	NRActiveDeviceAssertion* _provisioningActiveDeviceAssertion;

}

@property (assign,nonatomic) unsigned long long context;                                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) IDSService * provisioningService;                                                   //@synthesize provisioningService=_provisioningService - In the implementation block
@property (nonatomic,retain) NPKCompanionAgentConnection * companionAgentConnection;                             //@synthesize companionAgentConnection=_companionAgentConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingRequests;                                          //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                                         //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;                                         //@synthesize responseQueue=_responseQueue - In the implementation block
@property (nonatomic,retain) NRActiveDeviceAssertion * provisioningActiveDeviceAssertion;                        //@synthesize provisioningActiveDeviceAssertion=_provisioningActiveDeviceAssertion - In the implementation block
@property (assign,nonatomic,__weak) id<NPKPaymentWebServiceCompanionTargetDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bridgedClientInfoHTTPHeader;
-(id)deviceRegion;
-(void)noteProvisioningDidBegin;
-(void)noteProvisioningDidEnd;
-(void)claimSecureElementForCurrentUserWithCompletion:(/*^block*/id)arg1 ;
-(void)archiveContext:(id)arg1 ;
-(void)archiveBackgroundContext:(id)arg1 ;
-(void)paymentWebServiceDidUpdateConfiguration:(id)arg1 ;
-(void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2 ;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3 ;
-(id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2 ;
-(int)paymentSupportedInCurrentRegionForWebService:(id)arg1 ;
-(id)bridgedClientInfo;
-(void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 setNewAuthRandom:(/*^block*/id)arg2 ;
-(BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2 ;
-(BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2 ;
-(void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)downloadAllPaymentPassesForPaymentWebService:(id)arg1 ;
-(BOOL)claimSecureElementForCurrentUser;
-(unsigned long long)secureElementOwnershipStateForCurrentUser;
-(id)trustedDeviceEnrollmentInfoForWebService:(id)arg1 ;
-(void)setMaximumPaymentCards:(unsigned long long)arg1 ;
-(void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1 ;
-(void)peerPaymentUnregisterWithCompletion:(/*^block*/id)arg1 ;
-(void)noteProvisioningUserInterfaceDidAppear;
-(void)noteProvisioningUserInterfaceDidDisappear;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2 ;
-(unsigned long long)maximumPaymentCards;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)supportsCredentialType:(long long)arg1 ;
-(id)secureElementIdentifiers;
-(BOOL)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 ;
-(void)removeExpressPassesWithCardType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)deviceDescriptionForPaymentWebService:(id)arg1 ;
-(BOOL)felicaSecureElementIsAvailable;
-(BOOL)supportsAutomaticPassPresentation;
-(void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(/*^block*/id)arg2 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)deviceName;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(NPKCompanionAgentConnection *)companionAgentConnection;
-(void)setNewAuthRandomIfNecessaryAtBeginningOfProvisioningFlow:(/*^block*/id)arg1 ;
-(void)setCompanionAgentConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)updatePeerPaymentAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)provisionPeerPaymentPassWithCompletion:(/*^block*/id)arg1 ;
-(void)initializeCloudStoreIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)initializeCloudStoreIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)peerPaymentRegisterWithURL:(id)arg1 forceReRegistration:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithContext:(unsigned long long)arg1 responseQueue:(id)arg2 ;
-(void)sendWebServiceContextToWatch:(id)arg1 ;
-(void)sendPaymentOptionsDefaultsToWatch;
-(void)queueTSMConnectionResponse:(id)arg1 ;
-(void)provisioningDataResponse:(id)arg1 ;
-(void)registrationDataResponse:(id)arg1 ;
-(void)configurationDataResponse:(id)arg1 ;
-(void)signDataResponse:(id)arg1 ;
-(void)secureElementGetAppletsResponse:(id)arg1 ;
-(void)secureElementRemoveAppletsResponse:(id)arg1 ;
-(void)setNewAuthRandomResponse:(id)arg1 ;
-(void)didRegisterResponse:(id)arg1 ;
-(void)dumpLogsResponse:(id)arg1 ;
-(void)pendingRemovalResponse:(id)arg1 ;
-(void)updatePaymentPass:(id)arg1 ;
-(void)updatePushToken:(id)arg1 ;
-(void)preconditionNotMet:(id)arg1 ;
-(void)handleValueAddedServiceTransactions:(id)arg1 ;
-(void)preferredAIDRequest:(id)arg1 ;
-(void)preferredAIDResponse:(id)arg1 ;
-(void)handleWebServiceContextDidChangeRequest:(id)arg1 ;
-(void)handleWebServiceContextNeededRequest:(id)arg1 ;
-(void)handlePaymentTransactions:(id)arg1 ;
-(void)handleRemovedTransaction:(id)arg1 ;
-(void)setExpressPassResponse:(id)arg1 ;
-(void)removeExpressPassesWithCardTypeResponse:(id)arg1 ;
-(void)removeExpressPassWithUniqueIdentifierResponse:(id)arg1 ;
-(void)handleUpdatedAppletState:(id)arg1 ;
-(void)getPairingInfoResponse:(id)arg1 ;
-(void)handleShowPaymentSetupRequest:(id)arg1 ;
-(void)enableServiceModeResponse:(id)arg1 ;
-(void)handleTransactionDefaultsNeededRequest:(id)arg1 ;
-(void)handleCompanionMigrationResponse:(id)arg1 ;
-(void)peerPaymentRegisterResponse:(id)arg1 ;
-(void)peerPaymentUnregisterResponse:(id)arg1 ;
-(void)handleUpdatedPeerPaymentWebServiceContext:(id)arg1 ;
-(void)provisionPeerPaymentPassResponse:(id)arg1 ;
-(void)updatePeerPaymentAccountResponse:(id)arg1 ;
-(void)checkTLKsMissingResponse:(id)arg1 ;
-(void)initializeCloudStoreIfNecessaryWithHandlerResponse:(id)arg1 ;
-(void)resetApplePayManateeViewResponse:(id)arg1 ;
-(void)downloadAllPaymentPasses:(id)arg1 ;
-(void)checkCompanionPeerPaymentRegistrationState:(id)arg1 ;
-(void)initializeCloudStoreIfNecessaryResponse:(id)arg1 ;
-(void)cloudStoreStatusResponse:(id)arg1 ;
-(void)markAllAppletsForDeletionResponse:(id)arg1 ;
-(void)handleBalanceChange:(id)arg1 ;
-(void)setProvisioningService:(IDSService *)arg1 ;
-(NRActiveDeviceAssertion *)provisioningActiveDeviceAssertion;
-(void)setProvisioningActiveDeviceAssertion:(NRActiveDeviceAssertion *)arg1 ;
-(void)_setOrResetCleanupTimerForRequest:(id)arg1 ;
-(id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 ;
-(BOOL)_deviceIsDaytonaOrLater;
-(BOOL)_deviceIsFortuneOrLater;
-(void)_getPairingInfoAndSetAuthRandomIfNotPaired:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setNewAuthRandomReturningPairingState:(/*^block*/id)arg1 ;
-(void)_setNewAuthRandomIfNecessaryReturningPairingState:(/*^block*/id)arg1 ;
-(id)_serialNumbersOfAllPairedDevices;
-(void)paymentWebService:(id)arg1 signData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_supportedRegionsForWebService:(id)arg1 ;
-(void)removeAIDsFromSecureElement:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_sendProtobuf:(id)arg1 responseExpected:(BOOL)arg2 extraOptions:(id)arg3 ;
-(IDSService *)provisioningService;
-(void)setExpressWithPassInformation:(id)arg1 requestAuthorization:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)markAllAppletsForDeletionWithCompletion:(/*^block*/id)arg1 ;
-(void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 ;
-(void)secureElementCardsWithCompletion:(/*^block*/id)arg1 ;
-(void)dumpLogsWithCompletion:(/*^block*/id)arg1 ;
-(void)handlePendingRemovalOfPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)retrieveTransactionsForPassWithUniqueID:(id)arg1 ;
-(void)handleDeletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2 ;
-(void)cancelOutstandingSetDefaultExpressPassRequestsWithExpressMode:(id)arg1 ;
-(void)enableServiceModeForPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelOutstandingEnableServiceModeRequests;
-(void)handleCompanionMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)handleCompanionPeerPaymentRegistration;
-(void)handleCompanioniCloudSignout;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)init;
-(void)setDelegate:(id<NPKPaymentWebServiceCompanionTargetDeviceDelegate>)arg1 ;
-(id<NPKPaymentWebServiceCompanionTargetDeviceDelegate>)delegate;
-(void)setContext:(unsigned long long)arg1 ;
-(unsigned long long)context;
-(NSMutableDictionary *)outstandingRequests;
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
@end

