/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneManagerDelegate <FBSceneManagerObserver>
@optional
-(long long)sceneManager:(id)arg1 hostingPolicyForDisplay:(id)arg2;
-(long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;

@required
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;

@end

