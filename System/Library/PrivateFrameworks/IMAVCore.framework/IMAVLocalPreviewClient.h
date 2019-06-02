/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAVCore/IMAVCore-Structs.h>
#import <libobjc.A.dylib/AVConferencePreviewClientDelegate.h>
#import <IMAVCore/IMSystemMonitorListener.h>

@class AVConferencePreview, IMAVCamera;

@interface IMAVLocalPreviewClient : NSObject <AVConferencePreviewClientDelegate, IMSystemMonitorListener> {

	BOOL _shouldAlterPreviewState;
	BOOL _wantsPreview;
	BOOL _wantsPausedPreview;
	BOOL _wantsUnpausedPreview;
	AVConferencePreview* _conferencePreview;

}

@property (nonatomic,retain) AVConferencePreview * conferencePreview;              //@synthesize conferencePreview=_conferencePreview - In the implementation block
@property (nonatomic,readonly) BOOL isPreviewRunning; 
@property (assign,nonatomic) unsigned cameraType; 
@property (assign,nonatomic) unsigned cameraOrientation; 
@property (assign,nonatomic) IMAVCamera * localCamera; 
@property (assign,nonatomic) void* localVideoLayer; 
@property (assign,nonatomic) void* localVideoBackLayer; 
+(CGSize)localPortraitAspectRatio;
+(id)sharedInstance;
-(unsigned)cameraType;
-(void*)localVideoLayer;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoBackLayer;
-(void)setLocalVideoBackLayer:(void*)arg1 ;
-(void)avChat:(id)arg1 setLocalPortraitRatio:(CGSize)arg2 localLandscapeRatio:(CGSize)arg3 ;
-(void)_avDaemonConnected;
-(AVConferencePreview *)conferencePreview;
-(BOOL)_shouldPreviewBeRunning;
-(void)_updatePreviewState;
-(void)updateLocalScreenAtrributes;
-(void)unpausePreview;
-(void)beginAnimationToPIP;
-(void)endAnimationToPIP;
-(void)beginAnimationToPreview;
-(void)endAnimationToPreview;
-(void)setConferencePreview:(AVConferencePreview *)arg1 ;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(void)startPreview;
-(BOOL)isPreviewRunning;
-(void)pausePreview;
-(void)stopPreview;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)didStartPreview;
-(void)didStopPreview;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didPausePreview;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(void)setLocalCamera:(IMAVCamera *)arg1 ;
-(IMAVCamera *)localCamera;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
-(void)systemScreenDidPowerUp;
-(void)systemScreenDidPowerDown;
-(void)setCameraOrientation:(unsigned)arg1 ;
-(unsigned)cameraOrientation;
-(void)setCameraType:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
@end

