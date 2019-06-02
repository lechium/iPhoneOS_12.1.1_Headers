/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PVPersonDeduperProfile : NSObject <NSCopying> {

	BOOL _shouldRelaxThreshold;
	double _strictMaximumDistance;
	double _normalMaximumDistance;
	double _fuzzyMaximumDistance;

}

@property (assign,nonatomic) double strictMaximumDistance;              //@synthesize strictMaximumDistance=_strictMaximumDistance - In the implementation block
@property (assign,nonatomic) double normalMaximumDistance;              //@synthesize normalMaximumDistance=_normalMaximumDistance - In the implementation block
@property (assign,nonatomic) double fuzzyMaximumDistance;               //@synthesize fuzzyMaximumDistance=_fuzzyMaximumDistance - In the implementation block
@property (assign,nonatomic) BOOL shouldRelaxThreshold;                 //@synthesize shouldRelaxThreshold=_shouldRelaxThreshold - In the implementation block
-(void)setStrictMaximumDistance:(double)arg1 ;
-(void)setNormalMaximumDistance:(double)arg1 ;
-(void)setFuzzyMaximumDistance:(double)arg1 ;
-(void)setShouldRelaxThreshold:(BOOL)arg1 ;
-(double)strictMaximumDistance;
-(double)normalMaximumDistance;
-(double)fuzzyMaximumDistance;
-(BOOL)shouldRelaxThreshold;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
