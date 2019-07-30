//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SBPolygon : NSObject
{
    NSMutableArray *_mutablePoints;	// 8 = 0x8
    NSMutableArray *_weights;	// 16 = 0x10
    struct CGPoint _centroid;	// 24 = 0x18
    struct CGPoint _weightedCentroid;	// 40 = 0x28
}

+ (id)_sortPoints:(id)arg1;	// IMP=0x0000000100298b20
+ (struct CGPoint)_pointAtIndex:(unsigned long long)arg1 ofPointArray:(id)arg2;	// IMP=0x0000000100298ac0
@property(nonatomic, getter=_weightedCentroid, setter=_setWeightedCentroid:) struct CGPoint weightedCentroid; // @synthesize weightedCentroid=_weightedCentroid;
@property(retain, nonatomic, getter=_weights, setter=_setWeights:) NSMutableArray *weights; // @synthesize weights=_weights;
@property(nonatomic, getter=_centroid, setter=_setCentroid:) struct CGPoint centroid; // @synthesize centroid=_centroid;
@property(retain, nonatomic, getter=_points, setter=_setPoints:) NSMutableArray *mutablePoints; // @synthesize mutablePoints=_mutablePoints;
- (void).cxx_destruct;	// IMP=0x000000010029929c
- (double)_meanRadius;	// IMP=0x000000010029887c
- (double)_meanFingertipRowAngle;	// IMP=0x0000000100298630
- (double)_baseOrientation;	// IMP=0x000000010029858c
- (void)_translate:(struct CGPoint)arg1;	// IMP=0x000000010029852c
- (void)_rotate:(double)arg1;	// IMP=0x00000001002984cc
- (void)_scale:(double)arg1;	// IMP=0x0000000100298468
- (void)_flipHorizontally;	// IMP=0x00000001002982c8
- (void)_applyTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000100298164
- (unsigned long long)_thumbIndex;	// IMP=0x000000010029811c
- (_Bool)_isLeftHanded;	// IMP=0x000000010029803c
- (void)_updateWeightedCentroid;	// IMP=0x0000000100297db4
- (void)_updateWeights;	// IMP=0x0000000100297c80
- (void)_updateCentroid;	// IMP=0x0000000100297ae8
- (void)_updateProperties;	// IMP=0x0000000100297aa4
- (double)_weightAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100297a44
- (struct CGPoint)_pointAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100297a20
- (void)enumeratePointsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010029792c
@property(readonly, nonatomic) double distanceOfFarthestPointFromCentroid;
@property(readonly, nonatomic) unsigned long long pointCount;
- (id)points;	// IMP=0x00000001002977b4
- (id)description;	// IMP=0x0000000100297618
- (id)initWithPoints:(id)arg1;	// IMP=0x000000010029755c
- (id)initWithPoints:(struct CGPoint *)arg1 pointCount:(unsigned long long)arg2;	// IMP=0x00000001002973c8

@end
