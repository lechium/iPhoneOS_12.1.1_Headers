/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVTSplashScreenLayoutDelegate.h>

@protocol AVTSplashScreenViewControllerDelegate;
@class UILabel, UIButton, AVTSplashScreenConfiguration, AVTUIStyle, AVPlayerLooper, AVQueuePlayer, AVPlayerViewController, AVTSplashScreenLayout;

@interface AVTSplashScreenViewController : UIViewController <AVTSplashScreenLayoutDelegate> {

	id<AVTSplashScreenViewControllerDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _continueButton;
	AVTSplashScreenConfiguration* _configuration;
	AVTUIStyle* _styleProvider;
	AVPlayerLooper* _playerLooper;
	AVQueuePlayer* _queuePlayer;
	AVPlayerViewController* _playerViewController;
	AVPlayerLooper* _secondaryPlayerLooper;
	AVQueuePlayer* _secondaryQueuePlayer;
	AVPlayerViewController* _secondaryPlayerViewController;
	AVTSplashScreenLayout* _currentLayout;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                              //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) AVTSplashScreenConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) AVTUIStyle * styleProvider;                                             //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * playerLooper;                                          //@synthesize playerLooper=_playerLooper - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * queuePlayer;                                            //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * playerViewController;                          //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * secondaryPlayerLooper;                                 //@synthesize secondaryPlayerLooper=_secondaryPlayerLooper - In the implementation block
@property (nonatomic,retain) AVQueuePlayer * secondaryQueuePlayer;                                   //@synthesize secondaryQueuePlayer=_secondaryQueuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerViewController * secondaryPlayerViewController;                 //@synthesize secondaryPlayerViewController=_secondaryPlayerViewController - In the implementation block
@property (nonatomic,retain) AVTSplashScreenLayout * currentLayout;                                  //@synthesize currentLayout=_currentLayout - In the implementation block
@property (assign,nonatomic,__weak) id<AVTSplashScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(AVQueuePlayer *)queuePlayer;
-(void)setQueuePlayer:(AVQueuePlayer *)arg1 ;
-(UIButton *)continueButton;
-(void)setContinueButton:(UIButton *)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(AVTUIStyle *)styleProvider;
-(void)setStyleProvider:(AVTUIStyle *)arg1 ;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(id)initWithConfiguration:(id)arg1 styleProvider:(id)arg2 ;
-(void)didTapContinueButton:(id)arg1 ;
-(void)setPlayerLooper:(AVPlayerLooper *)arg1 ;
-(void)setSecondaryQueuePlayer:(AVQueuePlayer *)arg1 ;
-(AVQueuePlayer *)secondaryQueuePlayer;
-(void)setSecondaryPlayerLooper:(AVPlayerLooper *)arg1 ;
-(void)setSecondaryPlayerViewController:(AVPlayerViewController *)arg1 ;
-(AVPlayerViewController *)secondaryPlayerViewController;
-(void)applyLayout:(id)arg1 ;
-(void)splashScreenLayoutDidChange:(id)arg1 ;
-(AVPlayerLooper *)playerLooper;
-(AVPlayerLooper *)secondaryPlayerLooper;
-(id)init;
-(void)setDelegate:(id<AVTSplashScreenViewControllerDelegate>)arg1 ;
-(UILabel *)titleLabel;
-(id<AVTSplashScreenViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(AVTSplashScreenConfiguration *)configuration;
-(void)setConfiguration:(AVTSplashScreenConfiguration *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(AVTSplashScreenLayout *)currentLayout;
-(void)setCurrentLayout:(AVTSplashScreenLayout *)arg1 ;
@end

