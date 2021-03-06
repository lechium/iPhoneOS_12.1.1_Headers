/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PFLimitedConcurrencyQueueClass;

@interface PFLimitedConcurrencySlotQueue : NSObject {

	AQ _blockCount;
	NSObject*<OS_dispatch_queue> _slotQueue;
	PFLimitedConcurrencyQueueClass* _concurrentQueue;
	unsigned long long _slotIndex;

}

@property (__weak,readonly) PFLimitedConcurrencyQueueClass * concurrentQueue;              //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned long long slotIndex;                                         //@synthesize slotIndex=_slotIndex - In the implementation block
+(id)currentSlotQueue;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(PFLimitedConcurrencyQueueClass *)concurrentQueue;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithConcurrentQueue:(id)arg1 targetQueue:(id)arg2 slotIndex:(unsigned long long)arg3 ;
-(unsigned long long)incrementSlotUseCount;
-(unsigned long long)decrementSlotUseCount;
-(unsigned long long)slotUseCount;
-(unsigned long long)slotIndex;
-(const char*)label;
-(void)resume;
-(void)suspend;
@end

