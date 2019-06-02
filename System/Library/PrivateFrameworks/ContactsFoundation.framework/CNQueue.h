/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNQueueingStrategy;
@class NSMutableArray, NSArray;

@interface CNQueue : NSObject {

	NSMutableArray* _buffer;
	id<CNQueueingStrategy> _strategy;

}

@property (nonatomic,readonly) NSMutableArray * buffer;                      //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) id<CNQueueingStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) NSArray * allObjects; 
+(id)priorityQueueWithComparator:(/*^block*/id)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 ;
+(id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(/*^block*/id)arg2 ;
-(id)peek;
-(NSMutableArray *)buffer;
-(id)dequeue;
-(void)enqueueObjectsFromArray:(id)arg1 ;
-(void)dequeueObject:(id)arg1 ;
-(void)enqueue:(id)arg1 ;
-(id<CNQueueingStrategy>)strategy;
-(id)initWithStrategy:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(NSArray *)allObjects;
-(id)drain;
@end

