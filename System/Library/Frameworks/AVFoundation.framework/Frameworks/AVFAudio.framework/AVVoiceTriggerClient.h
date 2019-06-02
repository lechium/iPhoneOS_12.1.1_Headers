/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVVoiceTriggerClient : NSObject {

	/*^block*/id _voiceTriggerBlock;
	/*^block*/id _speakerStateChangedBlock;
	/*^block*/id _speakerMuteStateChangedBlock;
	/*^block*/id _serverCrashedBlock;
	/*^block*/id _serverResetBlock;

}

@property (nonatomic,copy) id voiceTriggerBlock;                                                    //@synthesize voiceTriggerBlock=_voiceTriggerBlock - In the implementation block
@property (nonatomic,copy) id speakerStateChangedBlock;                                             //@synthesize speakerStateChangedBlock=_speakerStateChangedBlock - In the implementation block
@property (nonatomic,copy) id speakerMuteStateChangedBlock;                                         //@synthesize speakerMuteStateChangedBlock=_speakerMuteStateChangedBlock - In the implementation block
@property (nonatomic,copy) id serverCrashedBlock;                                                   //@synthesize serverCrashedBlock=_serverCrashedBlock - In the implementation block
@property (nonatomic,copy) id serverResetBlock;                                                     //@synthesize serverResetBlock=_serverResetBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long voiceTriggerPastDataFramesAvailable; 
-(void)handleMediaServerDeath:(id)arg1 ;
-(void)handleMediaServerReset:(id)arg1 ;
-(void)enableVoiceTriggerListening:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateVoiceTriggerConfiguration:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)voiceTriggerServerConnection;
-(unsigned long long)voiceTriggerPastDataFramesAvailable;
-(void)enableVoiceTriggerListening:(BOOL)arg1 ;
-(void)enableSpeakerStateListening:(BOOL)arg1 ;
-(BOOL)speakerStateActive;
-(BOOL)speakerStateMuted;
-(void)updateVoiceTriggerConfiguration:(id)arg1 ;
-(void)voiceTriggerNotification:(id)arg1 ;
-(void)speakerStateChangedNotification:(id)arg1 ;
-(void)speakerMuteStateChangedNotification:(BOOL)arg1 ;
-(id)voiceTriggerBlock;
-(void)setVoiceTriggerBlock:(id)arg1 ;
-(id)speakerStateChangedBlock;
-(void)setSpeakerStateChangedBlock:(id)arg1 ;
-(id)speakerMuteStateChangedBlock;
-(void)setSpeakerMuteStateChangedBlock:(id)arg1 ;
-(id)serverCrashedBlock;
-(void)setServerCrashedBlock:(id)arg1 ;
-(id)serverResetBlock;
-(void)setServerResetBlock:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

