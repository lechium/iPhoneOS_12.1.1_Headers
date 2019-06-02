/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCStreaming;
#import <NewsCore/NewsCore-Structs.h>
@class NSHashTable, NSMutableArray, FCAsyncSerialQueue;

@interface FCStreamingResults : NSObject {

	NSHashTable* _observers;
	id<FCStreaming> _underlyingStream;
	NSMutableArray* _results;
	FCAsyncSerialQueue* _serialQueue;

}

@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) id<FCStreaming> underlyingStream;              //@synthesize underlyingStream=_underlyingStream - In the implementation block
@property (nonatomic,readonly) NSMutableArray * results;                      //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) FCAsyncSerialQueue * serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSRange range; 
-(FCAsyncSerialQueue *)serialQueue;
-(id<FCStreaming>)underlyingStream;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithResults:(id)arg1 followedByStream:(id)arg2 ;
-(id)objectsInRange:(NSRange)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
-(void)fetchObjectsUpToCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllObjectsWithBatchSize:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithStream:(id)arg1 ;
-(id)array;
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(BOOL)isFinished;
-(NSRange)range;
-(NSMutableArray *)results;
@end

