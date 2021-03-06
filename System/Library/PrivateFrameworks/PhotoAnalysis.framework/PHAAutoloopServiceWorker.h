/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAWorker.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PHAAutoloopAnalysisPerformer, PHAAnalysisWorkerJob;

@interface PHAAutoloopServiceWorker : PHAWorker {

	NSObject*<OS_dispatch_queue> _workerQueue;
	NSMutableArray* _pendingAssetIdentifiers;
	PHAAutoloopAnalysisPerformer* _currentPerformer;
	PHAAnalysisWorkerJob* _currentJob;

}
+(short)workerType;
+(long long)applicationDataFolderIdentifier;
+(BOOL)persistsState;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)cooldown;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)_processNextPendingAssetIdentifier;
-(void)_processAsset:(id)arg1 ;
-(void)_cleanup;
@end

