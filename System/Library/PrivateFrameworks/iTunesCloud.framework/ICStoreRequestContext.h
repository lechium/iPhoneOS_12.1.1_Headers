/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICRequestContext.h>

@class ICUserIdentity, ICUserIdentityStore, ICStoreDialogResponseHandler;

@interface ICStoreRequestContext : ICRequestContext {

	ICUserIdentity* _delegatedIdentity;
	ICUserIdentity* _identity;
	ICUserIdentityStore* _identityStore;
	ICStoreDialogResponseHandler* _storeDialogResponseHandler;
	long long _personalizationStyle;
	BOOL _allowsExpiredBags;

}

@property (nonatomic,copy,readonly) ICUserIdentity * identity;                                              //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy,readonly) ICUserIdentity * delegatedIdentity;                                     //@synthesize delegatedIdentity=_delegatedIdentity - In the implementation block
@property (nonatomic,readonly) ICUserIdentityStore * identityStore;                                         //@synthesize identityStore=_identityStore - In the implementation block
@property (nonatomic,copy,readonly) ICStoreDialogResponseHandler * storeDialogResponseHandler;              //@synthesize storeDialogResponseHandler=_storeDialogResponseHandler - In the implementation block
@property (nonatomic,readonly) BOOL allowsExpiredBags;                                                      //@synthesize allowsExpiredBags=_allowsExpiredBags - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;                                              //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
+(id)activeStoreAccountRequestContext;
-(BOOL)allowsExpiredBags;
-(void)setAllowsExpiredBags:(BOOL)arg1 ;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 ;
-(id)initWithIdentity:(id)arg1 identityStore:(id)arg2 clientInfo:(id)arg3 authenticationProvider:(id)arg4 ;
-(ICStoreDialogResponseHandler *)storeDialogResponseHandler;
-(long long)personalizationStyle;
-(void)setDelegatedIdentity:(ICUserIdentity *)arg1 ;
-(void)setIdentityStore:(ICUserIdentityStore *)arg1 ;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(id)initWithIdentity:(id)arg1 clientInfo:(id)arg2 ;
-(ICUserIdentityStore *)identityStore;
-(ICUserIdentity *)delegatedIdentity;
-(void)setStoreDialogResponseHandler:(ICStoreDialogResponseHandler *)arg1 ;
-(void)setPersonalizationStyle:(long long)arg1 ;
-(id)initWithIdentity:(id)arg1 ;
-(ICUserIdentity *)identity;
-(void)setIdentity:(ICUserIdentity *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

