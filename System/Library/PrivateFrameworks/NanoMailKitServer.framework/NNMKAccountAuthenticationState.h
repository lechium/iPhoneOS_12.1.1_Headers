/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NNMKAccountAuthenticationState : NSObject {

	NSString* _accountId;
	unsigned long long _state;

}

@property (nonatomic,copy) NSString * accountId;                    //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)accountId;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end

