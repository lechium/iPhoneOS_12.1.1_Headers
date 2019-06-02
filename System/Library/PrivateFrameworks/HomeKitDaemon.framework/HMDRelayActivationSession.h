/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDFairPlaySAPSessionDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDFairPlaySAPSession, HMFTimer, NSURLSession, NSOperationQueue, NSString;

@interface HMDRelayActivationSession : HMFObject <HMDFairPlaySAPSessionDelegate, HMFTimerDelegate, HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	unsigned long long _state;
	HMDFairPlaySAPSession* _fairPlaySAPSession;
	HMFTimer* _fairPlaySessionTimer;
	NSURLSession* _urlSession;
	NSOperationQueue* _requestOperationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) HMDFairPlaySAPSession * fairPlaySAPSession;              //@synthesize fairPlaySAPSession=_fairPlaySAPSession - In the implementation block
@property (nonatomic,retain) HMFTimer * fairPlaySessionTimer;                         //@synthesize fairPlaySessionTimer=_fairPlaySessionTimer - In the implementation block
@property (nonatomic,readonly) NSURLSession * urlSession;                             //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestOperationQueue;              //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSURLSession *)urlSession;
-(void)timerDidFire:(id)arg1 ;
-(void)requestChallengeWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestCertificateWithCertificateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSOperationQueue *)requestOperationQueue;
-(void)session:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)session:(id)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)session:(id)arg1 didReceiveClientExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_setupFairPlaySession;
-(void)_teardownFairPlaySession;
-(void)setFairPlaySAPSession:(HMDFairPlaySAPSession *)arg1 ;
-(HMDFairPlaySAPSession *)fairPlaySAPSession;
-(void)_cancelAllPendingRequestOperations;
-(HMFTimer *)fairPlaySessionTimer;
-(void)_resumeRequestOperations;
-(void)_suspendRequestOperations;
-(void)setFairPlaySessionTimer:(HMFTimer *)arg1 ;
-(void)_handleFairPlayCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleFairPlaySetupExchangeResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleChallengeResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 fairPlaySession:(id)arg4 completionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_addRequestOperation:(id)arg1 ;
-(void)_verifyURLResponse:(id)arg1 responseData:(id)arg2 fairPlaySession:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 fairPlaySession:(id)arg4 completionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_requestFairPlayCertificateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestFairPlaySetupExchangeWithExchangeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end

