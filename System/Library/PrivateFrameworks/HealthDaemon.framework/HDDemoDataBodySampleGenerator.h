/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataBodySampleGenerator : HDDemoDataBaseSampleGenerator {

	NSArray* _boysHeightBirthTo36MonthsGrowthCurve;
	NSArray* _boysHeight2To20YearsGrowthCurve;
	NSArray* _boysWeightBirthTo36MonthsGrowthCurve;
	NSArray* _boysWeight2To20YearsGrowthCurve;
	NSArray* _girlsHeightBirthTo36MonthsGrowthCurve;
	NSArray* _girlsHeight2To20YearsGrowthCurve;
	NSArray* _girlsWeightBirthTo36MonthsGrowthCurve;
	NSArray* _girlsWeight2To20YearsGrowthCurve;
	double _nextHeightSampleTime;
	double _nextWeightSampleTime;
	double _lastHeightInCm;
	double _lastWeightInKg;
	double _weightAdultStartInKg;

}

@property (nonatomic,copy) NSArray * boysHeightBirthTo36MonthsGrowthCurve;               //@synthesize boysHeightBirthTo36MonthsGrowthCurve=_boysHeightBirthTo36MonthsGrowthCurve - In the implementation block
@property (nonatomic,copy) NSArray * boysHeight2To20YearsGrowthCurve;                    //@synthesize boysHeight2To20YearsGrowthCurve=_boysHeight2To20YearsGrowthCurve - In the implementation block
@property (nonatomic,copy) NSArray * boysWeightBirthTo36MonthsGrowthCurve;               //@synthesize boysWeightBirthTo36MonthsGrowthCurve=_boysWeightBirthTo36MonthsGrowthCurve - In the implementation block
@property (nonatomic,copy) NSArray * boysWeight2To20YearsGrowthCurve;                    //@synthesize boysWeight2To20YearsGrowthCurve=_boysWeight2To20YearsGrowthCurve - In the implementation block
@property (nonatomic,copy) NSArray * girlsHeightBirthTo36MonthsGrowthCurve;              //@synthesize girlsHeightBirthTo36MonthsGrowthCurve=_girlsHeightBirthTo36MonthsGrowthCurve - In the implementation block
@property (nonatomic,copy) NSArray * girlsHeight2To20YearsGrowthCurve;                   //@synthesize girlsHeight2To20YearsGrowthCurve=_girlsHeight2To20YearsGrowthCurve - In the implementation block
@property (nonatomic,copy) NSArray * girlsWeightBirthTo36MonthsGrowthCurve;              //@synthesize girlsWeightBirthTo36MonthsGrowthCurve=_girlsWeightBirthTo36MonthsGrowthCurve - In the implementation block
@property (nonatomic,copy) NSArray * girlsWeight2To20YearsGrowthCurve;                   //@synthesize girlsWeight2To20YearsGrowthCurve=_girlsWeight2To20YearsGrowthCurve - In the implementation block
@property (assign,nonatomic) double nextHeightSampleTime;                                //@synthesize nextHeightSampleTime=_nextHeightSampleTime - In the implementation block
@property (assign,nonatomic) double nextWeightSampleTime;                                //@synthesize nextWeightSampleTime=_nextWeightSampleTime - In the implementation block
@property (assign,nonatomic) double lastHeightInCm;                                      //@synthesize lastHeightInCm=_lastHeightInCm - In the implementation block
@property (assign,nonatomic) double lastWeightInKg;                                      //@synthesize lastWeightInKg=_lastWeightInKg - In the implementation block
@property (assign,nonatomic) double weightAdultStartInKg;                                //@synthesize weightAdultStartInKg=_weightAdultStartInKg - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(double)lastWeightInKg;
-(double)lastHeightInCm;
-(id)heightForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)weightForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)leanBodyMassForDemoPerson:(id)arg1 weight:(double)arg2 ;
-(double)bodyFatPercentageForDemoPerson:(id)arg1 atTime:(double)arg2 weight:(double)arg3 leanBodyMass:(double)arg4 ;
-(double)bodyMassIndexForDemoPerson:(id)arg1 weight:(double)arg2 height:(double)arg3 ;
-(id)_heightCurveForAge:(double)arg1 sex:(long long)arg2 ;
-(double)weightChangeForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)_weightCurveForAge:(double)arg1 sex:(long long)arg2 ;
-(NSArray *)boysHeightBirthTo36MonthsGrowthCurve;
-(void)setBoysHeightBirthTo36MonthsGrowthCurve:(NSArray *)arg1 ;
-(NSArray *)boysHeight2To20YearsGrowthCurve;
-(void)setBoysHeight2To20YearsGrowthCurve:(NSArray *)arg1 ;
-(NSArray *)boysWeightBirthTo36MonthsGrowthCurve;
-(void)setBoysWeightBirthTo36MonthsGrowthCurve:(NSArray *)arg1 ;
-(NSArray *)boysWeight2To20YearsGrowthCurve;
-(void)setBoysWeight2To20YearsGrowthCurve:(NSArray *)arg1 ;
-(NSArray *)girlsHeightBirthTo36MonthsGrowthCurve;
-(void)setGirlsHeightBirthTo36MonthsGrowthCurve:(NSArray *)arg1 ;
-(NSArray *)girlsHeight2To20YearsGrowthCurve;
-(void)setGirlsHeight2To20YearsGrowthCurve:(NSArray *)arg1 ;
-(NSArray *)girlsWeightBirthTo36MonthsGrowthCurve;
-(void)setGirlsWeightBirthTo36MonthsGrowthCurve:(NSArray *)arg1 ;
-(NSArray *)girlsWeight2To20YearsGrowthCurve;
-(void)setGirlsWeight2To20YearsGrowthCurve:(NSArray *)arg1 ;
-(double)nextHeightSampleTime;
-(void)setNextHeightSampleTime:(double)arg1 ;
-(double)nextWeightSampleTime;
-(void)setNextWeightSampleTime:(double)arg1 ;
-(void)setLastHeightInCm:(double)arg1 ;
-(void)setLastWeightInKg:(double)arg1 ;
-(double)weightAdultStartInKg;
-(void)setWeightAdultStartInKg:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
