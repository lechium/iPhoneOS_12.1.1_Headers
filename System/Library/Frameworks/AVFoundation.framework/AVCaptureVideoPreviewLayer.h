/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CALayer.h>

@class AVCaptureVideoPreviewLayerInternal, AVCaptureSession, AVCaptureConnection, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer {

	AVCaptureVideoPreviewLayerInternal* _internal;

}

@property (nonatomic,retain) AVCaptureSession * session; 
@property (nonatomic,readonly) AVCaptureConnection * connection; 
@property (copy) NSString * videoGravity; 
@property (getter=isOrientationSupported,nonatomic,readonly) BOOL orientationSupported; 
@property (assign,nonatomic) long long orientation; 
@property (getter=isMirroringSupported,nonatomic,readonly) BOOL mirroringSupported; 
@property (assign,nonatomic) BOOL automaticallyAdjustsMirroring; 
@property (assign,getter=isMirrored,nonatomic) BOOL mirrored; 
+(id)layerWithSession:(id)arg1 ;
+(id)layerWithSessionWithNoConnection:(id)arg1 ;
+(void)initialize;
-(id)sinkID;
-(unsigned)imageQueueSlot;
-(void)setMirrored:(BOOL)arg1 ;
-(void)setChromaNoiseReductionEnabled:(BOOL)arg1 ;
-(void)setSinkID:(id)arg1 ;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(int)changeSeed;
-(void)bumpChangeSeed;
-(id)connectionMediaTypes;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)canAddConnectionForMediaType:(id)arg1 ;
-(BOOL)isFilterRenderingEnabled;
-(id)videoPreviewFilters;
-(void)attachToFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)detachFromFigCaptureSession:(OpaqueFigCaptureSessionRef)arg1 ;
-(id)addConnection:(id)arg1 error:(id*)arg2 ;
-(CGRect)metadataOutputRectOfInterestForRect:(CGRect)arg1 ;
-(CGRect)rectForMetadataOutputRectOfInterest:(CGRect)arg1 ;
-(double)previewRotationDegrees;
-(BOOL)automaticallyAdjustsMirroring;
-(id)initWithSessionWithNoConnection:(id)arg1 ;
-(id)_initWithSession:(id)arg1 makeConnection:(BOOL)arg2 ;
-(void)centerSublayer:(long long)arg1 ;
-(void)setSessionWithNoConnection:(id)arg1 ;
-(BOOL)_automaticallyAdjustsMirroring;
-(BOOL)_isMirrored;
-(BOOL)isUnoptimizedFilterRenderingEnabled;
-(void)_updatePreviewTransforms;
-(void)_updateDepthDataDeliverySupported;
-(BOOL)isMirroringSupported;
-(BOOL)isChromaNoiseReductionSupported;
-(BOOL)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(BOOL)arg2 exceptionReason:(id*)arg3 ;
-(BOOL)_filtersAreOptimized:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_setSensorAndEstimatedPreviewSizes;
-(void)_updateCaptureDeviceTransform;
-(BOOL)isOrientationSupported;
-(void)setAutomaticallyAdjustsMirroring:(BOOL)arg1 ;
-(BOOL)isChromaNoiseReductionEnabled;
-(void)setUnoptimizedFilterRenderingEnabled:(BOOL)arg1 ;
-(BOOL)isMirrored;
-(long long)_orientation;
-(NSString *)videoGravity;
-(id)initWithSession:(id)arg1 ;
-(void)setVideoGravity:(NSString *)arg1 ;
-(BOOL)isDepthDataDeliveryEnabled;
-(void)setFilterRenderingEnabled:(BOOL)arg1 ;
-(BOOL)isDepthDataDeliverySupported;
-(void)setDepthDataDeliveryEnabled:(BOOL)arg1 ;
-(void)setVideoPreviewFilters:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(CGPoint)pointForCaptureDevicePointOfInterest:(CGPoint)arg1 ;
-(id)transformedMetadataObjectForMetadataObject:(id)arg1 ;
-(CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AVCaptureSession *)session;
-(void)setPaused:(BOOL)arg1 ;
-(long long)orientation;
-(id)initWithLayer:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(AVCaptureConnection *)connection;
-(id)_input;
-(BOOL)isPaused;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)layoutSublayers;
@end

