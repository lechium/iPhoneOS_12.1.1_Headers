/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, NSXPCConnection, NSDictionary, NSString, SSURLConnectionResponse, NSURL;

@interface WLKNetworkRequestOperation : NSOperation {

	NSError* _error;
	id _response;
	unsigned long long _numRetries;
	NSXPCConnection* _connection;
	BOOL _allowAuthentication;
	BOOL _requiresMescal;
	BOOL _encodeQueryParams;
	BOOL _runsInDaemon;
	NSDictionary* _additionalHeaderFields;
	NSString* _serverRouteKey;
	NSDictionary* _serverRouteReplacements;
	NSDictionary* _queryParameters;
	double _timeout;
	NSString* _identifier;
	/*^block*/id _requestCompletionBlock;
	NSString* _endpoint;
	NSString* _httpMethod;
	SSURLConnectionResponse* _fullResponse;
	NSString* _callerOverride;
	NSURL* _baseURL;

}

@property (nonatomic,copy,readonly) SSURLConnectionResponse * fullResponse;              //@synthesize fullResponse=_fullResponse - In the implementation block
@property (nonatomic,retain) NSString * callerOverride;                                  //@synthesize callerOverride=_callerOverride - In the implementation block
@property (assign,nonatomic) BOOL runsInDaemon;                                          //@synthesize runsInDaemon=_runsInDaemon - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                                              //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * defaultBaseURL; 
@property (assign,nonatomic) BOOL allowAuthentication;                                   //@synthesize allowAuthentication=_allowAuthentication - In the implementation block
@property (assign,nonatomic) BOOL requiresMescal;                                        //@synthesize requiresMescal=_requiresMescal - In the implementation block
@property (assign,nonatomic) BOOL encodeQueryParams;                                     //@synthesize encodeQueryParams=_encodeQueryParams - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalHeaderFields;                        //@synthesize additionalHeaderFields=_additionalHeaderFields - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverRouteKey;                           //@synthesize serverRouteKey=_serverRouteKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serverRouteReplacements;              //@synthesize serverRouteReplacements=_serverRouteReplacements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queryParameters;                      //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,readonly) double timeout;                                           //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id requestCompletionBlock;                                    //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (nonatomic,readonly) id response;                                              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSString * endpoint;                                 //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * httpMethod;                               //@synthesize httpMethod=_httpMethod - In the implementation block
+(id)_defaultBaseURL;
+(id)_runSSVNetworkOperationWithProperties:(id)arg1 requiresMescal:(BOOL)arg2 outError:(id*)arg3 ;
+(void)logNetworkHeaders:(id)arg1 identifier:(id)arg2 ;
+(unsigned long long)preferredCachePolicy;
+(void)_networkRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)requestCompletionBlock;
-(double)timeout;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSDictionary *)queryParameters;
-(void)didFinish;
-(NSString *)httpMethod;
-(id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 queryParameters:(id)arg3 ;
-(id)responseProcessor;
-(id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 ;
-(BOOL)allowAuthentication;
-(BOOL)requiresMescal;
-(void)setRunsInDaemon:(BOOL)arg1 ;
-(id)initWithServerRouteKey:(id)arg1 ;
-(void)setRequiresMescal:(BOOL)arg1 ;
-(id)_requestPropertiesWithServerRouteKey:(id)arg1 queryParameters:(id)arg2 additionalHeaderFields:(id)arg3 ;
-(id)_runNetworkOperationAndReturnError:(id*)arg1 ;
-(id)initWithEndpoint:(id)arg1 queryParameters:(id)arg2 ;
-(void)_didFinishWithResponse:(id)arg1 ;
-(void)didFail;
-(NSURL *)defaultBaseURL;
-(id)_requestPropertiesWithAPIEndpoint:(id)arg1 baseURL:(id)arg2 queryParameters:(id)arg3 httpMethod:(id)arg4 additionalHeaderFields:(id)arg5 ;
-(id)initWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 ;
-(BOOL)encodeQueryParams;
-(NSDictionary *)additionalHeaderFields;
-(NSString *)serverRouteKey;
-(NSDictionary *)serverRouteReplacements;
-(NSString *)callerOverride;
-(BOOL)runsInDaemon;
-(void)_didFailWithError:(id)arg1 ;
-(id)_connection;
-(id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 queryParameters:(id)arg3 timeout:(double)arg4 ;
-(id)initWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 timeout:(double)arg4 ;
-(void)setAdditionalHeaderFields:(NSDictionary *)arg1 ;
-(void)setCallerOverride:(NSString *)arg1 ;
-(void)setAllowAuthentication:(BOOL)arg1 ;
-(void)setEncodeQueryParams:(BOOL)arg1 ;
-(SSURLConnectionResponse *)fullResponse;
-(id)init;
-(NSString *)identifier;
-(void)main;
-(id)response;
-(NSURL *)baseURL;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(NSError *)error;
-(NSString *)endpoint;
@end

