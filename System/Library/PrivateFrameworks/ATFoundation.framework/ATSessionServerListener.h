/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <ATFoundation/ATSessionServer.h>

@class NSXPCListener, NSMutableDictionary, NSString;

@interface ATSessionServerListener : NSObject <NSXPCListenerDelegate, ATSessionServer> {

	NSXPCListener* _listener;
	NSMutableDictionary* _sessionProxiesBySessionID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSessionServer;
-(void)addSession:(id)arg1 ;
-(void)removeSession:(id)arg1 ;
-(void)fetchSessionsWithTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelSessionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchActiveSessionCountForSessionTypeIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dumpDebugInformation;
-(id)init;
-(void)stop;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

