/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _DECConcurrentLIFOQueue : NSObject {

	NSObject*<OS_dispatch_semaphore> _concurrencySemaphore;
	NSObject*<OS_dispatch_queue> _queueMutationQueue;
	NSObject*<OS_dispatch_queue> _concurrencyLimitMutationQueue;
	unsigned long long _concurrentDispatchLimit;
	NSMutableArray* _queue;

}

@property (nonatomic,retain) NSMutableArray * queue;                                  //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long concurrentDispatchLimit;              //@synthesize concurrentDispatchLimit=_concurrentDispatchLimit - In the implementation block
-(id)initWithConcurrentDispatchLimit:(unsigned long long)arg1 ;
-(void)_consumeBlock;
-(void)enqueueBlocksFromArray:(id)arg1 ;
-(void)setConcurrentDispatchLimit:(unsigned long long)arg1 ;
-(unsigned long long)concurrentDispatchLimit;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSMutableArray *)queue;
-(void)setQueue:(NSMutableArray *)arg1 ;
@end

