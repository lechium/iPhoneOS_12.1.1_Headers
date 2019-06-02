/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDRemoteMessageTransport.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSMutableArray, HMFOperationBudget, NSMutableDictionary, NSString;

@interface HMDIDSMessageTransport : HMDRemoteMessageTransport <IDSServiceDelegate> {

	IDSService* _service;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableArray* _messageContexts;
	HMFOperationBudget* _sendMessageBudget;
	NSMutableDictionary* _pendingResponses;
	NSMutableDictionary* _receivedResponses;
	NSMutableDictionary* _requestedCapabilities;
	NSMutableDictionary* _destinationAddress;
	NSMutableDictionary* _pendingResponseTimers;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                   //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSMutableArray * messageContexts;                                   //@synthesize messageContexts=_messageContexts - In the implementation block
@property (readonly) HMFOperationBudget * sendMessageBudget;                             //@synthesize sendMessageBudget=_sendMessageBudget - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingResponses;                   //@synthesize pendingResponses=_pendingResponses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * receivedResponses;                  //@synthesize receivedResponses=_receivedResponses - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * requestedCapabilities;              //@synthesize requestedCapabilities=_requestedCapabilities - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * destinationAddress;                 //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingResponseTimers;              //@synthesize pendingResponseTimers=_pendingResponseTimers - In the implementation block
@property (nonatomic,readonly) int awdTransportType; 
@property (nonatomic,readonly) IDSService * service;                                     //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)restriction;
+(unsigned long long)sendMessageLimit;
+(HMFRate)sendMessageRate;
+(long long)priorityForMessage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(IDSService *)service;
-(long long)qualityOfService;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(NSMutableDictionary *)pendingResponses;
-(void)sendMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithAccountRegistry:(id)arg1 ;
-(BOOL)canSendMessage:(id)arg1 ;
-(id)deviceForSenderContext:(id)arg1 ;
-(int)awdTransportType;
-(id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 error:(id*)arg7 ;
-(NSMutableDictionary *)requestedCapabilities;
-(NSMutableDictionary *)destinationAddress;
-(void)_startPendingResponseTimer:(id)arg1 responseTimeout:(double)arg2 identifier:(id)arg3 ;
-(NSMutableArray *)messageContexts;
-(HMFOperationBudget *)sendMessageBudget;
-(NSMutableDictionary *)pendingResponseTimers;
-(NSMutableDictionary *)receivedResponses;
-(void)_removePendingResponseTransaction:(id)arg1 ;
-(void)_pendingResponseTimeoutFor:(id)arg1 ;
-(void)_removePendingResponseTimerForTransaction:(id)arg1 ;
-(void)_restartPendingResponseTimerFor:(id)arg1 withReducedFactor:(unsigned long long)arg2 ;
-(void)start;
@end

