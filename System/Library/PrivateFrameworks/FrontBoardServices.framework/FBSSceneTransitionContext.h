/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class BSAnimationSettings, BKSAnimationFenceHandle, NSSet, BSProcessHandle, BSMutableSettings, FBSceneUpdateContext, NSString;

@interface FBSSceneTransitionContext : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying> {

	BSAnimationSettings* _animationSettings;
	BKSAnimationFenceHandle* _animationFence;
	NSSet* _actions;
	BSProcessHandle* _originatingProcess;
	BSMutableSettings* _otherSettings;
	BSMutableSettings* _transientLocalClientSettings;
	FBSceneUpdateContext* _updateContext;

}

@property (nonatomic,retain) FBSceneUpdateContext * updateContext;                  //@synthesize updateContext=_updateContext - In the implementation block
@property (nonatomic,copy) BSAnimationSettings * animationSettings;                 //@synthesize animationSettings=_animationSettings - In the implementation block
@property (nonatomic,retain) BKSAnimationFenceHandle * animationFence;              //@synthesize animationFence=_animationFence - In the implementation block
@property (nonatomic,copy) NSSet * actions;                                         //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) BSProcessHandle * originatingProcess;                  //@synthesize originatingProcess=_originatingProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionContext;
-(void)setOriginatingProcess:(BSProcessHandle *)arg1 ;
-(FBSceneUpdateContext *)updateContext;
-(void)setUpdateContext:(FBSceneUpdateContext *)arg1 ;
-(id)transientLocalClientSettings;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)actions;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BSAnimationSettings *)animationSettings;
-(BKSAnimationFenceHandle *)animationFence;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)otherSettings;
-(void)setActions:(NSSet *)arg1 ;
-(BSProcessHandle *)originatingProcess;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(void)setAnimationFence:(BKSAnimationFenceHandle *)arg1 ;
@end

