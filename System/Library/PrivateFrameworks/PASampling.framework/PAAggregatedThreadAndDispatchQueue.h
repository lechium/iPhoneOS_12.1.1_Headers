/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PAAggregatedStack.h>

@class PAAggregatedProcessInstance, NSMutableArray, PAProcessInstanceAggregator, NSString;

@interface PAAggregatedThreadAndDispatchQueue : NSObject <PAAggregatedStack> {

	PAAggregatedProcessInstance* _aggregatedTask;
	NSMutableArray* _contiguousStacks;
	int _minPriority;
	int _maxPriority;
	int _minBasePriority;
	int _maxBasePriority;
	unsigned long long _dispatchQueueId;
	unsigned long long _threadId;
	unsigned long long _cpuTimeNsCached;
	unsigned long long _cpuCyclesCached;
	unsigned long long _cpuInstructionsCached;

}

@property (__weak,readonly) PAAggregatedProcessInstance * aggregatedTask;              //@synthesize aggregatedTask=_aggregatedTask - In the implementation block
@property (__weak,readonly) PAProcessInstanceAggregator * aggregator; 
@property (readonly) unsigned long long firstTimestampIndex; 
@property (readonly) unsigned long long lastTimestampIndex; 
@property (assign) unsigned long long dispatchQueueId;                                 //@synthesize dispatchQueueId=_dispatchQueueId - In the implementation block
@property (assign) unsigned long long threadId;                                        //@synthesize threadId=_threadId - In the implementation block
@property (assign) int minPriority;                                                    //@synthesize minPriority=_minPriority - In the implementation block
@property (assign) int maxPriority;                                                    //@synthesize maxPriority=_maxPriority - In the implementation block
@property (assign) int minBasePriority;                                                //@synthesize minBasePriority=_minBasePriority - In the implementation block
@property (assign) int maxBasePriority;                                                //@synthesize maxBasePriority=_maxBasePriority - In the implementation block
@property (readonly) BOOL isMainThread; 
@property (readonly) BOOL isProcessorIdleThread; 
@property (readonly) BOOL isGlobalForcedIdleThread; 
@property (readonly) BOOL isIdleWorkQueueThread; 
@property (__weak,readonly) NSMutableArray * contiguousStacks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)lastTimestampIndex;
-(void)printHeaderToOutputStream:(id)arg1 ;
-(void)printToOutputStream:(id)arg1 ;
-(void)addSampleThread:(id)arg1 atTimestampIndex:(unsigned long long)arg2 fillGapInTimestampIndexWithPreviousThreads:(BOOL)arg3 ;
-(id)initWithAggregatedTask:(id)arg1 andThreadId:(unsigned long long)arg2 andDispatchQueueId:(unsigned long long)arg3 ;
-(void)addStack:(id)arg1 ;
-(BOOL)isIdleWorkQueueThread;
-(unsigned long long)firstTimestampIndex;
-(BOOL)isGlobalForcedIdleThread;
-(unsigned long long)cpuInstructions;
-(unsigned long long)cpuCycles;
-(BOOL)hasSingleName:(id*)arg1 ;
-(PAAggregatedProcessInstance *)aggregatedTask;
-(NSMutableArray *)contiguousStacks;
-(int)minPriority;
-(void)setMinPriority:(int)arg1 ;
-(int)maxPriority;
-(void)setMaxPriority:(int)arg1 ;
-(int)minBasePriority;
-(void)setMinBasePriority:(int)arg1 ;
-(int)maxBasePriority;
-(void)setMaxBasePriority:(int)arg1 ;
-(unsigned long long)numMissingSamplesBeforeContiguousStackIndex:(unsigned long long)arg1 ;
-(id)copyDescriptionForSampleFrame:(id)arg1 inSampleTask:(id)arg2 ;
-(void)printHeavyStacksToOutputStream:(id)arg1 onlyPrintHeaviest:(BOOL)arg2 ;
-(BOOL)isSingleStack;
-(id)copyStringForMissingSamplesBeforeContiguousStackIndex:(unsigned long long)arg1 ;
-(void)printStackToOutputStream:(id)arg1 ;
-(id)initForIdentificationPurposesWithThreadId:(unsigned long long)arg1 andDispatchQueueId:(unsigned long long)arg2 ;
-(PAProcessInstanceAggregator *)aggregator;
-(unsigned long long)threadId;
-(unsigned long long)dispatchQueueId;
-(unsigned long long)cpuTimeNs;
-(void)setThreadId:(unsigned long long)arg1 ;
-(void)setDispatchQueueId:(unsigned long long)arg1 ;
-(BOOL)isProcessorIdleThread;
-(id)sampleStore;
-(BOOL)isEqual:(id)arg1 ;
-(int)count;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(BOOL)isMainThread;
-(long long)compare:(id)arg1 ;
@end

