/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _SFSecurityManager : NSObject {

	NSString* _provider;
	NSString* _securityTypeDescription;

}

@property (nonatomic,readonly) NSString * provider;                             //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSString * securityTypeDescription;              //@synthesize securityTypeDescription=_securityTypeDescription - In the implementation block
-(id)initWithProvider:(id)arg1 securityTypeDescription:(id)arg2 ;
-(NSString *)securityTypeDescription;
-(NSString *)provider;
@end

