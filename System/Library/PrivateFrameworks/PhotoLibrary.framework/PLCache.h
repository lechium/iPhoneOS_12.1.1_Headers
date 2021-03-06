/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSMutableDictionary;

@interface PLCache : NSObject {

	NSMutableDictionary* _cacheEntries;
	long long _countLimit;
	long long _currentCount;
	long long _totalCostLimit;
	long long _currentCost;
	opaque_pthread_mutex_t _lock;
	entryList* _lru;

}
-(id)initWithCountLimit:(long long)arg1 totalCostLimit:(long long)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(long long)arg3 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
@end

