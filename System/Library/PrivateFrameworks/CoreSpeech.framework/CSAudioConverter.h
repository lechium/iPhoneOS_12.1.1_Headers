/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSAudioConverterDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSMutableData;

@interface CSAudioConverter : NSObject {

	OpaqueAudioConverterRef _opusConverter;
	NSMutableData* _bufferedLPCM;
	unsigned _recordBasePacketsPerSecond;
	AudioStreamBasicDescription _opusOutASBD;
	unsigned _convertPacketCount;
	unsigned _convertAudioCapacity;
	unsigned long long _lastTimestamp;
	id<CSAudioConverterDelegate> _delegate;

}

@property (__weak) id<CSAudioConverterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)narrowBandOpusConverter;
+(id)opusConverter;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(void)_configureAudioConverter:(OpaqueAudioConverterRef)arg1 ;
-(void)_convertBufferedLPCM:(id)arg1 allowPartial:(BOOL)arg2 timestamp:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id<CSAudioConverterDelegate>)arg1 ;
-(id<CSAudioConverterDelegate>)delegate;
-(void)reset;
-(void)flush;
@end

