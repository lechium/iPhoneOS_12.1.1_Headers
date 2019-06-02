/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class AWDServerConnection, NSObject, AWDCompanionSyncReceiveEvent;

@interface SYMetricLogger : NSObject {

	AWDServerConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	AWDCompanionSyncReceiveEvent* _lastReceiveMetric;
	NSObject*<OS_dispatch_source> _lastReceiveMetricSource;

}
+(id)sharedInstance;
-(void)_sendLastReceiveMetric;
-(void)_bufferNewReceiptMetricForMessage:(id)arg1 service:(id)arg2 ;
-(void)postReceiptOfMessage:(id)arg1 forService:(id)arg2 ;
-(void)updateLastReceivedMessageWithProcessingTime:(double)arg1 ;
-(void)postSequenceErrorOfType:(int)arg1 sequenceNumber:(unsigned long long)arg2 forService:(id)arg3 ;
-(void)postFullSyncDuration:(double)arg1 onMaster:(BOOL)arg2 forService:(id)arg3 ;
-(void)postErrorInformation:(id)arg1 forService:(id)arg2 ;
-(id)init;
@end

