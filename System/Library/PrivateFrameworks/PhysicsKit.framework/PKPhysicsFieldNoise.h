/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsField.h>

@interface PKPhysicsFieldNoise : PKPhysicsField

@property (assign,nonatomic) float smoothness; 
@property (assign,nonatomic) float animationSpeed; 
+(id)field;
-(id)initWithField:(shared_ptr<PKCField>*)arg1 ;
-(id)init;
-(void)setSmoothness:(float)arg1 ;
-(void)setAnimationSpeed:(float)arg1 ;
-(float)smoothness;
-(float)animationSpeed;
@end

