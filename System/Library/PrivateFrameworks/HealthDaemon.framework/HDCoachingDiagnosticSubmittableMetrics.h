/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray, HKActivitySummary, NSDateComponents, NSNumber, HKQuantitySample;

@interface HDCoachingDiagnosticSubmittableMetrics : NSObject {

	NSDate* _startOfDay;
	NSArray* _diagnosticData;
	HKActivitySummary* _activitySummary;
	NSDateComponents* _dateOfBirth;
	NSNumber* _biologicalSex;
	HKQuantitySample* _heightSample;
	HKQuantitySample* _weightSample;

}

@property (nonatomic,retain) NSDate * startOfDay;                              //@synthesize startOfDay=_startOfDay - In the implementation block
@property (nonatomic,readonly) NSArray * diagnosticData;                       //@synthesize diagnosticData=_diagnosticData - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;              //@synthesize activitySummary=_activitySummary - In the implementation block
@property (nonatomic,retain) NSDateComponents * dateOfBirth;                   //@synthesize dateOfBirth=_dateOfBirth - In the implementation block
@property (nonatomic,retain) NSNumber * biologicalSex;                         //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (nonatomic,retain) HKQuantitySample * heightSample;                  //@synthesize heightSample=_heightSample - In the implementation block
@property (nonatomic,retain) HKQuantitySample * weightSample;                  //@synthesize weightSample=_weightSample - In the implementation block
-(NSNumber *)biologicalSex;
-(void)setBiologicalSex:(NSNumber *)arg1 ;
-(void)addDiagnosticDataObject:(id)arg1 ;
-(NSDate *)startOfDay;
-(void)setStartOfDay:(NSDate *)arg1 ;
-(NSArray *)diagnosticData;
-(HKActivitySummary *)activitySummary;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(NSDateComponents *)dateOfBirth;
-(void)setDateOfBirth:(NSDateComponents *)arg1 ;
-(HKQuantitySample *)heightSample;
-(void)setHeightSample:(HKQuantitySample *)arg1 ;
-(HKQuantitySample *)weightSample;
-(void)setWeightSample:(HKQuantitySample *)arg1 ;
-(id)init;
@end

