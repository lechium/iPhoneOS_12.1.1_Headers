/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NWRemoteConnectionActorDelegate;
@class NSObject, NSMutableDictionary;

@interface NWRemoteConnectionActor : NSObject {

	NSObject*<NWRemoteConnectionActorDelegate> _delegate;
	NSMutableDictionary* _connections;
	NSMutableDictionary* _browsers;

}

@property (__weak) NSObject*<NWRemoteConnectionActorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableDictionary * connections;                                //@synthesize connections=_connections - In the implementation block
@property (retain) NSMutableDictionary * browsers;                                   //@synthesize browsers=_browsers - In the implementation block
-(NSMutableDictionary *)connections;
-(void)setConnections:(NSMutableDictionary *)arg1 ;
-(void)updatePathForConnection:(id)arg1 ;
-(void)sendData:(id)arg1 forConnection:(id)arg2 ;
-(void)updateEndpointsForBrowser:(id)arg1 ;
-(void)scheduleReadsOnConnection:(id)arg1 ;
-(BOOL)receiveRemoteCommand:(id)arg1 ;
-(NSMutableDictionary *)browsers;
-(void)setBrowsers:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(NSObject*<NWRemoteConnectionActorDelegate>)arg1 ;
-(NSObject*<NWRemoteConnectionActorDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
@end

