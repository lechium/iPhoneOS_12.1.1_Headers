/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSUUID;

@interface PLCloudChangeHubClient : NSObject {

	unsigned char _nodeUUID[16];
	NSObject*<OS_xpc_object> _hubConnection;
	NSUUID* _uuid;

}

@property (copy,readonly) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (getter=isConnected,readonly) BOOL connected; 
-(BOOL)isConnected;
-(id)fetchResultsSinceIndex:(unsigned long long)arg1 ;
-(id)fetchPendingEventsSinceIndex:(unsigned long long)arg1 ;
-(id)resultsFromReply:(id)arg1 sinceIndex:(unsigned long long)arg2 ;
-(id)unsuccesfulResultWithWithType:(long long)arg1 ;
-(id)successfulResultWithEvents:(id)arg1 changeHubEventIndex:(unsigned long long)arg2 ;
-(unsigned long long)fetchLastEventIndex;
-(id)init;
-(NSUUID *)uuid;
-(BOOL)connect;
-(void)disconnect;
-(id)initWithUUID:(id)arg1 ;
@end

