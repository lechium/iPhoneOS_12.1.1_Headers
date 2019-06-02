/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
@class MFWeakObjectCache;

@interface _MFWeakObjectCacheRef : NSObject {

	id<NSCopying> _key;
	MFWeakObjectCache* _cache;

}

@property (nonatomic,copy) id<NSCopying> key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MFWeakObjectCache * cache;              //@synthesize cache=_cache - In the implementation block
-(void)dealloc;
-(id<NSCopying>)key;
-(void)setKey:(id<NSCopying>)arg1 ;
-(void)setCache:(MFWeakObjectCache *)arg1 ;
-(MFWeakObjectCache *)cache;
@end

