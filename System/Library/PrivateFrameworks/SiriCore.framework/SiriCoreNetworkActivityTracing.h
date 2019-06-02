/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface SiriCoreNetworkActivityTracing : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _activities;
	NSMutableSet* _connections;

}
+(id)sharedNetworkActivityTracing;
-(void)_networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)_networkActivityActivate:(long long)arg1 ;
-(void)_networkActivityStop:(long long)arg1 ;
-(void)_networkActivityTracingCancel;
-(void)_networkActivityAddNWConnection:(id)arg1 ;
-(void)_networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)networkActivityStart:(long long)arg1 activate:(BOOL)arg2 ;
-(void)networkActivityActivate:(long long)arg1 ;
-(void)networkActivityStop:(long long)arg1 ;
-(void)networkActivityTracingCancel;
-(void)networkActivityAddNWConnection:(id)arg1 ;
-(void)networkActivityRemoveNWConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
@end

