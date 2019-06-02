/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SFActivityBitmapMatrix : NSObject {

	void* _bitMatrix;
	unsigned long long _matrixRowCount;
	unsigned long long _matrixColumnCount;
	unsigned long long _lowestStartTime;
	unsigned long long _highestStartTime;
	NSMutableArray* _activities;

}
-(unsigned long long)bitCountFromStartTime:(unsigned long long)arg1 ;
-(void)resetAllActivities;
-(unsigned long long)contiguous1Bits:(unsigned long long)arg1 ;
-(BOOL)calculateVerticalPopulation;
-(unsigned long long)hammingWeightForRow:(unsigned long long)arg1 ;
-(unsigned long long)longestContiguousHammingWeightForRow:(unsigned long long)arg1 ;
-(void)fillInBitMatrix;
-(void*)createMatrixWithRowCount:(unsigned long long)arg1 columnBitCount:(unsigned long long)arg2 ;
-(void)setActivityBitmapForRow:(unsigned long long)arg1 startTime:(unsigned long long)arg2 part1:(unsigned long long)arg3 part2:(unsigned long long)arg4 ;
-(void)addActivityWithStartTime:(unsigned long long)arg1 part1:(unsigned long long)arg2 part2:(unsigned long long)arg3 ;
-(unsigned long long)tallyCompleteHammingWeight;
-(unsigned long long)tallyLongestContiguousHammingWeight;
-(id)init;
-(void)dealloc;
-(id)description;
@end
