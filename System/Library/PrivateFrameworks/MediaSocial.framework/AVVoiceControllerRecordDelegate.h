/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVVoiceControllerRecordDelegate <NSObject>
@optional
-(void)voiceControllerDidDetectStartpoint:(id)arg1;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
-(void)voiceControllerBeginRecordInterruption:(id)arg1;
-(void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
-(void)voiceControllerEndRecordInterruption:(id)arg1;
-(void)voiceControllerMediaServicesWereLost:(id)arg1;
-(void)voiceControllerMediaServicesWereReset:(id)arg1;
-(void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(BOOL)arg2;
-(void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(BOOL)arg2;
-(void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;

@end

