/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject, _EARSpeechRecognizer;

@interface _EARSpeechRecognitionAudioBuffer : NSObject {

	shared_ptr<quasar::RecogAudioBufferBase>* _buffer;
	NSObject*<OS_dispatch_queue> _queue;
	_EARSpeechRecognizer* _speechRecognizer;
	BOOL _cancelled;
	BOOL _ended;

}
+(void)initialize;
-(void)_detachFromRecognizer;
-(id)_initWithAudioBuffer:(shared_ptr<quasar::RecogAudioBufferBase>*)arg1 speechRecognizer:(id)arg2 ;
-(void)addAudioSampleData:(id)arg1 ;
-(void)triggerServerSideEndPointer;
-(void)endAudio;
-(void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(void)cancelRecognition;
@end

