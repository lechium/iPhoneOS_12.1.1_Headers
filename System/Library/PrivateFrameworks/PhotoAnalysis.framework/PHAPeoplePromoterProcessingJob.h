/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PHAWorkerJob.h>
#import <libobjc.A.dylib/PVPersonPromoterDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, PVPersonPromoter, PHAVisionServiceFaceProcessingWorker, NSString;

@interface PHAPeoplePromoterProcessingJob : PHAWorkerJob <PVPersonPromoterDelegate> {

	BOOL _finished;
	float _completionScore;
	NSObject*<OS_dispatch_queue> _backgroundTaskQueue;
	PVPersonPromoter* _personPromoter;
	PHAVisionServiceFaceProcessingWorker* _worker;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> backgroundTaskQueue;                  //@synthesize backgroundTaskQueue=_backgroundTaskQueue - In the implementation block
@property (nonatomic,retain) PVPersonPromoter * personPromoter;                                 //@synthesize personPromoter=_personPromoter - In the implementation block
@property (assign,nonatomic,__weak) PHAVisionServiceFaceProcessingWorker * worker;              //@synthesize worker=_worker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)finished;
-(void)setFinished:(BOOL)arg1 ;
-(float)completionScore;
-(NSObject*<OS_dispatch_queue>)backgroundTaskQueue;
-(void)setBackgroundTaskQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(/*^block*/id)arg4 ;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 library:(id)arg3 ;
-(void)setWorker:(PHAVisionServiceFaceProcessingWorker *)arg1 ;
-(PVPersonPromoter *)personPromoter;
-(void)setCompletionScore:(float)arg1 ;
-(PHAVisionServiceFaceProcessingWorker *)worker;
-(id)keyFaceForPerson:(id)arg1 qualityMeasureByFace:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(id)performSocialGroupsIdentifiersWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 overTheYearsComputation:(BOOL)arg3 updateBlock:(/*^block*/id)arg4 ;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(void)setPersonPromoter:(PVPersonPromoter *)arg1 ;
@end

