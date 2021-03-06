/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BYDaemonCloudSyncProtocol.h>
#import <libobjc.A.dylib/BYClientDaemonCloudSyncProtocol.h>

@protocol BYClientDaemonCloudSyncProtocol;
@class NSXPCConnection, NSString;

@interface BYBuddyDaemonCloudSyncClient : NSObject <BYDaemonCloudSyncProtocol, BYClientDaemonCloudSyncProtocol> {

	id<BYClientDaemonCloudSyncProtocol> _delegate;
	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (__weak) id<BYClientDaemonCloudSyncProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
-(void)connectToDaemon;
-(void)startSync;
-(void)needsToSync:(/*^block*/id)arg1 ;
-(void)syncProgress:(double)arg1 ;
-(void)syncCompletedWithErrors:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<BYClientDaemonCloudSyncProtocol>)arg1 ;
-(id<BYClientDaemonCloudSyncProtocol>)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

