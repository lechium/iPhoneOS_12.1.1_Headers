/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaSocial/MediaSocial-Structs.h>
@class NSMutableArray, NSArray;

@interface MSCLWaveformImageProducer : NSObject {

	double _powerBarSpacing;
	double _powerBarWidth;
	NSMutableArray* _powerLevels;
	long long _waveformMode;

}

@property (nonatomic,copy) NSArray * powerLevels;                 //@synthesize powerLevels=_powerLevels - In the implementation block
@property (assign,nonatomic) double powerBarSpacing;              //@synthesize powerBarSpacing=_powerBarSpacing - In the implementation block
@property (assign,nonatomic) double powerBarWidth;                //@synthesize powerBarWidth=_powerBarWidth - In the implementation block
@property (assign,nonatomic) long long waveformMode;              //@synthesize waveformMode=_waveformMode - In the implementation block
-(id)imageWithSize:(CGSize)arg1 ;
-(void)appendPowerLevel:(double)arg1 ;
-(NSArray *)powerLevels;
-(void)setPowerLevels:(NSArray *)arg1 ;
-(id)_averagedPowerLevelsWithCount:(long long)arg1 ;
-(double)powerBarSpacing;
-(void)setPowerBarSpacing:(double)arg1 ;
-(double)powerBarWidth;
-(void)setPowerBarWidth:(double)arg1 ;
-(long long)waveformMode;
-(void)setWaveformMode:(long long)arg1 ;
-(id)init;
@end

