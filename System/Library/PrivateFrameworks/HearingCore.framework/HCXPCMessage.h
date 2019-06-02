/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class HCXPCClient, NSObject, NSDictionary, NSError;

@interface HCXPCMessage : NSObject {

	HCXPCClient* _client;
	NSObject*<OS_xpc_object> _xpcMessage;
	NSDictionary* _payload;
	NSError* _error;

}

@property (assign,nonatomic,__weak) HCXPCClient * client;                      //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(id)messageWithPayload:(id)arg1 ;
+(id)messageWithPayload:(id)arg1 xpcMessage:(id)arg2 andClient:(id)arg3 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(id)replyMessageWithPayload:(id)arg1 ;
-(HCXPCClient *)client;
-(void)setClient:(HCXPCClient *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)payload;
-(id)initWithPayload:(id)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
