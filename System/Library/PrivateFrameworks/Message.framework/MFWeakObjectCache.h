/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MFWeakObjectCache : NSObject {

	/*^block*/id _block;
	NSMutableDictionary* _dictionary;
	NSLock* _lock;

}
-(id)objectForKey:(id)arg1 wasCached:(BOOL*)arg2 ;
-(id)objectForKey:(id)arg1 shouldGenerate:(BOOL)arg2 wasCached:(BOOL*)arg3 ;
-(id)weakObjectCacheRefForKey:(id)arg1 ;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

