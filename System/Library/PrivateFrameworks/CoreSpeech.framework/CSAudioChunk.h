/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface CSAudioChunk : NSObject {

	NSData* _data;
	unsigned long long _numChannels;
	unsigned long long _numSamples;
	unsigned long long _sampleByteDepth;
	unsigned long long _startSampleCount;
	unsigned long long _hostTime;

}

@property (nonatomic,readonly) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long numChannels;                   //@synthesize numChannels=_numChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numSamples;                    //@synthesize numSamples=_numSamples - In the implementation block
@property (nonatomic,readonly) unsigned long long sampleByteDepth;               //@synthesize sampleByteDepth=_sampleByteDepth - In the implementation block
@property (nonatomic,readonly) unsigned long long startSampleCount;              //@synthesize startSampleCount=_startSampleCount - In the implementation block
@property (nonatomic,readonly) unsigned long long hostTime;                      //@synthesize hostTime=_hostTime - In the implementation block
-(id)dataForChannel:(unsigned long long)arg1 ;
-(unsigned long long)startSampleCount;
-(unsigned long long)numSamples;
-(id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 numChannels:(unsigned long long)arg2 numSamples:(unsigned long long)arg3 sampleByteDepth:(unsigned long long)arg4 startSampleCount:(unsigned long long)arg5 hostTime:(unsigned long long)arg6 ;
-(unsigned long long)numChannels;
-(id)subChunkFrom:(unsigned long long)arg1 numSamples:(unsigned long long)arg2 forChannel:(unsigned long long)arg3 ;
-(void)skipSamplesAtStartSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)splitAudioChunkSuchThatNumSamplesReceivedSoFar:(unsigned long long)arg1 reachesACountOf:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)sampleByteDepth;
-(id)_fidesRecordInfo;
-(unsigned long long)hostTime;
-(NSData *)data;
@end

