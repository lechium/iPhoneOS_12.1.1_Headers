/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView, SKUIClientContext, UILabel, CAGradientLayer, AVPlayer, AVPlayerItem, AVPlayerLayer, MSCLVideoScrubberControl, UIImage;

@interface MSCLVideoCoverImageSelectionView : UIView {

	UIView* _backgroundView;
	SKUIClientContext* _clientContext;
	double _duration;
	UILabel* _explanationLabel;
	CAGradientLayer* _gradientOverlayLayer;
	double _initialPlayerTime;
	BOOL _isTracking;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	AVPlayerLayer* _playerLayer;
	MSCLVideoScrubberControl* _scrubber;

}

@property (nonatomic,readonly) UIImage * coverImage; 
@property (nonatomic,readonly) double coverImageTime; 
@property (assign,nonatomic) double initialPlayerTime;              //@synthesize initialPlayerTime=_initialPlayerTime - In the implementation block
-(double)coverImageTime;
-(UIImage *)coverImage;
-(id)initWithAssetURL:(id)arg1 clientContext:(id)arg2 ;
-(void)setInitialPlayerTime:(double)arg1 ;
-(void)_scrubberBeginScrubAction:(id)arg1 ;
-(void)_scrubberEndScrubAction:(id)arg1 ;
-(void)_scrubberValueChangeAction:(id)arg1 ;
-(id)_detailScrubbingExplanationString;
-(void)_reloadPlayerCurrentTime;
-(double)initialPlayerTime;
-(void)dealloc;
-(void)layoutSubviews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)willMoveToWindow:(id)arg1 ;
@end
