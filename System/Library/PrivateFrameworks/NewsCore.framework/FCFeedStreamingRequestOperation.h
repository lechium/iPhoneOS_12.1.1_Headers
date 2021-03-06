/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCContentContext, FCCoreConfiguration, OS_dispatch_queue;
@class FCFeedDatabase, NSArray, NSObject, NSMutableArray, NSMutableDictionary;

@interface FCFeedStreamingRequestOperation : FCOperation {

	BOOL _throttled;
	id<FCContentContext> _context;
	id<FCCoreConfiguration> _configuration;
	FCFeedDatabase* _feedDatabase;
	NSArray* _feedRequests;
	long long _streamingType;
	unsigned long long _cutoffAtCount;
	long long _options;
	NSArray* _feedTransformations;
	/*^block*/id _streamingResultsHandler;
	/*^block*/id _requestCompletionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableArray* _feedRangeSteps;
	NSMutableDictionary* _aggregateFeedResponsesByFeedID;
	NSMutableArray* _aggregateFeedItems;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                        //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * feedRangeSteps;                                   //@synthesize feedRangeSteps=_feedRangeSteps - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * aggregateFeedResponsesByFeedID;              //@synthesize aggregateFeedResponsesByFeedID=_aggregateFeedResponsesByFeedID - In the implementation block
@property (nonatomic,retain) NSMutableArray * aggregateFeedItems;                               //@synthesize aggregateFeedItems=_aggregateFeedItems - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<FCCoreConfiguration> configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCFeedDatabase * feedDatabase;                                     //@synthesize feedDatabase=_feedDatabase - In the implementation block
@property (nonatomic,copy) NSArray * feedRequests;                                              //@synthesize feedRequests=_feedRequests - In the implementation block
@property (assign,nonatomic) long long streamingType;                                           //@synthesize streamingType=_streamingType - In the implementation block
@property (assign,nonatomic) BOOL throttled;                                                    //@synthesize throttled=_throttled - In the implementation block
@property (assign,nonatomic) unsigned long long cutoffAtCount;                                  //@synthesize cutoffAtCount=_cutoffAtCount - In the implementation block
@property (assign,nonatomic) long long options;                                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSArray * feedTransformations;                                       //@synthesize feedTransformations=_feedTransformations - In the implementation block
@property (nonatomic,copy) id streamingResultsHandler;                                          //@synthesize streamingResultsHandler=_streamingResultsHandler - In the implementation block
@property (nonatomic,copy) id requestCompletionHandler;                                         //@synthesize requestCompletionHandler=_requestCompletionHandler - In the implementation block
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setFeedRequests:(NSArray *)arg1 ;
-(void)setFeedTransformations:(NSArray *)arg1 ;
-(void)setRequestCompletionHandler:(id)arg1 ;
-(NSArray *)feedRequests;
-(void)setFeedDatabase:(FCFeedDatabase *)arg1 ;
-(id)_feedRangeCoveredByRequests;
-(id)_feedRangeBrokenIntoSteps:(id)arg1 ;
-(void)setFeedRangeSteps:(NSMutableArray *)arg1 ;
-(void)setAggregateFeedResponsesByFeedID:(NSMutableDictionary *)arg1 ;
-(void)setAggregateFeedItems:(NSMutableArray *)arg1 ;
-(void)_startNextFetchStep;
-(id)requestCompletionHandler;
-(NSMutableDictionary *)aggregateFeedResponsesByFeedID;
-(NSMutableArray *)aggregateFeedItems;
-(NSMutableArray *)feedRangeSteps;
-(FCFeedDatabase *)feedDatabase;
-(NSArray *)feedTransformations;
-(void)_appendFeedResponses:(id)arg1 feedItems:(id)arg2 ;
-(unsigned long long)cutoffAtCount;
-(id)streamingResultsHandler;
-(BOOL)throttled;
-(long long)streamingType;
-(void)setStreamingType:(long long)arg1 ;
-(void)setThrottled:(BOOL)arg1 ;
-(void)setCutoffAtCount:(unsigned long long)arg1 ;
-(void)setStreamingResultsHandler:(id)arg1 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)context;
-(id<FCCoreConfiguration>)configuration;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
@end

