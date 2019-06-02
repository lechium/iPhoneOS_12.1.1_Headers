/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSDate, NSError;

@interface SLGoogleOAuth2TokenResponse : NSObject {

	long long _statusCode;
	NSDictionary* _data;
	NSString* _token;
	NSString* _refreshToken;
	NSDate* _expiryDate;
	NSError* _error;
	NSString* _errorMessage;

}

@property (readonly) long long statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSDictionary * data;                  //@synthesize data=_data - In the implementation block
@property (readonly) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (readonly) NSString * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) NSDate * expiryDate;                  //@synthesize expiryDate=_expiryDate - In the implementation block
@property (readonly) NSError * error;                      //@synthesize error=_error - In the implementation block
@property (readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSDate *)expiryDate;
-(NSString *)errorMessage;
-(NSString *)refreshToken;
-(NSDictionary *)data;
-(NSError *)error;
-(long long)statusCode;
-(NSString *)token;
@end

