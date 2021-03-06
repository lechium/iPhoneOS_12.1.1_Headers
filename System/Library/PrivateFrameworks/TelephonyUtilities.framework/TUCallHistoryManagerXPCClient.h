/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallHistoryManagerXPCClient.h>

@protocol TUCallHistoryManagerXPCClient <NSObject>
@end

#import <libobjc.A.dylib/TUCallHistoryManagerDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface TUCallHistoryManagerXPCClient : NSObject <TUCallHistoryManagerXPCClient, TUCallHistoryManagerDataSource> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                 //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)asynchronousServer;
+(void)setAsynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(void)setSynchronousServer:(id)arg1 ;
+(id)callHistoryManagerAllowedClasses;
+(id)callHistoryManagerServerXPCInterface;
+(id)callHistoryManagerClientXPCInterface;
-(void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithOutgoingLocalParticipantUUID:(id)arg2 ;
-(NSXPCConnection *)xpcConnection;
-(void)handleServerDisconnect;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serverWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

