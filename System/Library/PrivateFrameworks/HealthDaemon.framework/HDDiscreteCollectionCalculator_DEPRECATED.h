/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCollectionCalculator_DEPRECATED.h>

@interface HDDiscreteCollectionCalculator_DEPRECATED : HDCollectionCalculator_DEPRECATED {

	SCD_Struct_HD39 _currentStats;
	map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > >* _bySource;

}
-(BOOL)hasData;
-(BOOL)advanceBucket;
-(void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 ;
-(void)_didAddFirstValue;
-(id)sourceIDsForCurrentBucket;
-(long long)dataCount;
-(id)statsBySource;
-(void)getCurrentBucketStats:(SCD_Struct_HD39*)arg1 ;
-(id)description;
@end

