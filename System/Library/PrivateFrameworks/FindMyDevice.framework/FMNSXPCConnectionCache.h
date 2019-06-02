/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface FMNSXPCConnectionCache : NSObject {

	NSObject*<OS_dispatch_queue> _modsSerialQueue;
	NSMutableDictionary* _connectionsByServiceName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modsSerialQueue;                //@synthesize modsSerialQueue=_modsSerialQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * connectionsByServiceName;              //@synthesize connectionsByServiceName=_connectionsByServiceName - In the implementation block
+(id)sharedCache;
-(id)resumeConnectionWithConfiguration:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)modsSerialQueue;
-(NSMutableDictionary *)connectionsByServiceName;
-(void)setModsSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConnectionsByServiceName:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
@end
