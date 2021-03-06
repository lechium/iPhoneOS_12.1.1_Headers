/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface RCWaveformSegment : NSObject <NSSecureCoding> {

	NSData* _averagePowerLevelData;
	BOOL _isRendered;
	SCD_Struct_RC4 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_RC4 timeRange;                       //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) BOOL isRendered;                                  //@synthesize isRendered=_isRendered - In the implementation block
@property (nonatomic,readonly) const float* averagePowerLevels; 
@property (nonatomic,readonly) long long averagePowerLevelsCount; 
+(id)_discontinuityRepairedSegmentsByGrowingToFillGapsInSegments:(id)arg1 ;
+(id)_segmentByMergingMergableSegments:(id)arg1 ;
+(id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 beforeTime:(double)arg3 andThenUsePreferredSegmentDuration:(double)arg4 ;
+(id)emptySegmentWithTimeRange:(SCD_Struct_RC4)arg1 ;
+(id)_segmentsByJoiningSegment:(id)arg1 toSegmentIfNecessaryWithGreaterSegment:(id)arg2 averagePowerLevelJoinLimit:(unsigned long long)arg3 ;
+(id)_mergedSegmentByFastMergingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)_mergedSegmentByResamplingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)segmentsByReparingDiscontinuitiesInSegments:(id)arg1 ;
+(id)segmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2 ;
+(id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(SCD_Struct_RC4)timeRange;
-(id)simpleDescription;
-(BOOL)isRendered;
-(id)copyWithTimeRangeOffsetByTimeOffset:(double)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_RC4)arg1 averagePowerLevelVector:(vector<float, std::__1::allocator<float> >*)arg2 ;
-(id)_initWithTimeRange:(SCD_Struct_RC4)arg1 averagePowerLevelData:(id)arg2 ;
-(id)initWithTimeRange:(SCD_Struct_RC4)arg1 averagePowerLevelData:(id)arg2 ;
-(long long)averagePowerLevelsCount;
-(const float*)averagePowerLevels;
-(id)copyWithAdjustedTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)_segmentsByJoiningIfNecessaryGreaterSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2 ;
-(id)_segmentWithValuesInContainedTimeRange:(SCD_Struct_RC4)arg1 ;
-(id)verboseDescription;
-(BOOL)hasUniformPowerLevel:(float)arg1 ;
-(BOOL)isWaveformDataEqualToDataInSegment:(id)arg1 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2 ;
-(id)segmentByClippingToTimeRange:(SCD_Struct_RC4)arg1 ;
-(void)setIsRendered:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

