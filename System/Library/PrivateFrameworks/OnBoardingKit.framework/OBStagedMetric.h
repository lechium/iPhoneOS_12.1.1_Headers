/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PBCodable;

@interface OBStagedMetric : NSObject {

	unsigned _metricId;
	PBCodable* _metric;

}

@property (assign) unsigned metricId;               //@synthesize metricId=_metricId - In the implementation block
@property (retain) PBCodable * metric;              //@synthesize metric=_metric - In the implementation block
-(void)setMetric:(PBCodable *)arg1 ;
-(unsigned)metricId;
-(void)setMetricId:(unsigned)arg1 ;
-(PBCodable *)metric;
-(id)initWithMetricID:(unsigned)arg1 metric:(id)arg2 ;
-(void)commit;
@end

