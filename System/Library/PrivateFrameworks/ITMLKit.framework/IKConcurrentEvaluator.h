/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface IKConcurrentEvaluator : NSObject {

	NSMutableArray* _orderedKeys;
	NSMutableDictionary* _fetchers;
	NSMutableDictionary* _getters;
	long long _activeFetchCount;
	long long _numberOfSchedulingLocksAcquired;
	NSObject*<OS_dispatch_semaphore> _schedulingLock;
	NSObject*<OS_dispatch_queue> _queue;
	long long _concurrencyCount;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) long long concurrencyCount;                      //@synthesize concurrencyCount=_concurrencyCount - In the implementation block
+(id)idleEvaluator;
-(id)initWithQueue:(id)arg1 concurrencyCount:(long long)arg2 ;
-(void)_insertFetcher:(/*^block*/id)arg1 getter:(/*^block*/id)arg2 forKey:(id)arg3 ;
-(void)_scheduleFetchRelayed:(BOOL)arg1 ;
-(/*^block*/id)_getterForKey:(id)arg1 ;
-(/*^block*/id)_removeFetcherForKey:(id)arg1 ;
-(long long)concurrencyCount;
-(void)addEvaluationBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)lockSchedulingForEvaluation:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
