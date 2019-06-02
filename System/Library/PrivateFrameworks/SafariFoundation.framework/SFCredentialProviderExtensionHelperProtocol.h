/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFCredentialProviderExtensionHelperProtocol
@required
-(void)getCredentialProviderExtensionStateWithCompletion:(/*^block*/id)arg1;
-(void)saveCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeCredentialIdentities:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeAllCredentialIdentitiesWithCompletion:(/*^block*/id)arg1;
-(void)replaceCredentialIdentitiesWithIdentities:(id)arg1 completion:(/*^block*/id)arg2;
-(void)fetchCredentialIdentitiesMatchingDomains:(id)arg1 completion:(/*^block*/id)arg2;
-(void)removeCredentialIdentityStoreForApplication:(id)arg1 completion:(/*^block*/id)arg2;

@end
