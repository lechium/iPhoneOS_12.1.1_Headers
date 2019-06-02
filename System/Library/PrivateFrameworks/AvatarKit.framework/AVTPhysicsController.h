/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface AVTPhysicsController : NSObject {

	NSMutableArray* _physicsRigs;
	BOOL _setupDone;
	BOOL _firstFrameRendered;

}
-(void)setupWithAvatarNode:(id)arg1 scene:(id)arg2 downforceNodeCheck:(/*^block*/id)arg3 ;
-(void)applyForces:(double)arg1 ;
-(void)_setupPhysicsChain:(id)arg1 scene:(id)arg2 ;
-(void)updateAtTime:(double)arg1 avatarNode:(id)arg2 scene:(id)arg3 forceMultiplier:(double)arg4 downforceNodeCheck:(/*^block*/id)arg5 ;
-(3)getPhysicsOffsetOfNode:(id)arg1 relativeToNode:(id)arg2 ;
@end
