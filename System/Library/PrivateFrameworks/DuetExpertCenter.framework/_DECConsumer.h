/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _DECResult, NSXPCConnection, NSObject, PETScalarEventTracker;

@interface _DECConsumer : NSObject {

	/*^block*/id _handler;
	_DECResult* _cachedResult;
	AQ _category;
	AQ _consumerType;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _startedMonitoring;
	unsigned long long _limit;
	AQ _timeout;
	PETScalarEventTracker* _consumerInitTracker;

}

@property (assign) unsigned long long category; 
@property (assign) unsigned long long consumerType; 
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 ;
-(id)initWithCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 queue:(id)arg3 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(BOOL)arg2 criteria:(id)arg3 timeout:(unsigned long long)arg4 handler:(/*^block*/id)arg5 ;
-(void)decDeviceIdWithReply:(/*^block*/id)arg1 ;
-(void)setConsumerType:(unsigned long long)arg1 ;
-(void)handleDaemonStart;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 providesFeedback:(BOOL)arg2 criteria:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)fetchPredictionsWithLimit:(unsigned long long)arg1 criteria:(id)arg2 timeout:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)startMonitoringForPredictionsWithLimit:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopMonitoringForPredictions;
-(void)provideAppPredictionFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned long long)arg2 atxResponse:(id)arg3 engagementType:(unsigned long long)arg4 engagedBundleId:(id)arg5 bundleIdsShown:(id)arg6 ;
-(void)receivePrediction:(id)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(unsigned long long)consumerType;
-(void)_setupConnection;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
@end

