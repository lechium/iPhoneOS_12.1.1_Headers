/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSPromiseCompletionBlocks, AMSPromiseResult, NSConditionLock;

@interface AMSPromise : NSObject {

	AMSPromiseCompletionBlocks* _completionBlocks;
	AMSPromiseResult* _promiseResult;
	NSConditionLock* _stateLock;

}

@property (nonatomic,retain) AMSPromiseCompletionBlocks * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) AMSPromiseResult * promiseResult;                           //@synthesize promiseResult=_promiseResult - In the implementation block
@property (nonatomic,retain) NSConditionLock * stateLock;                                //@synthesize stateLock=_stateLock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
+(id)promiseWithResult:(id)arg1 ;
+(id)promiseWithError:(id)arg1 ;
+(id)promiseWithAny:(id)arg1 ;
+(id)_globalPromiseStorageAccessQueue;
+(id)_globalPromiseStorage;
+(id)promiseWithAll:(id)arg1 ;
+(void)_configureAllPromise:(id)arg1 withResults:(id)arg2 promises:(id)arg3 currentPromiseIndex:(unsigned long long)arg4 ;
+(void)_configureAnyPromise:(id)arg1 withPomises:(id)arg2 currentPromiseIndex:(unsigned long long)arg3 ;
+(BOOL)_errorIsCanceledError:(id)arg1 ;
+(void)_finishPromise:(id)arg1 withPromise:(id)arg2 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(id)thenWithBlock:(/*^block*/id)arg1 ;
-(id)catchWithBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)boolCompletionHandlerAdapter;
-(/*^block*/id)nilValueCompletionHandlerAdapter;
-(NSConditionLock *)stateLock;
-(AMSPromiseResult *)promiseResult;
-(void)_addBlock:(/*^block*/id)arg1 orCallWithResult:(/*^block*/id)arg2 ;
-(void)setPromiseResult:(AMSPromiseResult *)arg1 ;
-(void)setStateLock:(NSConditionLock *)arg1 ;
-(id)resultWithError:(id*)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)waitUntilFinishedWithTimeout:(double)arg1 ;
-(void)addFinishBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithError:(id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(/*^block*/id)completionHandlerAdapter;
-(void)waitUntilFinished;
-(id)init;
-(BOOL)_isFinished;
-(BOOL)cancel;
-(BOOL)isCancelled;
-(AMSPromiseCompletionBlocks *)completionBlocks;
-(BOOL)isFinished;
-(void)setCompletionBlocks:(AMSPromiseCompletionBlocks *)arg1 ;
@end

