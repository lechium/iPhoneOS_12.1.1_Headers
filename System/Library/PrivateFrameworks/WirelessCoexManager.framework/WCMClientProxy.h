/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WCMClientCallback, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface WCMClientProxy : NSObject {

	int mProcessId;
	id<WCMClientCallback> mDelegate;
	NSObject*<OS_dispatch_queue> mQueue;
	BOOL mIsRegistered;
	NSObject*<OS_xpc_object> mConnection;

}
-(void)reConnect;
-(void)registerToServer;
-(id)initWithClientProcessId:(int)arg1 delegate:(id)arg2 dispatch:(id)arg3 ;
-(void)sendMessage:(int)arg1 argument:(id)arg2 ;
-(BOOL)connectToServer;
-(id)init;
-(void)dealloc;
@end
