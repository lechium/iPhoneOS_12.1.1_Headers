/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIUIChartPoint.h>

@class NSDate, NSIndexSet, NSString, NSNumber;

@interface FIUIChartPointMultiple : NSObject <FIUIChartPoint> {

	NSDate* _xValue;
	NSIndexSet* _yValue;

}

@property (nonatomic,copy) NSIndexSet * yValue;                     //@synthesize yValue=_yValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDate * xValue;                         //@synthesize xValue=_xValue - In the implementation block
@property (nonatomic,readonly) NSNumber * minYValue; 
@property (nonatomic,readonly) NSNumber * maxYValue; 
+(id)chartPointWithXValue:(id)arg1 yValue:(id)arg2 ;
+(id)chartPointWithDate:(id)arg1 valueIndexSet:(id)arg2 ;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(NSDate *)xValue;
-(void)setXValue:(NSDate *)arg1 ;
-(NSIndexSet *)yValue;
-(void)setYValue:(NSIndexSet *)arg1 ;
-(NSString *)description;
@end

