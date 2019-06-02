/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioMixing.h>

@class AVAudioConnectionPoint, NSString;

@interface AVAudioMixingDestination : NSObject <AVAudioMixing> {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioConnectionPoint * connectionPoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(id)initWithImpl:(AVAudioMixingImpl*)arg1 ;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2 ;
-(AVAudioConnectionPoint *)connectionPoint;
-(AVAudioMixingImpl*)implementation;
-(long long)renderingAlgorithm;
-(void)setRenderingAlgorithm:(long long)arg1 ;
-(float)reverbBlend;
-(void)setReverbBlend:(float)arg1 ;
-(float)obstruction;
-(void)setObstruction:(float)arg1 ;
-(float)occlusion;
-(void)setOcclusion:(float)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setPosition:(AVAudio3DPoint)arg1 ;
-(AVAudio3DPoint)position;
-(void)setPan:(float)arg1 ;
-(float)pan;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(void)setRate:(float)arg1 ;
-(float)rate;
@end

