/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AAGrandSlamSigner, AAUIAccountManager, NSOperationQueue;

@interface FAFamilyEligibilityRequester : NSObject {

	AAGrandSlamSigner* _grandSlamSigner;
	AAUIAccountManager* _accountManager;
	NSOperationQueue* _networkActivityQueue;

}
-(id)_accountStore;
-(id)_appleAccount;
-(id)_grandSlamSigner;
-(id)initWithAccountManager:(id)arg1 ;
-(void)requestFamilyEligibilityWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
@end
