/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSString, NSMutableData;

@interface CannedAudioInjector : NSObject {

	NSString* _cannedMoviePath;
	NSMutableData* _samples;
	int _position;
	BOOL _fromBeginning;
	opaque_pthread_mutex_t _samplesMutex;
	opaque_pthread_cond_t _samplesConditional;
	AudioStreamBasicDescription _internalFormat;

}

@property (nonatomic,retain) NSString * cannedMoviePath;              //@synthesize cannedMoviePath=_cannedMoviePath - In the implementation block
@property (nonatomic,retain) NSMutableData * samples;                 //@synthesize samples=_samples - In the implementation block
@property (assign,nonatomic) int position;                            //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL fromBeginning;                      //@synthesize fromBeginning=_fromBeginning - In the implementation block
+(BOOL)isAudioAvailable:(id)arg1 ;
-(int)readRawAudioSamples;
-(int)decodeAudio;
-(NSString *)cannedMoviePath;
-(id)initWithPath:(id)arg1 withDescription:(AudioStreamBasicDescription)arg2 fromBeginning:(BOOL)arg3 ;
-(void)injectToBuffer:(char*)arg1 size:(int)arg2 time:(double)arg3 muted:(BOOL)arg4 ;
-(void)setCannedMoviePath:(NSString *)arg1 ;
-(BOOL)fromBeginning;
-(void)setFromBeginning:(BOOL)arg1 ;
-(void)dealloc;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(NSMutableData *)samples;
-(void)setSamples:(NSMutableData *)arg1 ;
@end

