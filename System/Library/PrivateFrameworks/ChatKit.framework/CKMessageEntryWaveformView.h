/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIImageView, UIVisualEffectView, UILabel;

@interface CKMessageEntryWaveformView : UIView {

	double _duration;
	NSMutableArray* _powerLevels;
	UIImageView* _waveformImageView;
	unsigned long long _maxPowerLevelsCount;
	UIVisualEffectView* _blurView;
	UIImageView* _balloonImageView;
	UILabel* _timeLabel;
	double _minTimeLabelWidth;

}

@property (assign,nonatomic) unsigned long long maxPowerLevelsCount;              //@synthesize maxPowerLevelsCount=_maxPowerLevelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * powerLevels;                        //@synthesize powerLevels=_powerLevels - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                       //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView * balloonImageView;                      //@synthesize balloonImageView=_balloonImageView - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                 //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * waveformImageView;                     //@synthesize waveformImageView=_waveformImageView - In the implementation block
@property (assign,nonatomic) double minTimeLabelWidth;                            //@synthesize minTimeLabelWidth=_minTimeLabelWidth - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
+(id)waveformCurveTransform;
-(void)clearPowerLevels;
-(void)appendPowerLevel:(double)arg1 ;
-(NSMutableArray *)powerLevels;
-(void)setPowerLevels:(NSMutableArray *)arg1 ;
-(void)setBalloonImageView:(UIImageView *)arg1 ;
-(void)setWaveformImageView:(UIImageView *)arg1 ;
-(void)setMinTimeLabelWidth:(double)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(void)setMaxPowerLevelsCount:(unsigned long long)arg1 ;
-(UIImageView *)balloonImageView;
-(UILabel *)timeLabel;
-(double)minTimeLabelWidth;
-(UIImageView *)waveformImageView;
-(void)updateWaveform;
-(unsigned long long)maxPowerLevelsCount;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDuration:(double)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)didMoveToWindow;
-(double)duration;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
@end

