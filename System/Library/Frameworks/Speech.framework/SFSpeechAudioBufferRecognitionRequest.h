/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Speech/Speech-Structs.h>
#import <Speech/SFSpeechRecognitionRequest.h>

@protocol SFSpeechRecognitionBufferDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, AVAudioConverter, AVAudioFormat;

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest {

	id<SFSpeechRecognitionBufferDelegate> _bufferDelegate;
	NSMutableArray* _queuedBuffers;
	NSObject*<OS_dispatch_queue> _queue;
	AVAudioConverter* _converter;
	BOOL _audioEnded;

}

@property (nonatomic,readonly) AVAudioFormat * nativeAudioFormat; 
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
-(void)_appendAudioPCMBuffer:(id)arg1 ;
-(void)_appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_endAudio;
-(AVAudioFormat *)nativeAudioFormat;
-(void)_drainAndClearAudioConverter;
-(void)_convertAndFeedPCMBuffer:(id)arg1 ;
-(void)appendAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)endAudio;
-(void)appendAudioPCMBuffer:(id)arg1 ;
-(id)init;
@end

