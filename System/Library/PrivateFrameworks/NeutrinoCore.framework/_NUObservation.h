/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _NUObservation : NSObject {

	id _observer;
	long long _key;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}

@property (nonatomic,__weak,readonly) id observer;                              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) long long key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id block;                                        //@synthesize block=_block - In the implementation block
-(id)initWithObserver:(id)arg1 key:(long long)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)init;
-(id)observer;
-(long long)key;
-(id)block;
-(NSObject*<OS_dispatch_queue>)queue;
@end

