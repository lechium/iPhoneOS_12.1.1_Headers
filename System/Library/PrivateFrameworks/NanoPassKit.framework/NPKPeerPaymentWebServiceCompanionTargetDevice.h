/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPeerPaymentWebServiceTargetDeviceProtocol.h>

@class NPSDomainAccessor, NPSManager, NSString;

@interface NPKPeerPaymentWebServiceCompanionTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {

	NPSDomainAccessor* _globalDomainAccessor;
	NPSManager* _preferencesSyncManager;

}

@property (nonatomic,retain) NPSDomainAccessor * globalDomainAccessor;              //@synthesize globalDomainAccessor=_globalDomainAccessor - In the implementation block
@property (nonatomic,retain) NPSManager * preferencesSyncManager;                   //@synthesize preferencesSyncManager=_preferencesSyncManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attemptToDownloadPeerPaymentPassAtURL:(id)arg1 withWebService:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)deviceRegion;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(id)bridgedClientInfo;
-(void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)account;
-(void)updateAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)initalizeCloudStoreIfNecessaryWithHandler:(/*^block*/id)arg1 ;
-(void)initalizeCloudStoreIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)checkTLKsMissingWithCompletion:(/*^block*/id)arg1 ;
-(void)cloudStoreStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)resetApplePayManateeViewWithCompletion:(/*^block*/id)arg1 ;
-(void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUserHasDisabledPeerPayment:(BOOL)arg1 ;
-(id)secureElementIdentifiers;
-(BOOL)userHasDisabledPeerPayment;
-(void)_handleAccountChanged:(id)arg1 ;
-(NPSDomainAccessor *)globalDomainAccessor;
-(NPSManager *)preferencesSyncManager;
-(void)setGlobalDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setPreferencesSyncManager:(NPSManager *)arg1 ;
-(id)init;
-(void)dealloc;
@end
