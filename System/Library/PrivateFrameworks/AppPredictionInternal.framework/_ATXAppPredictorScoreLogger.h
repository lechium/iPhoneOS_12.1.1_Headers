/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ATXAppPredictorScoreLogger <NSObject>
@required
-(void)logInputs:(id)arg1 subscores:(id)arg2 forBundleId:(id)arg3;
-(void)setConsumerSubType:(unsigned char)arg1;
-(void)setPredictionClass:(id)arg1;
-(void)setAssetVersion:(unsigned long long)arg1;
-(void)setCacheAge:(double)arg1;
-(void)logStageScores:(id)arg1 secondStageScores:(id)arg2 thirdStageScores:(id)arg3;

@end
