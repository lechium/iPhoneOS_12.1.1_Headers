/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class __AVPlayerLayerView, UIView, AVStatusBarBackgroundGradientView;

@interface AVPlayerLayerAndContentOverlayContainerView : UIView {

	BOOL _playingOnSecondScreen;
	BOOL _canShowStatusBarBackgroundGradientWhenStatusBarVisible;
	BOOL _observingStatusBarHidden;
	__AVPlayerLayerView* _playerLayerView;
	UIView* _contentOverlayView;
	AVStatusBarBackgroundGradientView* _statusBarBackgroundGradientView;
	CGRect _contentFrame;

}

@property (nonatomic,readonly) AVStatusBarBackgroundGradientView * statusBarBackgroundGradientView;              //@synthesize statusBarBackgroundGradientView=_statusBarBackgroundGradientView - In the implementation block
@property (assign,getter=isObservingStatusBarHidden,nonatomic) BOOL observingStatusBarHidden;                    //@synthesize observingStatusBarHidden=_observingStatusBarHidden - In the implementation block
@property (assign,nonatomic) CGRect contentFrame;                                                                //@synthesize contentFrame=_contentFrame - In the implementation block
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen;                          //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
@property (nonatomic,retain) __AVPlayerLayerView * playerLayerView;                                              //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView;                                                      //@synthesize contentOverlayView=_contentOverlayView - In the implementation block
@property (assign,nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;                        //@synthesize canShowStatusBarBackgroundGradientWhenStatusBarVisible=_canShowStatusBarBackgroundGradientWhenStatusBarVisible - In the implementation block
-(__AVPlayerLayerView *)playerLayerView;
-(id)initWithFrame:(CGRect)arg1 playerLayerView:(id)arg2 ;
-(void)setPlayerLayerView:(__AVPlayerLayerView *)arg1 ;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(BOOL)arg1 ;
-(void)_updateStatusBarBackgroundGradientViewAlpha;
-(CGRect)_frameForStatusBarBackgroundGradientView;
-(CGRect)_resolvedContentFrame;
-(BOOL)isPlayingOnSecondScreen;
-(BOOL)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
-(AVStatusBarBackgroundGradientView *)statusBarBackgroundGradientView;
-(BOOL)isObservingStatusBarHidden;
-(void)setObservingStatusBarHidden:(BOOL)arg1 ;
-(UIView *)contentOverlayView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(CGRect)contentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
@end

