/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSString, NSObject, NSMutableDictionary;

@interface VCSessionMessageTopic : NSObject {

	NSArray* associatedStrings;
	NSString* topicKey;
	BOOL allowConcurrent;
	NSObject*<OS_dispatch_queue> outMessageQueue;
	id controlChannelWeak;
	NSObject*<OS_dispatch_queue> inMessageQueue;
	/*^block*/id receiveBlock;
	long long latestOutgoingMessageIndex;
	BOOL isSendingEnabled;
	BOOL shouldEncodeTopicKeyInMessage;
	NSString* topicPrefix;
	NSMutableDictionary* transactionCache;

}

@property (assign,setter=setIsSendingEnabled:,nonatomic) BOOL isSendingEnabled; 
@property (readonly) NSString * topicKey; 
-(void)setIsSendingEnabled:(BOOL)arg1 ;
-(id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(BOOL)arg3 controlChannel:(id)arg4 receiveHandler:(/*^block*/id)arg5 ;
-(NSString *)topicKey;
-(void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 ;
-(BOOL)isStringAssociated:(id)arg1 ;
-(void)passMessage:(id)arg1 sequence:(int)arg2 fromParticipant:(id)arg3 ;
-(void)clearTransactionCacheForParticipant:(id)arg1 ;
-(void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 withSequence:(long long)arg3 numRetries:(long long)arg4 ;
-(BOOL)isSendingEnabled;
-(void)sendMessage:(id)arg1 ;
-(void)dealloc;
@end

