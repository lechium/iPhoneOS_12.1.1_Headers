/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString, SSXPCServer;

@interface SSDistributedNotificationCenter : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _observers;
	NSString* _portName;
	SSXPCServer* _server;

}

@property (readonly) NSString * namedPort; 
-(id)initWithNamedPort:(id)arg1 ;
-(void)_distributedNotificationMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendRegistrationMessage:(long long)arg1 name:(id)arg2 ;
-(id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSString *)namedPort;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
@end

