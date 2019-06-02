/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationRectangularDailyGraphView.h>

@class NSArray, NSNumber, NSDate, NSDateInterval;

@interface NTKHeartRateRichComplicationRectangularView : NTKRichComplicationRectangularDailyGraphView {

	double _cornerRadius;
	NSArray* _chartPoints;
	NSNumber* _highBPM;
	NSNumber* _lowBPM;
	NSDate* _measurementDate;
	NSDateInterval* _measurementDateDayInterval;

}

@property (assign,nonatomic) double cornerRadius;                                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) NSArray * chartPoints;                                    //@synthesize chartPoints=_chartPoints - In the implementation block
@property (assign,nonatomic) NSNumber * highBPM;                                       //@synthesize highBPM=_highBPM - In the implementation block
@property (assign,nonatomic) NSNumber * lowBPM;                                        //@synthesize lowBPM=_lowBPM - In the implementation block
@property (nonatomic,retain) NSDate * measurementDate;                                 //@synthesize measurementDate=_measurementDate - In the implementation block
@property (nonatomic,retain) NSDateInterval * measurementDateDayInterval;              //@synthesize measurementDateDayInterval=_measurementDateDayInterval - In the implementation block
-(void)drawGraph:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(void)loadWithMetadata:(id)arg1 ;
-(void)setMeasurementDate:(NSDate *)arg1 ;
-(void)setChartPoints:(NSArray *)arg1 ;
-(NSArray *)chartPoints;
-(NSDate *)measurementDate;
-(NSNumber *)highBPM;
-(NSNumber *)lowBPM;
-(double)_xValueForPointFromChartPoint:(id)arg1 inRect:(CGRect)arg2 ;
-(double)_yValueForPointFromChartPointValue:(id)arg1 betweenHigh:(id)arg2 andLow:(id)arg3 inRect:(CGRect)arg4 ;
-(void)_loadLockedState;
-(void)_loadWithMetadata:(id)arg1 ;
-(void)_loadNoDataState;
-(void)setHighBPM:(NSNumber *)arg1 ;
-(void)setLowBPM:(NSNumber *)arg1 ;
-(void)setMeasurementDateDayInterval:(NSDateInterval *)arg1 ;
-(void)_updateDailyLabel:(id)arg1 withBPM:(id)arg2 ;
-(NSDateInterval *)measurementDateDayInterval;
-(id)init;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
@end
