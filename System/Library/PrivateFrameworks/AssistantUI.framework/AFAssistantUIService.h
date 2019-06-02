/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFAssistantUIService <NSObject>
@optional
-(void)assistantConnection:(id)arg1 startUIRequestWithText:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnectionRequestWillStart:(id)arg1;
-(void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
-(void)assistantConnectionRequestFinished:(id)arg1;
-(void)assistantConnection:(id)arg1 shouldSpeak:(BOOL)arg2;
-(void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned)arg2;
-(void)assistantConnectionWillStartAcousticIDRequest:(id)arg1;
-(void)assistantConnectionDidDetectMusic:(id)arg1;
-(void)assistantConnection:(id)arg1 didFinishAcousticIDRequestWithSuccess:(BOOL)arg2;
-(void)assistantConnection:(id)arg1 setUserActivtiyInfoAndMakeCurrent:(id)arg2 webpageURL:(id)arg3;
-(void)assistantConnectionInvalidateCurrentUserActivity:(id)arg1;
-(void)assistantConnection:(id)arg1 wantsToCacheImage:(id)arg2;
-(void)assistantConnection:(id)arg1 extensionRequestWillStartForApplication:(id)arg2;
-(void)assistantConnection:(id)arg1 extensionRequestFinishedForApplication:(id)arg2 error:(id)arg3;
-(void)assistantConnectionAudioSessionDidBeginInterruption:(id)arg1;
-(void)assistantConnectionAudioSessionDidEndInterruption:(id)arg1 shouldResume:(BOOL)arg2;
-(void)assistantConnection:(id)arg1 willStartAudioPlaybackRequest:(id)arg2;
-(void)assistantConnection:(id)arg1 didStartAudioPlaybackRequest:(id)arg2;
-(void)assistantConnection:(id)arg1 didNotStartAudioPlaybackRequest:(id)arg2 error:(id)arg3;
-(void)assistantConnection:(id)arg1 didStopAudioPlaybackRequest:(id)arg2 error:(id)arg3;
-(void)assistantConnection:(id)arg1 willProcessStartPlayback:(long long)arg2;
-(void)assistantConnection:(id)arg1 startPlaybackDidFail:(long long)arg2;
-(void)assistantConnection:(id)arg1 audioSessionWillBecomeActive:(BOOL)arg2;
-(void)assistantConnection:(id)arg1 audioSessionDidBecomeActive:(BOOL)arg2;
-(void)assistantConnection:(id)arg1 openApplicationWithBundleID:(id)arg2 URL:(id)arg3 completion:(/*^block*/id)arg4;
-(void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assistantConnectionDismissAssistant:(id)arg1;
-(void)assistantConnection:(id)arg1 didHandleQuickStopWithAction:(unsigned long long)arg2;

@end

