/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior {

	SCD_Struct_SC42 _definition;
	btCharacterControllerInterface* _characterController;
	btPairCachingGhostObject* _ghostObject;
	btOverlapFilterCallback* _filterCallback;
	btCapsuleShape* _capsuleShape;
	SCNPhysicsWorld* _world;

}

@property (assign,nonatomic) double velocity; 
@property (assign,nonatomic) double jumpSpeed; 
-(void)setWalkingDirection:(SCNVector3)arg1 ;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(void)_handleCreateIfNeeded:(BOOL)arg1 ;
-(id)initWithCharacter:(id)arg1 ;
-(BOOL)canJump;
-(void)jump;
-(void)setJumpSpeed:(double)arg1 ;
-(double)jumpSpeed;
-(void)dealloc;
-(double)velocity;
-(void)setVelocity:(double)arg1 ;
-(void)_update;
@end

