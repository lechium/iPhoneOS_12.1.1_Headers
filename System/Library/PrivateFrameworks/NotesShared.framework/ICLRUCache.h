/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICLRUCacheDelegate;
@class NSMapTable, NSMutableArray, NSArray;

@interface ICLRUCache : NSObject {

	NSMapTable* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id<ICLRUCacheDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (assign,nonatomic,__weak) id<ICLRUCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)cacheCollection;
+(void)purgeAllCaches;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)p_removeOldestObject;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)setDelegate:(id<ICLRUCacheDelegate>)arg1 ;
-(void)removeAllObjects;
-(id<ICLRUCacheDelegate>)delegate;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)allKeys;
-(unsigned long long)maxSize;
@end
