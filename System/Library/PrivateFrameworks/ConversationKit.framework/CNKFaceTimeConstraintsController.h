/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ConversationKit/ConversationKit-Structs.h>
@interface CNKFaceTimeConstraintsController : NSObject {

	 participantListState;
	 localParticipantState;
	 inCallControlsState;
	 floatingControlsState;
	 viewStateEffects;
	 viewControllerLayout;
	 inCallControlsFramesCache;

}

@property (assign,nonatomic) long long localParticipantState; 
@property (assign,nonatomic) long long inCallControlsState; 
-(long long)localParticipantState;
-(void)setLocalParticipantState:(long long)arg1 ;
-(long long)inCallControlsState;
-(void)setInCallControlsState:(long long)arg1 ;
-(id)initWithContainingView:(id)arg1 controlsViewController:(id)arg2 inCallControlsState:(long long)arg3 deviceOrientation:(long long)arg4 ;
-(CGRect)inCallControlsViewFrameFor:(id)arg1 state:(long long)arg2 ;
-(void)updateFor:(CGRect)arg1 deviceOrientation:(long long)arg2 ;
-(void)removeEffectsConstraints;
-(void)updateConstraintsWith:(id)arg1 controlsViewController:(id)arg2 effectsView:(id)arg3 effectsBrowserViewController:(id)arg4 ;
-(id)init;
@end

