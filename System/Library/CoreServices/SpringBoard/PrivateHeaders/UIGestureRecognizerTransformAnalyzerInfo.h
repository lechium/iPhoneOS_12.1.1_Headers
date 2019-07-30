//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject
{
    double _translationMagnitude;	// 8 = 0x8
    double _scale;	// 16 = 0x10
    double _rotation;	// 24 = 0x18
    struct CGPoint _translation;	// 32 = 0x20
    struct CGPoint _absoluteTranslation;	// 48 = 0x30
}

@property(nonatomic, setter=_setRotation:) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic, setter=_setScale:) double scale; // @synthesize scale=_scale;
@property(nonatomic, setter=_setAbsoluteTranslation:) struct CGPoint absoluteTranslation; // @synthesize absoluteTranslation=_absoluteTranslation;
@property(nonatomic, setter=_setTranslationMagnitude:) double translationMagnitude; // @synthesize translationMagnitude=_translationMagnitude;
@property(nonatomic, setter=_setTranslation:) struct CGPoint translation; // @synthesize translation=_translation;
- (id)description;	// IMP=0x000000010031f9c4
- (void)_reset;	// IMP=0x000000010031f930

@end

