/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKAgent.h>

@interface GKAgent3D : GKAgent

@property (assign,nonatomic)  position; 
@property (nonatomic,readonly)  velocity; 
@property (assign,nonatomic) BOOL rightHanded; 
@property (assign,nonatomic) SCD_Struct_GK5 rotation; 
+(BOOL)supportsSecureCoding;
-(void)updateWithDeltaTime:(double)arg1 ;
-(void)applySteeringForce:(double)arg1 ;
-(void)applyBrakingForce:(float)arg1 deltaTime:(double)arg2 ;
-(BOOL)rightHanded;
-(void)setRightHanded:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-()velocity;
-(void)setPosition:;
-()position;
-(SCD_Struct_GK5)rotation;
-(void)setRotation:(SCD_Struct_GK5)arg1 ;
@end

