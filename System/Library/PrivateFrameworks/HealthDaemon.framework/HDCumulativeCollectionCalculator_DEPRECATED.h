/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCollectionCalculator_DEPRECATED.h>

@class NSDictionary, NSSet;

@interface HDCumulativeCollectionCalculator_DEPRECATED : HDCollectionCalculator_DEPRECATED {

	HDCumulativeStatistics_DEPRECATEDEngine_DEPRECATED* _calculator;
	HDCumulativeStatistics_DEPRECATEDBucket_DEPRECATED* _lastFinishedBucket;
	vector<long long, std::__1::allocator<long long> >* _orderedSourceIDs;
	unordered_map<long long, NSString *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, NSString *> > >* _sourceBundleIdentifierMapping;
	BOOL _openEndedCalculator;
	unsigned long long _dataCount;
	unsigned long long _mergeStrategy;

}

@property (assign,nonatomic) unsigned long long mergeStrategy;                     //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (nonatomic,readonly) double earliestAllowableStartTime; 
@property (nonatomic,readonly) NSDictionary * sumsBySourceID; 
@property (nonatomic,readonly) NSDictionary * sumsByBundleIdentifier; 
@property (nonatomic,readonly) NSSet * sourceIDsForCurrentBucket; 
@property (assign,nonatomic) unsigned long long dataCount;                         //@synthesize dataCount=_dataCount - In the implementation block
-(BOOL)hasData;
-(unsigned long long)mergeStrategy;
-(HDCumulativeStatistics_DEPRECATEDBucket_DEPRECATED*)_bucketForCurrentDates;
-(void)setStartTime:(double)arg1 endTime:(double)arg2 ;
-(BOOL)advanceBucket;
-(void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 ;
-(id)initWithOrderedSourceIDs:(id)arg1 bundleIdentifierMapping:(id)arg2 mergeStrategy:(unsigned long long)arg3 ;
-(id)initWithStatisticsCollection:(id)arg1 orderedSourceIDs:(id)arg2 bundleIdentifierMapping:(id)arg3 mergeStrategy:(unsigned long long)arg4 ;
-(void)_didAddFirstValue;
-(BOOL)canAddValueWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(double)earliestAllowableStartTime;
-(double)addCurrentBucket;
-(NSDictionary *)sumsBySourceID;
-(NSDictionary *)sumsByBundleIdentifier;
-(NSSet *)sourceIDsForCurrentBucket;
-(unsigned long long)dataCount;
-(void)setDataCount:(unsigned long long)arg1 ;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(id)description;
@end
