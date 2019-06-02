/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNTestCoordinating <NSObject>
@required
-(BOOL)requiresRotationForOrientation:(long long)arg1;
-(void)rotateToOrientation:(long long)arg1 beforeRotation:(/*^block*/id)arg2 afterRotation:(/*^block*/id)arg3;
-(void)failedTestWithTestName:(id)arg1 failureMessage:(id)arg2;
-(void)startedTestWithTestName:(id)arg1;
-(void)finishedTestWithTestName:(id)arg1 waitForCommit:(BOOL)arg2;
-(void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 direction:(unsigned long long)arg5;

@end

