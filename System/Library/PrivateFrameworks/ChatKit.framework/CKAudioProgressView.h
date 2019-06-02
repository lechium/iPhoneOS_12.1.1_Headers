/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonImageView.h>

@class IMManualUpdater;

@interface CKAudioProgressView : CKBalloonImageView {

	BOOL _playing;
	BOOL _played;
	char _color;
	float _progress;
	int _style;
	IMManualUpdater* _displayUpdater;

}

@property (nonatomic,retain) IMManualUpdater * displayUpdater;              //@synthesize displayUpdater=_displayUpdater - In the implementation block
@property (assign,nonatomic) float progress;                                //@synthesize progress=_progress - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                 //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPlayed,nonatomic) BOOL played;                   //@synthesize played=_played - In the implementation block
@property (assign,nonatomic) char color;                                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) int style;                                     //@synthesize style=_style - In the implementation block
+(float)progressForTime:(double)arg1 duration:(double)arg2 ;
+(id)imageWithType:(unsigned char)arg1 color:(char)arg2 ;
+(id)templateImageWithType:(unsigned char)arg1 ;
+(id)templateImageWithControlImage:(id)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setDisplayUpdater:(IMManualUpdater *)arg1 ;
-(void)setNeedsPrepareForDisplay;
-(IMManualUpdater *)displayUpdater;
-(void)prepareForDisplayIfNeeded;
-(void)setPlayed:(BOOL)arg1 ;
-(BOOL)isPlayed;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(void)setProgress:(float)arg1 ;
-(char)color;
-(void)setColor:(char)arg1 ;
-(void)prepareForDisplay;
-(float)progress;
-(BOOL)isPlaying;
@end

