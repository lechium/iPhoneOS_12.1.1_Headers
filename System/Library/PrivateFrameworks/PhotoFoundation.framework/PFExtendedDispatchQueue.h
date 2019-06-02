/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDispatchQueue.h>
#import <libobjc.A.dylib/PFDispatchQueueRunBlock.h>

@class PFDispatchQueue, PFSerialQueue, PFDispatchQueueExtensionManager;

@interface PFExtendedDispatchQueue : PFDispatchQueue <PFDispatchQueueRunBlock> {

	PFDispatchQueue* _queue;
	PFSerialQueue* _requestSerializer;
	PFDispatchQueueExtensionManager* _extensionManager;
	unsigned long long _suspendCount;

}
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)assertOnQueue;
-(unsigned)qualityOfService;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2 ;
-(void)setTargetQueue:(id)arg1 ;
-(void)runBlock:(/*^block*/id)arg1 ;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(BOOL)assertNotOnQueue;
-(void)dispatchAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)removeAllQueuedBlocks;
-(void)removeAllQueuedBlocksAndWait;
-(void)enableExtension:(id)arg1 ;
-(void)dispatchBarrierSync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)disableExtension:(id)arg1 ;
-(id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)extensionMatching:(/*^block*/id)arg1 ;
-(void)_invoke:(/*^block*/id)arg1 extensionDataArray:(id)arg2 ;
-(void)_performAsyncNotify:(id)arg1 enqueueBlock:(/*^block*/id)arg2 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)setSpecific:(void*)arg1 forKey:(void*)arg2 ;
-(void*)getSpecific:(void*)arg1 ;
-(id)_dispatchQueueForSetTargetQueue;
-(BOOL)assertQueueBarrier;
-(void)dispatchAfterDelay:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellable:(/*^block*/id)arg1 ;
-(id)dispatchCancellableAfterInterval:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)dispatchCancellableGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(id)_extensionsForTargetingQueue;
-(void)addExtensions:(id)arg1 ;
-(id)wrappedQueue;
-(id)_extensionManager;
-(void)suspendRequests;
-(void)resumeRequests;
-(BOOL)onQueue;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(const char*)label;
-(void)resume;
-(id)initWithQueue:(id)arg1 ;
-(void)suspend;
@end
