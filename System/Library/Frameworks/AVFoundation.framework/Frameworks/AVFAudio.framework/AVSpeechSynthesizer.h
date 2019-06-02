/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVSpeechSynthesizerDelegate;
@class NSArray, AVSpeechUtterance;

@interface AVSpeechSynthesizer : NSObject {

	BOOL _speaking;
	BOOL _paused;
	id<AVSpeechSynthesizerDelegate> _delegate;
	NSArray* _outputChannels;

}

@property (nonatomic,retain) AVSpeechUtterance * inflightUtterance; 
@property (assign,nonatomic,__weak) id<AVSpeechSynthesizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSpeaking,nonatomic,readonly) BOOL speaking;                            //@synthesize speaking=_speaking - In the implementation block
@property (getter=isPaused,nonatomic,readonly) BOOL paused;                                //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) NSArray * outputChannels;                                     //@synthesize outputChannels=_outputChannels - In the implementation block
+(/*^block*/id)assetFlushedCallback;
+(void)setAssetFlushedCallback:(/*^block*/id)arg1 ;
+(void)initialize;
-(void)speakUtterance:(id)arg1 ;
-(AVSpeechUtterance *)inflightUtterance;
-(void)setInflightUtterance:(AVSpeechUtterance *)arg1 ;
-(id)speechQueue;
-(void)_enqueueNextJob;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(BOOL)isSpeaking;
-(void)_handleAudioInterruption:(id)arg1 ;
-(void)_handleMediaServicesWereLost:(id)arg1 ;
-(void)_handleMediaServicesWereReset:(id)arg1 ;
-(BOOL)isInAudioInterruption;
-(BOOL)audioInterruptionStartedTime;
-(void)setDidRequestStartSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestPauseSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestResumeSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setIsInAudioInterruption:(BOOL)arg1 ;
-(void)setIsInternalSynth:(BOOL)arg1 ;
-(void)setShouldHandleAudioInterruptions:(BOOL)arg1 ;
-(BOOL)wasSpeakingBeforeAudioInterruption;
-(BOOL)pauseSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)stopSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)continueSpeaking;
-(void)setWasSpeakingBeforeAudioInterruption:(BOOL)arg1 ;
-(void)setAudioInterruptionStartedTime:(double)arg1 ;
-(BOOL)didRequestStartSpeakingDuringAudioInterruption;
-(BOOL)didRequestPauseSpeakingDuringAudioInterruption;
-(BOOL)didRequestResumeSpeakingDuringAudioInterruption;
-(void)_didBeginInterruption;
-(void)_didEndInterruption;
-(void)prepareSpeechManager;
-(void)tearDownWarmupManager;
-(BOOL)shouldHandleAudioInterruptions;
-(id)requestedUtteranceDuringAudioInterruption;
-(void)setRequestedUtteranceDuringAudioInterruption:(id)arg1 ;
-(BOOL)isInternalSynth;
-(void)_handleSpeechDone:(id)arg1 successful:(BOOL)arg2 ;
-(int)_convertBoundary:(long long)arg1 ;
-(void)_speakUtterance:(id)arg1 ;
-(id)speechManager;
-(id)init;
-(void)dealloc;
-(BOOL)isPaused;
-(NSArray *)outputChannels;
-(void)setOutputChannels:(NSArray *)arg1 ;
-(BOOL)isSpeaking;
-(BOOL)pauseSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)stopSpeakingAtBoundary:(long long)arg1 ;
-(BOOL)continueSpeaking;
-(void)speakUtterance:(id)arg1 ;
-(void)setDelegate:(id<AVSpeechSynthesizerDelegate>)arg1 ;
-(id<AVSpeechSynthesizerDelegate>)delegate;
-(BOOL)isPaused;
@end
