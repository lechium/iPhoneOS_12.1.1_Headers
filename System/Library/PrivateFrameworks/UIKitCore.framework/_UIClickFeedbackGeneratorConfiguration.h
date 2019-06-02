/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@protocol _UIFeedbackDiscretePlayable;
@class _UIFeedback;

@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration {

	_UIFeedback*<_UIFeedbackDiscretePlayable> _clickDownFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _clickDownAudioFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _clickUpFeedback;
	_UIFeedback*<_UIFeedbackDiscretePlayable> _clickUpAudioFeedback;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> clickDownFeedback;                   //@synthesize clickDownFeedback=_clickDownFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> clickDownAudioFeedback;              //@synthesize clickDownAudioFeedback=_clickDownAudioFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> clickUpFeedback;                     //@synthesize clickUpFeedback=_clickUpFeedback - In the implementation block
@property (nonatomic,retain) _UIFeedback*<_UIFeedbackDiscretePlayable> clickUpAudioFeedback;                //@synthesize clickUpAudioFeedback=_clickUpAudioFeedback - In the implementation block
+(id)defaultConfiguration;
+(id)latchingOnConfiguration;
+(id)latchingOffConfiguration;
-(id)feedbackKeyPaths;
-(long long)requiredSupportLevel;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickDownFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickDownAudioFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickUpFeedback;
-(_UIFeedback*<_UIFeedbackDiscretePlayable>)clickUpAudioFeedback;
-(void)setClickDownFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setClickDownAudioFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setClickUpFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setClickUpAudioFeedback:(_UIFeedback*<_UIFeedbackDiscretePlayable>)arg1 ;
-(void)setclickDownFeedback:(id)arg1 ;
@end

