/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, ACAccountStore, SKUIMediaSocialAuthor, NSOperationQueue;

@interface MSCLAccountStore : NSObject {

	NSMutableDictionary* _accounts;
	ACAccountStore* _accountStore;
	SKUIMediaSocialAuthor* _author;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIMediaSocialAuthor * author;                               //@synthesize author=_author - In the implementation block
@property (assign,nonatomic) long long preferredFacebookAutopostingDestination; 
-(SKUIMediaSocialAuthor *)author;
-(id)initWithAuthor:(id)arg1 ;
-(BOOL)saveAccount:(id)arg1 ;
-(void)setAccountEnabled:(BOOL)arg1 forServiceIdentifier:(id)arg2 ;
-(void)verifyUserName:(id)arg1 password:(id)arg2 serviceIdentifier:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(long long)preferredFacebookAutopostingDestination;
-(BOOL)isAccountEnabledForServiceIdentifier:(id)arg1 ;
-(void)requestAccessToAccountForServiceIdentifier:(id)arg1 permissions:(id)arg2 authenticationPresentingViewController:(id)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(id)accountForServiceIdentifier:(id)arg1 ;
-(id)_ssvServiceIdentifierForMSCLServiceIdentifier:(id)arg1 ;
-(void)renewCredentialsForAccount:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)registerExternalDestination:(id)arg1 forAccount:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)updateFacebookPreferredPageIdentifier:(id)arg1 forAccount:(id)arg2 ;
-(void)setPreferredFacebookAutopostingDestination:(long long)arg1 ;
-(void)unlinkAccount:(id)arg1 ;
-(void)_updateAccountInfoWithServiceIdentifier:(id)arg1 ;
-(void)_handleAccountStoreDidChange:(id)arg1 ;
-(id)_userDefaultsEnabledServiceKeyForServiceIdentifier:(id)arg1 ;
-(id)_facebookClientIdFromBag:(id)arg1 ;
-(BOOL)removeAccount:(id)arg1 ;
-(void)dealloc;
@end

