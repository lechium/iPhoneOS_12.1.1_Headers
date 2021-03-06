/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCNetworkEventStats : NSObject {

	unsigned long long _count;
	unsigned long long _mean;
	unsigned long long _median;
	unsigned long long _percentile95;
	unsigned long long _min;
	unsigned long long _max;

}

@property (assign,nonatomic) unsigned long long count;                     //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long mean;                      //@synthesize mean=_mean - In the implementation block
@property (assign,nonatomic) unsigned long long median;                    //@synthesize median=_median - In the implementation block
@property (assign,nonatomic) unsigned long long percentile95;              //@synthesize percentile95=_percentile95 - In the implementation block
@property (assign,nonatomic) unsigned long long min;                       //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) unsigned long long max;                       //@synthesize max=_max - In the implementation block
-(unsigned long long)mean;
-(unsigned long long)min;
-(unsigned long long)max;
-(id)initWithValues:(id)arg1 ;
-(unsigned long long)percentile95;
-(void)setPercentile95:(unsigned long long)arg1 ;
-(void)setMean:(unsigned long long)arg1 ;
-(void)setMedian:(unsigned long long)arg1 ;
-(void)setMin:(unsigned long long)arg1 ;
-(void)setMax:(unsigned long long)arg1 ;
-(unsigned long long)median;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
@end

