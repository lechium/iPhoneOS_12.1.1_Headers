/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class ATConnection, NSObject, NSMutableSet, NSString;

@interface VUIAirTrafficController : NSObject <ATConnectionDelegate> {

	ATConnection* _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableSet* _observers;

}

@property (nonatomic,retain) ATConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultController;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)removeAllObservers;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(void)addObserver:(id)arg1 ;
-(ATConnection *)connection;
-(void)setConnection:(ATConnection *)arg1 ;
-(void)_onConnectionQueue_startObservingIfIdle;
-(void)_onConnectionQueue_stopObservingIfIdle;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
@end

