/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, ACAccountStore, AAGrandSlamSigner, AIDAServiceOwnersManager, AKAppleIDSigningController, NSData;

@interface FARequestConfigurator : NSObject {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	ACAccount* _grandSlamAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	AAGrandSlamSigner* _familyGrandSlamSigner;
	AIDAServiceOwnersManager* _serviceOwnersManager;
	AKAppleIDSigningController* _akSigningController;
	NSData* _pushToken;
	BOOL _attachSetupHeader;

}

@property (assign,nonatomic) BOOL attachSetupHeader;              //@synthesize attachSetupHeader=_attachSetupHeader - In the implementation block
+(unsigned char)_isUsingV2Flows;
-(id)_account;
-(id)initWithAccount:(id)arg1 ;
-(id)_accountStore;
-(id)_serviceOwnersManager;
-(id)_grandSlamSigner;
-(void)addFresnoHeadersToRequest:(id)arg1 ;
-(void)addFresnoPayloadToRequest:(id)arg1 additionalHeaders:(id)arg2 ;
-(void)renewCredentialsWithCompletion:(/*^block*/id)arg1 ;
-(id)_grandSlamAccount;
-(id)requestForContext:(id)arg1 ;
-(void)setAttachSetupHeader:(BOOL)arg1 ;
-(id)_pushToken;
-(id)_familyGrandSlamSigner;
-(id)_akSigningController;
-(id)_fresnoPayloadWithAdditionalHeaders:(id)arg1 ;
-(id)_urlForEventType:(id)arg1 ;
-(void)_addAccountForServiceType:(id)arg1 toPayload:(id)arg2 forKey:(id)arg3 ;
-(id)_familyTokenForGrandSlamAccount:(id)arg1 andTokenID:(id)arg2 ;
-(void)addPayload:(id)arg1 toRequest:(id)arg2 ;
-(BOOL)attachSetupHeader;
@end

