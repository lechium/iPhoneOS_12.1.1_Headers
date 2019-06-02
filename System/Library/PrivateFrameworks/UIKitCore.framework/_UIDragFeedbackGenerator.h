/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback, _UIDragFeedbackGeneratorConfiguration;

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {

	long long _state;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (getter=_dragConfiguration,nonatomic,readonly) _UIDragFeedbackGeneratorConfiguration * dragConfiguration; 
@property (assign,setter=_setState:,getter=_state,nonatomic) long long state;                                                                                                            //@synthesize state=_state - In the implementation block
@property (setter=_setPlayingContinuousFeedback:,getter=_playingContinuousFeedback,nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;              //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
-(void)userInteractionStarted;
-(void)userInteractionEnded;
-(long long)_state;
-(void)positionUpdated;
-(void)userInteractionCancelled;
-(void)_setState:(long long)arg1 ;
-(id)_stats_key;
-(id)_dragConfiguration;
-(void)_startPlayingContinuousFeedback;
-(void)_stopPlayingContinuousFeedback;
-(void)_startPlayingContinuousFeedbackNow;
-(void)_setPlayingContinuousFeedback:(id)arg1 ;
-(void)dropTargetUpdated;
-(id)_playingContinuousFeedback;
@end
