/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMVideoCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMNebulaDaemonTimelapseProtocol.h>
#import <libobjc.A.dylib/CAMPersistenceResultDelegate.h>

@protocol OS_dispatch_queue, CAMTimelapseMovieWriterProtocol;
@class NSMutableArray, NSObject, CAMTimelapseState, CAMNebulaKeepAliveController, CAMPersistenceController, BKSApplicationStateMonitor, NSString;

@interface CAMTimelapseBackendController : NSObject <CAMVideoCaptureRequestDelegate, CAMNebulaDaemonTimelapseProtocol, CAMPersistenceResultDelegate> {

	BOOL __writingMovie;
	BOOL __capturing;
	BOOL __oldMovieWriterEnabled;
	int __notifyRegisterTokenSuspendIO;
	int __notifyRegisterTokenResumeIO;
	NSMutableArray* __sessionContexts;
	NSObject*<OS_dispatch_queue> __workQueue;
	id<CAMTimelapseMovieWriterProtocol> __movieWriter;
	CAMTimelapseState* __currentState;
	CAMNebulaKeepAliveController* __keepAliveController;
	CAMPersistenceController* __persistenceController;
	BKSApplicationStateMonitor* __applicationStateMonitor;

}

@property (nonatomic,readonly) NSMutableArray * _sessionContexts;                                     //@synthesize _sessionContexts=__sessionContexts - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _workQueue;                               //@synthesize _workQueue=__workQueue - In the implementation block
@property (nonatomic,readonly) BOOL _writingMovie;                                                    //@synthesize _writingMovie=__writingMovie - In the implementation block
@property (nonatomic,readonly) id<CAMTimelapseMovieWriterProtocol> _movieWriter;                      //@synthesize _movieWriter=__movieWriter - In the implementation block
@property (setter=_setCurrentState:,nonatomic,retain) CAMTimelapseState * _currentState;              //@synthesize _currentState=__currentState - In the implementation block
@property (assign,setter=_setCapturing:,getter=_isCapturing,nonatomic) BOOL _capturing;               //@synthesize _capturing=__capturing - In the implementation block
@property (nonatomic,readonly) CAMNebulaKeepAliveController * _keepAliveController;                   //@synthesize _keepAliveController=__keepAliveController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * _persistenceController;                     //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) BOOL _oldMovieWriterEnabled;                                           //@synthesize _oldMovieWriterEnabled=__oldMovieWriterEnabled - In the implementation block
@property (nonatomic,readonly) int _notifyRegisterTokenSuspendIO;                                     //@synthesize _notifyRegisterTokenSuspendIO=__notifyRegisterTokenSuspendIO - In the implementation block
@property (nonatomic,readonly) int _notifyRegisterTokenResumeIO;                                      //@synthesize _notifyRegisterTokenResumeIO=__notifyRegisterTokenResumeIO - In the implementation block
@property (nonatomic,readonly) BKSApplicationStateMonitor * _applicationStateMonitor;                 //@synthesize _applicationStateMonitor=__applicationStateMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CAMTimelapseState *)_currentState;
-(void)_setCurrentState:(id)arg1 ;
-(void)videoRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(CAMNebulaKeepAliveController *)_keepAliveController;
-(void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1 ;
-(void)startTimelapseWithUUID:(id)arg1 ;
-(void)resumeTimelapseWithUUID:(id)arg1 ;
-(void)updateTimelapseWithUUID:(id)arg1 ;
-(void)finishCaptureForTimelapseWithUUID:(id)arg1 ;
-(void)stopTimelapseWithUUID:(id)arg1 ;
-(void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4 ;
-(id)initWithPersistenceController:(id)arg1 keepAliveController:(id)arg2 ;
-(void)_dispatchToMainQueueWithBlock:(/*^block*/id)arg1 ;
-(CAMPersistenceController *)_persistenceController;
-(void)handleClientConnection:(id)arg1 ;
-(int)_notifyRegisterTokenSuspendIO;
-(int)_notifyRegisterTokenResumeIO;
-(BKSApplicationStateMonitor *)_applicationStateMonitor;
-(void)handleClientDisconnection;
-(NSObject*<OS_dispatch_queue>)_workQueue;
-(id<CAMTimelapseMovieWriterProtocol>)_movieWriter;
-(void)_workQueue_setupCameraProcessMonitoringIfNecessary;
-(void)_workQueue_destroyApplicationStateMonitor;
-(void)_setCapturing:(BOOL)arg1 ;
-(id)_getOrCreateSessionContextForTimelapseUUID:(id)arg1 ;
-(void)_updateSessionContext:(id)arg1 withState:(id)arg2 ;
-(void)_performPendingWork;
-(void)_dispatchToWorkQueueWithBlock:(/*^block*/id)arg1 ;
-(void)_updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg1 ;
-(void)_permanentlyFailTimelapseUUID:(id)arg1 withState:(id)arg2 ;
-(void)_dispatchToWorkQueueAfterDelay:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_isCameraRunning;
-(BOOL)_deleteItemAtPath:(id)arg1 ;
-(BOOL)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg1 ;
-(void)_writeMovieForSessionContext:(id)arg1 ;
-(BOOL)_shouldSaveLastTimelapseDataForDebugging;
-(void)_saveTimelapseDirectoryForDebuggingTimelapseUUID:(id)arg1 ;
-(void)_createPlaceholderAssetForState:(id)arg1 ;
-(CGAffineTransform)_frameTransformForState:(id)arg1 ;
-(void)_movieWrittenToFilePath:(id)arg1 duration:(SCD_Struct_CA2)arg2 metadata:(id)arg3 state:(id)arg4 ;
-(void)_reserveDummyFileForTimelapseUUID:(id)arg1 firstImageFilePath:(id)arg2 useHEVC:(BOOL)arg3 ;
-(void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg1 duration:(SCD_Struct_CA2)arg2 metadata:(id)arg3 state:(id)arg4 ;
-(int)_pidForApplication:(id)arg1 ;
-(NSMutableArray *)_sessionContexts;
-(BOOL)_writingMovie;
-(BOOL)_isCapturing;
-(BOOL)_oldMovieWriterEnabled;
-(id)init;
-(void)dealloc;
@end

