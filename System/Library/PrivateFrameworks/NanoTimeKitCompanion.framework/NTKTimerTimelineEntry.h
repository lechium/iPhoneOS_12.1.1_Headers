/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKTimerTimelineEntry : NTKTimelineEntryModel {

	double _remainingTime;
	unsigned long long _state;
	double _countdownDuration;

}

@property (assign,nonatomic) double remainingTime;                  //@synthesize remainingTime=_remainingTime - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double countdownDuration;              //@synthesize countdownDuration=_countdownDuration - In the implementation block
+(id)companionModel;
+(id)_cornerSmallImageProvider;
+(id)_modularSmallImageProvider;
+(id)_circularSmallImageProvider;
+(id)_circularMediumImageProvider;
+(id)_utilitarianSmallImageProvider;
+(id)_extraLargeImageProvider;
-(void)setRemainingTime:(double)arg1 ;
-(double)remainingTime;
-(void)setCountdownDuration:(double)arg1 ;
-(id)_newSmallModularTemplate;
-(id)_newLargeModularTemplate;
-(id)_newCircularSmallTemplate;
-(id)_newSmallFlatUtilityTemplate;
-(id)_newLargeFlatUtilityTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newSignatureCornerGaugeImageTemplate;
-(id)_newCircularMediumTemplate;
-(double)countdownDuration;
-(id)_textProviderForTimeAtState:(unsigned long long)arg1 withUnknownText:(id)arg2 ;
-(id)_gaugeProviderForTimeAtState:(unsigned long long)arg1 ;
-(id)_textProviderForTimeAtState:(unsigned long long)arg1 ;
-(id)_relativeDateGaugeProviderForTimeInterval:(double)arg1 fullDuration:(double)arg2 paused:(BOOL)arg3 ;
-(id)_relativeDateTextProviderForTimeInterval:(double)arg1 paused:(BOOL)arg2 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end

