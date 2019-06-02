/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, PFCachePolicy, PFCacheStatistics;

@interface PFCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _contents;
	PFCachePolicy* _policy;
	PFCacheStatistics* _statistics;
	/*^block*/id _willBeRemovedFromCacheHandler;

}

@property (copy) id willBeRemovedFromCacheHandler;              //@synthesize willBeRemovedFromCacheHandler=_willBeRemovedFromCacheHandler - In the implementation block
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(id)statistics;
-(id)willBeRemovedFromCacheHandler;
-(void)_removeObjectForKey:(id)arg1 notify:(BOOL)arg2 ;
-(void)_setEntry:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectForKeyWithoutNotification:(id)arg1 ;
-(id)setObject:(id)arg1 forKeyIfNotPresent:(id)arg2 ;
-(void)enumerateCacheEntriesUsingBlock:(/*^block*/id)arg1 ;
-(void)setWillBeRemovedFromCacheHandler:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)description;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithPolicy:(id)arg1 ;
@end
