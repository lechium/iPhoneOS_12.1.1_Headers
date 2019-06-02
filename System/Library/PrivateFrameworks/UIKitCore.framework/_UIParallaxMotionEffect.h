/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@class UIMotionEffectGroup, UIInterpolatingMotionEffect, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect {

	UIMotionEffectGroup* _group;
	UIOffset _slideMagnitude;
	UIInterpolatingMotionEffect* _horizontalSlideEffect;
	UIInterpolatingMotionEffect* _verticalSlideEffect;
	_UITiltMotionEffect* _tiltEffect;

}

@property (assign,nonatomic) UIOffset slideMagnitude;                                    //@synthesize slideMagnitude=_slideMagnitude - In the implementation block
@property (assign,nonatomic) double horizontalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) double verticalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) double maximumHorizontalTiltAngle; 
@property (assign,nonatomic) double maximumVerticalTiltAngle; 
@property (assign,nonatomic) double rotatingSphereRadius; 
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)setSlideMagnitude:(UIOffset)arg1 ;
-(UIOffset)slideMagnitude;
-(double)horizontalSlideAccelerationBoostFactor;
-(double)verticalSlideAccelerationBoostFactor;
-(double)maximumHorizontalTiltAngle;
-(double)maximumVerticalTiltAngle;
-(double)rotatingSphereRadius;
-(void)_updateSlideEffectsWithCurrentSlideMagnitude;
-(void)_updateGroupMotionEffect;
-(void)_activateTiltEffectIfNecessary;
-(void)setMaximumHorizontalTiltAngle:(double)arg1 ;
-(void)setMaximumVerticalTiltAngle:(double)arg1 ;
-(void)setRotatingSphereRadius:(double)arg1 ;
-(void)setHorizontalSlideAccelerationBoostFactor:(double)arg1 ;
-(void)setVerticalSlideAccelerationBoostFactor:(double)arg1 ;
@end
