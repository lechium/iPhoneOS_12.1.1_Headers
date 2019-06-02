/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccountStore, ACAccount;

@interface AAAppleIDSettingsRequest : AARequest {

	ACAccountStore* _store;
	BOOL _forceGSToken;
	ACAccount* _grandSlamAccount;

}

@property (nonatomic,readonly) ACAccount * grandSlamAccount;              //@synthesize grandSlamAccount=_grandSlamAccount - In the implementation block
@property (assign,nonatomic) BOOL forceGSToken;                           //@synthesize forceGSToken=_forceGSToken - In the implementation block
+(Class)responseClass;
-(BOOL)forceGSToken;
-(void)setForceGSToken:(BOOL)arg1 ;
-(id)urlRequest;
-(ACAccount *)grandSlamAccount;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
@end

