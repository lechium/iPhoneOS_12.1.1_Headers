/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCReply : NSObject {

	NSObject*<OS_xpc_object> _reply;
	int _sent;

}
+(id)messageWithReply:(id)arg1 ;
+(id)replyForMessage:(id)arg1 ;
-(id)_initWithReply:(id)arg1 ;
-(id)initForMessage:(id)arg1 ;
-(long long)messageKind;
-(void)sendReply:(/*^block*/id)arg1 ;
-(id)initWithReply:(id)arg1 ;
-(id)message;
@end
