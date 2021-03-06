/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:30 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator {

	NSArray* _basalBodyTempMultiplierTable;
	NSArray* _cervicalMucusTable;
	double _nextOvulationTestSampleTime;
	double _nextSexualActivitySampleTime;

}

@property (nonatomic,copy) NSArray * basalBodyTempMultiplierTable;              //@synthesize basalBodyTempMultiplierTable=_basalBodyTempMultiplierTable - In the implementation block
@property (nonatomic,copy) NSArray * cervicalMucusTable;                        //@synthesize cervicalMucusTable=_cervicalMucusTable - In the implementation block
@property (assign,nonatomic) double nextOvulationTestSampleTime;                //@synthesize nextOvulationTestSampleTime=_nextOvulationTestSampleTime - In the implementation block
@property (assign,nonatomic) double nextSexualActivitySampleTime;               //@synthesize nextSexualActivitySampleTime=_nextSexualActivitySampleTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)basalBodyTempForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)sexualActivityForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)cervicalMucusQualityForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(HDDemoDataMenstrualFlow)menstrualFlowForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)ovulationTestResultForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_isDemoPersonOvulating:(id)arg1 atTime:(double)arg2 ;
-(long long)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(NSArray *)cervicalMucusTable;
-(id)_basalBodyTempMultiplier;
-(NSArray *)basalBodyTempMultiplierTable;
-(void)setBasalBodyTempMultiplierTable:(NSArray *)arg1 ;
-(void)setCervicalMucusTable:(NSArray *)arg1 ;
-(double)nextOvulationTestSampleTime;
-(void)setNextOvulationTestSampleTime:(double)arg1 ;
-(double)nextSexualActivitySampleTime;
-(void)setNextSexualActivitySampleTime:(double)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

