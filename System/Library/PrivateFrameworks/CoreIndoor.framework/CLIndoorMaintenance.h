/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIndoor/CLIndoorXPCProvider.h>
#import <libobjc.A.dylib/CLIndoorXPCProviderImplementation.h>

@class NSString;

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)endpointName;
-(void)shutdown;
-(void)retrieveLocationRelevancyDurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)numFloors:(/*^block*/id)arg1 ;
-(void)doSynchronousXPC:(/*^block*/id)arg1 description:(const char*)arg2 waitForever:(BOOL)arg3 ;
-(void)onQueuePrefetch:(id)arg1 callback:(/*^block*/id)arg2 when:(unsigned char)arg3 ;
-(void)prefetchSynchronous:(id)arg1 ;
-(void)eraseEverything;
-(void)onQueueEraseEverything:(/*^block*/id)arg1 ;
-(void)onQueueShutdown;
-(void)onQueueNumFloors:(/*^block*/id)arg1 ;
-(id)remoteObjectProtocol;
-(void)withinQueueInvalidateState;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1 ;
-(id)withinQueuePermanentShutdownReason;
-(BOOL)withinQueueCanReinitializeRemoteState;
-(void)withinQueueReinitializeRemoteState;
-(void)prefetch:(id)arg1 ;
@end

