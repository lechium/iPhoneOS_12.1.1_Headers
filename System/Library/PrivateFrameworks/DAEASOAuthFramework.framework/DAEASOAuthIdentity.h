/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DAEASOAuthIdentity : NSObject {

	NSString* _username;
	NSString* _displayName;
	NSString* _token;
	NSString* _refreshToken;
	NSString* _tokenRequestURI;

}

@property (nonatomic,copy) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * token;                        //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                 //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy) NSString * tokenRequestURI;              //@synthesize tokenRequestURI=_tokenRequestURI - In the implementation block
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setTokenRequestURI:(NSString *)arg1 ;
-(NSString *)tokenRequestURI;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSString *)username;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end

