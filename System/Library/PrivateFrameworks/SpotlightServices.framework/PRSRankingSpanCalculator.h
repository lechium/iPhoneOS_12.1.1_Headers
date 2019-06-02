/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRSRankingSpanCalculator : NSObject {

	BOOL _pathExists;
	float _unordered;
	float _ordered;
	float _firstTermPosition;
	float _normCount;
	float _pairDist;

}

@property (assign,nonatomic) float unordered;                      //@synthesize unordered=_unordered - In the implementation block
@property (assign,nonatomic) float ordered;                        //@synthesize ordered=_ordered - In the implementation block
@property (assign,nonatomic) float firstTermPosition;              //@synthesize firstTermPosition=_firstTermPosition - In the implementation block
@property (assign,nonatomic) float normCount;                      //@synthesize normCount=_normCount - In the implementation block
@property (assign,nonatomic) float pairDist;                       //@synthesize pairDist=_pairDist - In the implementation block
@property (assign,nonatomic) BOOL pathExists;                      //@synthesize pathExists=_pathExists - In the implementation block
+(BOOL)doesOrderedSpanExistWithStartingIndex:(unsigned long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentOrderedSpan:(long long*)arg5 ;
+(void)minimumAnyOrderSpanWithStartingIndex:(long long)arg1 nextArray:(id)arg2 arrayOfIndexArrays:(id)arg3 level:(unsigned long long)arg4 currentAnyOrderSpan:(long long)arg5 minimumSpan:(long long*)arg6 minimumDistancePair:(long long*)arg7 currentMinimumIndex:(long long)arg8 currentMaximumIndex:(long long)arg9 ;
-(void)setOrdered:(float)arg1 ;
-(void)setUnordered:(float)arg1 ;
-(void)setPairDist:(float)arg1 ;
-(void)setFirstTermPosition:(float)arg1 ;
-(void)setPathExists:(BOOL)arg1 ;
-(void)resetSpans;
-(float)unordered;
-(float)ordered;
-(float)firstTermPosition;
-(float)normCount;
-(float)pairDist;
-(void)updateWithTermPositions:(id)arg1 queryTermCount:(unsigned long long)arg2 tokenCount:(unsigned long long)arg3 ;
-(void)setNormCount:(float)arg1 ;
-(BOOL)pathExists;
-(id)description;
-(void)reset;
@end

