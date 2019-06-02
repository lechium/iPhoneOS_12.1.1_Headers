/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKAudioControllerDelegate.h>

@protocol CKMessageEntryRecordedAudioViewDelegate;
@class CKAudioMediaObject, UIButton, UIVisualEffectView, UIImageView, CKAudioController, UILabel, UIImage, NSString;

@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate> {

	CKAudioMediaObject* _audioMediaObject;
	UIButton* _deleteButton;
	id<CKMessageEntryRecordedAudioViewDelegate> _delegate;
	UIVisualEffectView* _blurView;
	UIImageView* _balloonImageView;
	CKAudioController* _audioController;
	UILabel* _timeLabel;
	UIImage* _waveformImage;
	UIImageView* _waveformImageView;
	double _time;
	NSString* _timeFormat;

}

@property (nonatomic,retain) UIButton * deleteButton;                                                  //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                            //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView * balloonImageView;                                           //@synthesize balloonImageView=_balloonImageView - In the implementation block
@property (nonatomic,retain) CKAudioController * audioController;                                      //@synthesize audioController=_audioController - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                                      //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIImage * waveformImage;                                                  //@synthesize waveformImage=_waveformImage - In the implementation block
@property (nonatomic,retain) UIImageView * waveformImageView;                                          //@synthesize waveformImageView=_waveformImageView - In the implementation block
@property (assign,nonatomic) double time;                                                              //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * timeFormat;                                                      //@synthesize timeFormat=_timeFormat - In the implementation block
@property (nonatomic,retain) CKAudioMediaObject * audioMediaObject;                                    //@synthesize audioMediaObject=_audioMediaObject - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic,__weak) id<CKMessageEntryRecordedAudioViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)time;
-(void)setTime:(double)arg1 ;
-(void)updateProgress;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)setAudioMediaObject:(CKAudioMediaObject *)arg1 ;
-(void)setBalloonImageView:(UIImageView *)arg1 ;
-(void)setWaveformImageView:(UIImageView *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UIImageView *)balloonImageView;
-(UILabel *)timeLabel;
-(UIImageView *)waveformImageView;
-(CKAudioController *)audioController;
-(void)setAudioController:(CKAudioController *)arg1 ;
-(CKAudioMediaObject *)audioMediaObject;
-(void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2 ;
-(void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioControllerDidPause:(id)arg1 ;
-(void)audioControllerDidStop:(id)arg1 ;
-(void)setWaveformImage:(UIImage *)arg1 ;
-(void)updateTimeString;
-(UIImage *)waveformImage;
-(NSString *)timeFormat;
-(void)setTimeFormat:(NSString *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CKMessageEntryRecordedAudioViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CKMessageEntryRecordedAudioViewDelegate>)delegate;
-(UIVisualEffectView *)blurView;
-(void)play;
-(BOOL)isPlaying;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(void)pause;
@end

