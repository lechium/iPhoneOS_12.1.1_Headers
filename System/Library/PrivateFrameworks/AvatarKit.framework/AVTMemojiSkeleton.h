/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class SCNNode, NSMapTable, SCNScene;

@interface AVTMemojiSkeleton : NSObject {

	SCNNode* _rootNode;
	SCNNode* _referenceNode;
	NSMapTable* _bindPose;
	SCNScene* _scene;

}

@property (readonly) SCNScene * scene;                     //@synthesize scene=_scene - In the implementation block
@property (readonly) SCNNode * rootNode;                   //@synthesize rootNode=_rootNode - In the implementation block
@property (readonly) SCNNode * referenceNode;              //@synthesize referenceNode=_referenceNode - In the implementation block
@property (readonly) NSMapTable * bindPose;                //@synthesize bindPose=_bindPose - In the implementation block
+(id)skeleton;
-(SCNNode *)referenceNode;
-(void)storeBindPose:(id)arg1 ;
-(SCNVector3)bindPoseForNode:(id)arg1 ;
-(void)updateBoneForRig:(id)arg1 ;
-(float)_getNodeAngle:(id)arg1 ;
-(void)getRigValues:(id)arg1 symmetry:(BOOL)arg2 withBone:(id)arg3 spacingOut:(double*)arg4 elevationOut:(double*)arg5 scaleOut:(double*)arg6 rotationOut:(double*)arg7 ;
-(void)updateBonesFromRigs:(id)arg1 ;
-(SCNVector3)absolutePositionForRigElevation:(double)arg1 spacing:(double)arg2 symmetry:(BOOL)arg3 ;
-(id)bonesForRig:(id)arg1 ;
-(void)updateRig:(id)arg1 fromBone:(id)arg2 symmetry:(BOOL)arg3 applyRange:(BOOL)arg4 ;
-(NSMapTable *)bindPose;
-(SCNNode *)rootNode;
-(id)init;
-(SCNScene *)scene;
-(void)commonInit;
@end

