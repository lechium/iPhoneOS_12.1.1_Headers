/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol HDXPCListenerDelegate;
@class NSXPCListener, NSMutableDictionary, NSArray, NSXPCListenerEndpoint, NSString;

@interface HDXPCListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _underlyingListener;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _exportedObjectsByClient;
	id<HDXPCListenerDelegate> _delegate;

}

@property (copy,readonly) NSArray * allClients; 
@property (assign,nonatomic,__weak) id<HDXPCListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSXPCListenerEndpoint * endpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceListener;
-(id)initWithUnderlyingListener:(id)arg1 ;
-(id)newClientWithConnection:(id)arg1 error:(id*)arg2 ;
-(NSArray *)allClients;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<HDXPCListenerDelegate>)arg1 ;
-(id<HDXPCListenerDelegate>)delegate;
-(void)invalidate;
-(void)resume;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
