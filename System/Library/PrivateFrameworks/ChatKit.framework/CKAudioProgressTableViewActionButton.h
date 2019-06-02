/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/_UITableViewCellActionButton.h>

@class CKAudioProgressView, UILabel;

@interface CKAudioProgressTableViewActionButton : _UITableViewCellActionButton {

	CKAudioProgressView* _progressView;
	double _duration;
	double _currentProgress;
	double _lastProgress;
	UILabel* _label;

}

@property (nonatomic,retain) CKAudioProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double currentProgress;                          //@synthesize currentProgress=_currentProgress - In the implementation block
@property (assign,nonatomic) double lastProgress;                             //@synthesize lastProgress=_lastProgress - In the implementation block
@property (nonatomic,retain) UILabel * label;                                 //@synthesize label=_label - In the implementation block
-(void)setCurrentProgress:(double)arg1 ;
-(double)currentProgress;
-(CKAudioProgressView *)progressView;
-(void)setProgressView:(CKAudioProgressView *)arg1 ;
-(double)lastProgress;
-(void)setLastProgress:(double)arg1 ;
-(void)_updateTime:(id)arg1 ;
-(void)didFinish:(id)arg1 ;
-(void)didStop:(id)arg1 ;
-(void)_playButtonHit:(id)arg1 ;
-(CGSize)labelSizeThatFits:(CGSize)arg1 ;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)removeFromSuperview;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end
