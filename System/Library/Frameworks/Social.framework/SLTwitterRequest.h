/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLTimestampSkewStorageDelegate;
@class ACAccount, OACredential, NSObject, NSURL, NSMutableDictionary, NSMutableArray, NSString, NSDictionary;

@interface SLTwitterRequest : NSObject {

	ACAccount* _account;
	OACredential* _credential;
	int _callingPID;
	NSObject*<SLTimestampSkewStorageDelegate> _timestampSkewStorageDelegate;
	NSURL* _url;
	NSMutableDictionary* _parameters;
	long long _requestMethod;
	NSMutableArray* _multiParts;
	NSString* _applicationID;

}

@property (nonatomic,retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) long long requestMethod;                //@synthesize requestMethod=_requestMethod - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)responseIsTimestampOutOfBounds:(id)arg1 data:(id)arg2 JSONResponseObject:(id)arg3 ;
+(float)retryDelayForRetryCount:(int)arg1 ;
-(BOOL)requiresAuthorization;
-(id)credential;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(int)callingPID;
-(id)_allParameters;
-(id)_parameterString;
-(id)_urlEncodedString:(id)arg1 ;
-(id)multiPartBodyData;
-(void)setCallingPID:(int)arg1 ;
-(void)performJSONRequestWithHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3 ;
-(void)sharedPrivateInit;
-(double)_timestampSkew;
-(void)_setTimestampSkew:(double)arg1 ;
-(id)signedURLRequest;
-(void)calculateTimestampSkewFromResponse:(id)arg1 ;
-(id)commandName;
-(void)_performRequestExtractingJSONResponse:(BOOL)arg1 retryCount:(int)arg2 maxRetries:(int)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithCredential:(id)arg1 URL:(id)arg2 ;
-(void)setTimestampSkewStorageDelegate:(id)arg1 ;
-(id)timestampSkewStorageDelegate;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(ACAccount *)account;
-(long long)requestMethod;
-(void)setRequestMethod:(long long)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setCredential:(id)arg1 ;
-(void)setApplicationID:(id)arg1 ;
-(void)setParameter:(id)arg1 forKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(NSDictionary *)parameters;
@end

