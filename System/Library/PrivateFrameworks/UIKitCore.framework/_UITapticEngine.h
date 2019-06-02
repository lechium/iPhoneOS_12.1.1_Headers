/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIStatesFeedbackGenerator;

@interface _UITapticEngine : NSObject {

	BOOL _feedbackActivated;
	_UIStatesFeedbackGenerator* _feedbackGenerator;

}

@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL feedbackActivated;                                      //@synthesize feedbackActivated=_feedbackActivated - In the implementation block
-(id)init;
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)actuateFeedback:(long long)arg1 ;
-(void)prepareUsingFeedback:(long long)arg1 ;
-(void)endUsingFeedback:(long long)arg1 ;
-(id)_stateForFeedback:(long long)arg1 ;
-(BOOL)feedbackActivated;
-(void)setFeedbackActivated:(BOOL)arg1 ;
@end

