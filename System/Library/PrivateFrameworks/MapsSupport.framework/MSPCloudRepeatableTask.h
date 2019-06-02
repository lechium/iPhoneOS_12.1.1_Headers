/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPCloudRequest;
@class NSDate, NSOperationQueue, _MSPCloudAttemptTaskOperation, NSOperation;

@interface MSPCloudRepeatableTask : NSObject {

	/*^block*/id _failureHandler;
	/*^block*/id _successHandler;
	NSDate* _started;
	NSDate* _finished;
	BOOL _success;
	BOOL _canRetry;
	NSOperationQueue* _cloudKitOperationsQueue;
	_MSPCloudAttemptTaskOperation* _owningOperation;
	/*^block*/id _attemptHandler;
	/*^block*/id _cancelHandler;
	NSOperation*<MSPCloudRequest> _operation;
	MSPCloudRepeatableTask* _originalErrorTriggeringTask;
	MSPCloudRepeatableTask* _errorResolvingTask;
	MSPCloudRepeatableTask* _parentTask;

}

@property (assign,nonatomic,__weak) _MSPCloudAttemptTaskOperation * owningOperation;                           //@synthesize owningOperation=_owningOperation - In the implementation block
@property (assign,nonatomic,__weak) NSOperation*<MSPCloudRequest> operation;                                   //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) MSPCloudRepeatableTask * originalErrorTriggeringTask;                             //@synthesize originalErrorTriggeringTask=_originalErrorTriggeringTask - In the implementation block
@property (nonatomic,retain) MSPCloudRepeatableTask * errorResolvingTask;                                      //@synthesize errorResolvingTask=_errorResolvingTask - In the implementation block
@property (assign,nonatomic,__weak) MSPCloudRepeatableTask * parentTask;                                       //@synthesize parentTask=_parentTask - In the implementation block
@property (getter=_desiredQualityOfService,nonatomic,readonly) long long desiredQualityOfService; 
@property (nonatomic,copy) id attemptHandler;                                                                  //@synthesize attemptHandler=_attemptHandler - In the implementation block
@property (nonatomic,copy) id cancelHandler;                                                                   //@synthesize cancelHandler=_cancelHandler - In the implementation block
-(MSPCloudRepeatableTask *)parentTask;
-(void)setSuccessHandler:(/*^block*/id)arg1 ;
-(void)setFailureHandler:(/*^block*/id)arg1 ;
-(void)performCancel;
-(void)setOwningOperation:(_MSPCloudAttemptTaskOperation *)arg1 ;
-(void)attemptWithAccess:(id)arg1 ;
-(void)setOriginalErrorTriggeringTask:(MSPCloudRepeatableTask *)arg1 ;
-(id)initWithAttemptHandler:(/*^block*/id)arg1 performCancelHandler:(/*^block*/id)arg2 ;
-(void)failWithError:(id)arg1 canReattempt:(BOOL)arg2 maxAttempts:(unsigned long long)arg3 minimumReattemptDate:(id)arg4 ;
-(void)succeed;
-(void)setParentTask:(MSPCloudRepeatableTask *)arg1 ;
-(id)attemptHandler;
-(long long)_desiredQualityOfService;
-(_MSPCloudAttemptTaskOperation *)owningOperation;
-(void)performRequest:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(void)setAttemptHandler:(id)arg1 ;
-(MSPCloudRepeatableTask *)originalErrorTriggeringTask;
-(MSPCloudRepeatableTask *)errorResolvingTask;
-(void)setErrorResolvingTask:(MSPCloudRepeatableTask *)arg1 ;
-(id)init;
-(id)description;
-(NSOperation*<MSPCloudRequest>)operation;
-(void)setOperation:(NSOperation*<MSPCloudRequest>)arg1 ;
-(void)setCancelHandler:(id)arg1 ;
-(id)cancelHandler;
@end

