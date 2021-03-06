/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKGaugeProvider.h>

@class NSMutableDictionary, NSDate;

@interface CLKTimeIntervalGaugeProvider : CLKGaugeProvider {

	unsigned long long _nextUpdateToken;
	NSMutableDictionary* _updateHandlersByToken;
	NSNumber* _timerToken;
	BOOL _paused;
	float _startFillFraction;
	float _endFillFraction;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;                   //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) float startFillFraction;              //@synthesize startFillFraction=_startFillFraction - In the implementation block
@property (assign,nonatomic) float endFillFraction;                //@synthesize endFillFraction=_endFillFraction - In the implementation block
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
+(id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 startFillFraction:(float)arg5 endDate:(id)arg6 endFillFraction:(float)arg7 ;
+(BOOL)supportsSecureCoding;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartFillFraction:(float)arg1 ;
-(void)setEndFillFraction:(float)arg1 ;
-(void)_maybeStartOrStopUpdates;
-(float)startFillFraction;
-(float)endFillFraction;
-(void)stopUpdatesForToken:(NSNumber*)arg1 ;
-(NSNumber*)startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(double)progressFractionForNow:(id)arg1 ;
-(BOOL)needsTimerUpdates;
-(id)JSONObjectRepresentation;
-(id)initWithJSONObjectRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)_update;
-(void)validate;
-(BOOL)paused;
@end

