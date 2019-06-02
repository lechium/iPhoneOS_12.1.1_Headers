/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AOPHaptics.framework/AOPHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AOPHaptics/AOPHaptics-Structs.h>
@class NSObject;

@interface AOPHapticsController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IONotificationPortRef _notificationPort;
	unsigned _arrivalNotification;
	/*^block*/id _cancelHandler;
	/*^block*/id _readyHandler;
	atomic_flag _activated;
	atomic_flag _cancelled;
	unsigned _service;
	unsigned _connect;

}

@property (assign,nonatomic) unsigned service;              //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;              //@synthesize connect=_connect - In the implementation block
+(int)AHtoHMOutputType:(unsigned char)arg1 ;
-(unsigned)service;
-(void)setService:(unsigned)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)_findService;
-(void)setConnect:(unsigned)arg1 ;
-(void)setReadyHandler:(/*^block*/id)arg1 ;
-(BOOL)setMappings:(id)arg1 error:(id*)arg2 ;
-(BOOL)playSlotIndices:(id)arg1 error:(id*)arg2 ;
-(void)signalReady;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)activate;
-(unsigned)connect;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
@end

