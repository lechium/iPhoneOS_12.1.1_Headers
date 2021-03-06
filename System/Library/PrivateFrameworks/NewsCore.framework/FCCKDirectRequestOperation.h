/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class NSArray, NSString, NSDictionary, FCEdgeCacheHint, FCNetworkEvent, NSMutableArray, NSMutableDictionary, NSError;

@interface FCCKDirectRequestOperation : FCOperation {

	BOOL _production;
	BOOL _operationFailsOnRequestFailure;
	NSArray* _requests;
	NSString* _containerName;
	long long _requestType;
	long long _networkEventType;
	double _timeoutIntervalForRequest;
	NSDictionary* _additionalRequestHTTPHeaders;
	FCEdgeCacheHint* _edgeCacheHint;
	/*^block*/id _criticalNodeFailureTest;
	/*^block*/id _requestCompletionHandler;
	NSString* _requestUUID;
	FCNetworkEvent* _networkEvent;
	NSMutableArray* _resultResponses;
	NSMutableDictionary* _resultErrorsByRequestID;
	NSError* _resultError;

}

@property (nonatomic,copy) NSString * requestUUID;                                       //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,retain) FCNetworkEvent * networkEvent;                              //@synthesize networkEvent=_networkEvent - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultResponses;                           //@synthesize resultResponses=_resultResponses - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultErrorsByRequestID;              //@synthesize resultErrorsByRequestID=_resultErrorsByRequestID - In the implementation block
@property (nonatomic,retain) NSError * resultError;                                      //@synthesize resultError=_resultError - In the implementation block
@property (nonatomic,copy) NSArray * requests;                                           //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) NSString * containerName;                                     //@synthesize containerName=_containerName - In the implementation block
@property (assign,nonatomic) BOOL production;                                            //@synthesize production=_production - In the implementation block
@property (assign,nonatomic) BOOL operationFailsOnRequestFailure;                        //@synthesize operationFailsOnRequestFailure=_operationFailsOnRequestFailure - In the implementation block
@property (assign,nonatomic) long long requestType;                                      //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) long long networkEventType;                                 //@synthesize networkEventType=_networkEventType - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                           //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                  //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                              //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (nonatomic,copy) id criticalNodeFailureTest;                                   //@synthesize criticalNodeFailureTest=_criticalNodeFailureTest - In the implementation block
@property (nonatomic,copy) id requestCompletionHandler;                                  //@synthesize requestCompletionHandler=_requestCompletionHandler - In the implementation block
+(id)_headersImpactingEdgeCache;
+(BOOL)_enableDebugLogLevel;
+(id)URLSession;
-(long long)requestType;
-(void)setRequestType:(long long)arg1 ;
-(void)setNetworkEvent:(FCNetworkEvent *)arg1 ;
-(FCNetworkEvent *)networkEvent;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setResultError:(NSError *)arg1 ;
-(NSError *)resultError;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(void)setRequestCompletionHandler:(id)arg1 ;
-(NSString *)requestUUID;
-(void)setRequestUUID:(NSString *)arg1 ;
-(void)setNetworkEventType:(long long)arg1 ;
-(void)prepareOperation;
-(id)requestCompletionHandler;
-(void)setContainerName:(NSString *)arg1 ;
-(FCEdgeCacheHint *)edgeCacheHint;
-(NSString *)containerName;
-(long long)networkEventType;
-(id)generateHTTPRequest;
-(void)_processResponseData:(id)arg1 ;
-(id)_errorFromHTTPResponse:(id)arg1 ;
-(NSMutableArray *)resultResponses;
-(NSMutableDictionary *)resultErrorsByRequestID;
-(id)_errorFromOperationResultError:(id)arg1 ;
-(id)criticalNodeFailureTest;
-(void)setResultResponses:(NSMutableArray *)arg1 ;
-(void)setResultErrorsByRequestID:(NSMutableDictionary *)arg1 ;
-(double)timeoutIntervalForRequest;
-(id)_requestHeadersWithBaseURL:(id)arg1 ;
-(id)_requestBodyData;
-(id)_bundleIDToReport;
-(BOOL)production;
-(id)_mmeClientInfo;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(BOOL)operationFailsOnRequestFailure;
-(void)setProduction:(BOOL)arg1 ;
-(void)setOperationFailsOnRequestFailure:(BOOL)arg1 ;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setCriticalNodeFailureTest:(id)arg1 ;
-(id)init;
@end

