/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@interface ATXActionPredictions : NSObject
+(id)predictionsWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7 ;
+(id)_predictionWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 consumerSubType:(unsigned char)arg3 firstStageScoreLogger:(id)arg4 secondStageScoreLogger:(id)arg5 thirdStageScoreLogger:(id)arg6 multiStageScoreLogger:(id)arg7 ;
+(void)fetchDataAndUpdateContentAttributeSetForActions:(id)arg1 ;
+(void)fetchDataAndUpdateContentAttributeSetForAction:(id)arg1 ;
+(id)showInSpotlightActionsForActionPredictions:(id)arg1 withThreshold:(double)arg2 predictionItems:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg3 ;
+(id)scoredActionsWithoutLog:(id)arg1 ;
+(void)penalizeMultipleActionsPerAppAndKeepSorted:(id)arg1 ;
+(id)sortStageScores:(id)arg1 ;
-(id)init;
@end

