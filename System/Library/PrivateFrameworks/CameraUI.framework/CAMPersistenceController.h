/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMStillImagePersistenceCoordinatorDelegate.h>
#import <libobjc.A.dylib/CAMCaptureService.h>

@protocol CAMPersistenceResultDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, CAMThumbnailGenerator, CAMLocationController, CAMProtectionController, CAMPowerController, CAMBurstController, CAMIrisVideoController, NSMapTable, NSMutableDictionary, NSString;

@interface CAMPersistenceController : NSObject <CAMStillImagePersistenceCoordinatorDelegate, CAMCaptureService> {

	struct {
		BOOL respondsToDidCompleteAllLocalPersistenceForRequest;
	}  _resultDelegateFlags;
	NSMutableArray* _pendingLocalPersistenceWrappers;
	NSMutableArray* _pendingRemotePersistenceWrappers;
	id<CAMPersistenceResultDelegate> _resultDelegate;
	NSObject*<OS_dispatch_queue> __localPersistenceQueue;
	NSObject*<OS_dispatch_queue> __remotePersistenceQueue;
	CAMThumbnailGenerator* __localPersistenceThumbnailGenerator;
	CAMThumbnailGenerator* __remotePersistenceThumbnailGenerator;
	CAMLocationController* __locationController;
	CAMProtectionController* __protectionController;
	CAMPowerController* __powerController;
	CAMBurstController* __burstController;
	CAMIrisVideoController* __irisVideoController;
	NSObject*<OS_dispatch_queue> __resultDelegateIsolationQueue;
	NSObject*<OS_dispatch_queue> __coordinationQueue;
	NSMapTable* __coordinationQueueGroupsByIdentifier;
	NSMutableDictionary* __coordinationQueue_persistenceCoordinators;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _localPersistenceQueue;                                //@synthesize _localPersistenceQueue=__localPersistenceQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _remotePersistenceQueue;                               //@synthesize _remotePersistenceQueue=__remotePersistenceQueue - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _localPersistenceThumbnailGenerator;                        //@synthesize _localPersistenceThumbnailGenerator=__localPersistenceThumbnailGenerator - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _remotePersistenceThumbnailGenerator;                       //@synthesize _remotePersistenceThumbnailGenerator=__remotePersistenceThumbnailGenerator - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _pendingLocalPersistenceWrappers;                                  //@synthesize pendingLocalPersistenceWrappers=_pendingLocalPersistenceWrappers - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _pendingRemotePersistenceWrappers;                                 //@synthesize pendingRemotePersistenceWrappers=_pendingRemotePersistenceWrappers - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                        //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * _protectionController;                                    //@synthesize _protectionController=__protectionController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                              //@synthesize _powerController=__powerController - In the implementation block
@property (nonatomic,readonly) CAMBurstController * _burstController;                                              //@synthesize _burstController=__burstController - In the implementation block
@property (nonatomic,readonly) CAMIrisVideoController * _irisVideoController;                                      //@synthesize _irisVideoController=__irisVideoController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _resultDelegateIsolationQueue;                         //@synthesize _resultDelegateIsolationQueue=__resultDelegateIsolationQueue - In the implementation block
@property (nonatomic,readonly) BOOL resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _coordinationQueue;                                    //@synthesize _coordinationQueue=__coordinationQueue - In the implementation block
@property (nonatomic,readonly) NSMapTable * _coordinationQueueGroupsByIdentifier;                                  //@synthesize _coordinationQueueGroupsByIdentifier=__coordinationQueueGroupsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _coordinationQueue_persistenceCoordinators;                   //@synthesize _coordinationQueue_persistenceCoordinators=__coordinationQueue_persistenceCoordinators - In the implementation block
@property (assign,nonatomic,__weak) id<CAMPersistenceResultDelegate> resultDelegate;                               //@synthesize resultDelegate=_resultDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientVideoMetadataForRequest:(id)arg1 withCreationDate:(id)arg2 isEV0ForHDR:(BOOL)arg3 ;
+(id)uniquePathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3 usingIncomingDirectory:(BOOL)arg4 ;
+(id)videoMetadataDateFormatter;
+(id)clientVideoMetadataForLocation:(id)arg1 withCreationDate:(id)arg2 ;
+(id)_pathForIncomingDirectory;
+(id)delimiterForIncomingAssetFilenames;
+(id)uniqueIncomingPathForAssetWithUUID:(id)arg1 captureTime:(double)arg2 extension:(id)arg3 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(CAMLocationController *)_locationController;
-(CAMPowerController *)_powerController;
-(void)stillImagePersistenceCoordinator:(id)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg2 request:(id)arg3 ;
-(void)stillImagePersistenceCoordinator:(id)arg1 requestsRemotePersistenceForLocalPersistenceResult:(id)arg2 fullsizeRenderLocalResult:(id)arg3 request:(id)arg4 powerAssertionReason:(unsigned)arg5 ;
-(void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2 ;
-(void)_mainThread_handleApplicationDidEnterBackground:(id)arg1 ;
-(id)initWithLocationController:(id)arg1 burstController:(id)arg2 protectionController:(id)arg3 powerController:(id)arg4 irisVideoController:(id)arg5 ;
-(NSObject*<OS_dispatch_queue>)_resultDelegateIsolationQueue;
-(void)_handleStillImagePersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(CAMIrisVideoController *)_irisVideoController;
-(void)_handleVideoPersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(BOOL)resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest;
-(id)_coordinationGroupForIdentifier:(id)arg1 ;
-(id<CAMPersistenceResultDelegate>)resultDelegate;
-(NSObject*<OS_dispatch_queue>)_localPersistenceQueue;
-(void)_removeCoordinationGroupForIdentifier:(id)arg1 ;
-(CAMBurstController *)_burstController;
-(void)_coordinateRemotePersistenceForStillImageLocalResult:(id)arg1 coordinationInfo:(id)arg2 request:(id)arg3 ;
-(unsigned)_stillImageLocalPowerAssertionReasonForCoordinationInfo:(id)arg1 ;
-(id)_ensureCoordinationGroupForIdentifier:(id)arg1 ;
-(CAMProtectionController *)_protectionController;
-(NSMutableArray *)_pendingLocalPersistenceWrappers;
-(void)_locallyPersistStillImageResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_persistStillImageCaptureSurfaceResult:(id)arg1 withRequest:(id)arg2 ;
-(void)_notifyDelegateOfCompletedStillImageLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_coordinationQueue;
-(NSMutableDictionary *)_coordinationQueue_persistenceCoordinators;
-(void)_dispatchRemotePersistenceForLocalPersistenceResult:(id)arg1 fullsizeRenderLocalResult:(id)arg2 request:(id)arg3 powerAssertionReason:(unsigned)arg4 ;
-(id)_jobDictionaryForStillImageLocalResult:(id)arg1 fullsizeRenderLocalResult:(id)arg2 fromRequest:(id)arg3 ;
-(NSMutableArray *)_pendingRemotePersistenceWrappers;
-(void)_remotelyPersistStillImageJob:(id)arg1 forRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)_remotePersistenceQueue;
-(id)_uniformTypeIdentifierForStillImageRequest:(id)arg1 ;
-(CAMThumbnailGenerator *)_localPersistenceThumbnailGenerator;
-(id)_physicallyRotatedJPEGDataFromCapturePhoto:(id)arg1 ;
-(id)_createMetadataForPhysicallyOrientedImage:(id)arg1 ;
-(id)_extensionForUniformTypeIdentifier:(id)arg1 ;
-(BOOL)_writeJPEGToURL:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(BOOL)arg5 error:(out id*)arg6 ;
-(BOOL)_writeDataToURL:(id)arg1 withData:(id)arg2 duringBurst:(BOOL)arg3 error:(out id*)arg4 ;
-(id)_xmpEncodedDiagnosticDataFromDictionary:(id)arg1 ;
-(CGAffineTransform)_affineTransformForRotationDegrees:(int)arg1 mirrored:(BOOL)arg2 ;
-(CFWriteStreamRef)_createOpenWriteStreamWithURL:(id)arg1 forBurst:(BOOL)arg2 ;
-(CAMThumbnailGenerator *)_remotePersistenceThumbnailGenerator;
-(void)_notifyDelegateOfCompletedStillImageRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 error:(id)arg4 ;
-(void)_handleCompletedStillImageJobForRequest:(id)arg1 withReply:(id)arg2 fromBatchOfSize:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 error:(id)arg5 ;
-(unsigned)_videoLocalPowerAssertionReasonForCoordinationInfo:(id)arg1 ;
-(void)_locallyPersistVideoCaptureResult:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_persistVideoCaptureResult:(id)arg1 withRequest:(id)arg2 ;
-(void)_notifyDelegateOfCompletedVideoLocalPersistenceForRequest:(id)arg1 withResult:(id)arg2 ;
-(unsigned)_videoRemotePowerAssertionReasonForCoordinationInfo:(id)arg1 ;
-(id)_jobDictionaryForVideoLocalResult:(id)arg1 fromRequest:(id)arg2 ;
-(void)_remotelyPersistVideoJob:(id)arg1 forRequest:(id)arg2 withSendHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_videoPersistenceUUIDForRequest:(id)arg1 withResult:(id)arg2 ;
-(id)_stillPersistenceUUIDForRequest:(id)arg1 withVideoResult:(id)arg2 ;
-(void)_notifyDelegateOfCompletedVideoRemotePersistenceForRequest:(id)arg1 withReply:(id)arg2 error:(id)arg3 ;
-(void)_handleCompletedVideoJobForRequest:(id)arg1 withReply:(id)arg2 completionHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(NSMapTable *)_coordinationQueueGroupsByIdentifier;
-(id)_jobDictionaryForTimelapsePlaceholderResult:(id)arg1 ;
-(void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2 ;
-(void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(void)setResultDelegate:(id<CAMPersistenceResultDelegate>)arg1 ;
-(void)performDeferredRemotePersistenceWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)persistBurstWithIdentifier:(id)arg1 result:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)persistPlaceholderTimelapseVideoWithResult:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

