/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ATXAppLaunchHistogramProtocol
@required
-(void)resetData;
-(void)decayByFactor:(double)arg1;
-(void)decayWithHalfLife:(double)arg1;
-(double)totalLaunches;
-(BOOL)removeHistoryForBundleId:(id)arg1;
-(int)removeHistoryForBundleIds:(id)arg1;
-(BOOL)bundleHasBeenLaunched:(id)arg1;
-(void)verifyDataIntegrity;
-(void)executeBlockOnHistogramData:(/*^block*/id)arg1;
-(void)resetHistogram:(id)arg1;

@end

