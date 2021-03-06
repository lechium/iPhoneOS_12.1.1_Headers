/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSBaseXPCServer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface BSActionListener : BSBaseXPCServer {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _queue_portToContextMap;

}
-(void)_queue_cleanupContext:(SCD_Struct_BS8*)arg1 withResponse:(id)arg2 ;
-(id)listenForResponseWithHandler:(/*^block*/id)arg1 timeout:(unsigned long long)arg2 ;
-(void)clearListenerForToken:(id)arg1 ;
-(void)queue_handleMessage:(id)arg1 client:(id)arg2 ;
-(id)initWithServiceName:(id)arg1 onQueue:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

