/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MessageGroupController : NSObject
+(id)chatForGroupMessagePayload:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 ;
+(id)newGroupMessagePayloadForChat:(id)arg1 fromID:(id)arg2 ;
+(id)sharedInstance;
-(id)findChatWithMessageData:(id)arg1 account:(id)arg2 session:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 timestamp:(id)arg6 ;
-(void)receiveMessageData:(id)arg1 account:(id)arg2 session:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 incomingEngroup:(id)arg6 service:(id)arg7 timestamp:(id)arg8 fromStorage:(BOOL)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)handler:(id)arg1 account:(id)arg2 groupMessagePayload:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 idsService:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 storageContext:(id)arg9 ;
-(void)engroupForChat:(id)arg1 service:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)addParticipants:(id)arg1 toChat:(id)arg2 fromID:(id)arg3 fromAccount:(id)arg4 session:(id)arg5 service:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)removeParticipants:(id)arg1 toChat:(id)arg2 fromID:(id)arg3 fromAccount:(id)arg4 session:(id)arg5 service:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)leaveChat:(id)arg1 fromID:(id)arg2 fromAccount:(id)arg3 session:(id)arg4 service:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)sendMessage:(id)arg1 toChat:(id)arg2 fromID:(id)arg3 fromAccount:(id)arg4 session:(id)arg5 service:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)setName:(id)arg1 fromName:(id)arg2 forChat:(id)arg3 fromID:(id)arg4 fromAccount:(id)arg5 session:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)IDSServerBagiMessageSharedInstance;
-(id)lockDownManager;
-(id)engramControllerSharedInstance;
-(BOOL)_serverAllowsMessageSend;
-(long long)currentMessageSendServerVersion;
-(BOOL)_canSendMessagesWithEngram;
-(void)receiveGroupUpdate:(id)arg1 chat:(id)arg2 service:(id)arg3 ;
-(BOOL)_checkForParticipantLeaveOnENGroup:(id)arg1 groupMessagePayload:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 service:(id)arg5 ;
-(void)_checkAndPerformLegacyAddRemove:(id)arg1 participantsToAdd:(id)arg2 participantsToRemove:(id)arg3 service:(id)arg4 fromIdentifier:(id)arg5 ;
-(void)receiveMessageData:(id)arg1 session:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 timestamp:(id)arg5 fromStorage:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)init;
-(void)dealloc;
@end

