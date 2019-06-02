/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject {

	IMRuntimeTestRun* _testRun;
	/*^block*/id _completion;

}

@property (retain) IMRuntimeTestRun * testRun;              //@synthesize testRun=_testRun - In the implementation block
@property (copy) id completion;                             //@synthesize completion=_completion - In the implementation block
+(id)logHandle;
+(id)testName;
+(void)testLog:(id)arg1 ;
-(void)dispatchAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(id)logHandle;
-(void)setUp;
-(IMRuntimeTestRun *)testRun;
-(Class)testRunClass;
-(void)setTestRun:(IMRuntimeTestRun *)arg1 ;
-(void)runTest:(/*^block*/id)arg1 ;
-(void)finishTestAfterInterval:(double)arg1 ;
-(void)tearDown;
-(id)testName;
-(void)testLog:(id)arg1 ;
-(void)finishTest;
-(void)startTest;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

