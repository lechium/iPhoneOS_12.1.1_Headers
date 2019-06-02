/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDate, NSMutableDictionary, CKDClientContext, NSOperationQueue, NSObject, NSString, NSMutableSet, CKDOperation;

@interface CKDQueuedFetch : NSObject {

	BOOL _isFinished;
	NSDate* _queuedDate;
	/*^block*/id _completionHandler;
	CKDQueuedFetch* _equivalentRunningFetch;
	NSMutableDictionary* _completionHandlersByItemID;
	unsigned long long _lastCompletionHandlerCount;
	NSDate* _startDate;
	NSDate* _lastRequestDate;
	CKDClientContext* _context;
	NSOperationQueue* _operationQueue;
	long long _scope;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	long long _highestQOS;
	NSString* _runningOperationID;
	NSMutableSet* _dependentOperationIDs;
	NSMutableDictionary* _dependentOperationIDsByItemID;
	CKDOperation* _initialOperation;

}

@property (nonatomic,retain) NSMutableDictionary * completionHandlersByItemID;                 //@synthesize completionHandlersByItemID=_completionHandlersByItemID - In the implementation block
@property (assign,nonatomic) unsigned long long lastCompletionHandlerCount;                    //@synthesize lastCompletionHandlerCount=_lastCompletionHandlerCount - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * lastRequestDate;                                         //@synthesize lastRequestDate=_lastRequestDate - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * context;                                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) NSOperationQueue * operationQueue;                         //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) long long scope;                                                  //@synthesize scope=_scope - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                       //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) long long highestQOS;                                             //@synthesize highestQOS=_highestQOS - In the implementation block
@property (nonatomic,retain) NSString * runningOperationID;                                    //@synthesize runningOperationID=_runningOperationID - In the implementation block
@property (nonatomic,retain) NSMutableSet * dependentOperationIDs;                             //@synthesize dependentOperationIDs=_dependentOperationIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dependentOperationIDsByItemID;              //@synthesize dependentOperationIDsByItemID=_dependentOperationIDsByItemID - In the implementation block
@property (nonatomic,retain) CKDOperation * initialOperation;                                  //@synthesize initialOperation=_initialOperation - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                                                  //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) NSDate * queuedDate;                                              //@synthesize queuedDate=_queuedDate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic,__weak) CKDQueuedFetch * equivalentRunningFetch;                   //@synthesize equivalentRunningFetch=_equivalentRunningFetch - In the implementation block
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(id)CKPropertiesDescription;
-(void)addCallbackForItemWithID:(id)arg1 operation:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)setLastRequestDate:(NSDate *)arg1 ;
-(long long)highestQOS;
-(void)setHighestQOS:(long long)arg1 ;
-(CKDOperation *)initialOperation;
-(void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3 ;
-(void)createFetchOperationForItemIDs:(id)arg1 operationQueue:(id)arg2 operationConfigurationBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)completionHandlersByItemID;
-(NSMutableDictionary *)dependentOperationIDsByItemID;
-(NSMutableSet *)dependentOperationIDs;
-(id)callbacksForItemWithID:(id)arg1 ;
-(void)removeCallbacksForItemWithID:(id)arg1 ;
-(id)allItemIDs;
-(NSDate *)lastRequestDate;
-(int)numberOfCallbacks;
-(NSString *)runningOperationID;
-(void)setRunningOperationID:(NSString *)arg1 ;
-(void)finishFetchOperationWithError:(id)arg1 ;
-(id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3 ;
-(BOOL)canBeUsedForOperation:(id)arg1 ;
-(BOOL)canBeUsedForPendingFetch:(id)arg1 ;
-(BOOL)dependentOperationListContainsRunningFetch:(id)arg1 ;
-(BOOL)dependentOperationListContainsOperationID:(id)arg1 ;
-(NSDate *)queuedDate;
-(void)setQueuedDate:(NSDate *)arg1 ;
-(CKDQueuedFetch *)equivalentRunningFetch;
-(void)setEquivalentRunningFetch:(CKDQueuedFetch *)arg1 ;
-(void)setCompletionHandlersByItemID:(NSMutableDictionary *)arg1 ;
-(unsigned long long)lastCompletionHandlerCount;
-(void)setLastCompletionHandlerCount:(unsigned long long)arg1 ;
-(void)setDependentOperationIDs:(NSMutableSet *)arg1 ;
-(void)setDependentOperationIDsByItemID:(NSMutableDictionary *)arg1 ;
-(void)setInitialOperation:(CKDOperation *)arg1 ;
-(id)init;
-(id)description;
-(void)setContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)context;
-(void)start;
-(id)completionHandler;
-(void)setScope:(long long)arg1 ;
-(long long)scope;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)isFinished;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
@end

