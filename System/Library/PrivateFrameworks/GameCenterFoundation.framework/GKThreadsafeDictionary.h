/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GKThreadsafeDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(void)writeToDictionary:(/*^block*/id)arg1 ;
-(void)readFromDictionary:(/*^block*/id)arg1 ;
-(id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(/*^block*/id)arg2 ;
-(id)objectForKey:(id)arg1 objectProducerBlock:(/*^block*/id)arg2 ;
-(id)dictionaryCopy;
-(NSMutableDictionary *)dictionary;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)allObjects;
-(id)description;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allKeys;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithName:(id)arg1 ;
@end
