/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAudioMixInputParameters.h>

@class AVMutableAudioMixInputParametersInternal, NSString;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters {

	AVMutableAudioMixInputParametersInternal* _mutableInputParameters;

}

@property (assign,nonatomic) int trackID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (nonatomic,retain) const opaqueMTAudioProcessingTapRef audioTapProcessor; 
+(id)audioMixInputParameters;
+(id)audioMixInputParametersWithTrack:(id)arg1 ;
-(const opaqueMTAudioProcessingTapRef)audioTapProcessor;
-(void)setAudioTapProcessor:(const opaqueMTAudioProcessingTapRef)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(void)setVolume:(float)arg1 atTime:(SCD_Struct_AV5)arg2 ;
-(void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(SCD_Struct_AV6)arg3 ;
@end

