/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLSQueryProtocol, OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface CLSQueueBasedGeoMapQueryHelper : NSObject {

	BOOL _simulatesTimeout;
	BOOL _alreadyLaunched;
	BOOL _didFinishQuery;
	id<CLSQueryProtocol> _query;
	/*^block*/id _cancellerBlock;
	/*^block*/id _completionBlock;
	double _timeoutInterval;
	double _numberOfRetries;
	double _internalProgressTimeInterval;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	unsigned long long _retryLevel;
	double _nextRetryTime;

}

@property (nonatomic,readonly) id<CLSQueryProtocol> query;                                  //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) id cancellerBlock;                                           //@synthesize cancellerBlock=_cancellerBlock - In the implementation block
@property (nonatomic,readonly) id completionBlock;                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) double internalProgressTimeInterval;                           //@synthesize internalProgressTimeInterval=_internalProgressTimeInterval - In the implementation block
@property (assign,nonatomic) unsigned long long retryLevel;                                 //@synthesize retryLevel=_retryLevel - In the implementation block
@property (assign,nonatomic) double nextRetryTime;                                          //@synthesize nextRetryTime=_nextRetryTime - In the implementation block
@property (assign,nonatomic) BOOL alreadyLaunched;                                          //@synthesize alreadyLaunched=_alreadyLaunched - In the implementation block
@property (assign,nonatomic) BOOL didFinishQuery;                                           //@synthesize didFinishQuery=_didFinishQuery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                           //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> timerQueue;                       //@synthesize timerQueue=_timerQueue - In the implementation block
@property (assign,nonatomic) double timeoutInterval;                                        //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (assign,nonatomic) double numberOfRetries;                                        //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
@property (assign,getter=isSimulatingTimeout,nonatomic) BOOL simulatesTimeout;              //@synthesize simulatesTimeout=_simulatesTimeout - In the implementation block
-(void)setNumberOfRetries:(double)arg1 ;
-(double)numberOfRetries;
-(double)timeoutInterval;
-(void)_handleError:(id)arg1 ;
-(void)setSimulatesTimeout:(BOOL)arg1 ;
-(id)initWithQueryObject:(id)arg1 ;
-(void)launchQueryWithCancellerBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_heartBeat;
-(void)_startQuery;
-(BOOL)isSimulatingTimeout;
-(void)_handleQueryResultsForQuery:(id)arg1 error:(id)arg2 ;
-(id)cancellerBlock;
-(double)internalProgressTimeInterval;
-(void)setInternalProgressTimeInterval:(double)arg1 ;
-(void)setTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)retryLevel;
-(void)setRetryLevel:(unsigned long long)arg1 ;
-(double)nextRetryTime;
-(void)setNextRetryTime:(double)arg1 ;
-(BOOL)alreadyLaunched;
-(void)setAlreadyLaunched:(BOOL)arg1 ;
-(BOOL)didFinishQuery;
-(void)setDidFinishQuery:(BOOL)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)cancel;
-(void)_cancel;
-(id)completionBlock;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(NSObject*<OS_dispatch_queue>)timerQueue;
-(id<CLSQueryProtocol>)query;
@end

