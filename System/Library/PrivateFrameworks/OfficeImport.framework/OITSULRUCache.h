/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUNoCopyDictionary, NSMutableArray, NSArray;

@interface OITSULRUCache : NSObject {

	OITSUNoCopyDictionary* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id mCallbackTarget;
	SEL mCallback;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allValues; 
@property (nonatomic,readonly) NSArray * allKeys; 
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)p_removeOldestObject;
-(void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)clearEvictionCallbackTarget;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allValues;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)description;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(NSArray *)allKeys;
-(unsigned long long)maxSize;
@end
