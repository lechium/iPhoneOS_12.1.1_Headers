/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleAggregator.h>

@interface PAExecutableAggregator : PASampleAggregator
-(id)newAggregatedTaskForIdentificationPurposesWithSampleTask:(id)arg1 ;
-(id)newAggregatedTaskForSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(void)filterToWallTimeRangeStart:(double)arg1 end:(double)arg2 ;
@end

