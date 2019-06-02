/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>
#import <libobjc.A.dylib/PHAPersonBuildingJobOperationDelegate.h>

@class NSOperationQueue, PHAPersonBuildingJobOperation, NSString;

@interface PHAPersonBuildingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAPersonBuildingJobOperationDelegate> {

	NSOperationQueue* _operationQueue;
	PHAPersonBuildingJobOperation* _personBuildingOperation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)completionScore;
-(void)operationDidProgress:(id)arg1 ;
-(id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 ;
-(BOOL)startJob:(id*)arg1 ;
-(BOOL)stopJob:(id*)arg1 ;
@end
