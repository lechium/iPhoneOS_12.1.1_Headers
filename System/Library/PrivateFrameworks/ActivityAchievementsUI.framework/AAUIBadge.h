/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsUI.framework/ActivityAchievementsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityAchievementsUI/ActivityAchievementsUI-Structs.h>
#import <HealthKitUI/HKAnimatableObject.h>

@interface AAUIBadge : HKAnimatableObject {

	BOOL _locksRotationY;
	double _rotationX;
	double _rotationY;
	double _maxRotationY;
	CGPoint _position;

}

@property (assign,nonatomic) CGPoint position;                   //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) double rotationX;                   //@synthesize rotationX=_rotationX - In the implementation block
@property (assign,nonatomic) double rotationY;                   //@synthesize rotationY=_rotationY - In the implementation block
@property (nonatomic,readonly) BOOL locksRotationY;              //@synthesize locksRotationY=_locksRotationY - In the implementation block
@property (assign,nonatomic) double maxRotationY;                //@synthesize maxRotationY=_maxRotationY - In the implementation block
-(id)_newAnimatablePropertyForType:(unsigned long long)arg1 ;
-(void)setRotationX:(double)arg1 ;
-(void)setRotationY:(double)arg1 ;
-(double)rotationX;
-(double)rotationY;
-(void)addAnimation:(id)arg1 forBadgePropertyType:(unsigned long long)arg2 ;
-(void)setMaxRotationY:(double)arg1 ;
-(void)removeAllAnimationsForBadgePropertyType:(unsigned long long)arg1 ;
-(BOOL)locksRotationY;
-(double)maxRotationY;
-(id)init;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
@end

