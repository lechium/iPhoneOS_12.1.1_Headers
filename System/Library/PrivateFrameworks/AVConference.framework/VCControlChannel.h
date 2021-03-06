/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface VCControlChannel : VCObject {

	id _messageReceivedDelegate;
	int _bytesSent;
	int _lastProcessedBytesSent;
	int _bytesSentToReport;
	int _maxSentRate;
	int _minSentRate;
	int _bytesReceived;
	int _lastProcessedBytesReceived;
	int _bytesReceivedToReport;
	int _maxReceivedRate;
	int _minReceivedRate;
	double _lastUpdateTimestamp;
	NSObject*<OS_dispatch_queue> _asyncProcessingQueue;

}

@property (assign,nonatomic) id messageReceivedDelegate;              //@synthesize messageReceivedDelegate=_messageReceivedDelegate - In the implementation block
-(id)messageReceivedDelegate;
-(BOOL)sendReliableMessageAndWait:(id)arg1 ;
-(void)sendReliableMessage:(id)arg1 ;
-(void)flushActiveMessages;
-(BOOL)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(void)broadcastUnreliableMessage:(id)arg1 ;
-(void)setMessageReceivedDelegate:(id)arg1 ;
-(void)throwNotSupportedExceptionForMethod:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

