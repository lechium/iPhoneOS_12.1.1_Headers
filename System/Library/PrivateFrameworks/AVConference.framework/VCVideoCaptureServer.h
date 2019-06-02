/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VideoCaptureServer.h>

@protocol OS_dispatch_source, OS_dispatch_queue, VideoCaptureProtocol, AVConferencePreviewDelegate;
@class NSObject, NSString, NSMutableArray, VideoAttributes, VCImageQueue;

@interface VCVideoCaptureServer : NSObject <VideoCaptureServer> {

	int currentWidth;
	int currentHeight;
	int currentFrameRate;
	int _maxFrameRate;
	int _encodingWidth;
	int _encodingHeight;
	int previewFrameCount;
	int captureFrameCount;
	NSObject*<OS_dispatch_source> cameraHealthMonitor;
	int pendingWidth;
	int pendingHeight;
	int pendingFrameRate;
	NSString* _currentCameraUniqueID;
	BOOL firstPreviewFrame;
	int snapshotRequestCount;
	NSMutableArray* cameraClients;
	NSMutableArray* screenCaptureClients;
	NSMutableArray* _cameraPreviewClients;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	CGSize localExpectedPortraitAspectRatio;
	CGSize localExpectedLandscapeAspectRatio;
	NSObject*<OS_dispatch_queue> captureServerQueue;
	NSObject*<OS_dispatch_queue> captureClientQueue;
	NSObject*<OS_dispatch_queue> captureCameraQueue;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	NSObject*<OS_dispatch_queue> variablesQueue;
	NSObject*<OS_dispatch_queue> snapshotQueue;
	NSObject*<VideoCaptureProtocol> avCapture;
	NSObject*<VideoCaptureProtocol> screenCapture;
	OpaqueVTPixelTransferSessionRef transferSession;
	CVPixelBufferPoolRef bufferPool;
	BOOL resize;
	NSObject*<AVConferencePreviewDelegate> appDelegate;
	double falteredRenderingtimeStamp;
	VCImageQueue* frontQueue;
	VCImageQueue* backQueue;
	unsigned _previewSlot;
	int _thermalNotificationToken;
	int _thermalLevel;
	int _newThermalLevel;
	int _peakPowerNotificationToken;
	int _peakPowerLevel;
	int _newPeakPowerLevel;
	BOOL _isPreviewRunning;
	BOOL _forceDisableThermal;

}

@property (nonatomic,retain) NSObject*<AVConferencePreviewDelegate> appDelegate; 
@property (retain) NSString * currentCameraUniqueID;                                          //@synthesize currentCameraUniqueID=_currentCameraUniqueID - In the implementation block
+(id)VCVideoCaptureServerSingleton;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(BOOL)setLocalScreenAttributes:(id)arg1 ;
-(void)setCaptureFrameRate:(int)arg1 ;
-(void)onCaptureScreenFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV56)arg2 droppedFrames:(int)arg3 orientation:(int)arg4 ;
-(void)handleCaptureEvent:(id)arg1 ;
-(void)setAnimoji:(id)arg1 ;
-(void)setMemoji:(id)arg1 ;
-(BOOL)cameraSupportsWidth:(int)arg1 height:(int)arg2 ;
-(BOOL)registerForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 unpausing:(BOOL)arg6 ;
-(CGSize)localScreenRatioForScreenOrientation:(int)arg1 ;
-(BOOL)deregisterForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 ;
-(void)onCaptureVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV56)arg2 preview:(BOOL)arg3 shouldEnqueueFrame:(BOOL)arg4 droppedFrames:(int)arg5 switching:(BOOL)arg6 orientation:(int)arg7 camera:(int)arg8 videoMirrored:(BOOL)arg9 ;
-(void)handleCaptureEvent:(id)arg1 subType:(id)arg2 ;
-(void)onCaptureFramerateChange:(unsigned)arg1 ;
-(void)registerBlocksForServer;
-(id)localVideoAttributes;
-(NSString *)currentCameraUniqueID;
-(BOOL)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(BOOL)arg4 ;
-(void)handleAVCaptureError:(int)arg1 error:(id)arg2 ;
-(void)pausePreview;
-(BOOL)canStopPreview;
-(void)stopPreview;
-(BOOL)setCaptureCameraWithUID:(id)arg1 ;
-(BOOL)setLocalVideoAttributes:(id)arg1 ;
-(unsigned)setLocalVideoDestination:(id)arg1 facing:(BOOL)arg2 ;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)addStickerWithURL:(id)arg1 isFaceSticker:(BOOL)arg2 atPosition:(CGPoint)arg3 identifier:(id)arg4 ;
-(void)clearAllStickers:(BOOL)arg1 ;
-(void)setCurrentCameraUniqueID:(NSString *)arg1 ;
-(void)stopCapture;
-(void)sendSnapshotFromFrame:(CVBufferRef)arg1 ;
-(CVBufferRef)createResizedFrame:(CVBufferRef)arg1 ;
-(BOOL)enqueueFrameToQueueFront:(BOOL)arg1 frame:(CVBufferRef)arg2 frameTime:(SCD_Struct_AV56)arg3 ;
-(void)applyPressureLevelChanges;
-(void)updateImageQueueFrameRate:(int)arg1 ;
-(int)getFrameRateForThermalLevel:(int)arg1 peakPowerPressure:(int)arg2 ;
-(void)notifyThermalChangeForClients:(id)arg1 ;
-(void)notifyFrameRateBeingThrottledForClients:(id)arg1 newFrameRate:(int)arg2 thermalLevelDidChange:(BOOL)arg3 powerLevelDidChange:(BOOL)arg4 ;
-(int)getFrameRateForPeakPowerLevel:(int)arg1 ;
-(int)getFrameRateForThermalLevel:(int)arg1 ;
-(void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)changeCameraToPendingSettingsWithReset:(BOOL)arg1 ;
-(void)resetCameraToPreviewSettingsForced:(BOOL)arg1 ;
-(void)reconnectClientLayerFront:(BOOL)arg1 ;
-(int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(BOOL)arg4 ;
-(void)setCurrentFrameRate:(int)arg1 ;
-(void)startPreviewUnpausing:(BOOL)arg1 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(BOOL)arg4 ;
-(CFDictionaryRef)copyCameraColorInfo;
-(BOOL)registerForFrames:(id)arg1 unpausing:(BOOL)arg2 ;
-(BOOL)isClientRegisteredForVideoFrames:(id)arg1 fromSource:(int)arg2 ;
-(id)copyLocalVideoAttributes;
-(CGSize)localExpectedRatioForScreenOrientation:(int)arg1 ;
-(id)copyLocalScreenAttributesForVideoAttributes:(id)arg1 ;
-(NSObject*<AVConferencePreviewDelegate>)appDelegate;
-(void)setAppDelegate:(NSObject*<AVConferencePreviewDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
-(id)allocWithZone:(NSZone*)arg1 ;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

