/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class HKUnit, NSDateComponents, NSString;

@interface HKInteractiveChartSinglePointData : NSObject <HKGraphSeriesChartData> {

	BOOL _representsRange;
	double _value;
	HKUnit* _unit;
	long long _recordCount;
	double _minValue;
	double _maxValue;
	NSDateComponents* _statisticsInterval;

}

@property (assign,nonatomic) double value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) HKUnit * unit;                                      //@synthesize unit=_unit - In the implementation block
@property (assign,nonatomic) BOOL representsRange;                               //@synthesize representsRange=_representsRange - In the implementation block
@property (assign,nonatomic) long long recordCount;                              //@synthesize recordCount=_recordCount - In the implementation block
@property (assign,nonatomic) double minValue;                                    //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                                    //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,retain) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecordCount:(long long)arg1 ;
-(long long)recordCount;
-(void)setMaxValue:(double)arg1 ;
-(double)maxValue;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
-(void)setMinValue:(double)arg1 ;
-(BOOL)representsRange;
-(void)setRepresentsRange:(BOOL)arg1 ;
-(double)minValue;
-(NSString *)description;
-(double)value;
-(void)setValue:(double)arg1 ;
-(void)setStatisticsInterval:(NSDateComponents *)arg1 ;
-(NSDateComponents *)statisticsInterval;
@end

