/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleThreadData.h>

@interface PASampleThreadDataKPerf : PASampleThreadData {

	BOOL isSentinel;
	BOOL filledDispatchQueue;
	BOOL filledThreadSnapshotInfo;
	BOOL hasEmptyKernelStack;
	PASampleThreadDataKPerf* previousSampleThread;

}

@property (assign) BOOL isSentinel; 
@property (__weak) PASampleThreadDataKPerf * previousSampleThread; 
@property (assign) BOOL filledDispatchQueue; 
@property (assign) BOOL filledThreadSnapshotInfo; 
@property (assign) BOOL hasEmptyKernelStack; 
-(BOOL)hasAnyInfo;
-(PASampleThreadDataKPerf *)previousSampleThread;
-(void)setPreviousSampleThread:(PASampleThreadDataKPerf *)arg1 ;
-(BOOL)isSentinel;
-(void)setIsSentinel:(BOOL)arg1 ;
-(BOOL)filledThreadSnapshotInfo;
-(void)setFilledThreadSnapshotInfo:(BOOL)arg1 ;
-(BOOL)hasEmptyKernelStack;
-(void)setHasEmptyKernelStack:(BOOL)arg1 ;
-(BOOL)filledDispatchQueue;
-(void)setFilledDispatchQueue:(BOOL)arg1 ;
@end

