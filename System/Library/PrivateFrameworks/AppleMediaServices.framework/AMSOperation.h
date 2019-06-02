/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSLock, NSMutableSet, AMSBinaryPromise, NSError;

@interface AMSOperation : NSOperation {

	NSLock* _lock;
	NSMutableSet* _subOperations;
	BOOL _cancelled;
	BOOL _success;
	AMSOperation* _parentOperation;
	AMSBinaryPromise* _promise;
	NSError* _error;

}

@property (assign,nonatomic,__weak) AMSOperation * parentOperation;              //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,readonly) AMSBinaryPromise * promise;                       //@synthesize promise=_promise - In the implementation block
@property (assign,nonatomic) BOOL success;                                       //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(AMSBinaryPromise *)promise;
-(AMSOperation *)parentOperation;
-(void)setParentOperation:(AMSOperation *)arg1 ;
-(void)runSubOperation:(id)arg1 onQueue:(id)arg2 ;
-(void)runSubOperation:(id)arg1 ;
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(void)main;
-(void)lock;
-(void)unlock;
-(void)run;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

