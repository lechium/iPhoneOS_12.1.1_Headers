/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSNumber, PDContainer;

@interface PDMeasurement : NSObject {

	BOOL _largerBetter;
	NSString* _metric;
	NSString* _unitString;
	NSDictionary* _variables;
	unsigned long long _group;
	NSNumber* _value;
	NSNumber* _sampleCount;
	NSNumber* _mean;
	NSNumber* _standardDeviation;
	NSNumber* _minimum;
	NSNumber* _maximum;
	NSDictionary* _measurement;
	PDContainer* _container;
	NSString* _cachedMetricFilter;

}

@property (nonatomic,retain) NSDictionary * measurement;                             //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,retain) NSString * metric;                                      //@synthesize metric=_metric - In the implementation block
@property (nonatomic,retain) NSString * unitString;                                  //@synthesize unitString=_unitString - In the implementation block
@property (assign,nonatomic,__weak) PDContainer * container;                         //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSDictionary * variables;                               //@synthesize variables=_variables - In the implementation block
@property (assign,nonatomic) BOOL largerBetter;                                      //@synthesize largerBetter=_largerBetter - In the implementation block
@property (assign,nonatomic) unsigned long long group;                               //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSNumber * sampleCount;                                 //@synthesize sampleCount=_sampleCount - In the implementation block
@property (nonatomic,retain) NSNumber * mean;                                        //@synthesize mean=_mean - In the implementation block
@property (nonatomic,retain) NSNumber * standardDeviation;                           //@synthesize standardDeviation=_standardDeviation - In the implementation block
@property (nonatomic,retain) NSNumber * minimum;                                     //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,retain) NSNumber * maximum;                                     //@synthesize maximum=_maximum - In the implementation block
@property (nonatomic,retain) NSString * cachedMetricFilter;                          //@synthesize cachedMetricFilter=_cachedMetricFilter - In the implementation block
@property (nonatomic,readonly) unsigned long long histogramBucketCount; 
@property (nonatomic,readonly) unsigned long long percentileCount; 
-(NSDictionary *)measurement;
-(void)setMeasurement:(NSDictionary *)arg1 ;
-(NSNumber *)mean;
-(NSNumber *)standardDeviation;
-(NSString *)unitString;
-(void)setUnitString:(NSString *)arg1 ;
-(void)setMetric:(NSString *)arg1 ;
-(void)setMean:(NSNumber *)arg1 ;
-(NSNumber *)minimum;
-(void)setMinimum:(NSNumber *)arg1 ;
-(NSNumber *)maximum;
-(void)setMaximum:(NSNumber *)arg1 ;
-(NSString *)metric;
-(id)description;
-(PDContainer *)container;
-(void)setContainer:(PDContainer *)arg1 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(unsigned long long)group;
-(NSNumber *)sampleCount;
-(void)setSampleCount:(NSNumber *)arg1 ;
-(void)setGroup:(unsigned long long)arg1 ;
-(NSDictionary *)variables;
-(void)setVariables:(NSDictionary *)arg1 ;
-(void)setStandardDeviation:(NSNumber *)arg1 ;
-(void)setLargerBetter:(BOOL)arg1 ;
-(id)initWithContainer:(id)arg1 dictionary:(id)arg2 group:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)isComparableTo:(id)arg1 ;
-(BOOL)matchesVariables:(id)arg1 ignoringMissing:(BOOL)arg2 ;
-(id)metricFilter;
-(id)metricFilterIgnoringVariables:(id)arg1 ;
-(BOOL)isLike:(id)arg1 ;
-(BOOL)largerBetter;
-(NSString *)cachedMetricFilter;
-(id)metricFilterIgnoringNullableVariables:(id)arg1 ;
-(void)setCachedMetricFilter:(NSString *)arg1 ;
-(BOOL)isComparableTo:(id)arg1 ignoringNullableVariables:(id)arg2 ;
-(BOOL)matchesMetricFilter:(id)arg1 ;
-(BOOL)isComparableTo:(id)arg1 ignoringVariables:(id)arg2 ;
-(unsigned long long)histogramBucketCount;
-(BOOL)enumerateHistogramBucketsWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)percentileCount;
-(BOOL)enumeratePercentilesWithError:(id*)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

