/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MSVLRUDictionaryDelegate;
@class NSMutableDictionary, MSVLRUDictionaryNode;

@interface MSVLRUDictionary : NSObject <NSCopying> {

	id<MSVLRUDictionaryDelegate> _delegate;
	long long _maximumCapacity;
	NSMutableDictionary* _dictionary;
	MSVLRUDictionaryNode* _head;
	MSVLRUDictionaryNode* _tail;
	long long _transactionCount;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;                          //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) MSVLRUDictionaryNode * head;                               //@synthesize head=_head - In the implementation block
@property (nonatomic,retain) MSVLRUDictionaryNode * tail;                               //@synthesize tail=_tail - In the implementation block
@property (assign,nonatomic) long long transactionCount;                                //@synthesize transactionCount=_transactionCount - In the implementation block
@property (assign,nonatomic,__weak) id<MSVLRUDictionaryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long maximumCapacity;                                 //@synthesize maximumCapacity=_maximumCapacity - In the implementation block
@property (nonatomic,readonly) long long count; 
-(void)_shrinkToCapacity;
-(long long)maximumCapacity;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)_removeNode:(id)arg1 ;
-(void)_addNodeToFront:(id)arg1 ;
-(void)_moveNodeToFront:(id)arg1 ;
-(void)_removeNodeFromLinkedList:(id)arg1 ;
-(void)pokeKey:(id)arg1 ;
-(void)setMaximumCapacity:(long long)arg1 ;
-(id)peekObjectForKey:(id)arg1 ;
-(long long)transactionCount;
-(void)setTransactionCount:(long long)arg1 ;
-(void)endTransaction;
-(void)beginTransaction;
-(MSVLRUDictionaryNode *)head;
-(MSVLRUDictionaryNode *)tail;
-(void)setTail:(MSVLRUDictionaryNode *)arg1 ;
-(void)setHead:(MSVLRUDictionaryNode *)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)allValues;
-(BOOL)isEqual:(id)arg1 ;
-(long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)hash;
-(id)description;
-(void)setDelegate:(id<MSVLRUDictionaryDelegate>)arg1 ;
-(void)removeAllObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<MSVLRUDictionaryDelegate>)delegate;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allKeys;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
@end

