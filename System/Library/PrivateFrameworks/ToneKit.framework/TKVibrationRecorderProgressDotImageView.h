/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface TKVibrationRecorderProgressDotImageView : UIImageView {

	double _timeInterval;
	double _duration;
	double _previousPauseTimeInterval;
	double _previousPauseDuration;
	double _accessibilityFrameAdditionalHeight;

}

@property (assign,nonatomic) double timeInterval;                                    //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) double duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double previousPauseTimeInterval;                       //@synthesize previousPauseTimeInterval=_previousPauseTimeInterval - In the implementation block
@property (assign,nonatomic) double previousPauseDuration;                           //@synthesize previousPauseDuration=_previousPauseDuration - In the implementation block
@property (assign,nonatomic) double accessibilityFrameAdditionalHeight;              //@synthesize accessibilityFrameAdditionalHeight=_accessibilityFrameAdditionalHeight - In the implementation block
-(void)setPreviousPauseTimeInterval:(double)arg1 ;
-(void)setPreviousPauseDuration:(double)arg1 ;
-(void)setAccessibilityFrameAdditionalHeight:(double)arg1 ;
-(double)previousPauseTimeInterval;
-(double)previousPauseDuration;
-(double)accessibilityFrameAdditionalHeight;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
@end

