/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSCyclerTestSuite, WBSCyclerTestTarget;
@class NSMutableArray;

@interface WBSCyclerTestRunner : NSObject {

	BOOL _stopRequested;
	NSMutableArray* _pendingRequestQueue;
	NSMutableArray* _pendingRequestCompletionHandlerQueue;
	BOOL _running;
	id<WBSCyclerTestSuite> _testSuite;
	id<WBSCyclerTestTarget> _target;

}

@property (nonatomic,readonly) id<WBSCyclerTestSuite> testSuite;              //@synthesize testSuite=_testSuite - In the implementation block
@property (nonatomic,readonly) id<WBSCyclerTestTarget> target;                //@synthesize target=_target - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running;                 //@synthesize running=_running - In the implementation block
-(id)_descriptionForErrorCode:(long long)arg1 ;
-(id)_errorWithCode:(long long)arg1 ;
-(void)requestStop;
-(void)handleRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<WBSCyclerTestSuite>)testSuite;
-(id)initWithTestSuite:(id)arg1 target:(id)arg2 ;
-(void)_performNextIterationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleNextPendingRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<WBSCyclerTestTarget>)target;
-(BOOL)isRunning;
-(void)_stop;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
@end

