/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFSpeechRecognitionTaskDelegate <NSObject>
@optional
-(void)speechRecognitionDidDetectSpeech:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
-(void)speechRecognitionTaskFinishedReadingAudio:(id)arg1;
-(void)speechRecognitionTaskWasCancelled:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;

@end

