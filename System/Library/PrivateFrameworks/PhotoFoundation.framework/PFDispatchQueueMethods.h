/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFDispatchQueueMethods
@required
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(BOOL)assertOnQueue;
-(unsigned)qualityOfService;
-(void)dispatchAsync:(/*^block*/id)arg1;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2;
-(void)dispatchSync:(/*^block*/id)arg1;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2;
-(void)dispatchAsyncWithCurrentQOS:(/*^block*/id)arg1;
-(BOOL)assertNotOnQueue;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2;
-(void)dispatchBarrierSync:(/*^block*/id)arg1;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(id)extensionMatching:(/*^block*/id)arg1;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2;
-(void*)getSpecific:(void*)arg1;
-(BOOL)assertQueueBarrier;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2;
-(id)dispatchCancellable:(/*^block*/id)arg1;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2;
-(void)dispatchBarrierAsyncWithCurrentQOS:(/*^block*/id)arg1;
-(const char*)label;
-(void)resume;
-(void)suspend;

@end

