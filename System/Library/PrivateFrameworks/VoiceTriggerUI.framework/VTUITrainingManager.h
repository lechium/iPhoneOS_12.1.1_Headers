/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTUITrainingSessionDelegate.h>
#import <libobjc.A.dylib/VTUIAudioSessionDelegate.h>
#import <libobjc.A.dylib/AFAudioAnalyzerDelegate.h>

@protocol VTUIAudioSession, OS_dispatch_queue, VTUITrainingManagerDelegate;
@class NSString, AFAudioAnalyzer, VTPhraseSpotter, NSMutableArray, VTUITrainingSession, NSObject, SFSpeechRecognizer;

@interface VTUITrainingManager : NSObject <VTUITrainingSessionDelegate, VTUIAudioSessionDelegate, AFAudioAnalyzerDelegate> {

	BOOL _performRMS;
	NSString* _locale;
	id<VTUIAudioSession> _audioSession;
	AFAudioAnalyzer* _audioAnalyzer;
	VTPhraseSpotter* _phraseSpotter;
	NSMutableArray* _trainingSessions;
	VTUITrainingSession* _currentTrainingSession;
	long long _sessionNumber;
	BOOL _suspendAudio;
	NSObject*<OS_dispatch_queue> _queue;
	SFSpeechRecognizer* _speechRecognizer;
	/*^block*/id _cleanupCompletion;
	BOOL _speechRecognizerAvailable;
	float _rms;
	id<VTUITrainingManagerDelegate> _delegate;

}

@property (assign) float rms;                                                              //@synthesize rms=_rms - In the implementation block
@property (assign,nonatomic,__weak) id<VTUITrainingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL speechRecognizerAvailable;                                       //@synthesize speechRecognizerAvailable=_speechRecognizerAvailable - In the implementation block
@property (readonly) int audioSource; 
@property (assign) BOOL suspendAudio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedtrainingSessionQueue;
+(id)trainingManagerWithLocaleID:(id)arg1 ;
-(void)audioAnalyzer:(id)arg1 didDetectStartpointAtTime:(double)arg2 ;
-(void)audioAnalyzer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 ;
-(BOOL)_startAudioSession;
-(void)_stopAudioSession;
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(void)setLocaleIdentifier:(id)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg1 withAudioSession:(id)arg2 ;
-(void)_destroyAudioSession;
-(BOOL)_setupAudioSession;
-(void)closeSessionBeforeStartWithStatus:(int)arg1 successfully:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)_createAudioAnalyzer;
-(BOOL)_shouldShowHeadsetDisconnectionMessage;
-(void)createSpeechRecognizer;
-(int)_audioSource;
-(void)audioSessionDidStartRecording:(BOOL)arg1 error:(id)arg2 ;
-(void)audioSessionDidStopRecording:(long long)arg1 ;
-(void)audioSessionRecordBufferAvailable:(id)arg1 ;
-(void)audioSessionErrorDidOccur:(id)arg1 ;
-(void)audioSessionUnsupportedAudioRoute;
-(void)_beginOfSpeechDetected;
-(void)_endOfSpeechDetected;
-(id)cleanupWithCompletion:(/*^block*/id)arg1 ;
-(long long)trainUtterance:(long long)arg1 shouldUseASR:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)cancelTrainingForID:(long long)arg1 ;
-(BOOL)suspendAudio;
-(void)setSuspendAudio:(BOOL)arg1 ;
-(void)startRMS;
-(void)stopRMS;
-(BOOL)shouldPerformRMS;
-(void)didDetectForceEndPoint;
-(void)VTUITrainingSessionStopListen;
-(float)rms;
-(void)setRms:(float)arg1 ;
-(BOOL)speechRecognizerAvailable;
-(BOOL)createVoiceTrigger;
-(void)destroyVoiceTrigger;
-(void)VTUITrainingSessionRMSAvailable:(float)arg1 ;
-(int)audioSource;
-(void)setDelegate:(id<VTUITrainingManagerDelegate>)arg1 ;
-(id<VTUITrainingManagerDelegate>)delegate;
-(void)reset;
@end

