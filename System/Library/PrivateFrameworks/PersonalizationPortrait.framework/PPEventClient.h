/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPEventClient : NSObject {

	PPXPCClientHelper* _clientHelper;
	PPXPCClientPipelinedBatchQueryManager* _queryManager;

}
+(id)sharedInstance;
-(void)_unblockPendingQueries;
-(BOOL)eventNameRecordsForClient:(id)arg1 error:(id*)arg2 handleBatch:(/*^block*/id)arg3 ;
-(BOOL)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id*)arg3 handleBatch:(/*^block*/id)arg4 ;
-(BOOL)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id*)arg4 handleBatch:(/*^block*/id)arg5 ;
-(BOOL)interactionSummaryMetricsWithError:(id*)arg1 handleBatch:(/*^block*/id)arg2 ;
-(BOOL)sendRTCLogsWithError:(id*)arg1 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(id)_remoteObjectProxy;
-(void)interactionSummaryMetricsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)eventHighlightsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)eventNameRecordChangesBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)eventNameRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
@end
