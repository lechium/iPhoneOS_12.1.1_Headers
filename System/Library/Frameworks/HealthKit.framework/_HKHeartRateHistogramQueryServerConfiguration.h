/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents, HKQuantity;

@interface _HKHeartRateHistogramQueryServerConfiguration : HKQueryServerConfiguration {

	NSDate* _startDate;
	NSDate* _endDate;
	long long _contextStyle;
	NSDate* _anchorDate;
	NSDateComponents* _intervalComponents;
	HKQuantity* _histogramAnchor;
	HKQuantity* _histogramBucketSize;

}

@property (nonatomic,copy) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                   //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long contextStyle;                           //@synthesize contextStyle=_contextStyle - In the implementation block
@property (nonatomic,copy) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,copy) NSDateComponents * intervalComponents;              //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (nonatomic,copy) HKQuantity * histogramAnchor;                       //@synthesize histogramAnchor=_histogramAnchor - In the implementation block
@property (nonatomic,copy) HKQuantity * histogramBucketSize;                   //@synthesize histogramBucketSize=_histogramBucketSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setContextStyle:(long long)arg1 ;
-(void)setAnchorDate:(NSDate *)arg1 ;
-(void)setIntervalComponents:(NSDateComponents *)arg1 ;
-(void)setHistogramAnchor:(HKQuantity *)arg1 ;
-(void)setHistogramBucketSize:(HKQuantity *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDateComponents *)intervalComponents;
-(NSDate *)anchorDate;
-(HKQuantity *)histogramBucketSize;
-(HKQuantity *)histogramAnchor;
-(long long)contextStyle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

