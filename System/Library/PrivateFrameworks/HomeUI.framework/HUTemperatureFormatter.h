/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Foundation/NSMeasurementFormatter.h>
#import <libobjc.A.dylib/HFTemperatureUnitObserver.h>
#import <libobjc.A.dylib/HFTemperatureFormatter.h>

@class NSString, NSNumber;

@interface HUTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver, HFTemperatureFormatter> {

	BOOL _inputIsCelsius;
	BOOL _outputIsCelsius;
	NSString* _fallbackTemperatureString;
	NSNumber* _stepValue;

}

@property (assign,nonatomic) BOOL inputIsCelsius;                                   //@synthesize inputIsCelsius=_inputIsCelsius - In the implementation block
@property (assign,nonatomic) BOOL outputIsCelsius;                                  //@synthesize outputIsCelsius=_outputIsCelsius - In the implementation block
@property (nonatomic,retain) NSNumber * stepValue;                                  //@synthesize stepValue=_stepValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * fallbackTemperatureString;                    //@synthesize fallbackTemperatureString=_fallbackTemperatureString - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFractionDigits; 
@property (assign,nonatomic) unsigned long long minimumFractionDigits; 
-(unsigned long long)minimumFractionDigits;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(void)setInputIsCelsius:(BOOL)arg1 ;
-(void)setOutputIsCelsius:(BOOL)arg1 ;
-(BOOL)inputIsCelsius;
-(BOOL)outputIsCelsius;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(BOOL)arg2 ;
-(NSString *)fallbackTemperatureString;
-(void)setFallbackTemperatureString:(NSString *)arg1 ;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStepValue:(NSNumber *)arg1 ;
-(NSNumber *)stepValue;
-(id)stringForObjectValue:(id)arg1 ;
@end
