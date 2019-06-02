/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSDate, NSNumber, NSString;

@interface HKHorizontalTimePeriodChartPoint : NSObject <HKChartPoint> {

	NSDate* _xStart;
	NSDate* _xEnd;
	NSNumber* _yValue;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,retain) NSDate * xStart;                                            //@synthesize xStart=_xStart - In the implementation block
@property (nonatomic,retain) NSDate * xEnd;                                              //@synthesize xEnd=_xEnd - In the implementation block
@property (nonatomic,retain) NSNumber * yValue;                                          //@synthesize yValue=_yValue - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)xValueAsGenericType;
-(id)allYValues;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(NSDate *)xStart;
-(NSDate *)xEnd;
-(void)setXStart:(NSDate *)arg1 ;
-(void)setXEnd:(NSDate *)arg1 ;
-(NSNumber *)yValue;
-(void)setYValue:(NSNumber *)arg1 ;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
-(NSString *)description;
@end
