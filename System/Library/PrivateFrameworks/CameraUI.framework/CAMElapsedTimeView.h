/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, NSTimer, NSDate;

@interface CAMElapsedTimeView : UIView {

	long long _layoutStyle;
	UILabel* __timeLabel;
	UIImageView* __recordingImageView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,readonly) UILabel * _timeLabel;                           //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * _recordingImageView;              //@synthesize _recordingImageView=__recordingImageView - In the implementation block
@property (nonatomic,readonly) NSTimer * _updateTimer;                         //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,readonly) NSDate * _startTime;                            //@synthesize _startTime=__startTime - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                            //@synthesize layoutStyle=_layoutStyle - In the implementation block
-(long long)layoutStyle;
-(NSDate *)_startTime;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)_setStartTime:(id)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(UILabel *)_timeLabel;
-(void)_beginRecordingAnimation;
-(void)_endRecordingAnimation;
-(void)endTimer;
-(NSTimer *)_updateTimer;
-(void)_updateText;
-(void)updateToContentSize:(id)arg1 ;
-(void)_updateFont;
-(void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)arg1 ;
-(void)_updateForTimer:(id)arg1 ;
-(UIImageView *)_recordingImageView;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)startTimer;
-(void)resetTimer;
@end
