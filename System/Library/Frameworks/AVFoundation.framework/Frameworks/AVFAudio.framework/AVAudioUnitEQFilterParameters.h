/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioUnitEQFilterParameters : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long filterType; 
@property (assign,nonatomic) float frequency; 
@property (assign,nonatomic) float bandwidth; 
@property (assign,nonatomic) float gain; 
@property (assign,nonatomic) BOOL bypass; 
-(void)setBandwidth:(float)arg1 ;
-(float)bandwidth;
-(id)initWithImpl:(AVAudioUnitEQFilterParametersImpl*)arg1 ;
-(BOOL)bypass;
-(void)setBypass:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setFilterType:(long long)arg1 ;
-(long long)filterType;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
-(void)setGain:(float)arg1 ;
-(float)gain;
@end

