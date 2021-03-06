/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKChartPoint.h>

@protocol HKGraphSeriesBlockCoordinateInfo;
@class NSDate, NSNumber, NSString;

@interface HKInsulinChartPoint : NSObject <HKChartPoint> {

	NSDate* _startDate;
	NSNumber* _basalSum;
	NSNumber* _totalSum;
	NSDate* _midDate;
	id<HKGraphSeriesBlockCoordinateInfo> _userInfo;

}

@property (nonatomic,retain) NSDate * startDate;                                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * midDate;                                           //@synthesize midDate=_midDate - In the implementation block
@property (nonatomic,retain) NSNumber * basalSum;                                        //@synthesize basalSum=_basalSum - In the implementation block
@property (nonatomic,retain) NSNumber * totalSum;                                        //@synthesize totalSum=_totalSum - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesBlockCoordinateInfo> userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)xValueAsGenericType;
-(id)allYValues;
-(id)minXValueAsGenericType;
-(id)maxXValueAsGenericType;
-(id)yValueForKey:(id)arg1 ;
-(id)minYValue;
-(id)maxYValue;
-(NSDate *)midDate;
-(NSNumber *)totalSum;
-(NSNumber *)basalSum;
-(void)setBasalSum:(NSNumber *)arg1 ;
-(void)setTotalSum:(NSNumber *)arg1 ;
-(void)setMidDate:(NSDate *)arg1 ;
-(id)yValue;
-(id<HKGraphSeriesBlockCoordinateInfo>)userInfo;
-(void)setUserInfo:(id<HKGraphSeriesBlockCoordinateInfo>)arg1 ;
@end

