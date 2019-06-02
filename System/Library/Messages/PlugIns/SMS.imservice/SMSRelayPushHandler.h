/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegatePrivate.h>

@class IDSService, IDSAccount, NSMutableArray, NSString;

@interface SMSRelayPushHandler : NSObject <IDSServiceDelegatePrivate> {

	IDSService* _relayService;
	IDSService* _smsWatchService;
	IDSAccount* _account;
	NSMutableArray* _handlers;
	BOOL _registeredForPush;
	BOOL _isListening;

}

@property (assign,nonatomic) BOOL registered; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)commandToHandlerBlock;
+(id)localCommandToHandlerBlock;
-(void)service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)replayMessage:(id)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)_service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 isBeingReplayed:(BOOL)arg6 ;
-(id)_messageReplayObjectWithService:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 ;
-(id)_messageReplayObjectWithService:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 ;
-(id)initWithIDSAccount:(id)arg1 ;
-(id)copyHandlersForEnumerating;
-(void)_updateListenerIfNeeded;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
-(void)_service:(id)arg1 account:(id)arg2 incomingTopLevelMessage:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 isBeingReplayed:(BOOL)arg6 ;
-(id)init;
-(void)dealloc;
-(void)setRegistered:(BOOL)arg1 ;
-(BOOL)registered;
@end

