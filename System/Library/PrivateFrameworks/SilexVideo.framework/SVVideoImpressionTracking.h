/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoImpressionTracking <NSObject>
@property (setter=uponThresholdImpression:,nonatomic,copy) id thresholdImpressionBlock; 
@property (setter=uponQuartileImpression:,nonatomic,copy) id quartileImpressionBlock; 
@property (getter=hasPassedImpressionThreshold,nonatomic,readonly) BOOL passedImpressionThreshold; 
@property (nonatomic,readonly) double impressionThreshold; 
@property (nonatomic,readonly) unsigned long long quartile; 
@required
-(double)impressionThreshold;
-(unsigned long long)quartile;
-(void)uponQuartileImpression:(/*^block*/id)arg1;
-(void)uponThresholdImpression:(/*^block*/id)arg1;
-(BOOL)hasPassedImpressionThreshold;
-(id)thresholdImpressionBlock;
-(id)quartileImpressionBlock;

@end
