/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class VSAccountStore, NSString, VSOptional;

@interface VSAccount : NSObject <NSSecureCoding> {

	VSAccountStore* _accountStore;
	NSString* _accountTypeDescription;
	NSString* _accountDescription;
	VSOptional* _optionalIdentityProviderDisplayName;
	VSOptional* _identityProviderID;
	NSString* _username;
	VSOptional* _authenticationToken;

}

@property (nonatomic,retain) VSOptional * keychainItem; 
@property (assign,nonatomic,__weak) VSAccountStore * accountStore;                          //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSString * accountTypeDescription;                               //@synthesize accountTypeDescription=_accountTypeDescription - In the implementation block
@property (nonatomic,copy) NSString * accountDescription;                                   //@synthesize accountDescription=_accountDescription - In the implementation block
@property (nonatomic,retain) VSOptional * optionalIdentityProviderDisplayName;              //@synthesize optionalIdentityProviderDisplayName=_optionalIdentityProviderDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * identityProviderDisplayName; 
@property (nonatomic,retain) VSOptional * identityProviderID;                               //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (nonatomic,copy) NSString * username;                                             //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) VSOptional * authenticationToken;                              //@synthesize authenticationToken=_authenticationToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAccountDescription:(NSString *)arg1 ;
-(void)setAccountTypeDescription:(NSString *)arg1 ;
-(NSString *)identityProviderDisplayName;
-(NSString *)accountTypeDescription;
-(VSOptional *)keychainItem;
-(void)setKeychainItem:(VSOptional *)arg1 ;
-(void)setAuthenticationToken:(VSOptional *)arg1 ;
-(VSOptional *)authenticationToken;
-(NSString *)accountDescription;
-(VSAccountStore *)accountStore;
-(void)setUsername:(NSString *)arg1 ;
-(VSOptional *)identityProviderID;
-(VSOptional *)optionalIdentityProviderDisplayName;
-(void)setIdentityProviderID:(VSOptional *)arg1 ;
-(void)setOptionalIdentityProviderDisplayName:(VSOptional *)arg1 ;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)username;
@end

