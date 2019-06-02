/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol CPLEngineTransportResourcesDownloadTask;
@class NSMutableArray, NSString, CPLResource, NSData;

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {

	NSMutableArray* _stateProgressDates;
	NSString* _activeQueuesStatusAtEnqueingTime;
	unsigned long long _preemptingCount;
	BOOL _cancelledByEngine;
	CPLResource* _cloudResource;
	NSData* _transportScope;
	unsigned long long _taskIdentifierForQueue;
	NSString* _clientBundleID;
	id<CPLEngineTransportResourcesDownloadTask> _transportTask;
	/*^block*/id _launchHandler;
	/*^block*/id _cancelHandler;
	/*^block*/id _didStartHandler;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;
	NSString* _transportIdentifier;

}

@property (nonatomic,retain) CPLResource * cloudResource;                                                   //@synthesize cloudResource=_cloudResource - In the implementation block
@property (nonatomic,retain) NSData * transportScope;                                                       //@synthesize transportScope=_transportScope - In the implementation block
@property (assign,nonatomic) unsigned long long taskIdentifierForQueue;                                     //@synthesize taskIdentifierForQueue=_taskIdentifierForQueue - In the implementation block
@property (nonatomic,retain) NSString * clientBundleID;                                                     //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,getter=isCancelledByEngine,nonatomic) BOOL cancelledByEngine;                             //@synthesize cancelledByEngine=_cancelledByEngine - In the implementation block
@property (assign,nonatomic,__weak) id<CPLEngineTransportResourcesDownloadTask> transportTask;              //@synthesize transportTask=_transportTask - In the implementation block
@property (nonatomic,readonly) id launchHandler;                                                            //@synthesize launchHandler=_launchHandler - In the implementation block
@property (nonatomic,readonly) id cancelHandler;                                                            //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,readonly) id didStartHandler;                                                          //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,readonly) id progressHandler;                                                          //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) id completionHandler;                                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSString * transportIdentifier;                                                  //@synthesize transportIdentifier=_transportIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL willGenerateReport; 
+(unsigned long long)maximumResourceDownloadSizeForResourceType:(unsigned long long)arg1 ;
+(void)initialize;
-(void)launch;
-(NSData *)transportScope;
-(BOOL)isCancelledByEngine;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(void)setTransportScope:(NSData *)arg1 ;
-(id)initWithLaunchHandler:(/*^block*/id)arg1 cancelHandler:(/*^block*/id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id<CPLEngineTransportResourcesDownloadTask>)transportTask;
-(void)setCancelledByEngine:(BOOL)arg1 ;
-(void)setTransportTask:(id<CPLEngineTransportResourcesDownloadTask>)arg1 ;
-(BOOL)willGenerateReport;
-(void)noteActiveQueuesStatusAtEnqueingTime:(id)arg1 ;
-(void)noteStateDidProgress:(unsigned long long)arg1 ;
-(void)noteTaskHasBeenPreempted;
-(CPLResource *)cloudResource;
-(unsigned long long)taskIdentifierForQueue;
-(void)setTaskIdentifierForQueue:(unsigned long long)arg1 ;
-(id)launchHandler;
-(NSString *)transportIdentifier;
-(void)setTransportIdentifier:(NSString *)arg1 ;
-(void)cancelTask;
-(NSString *)clientBundleID;
-(id)didStartHandler;
-(id)progressHandler;
-(void)setClientBundleID:(NSString *)arg1 ;
-(id)completionHandler;
-(id)cancelHandler;
@end

