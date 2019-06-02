/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperation : NSObject {

	id _private;
	int _private1;
	int _private1b;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isConcurrent,readonly) BOOL concurrent; 
@property (getter=isAsynchronous,readonly) BOOL asynchronous; 
@property (getter=isReady,readonly) BOOL ready; 
@property (copy,readonly) NSArray * dependencies; 
@property (assign) long long queuePriority; 
@property (copy) id completionBlock; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
+(BOOL)_removesDependenciesAfterFinish;
+(id)keyPathsForValuesAffectingFinished;
+(id)keyPathsForValuesAffectingReady;
+(id)keyPathsForValuesAffectingExecuting;
+(id)keyPathsForValuesAffectingCancelled;
+(id)keyPathsForValuesAffectingIsCancelled;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)currentOperation;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)_activity;
-(void)setObservationInfo:(void*)arg1 ;
-(id)_implicitObservationInfo;
-(/*^block*/id)_copyCompletionBlock;
-(id)__graphDescription:(unsigned long long)arg1 ;
-(void)waitUntilFinishedOrTimeout:(double)arg1 ;
-(void)removeDependency:(id)arg1 ;
-(void)removeAllDependencies;
-(void)setQueuePriority:(long long)arg1 ;
-(long long)qualityOfService;
-(void)addDependency:(id)arg1 ;
-(BOOL)isReady;
-(NSArray *)dependencies;
-(BOOL)isConcurrent;
-(BOOL)isAsynchronous;
-(long long)queuePriority;
-(void)waitUntilFinished;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(id)debugDescription;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(void)setCompletionBlock:(id)arg1 ;
-(void)main;
-(BOOL)isFinished;
-(id)completionBlock;
-(BOOL)isExecuting;
-(void)setQualityOfService:(long long)arg1 ;
-(double)threadPriority;
-(void)setThreadPriority:(double)arg1 ;
-(void*)observationInfo;
@end
