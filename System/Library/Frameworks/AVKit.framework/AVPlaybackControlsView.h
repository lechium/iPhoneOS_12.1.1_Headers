/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AVPlayerViewControllerCustomControlsView, AVStyleSheet, UIView, AVBackdropView, AVView, AVButton, NSArray, AVVolumeButtonControl, AVVolumeSlider, AVTransportControlsView, AVScrubber, AVPlaybackControlsRoutePickerView, NSLayoutConstraint, UIViewPropertyAnimator, NSUUID, _UIVisualEffectBackdropView;

@interface AVPlaybackControlsView : UIView {

	BOOL _fullScreen;
	BOOL _doubleRowLayoutEnabled;
	BOOL _needsIntialLayout;
	BOOL _topAreaLayoutGuideExpanded;
	AVPlayerViewControllerCustomControlsView* _customControlsView;
	AVStyleSheet* _styleSheet;
	long long _preferredUnobscuredArea;
	long long _includedContainers;
	UIView* _volumeControlsContainer;
	UIView* _playbackControlsContainer;
	AVBackdropView* _screenModeControls;
	AVBackdropView* _volumeControls;
	AVBackdropView* _prominentPlayButtonBackdropView;
	AVBackdropView* _miniPlayPauseButtonBackdropView;
	AVView* _transportControlsContainerView;
	AVButton* _doneButton;
	AVButton* _fullScreenButton;
	AVButton* _videoGravityButton;
	AVButton* _pictureInPictureButton;
	NSArray* _customDisplayModeButtons;
	AVVolumeButtonControl* _volumeButton;
	AVVolumeSlider* _volumeSlider;
	NSArray* _customAudioButtons;
	AVButton* _prominentPlayButton;
	AVButton* _miniPlayPauseButton;
	AVTransportControlsView* _transportControlsView;
	AVButton* _standardPlayPauseButton;
	AVButton* _skipForwardButton;
	AVButton* _skipBackButton;
	AVButton* _startLeftwardContentTransitionButton;
	AVButton* _startRightwardContentTransitionButton;
	AVScrubber* _scrubber;
	AVPlaybackControlsRoutePickerView* _routePickerView;
	AVButton* _mediaSelectionButton;
	NSArray* _customMediaButtons;
	NSArray* _customControlItems;
	NSArray* _defaultAudioControls;
	NSArray* _defaultDisplayModeControls;
	NSLayoutConstraint* _volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
	NSLayoutConstraint* _volumeTopToLayoutGuideTopConstraint;
	NSLayoutConstraint* _volumeTopToViewTopConstraint;
	NSLayoutConstraint* _screenModeControlsToVolumeControlsSpacingConstraint;
	UIViewPropertyAnimator* _playbackControlsVisibilityAnimator;
	NSUUID* _mostRecentAnimationCompletionsID;
	_UIVisualEffectBackdropView* _captureView;

}

@property (nonatomic,readonly) NSArray * defaultAudioControls;                                                           //@synthesize defaultAudioControls=_defaultAudioControls - In the implementation block
@property (nonatomic,readonly) NSArray * defaultDisplayModeControls;                                                     //@synthesize defaultDisplayModeControls=_defaultDisplayModeControls - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * volumeButtonBottomToLayoutMarginsGuideBottomConstraint;              //@synthesize volumeButtonBottomToLayoutMarginsGuideBottomConstraint=_volumeButtonBottomToLayoutMarginsGuideBottomConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * volumeTopToLayoutGuideTopConstraint;                                 //@synthesize volumeTopToLayoutGuideTopConstraint=_volumeTopToLayoutGuideTopConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * volumeTopToViewTopConstraint;                                        //@synthesize volumeTopToViewTopConstraint=_volumeTopToViewTopConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * screenModeControlsToVolumeControlsSpacingConstraint;                 //@synthesize screenModeControlsToVolumeControlsSpacingConstraint=_screenModeControlsToVolumeControlsSpacingConstraint - In the implementation block
@property (assign,getter=isDoubleRowLayoutEnabled,nonatomic) BOOL doubleRowLayoutEnabled;                                //@synthesize doubleRowLayoutEnabled=_doubleRowLayoutEnabled - In the implementation block
@property (assign,nonatomic) BOOL needsIntialLayout;                                                                     //@synthesize needsIntialLayout=_needsIntialLayout - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * playbackControlsVisibilityAnimator;                                //@synthesize playbackControlsVisibilityAnimator=_playbackControlsVisibilityAnimator - In the implementation block
@property (nonatomic,retain) NSUUID * mostRecentAnimationCompletionsID;                                                  //@synthesize mostRecentAnimationCompletionsID=_mostRecentAnimationCompletionsID - In the implementation block
@property (assign,getter=isTopAreaLayoutGuideExpanded,nonatomic) BOOL topAreaLayoutGuideExpanded;                        //@synthesize topAreaLayoutGuideExpanded=_topAreaLayoutGuideExpanded - In the implementation block
@property (nonatomic,readonly) BOOL showsProminentPlayButton; 
@property (nonatomic,readonly) BOOL playbackControlsIncludeTransportControls; 
@property (nonatomic,readonly) BOOL playbackControlsIncludeDisplayModeControls; 
@property (nonatomic,readonly) BOOL playbackControlsIncludeVolumeControls; 
@property (nonatomic,readonly) _UIVisualEffectBackdropView * captureView;                                                //@synthesize captureView=_captureView - In the implementation block
@property (nonatomic,retain) AVStyleSheet * styleSheet;                                                                  //@synthesize styleSheet=_styleSheet - In the implementation block
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen;                                                        //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) long long preferredUnobscuredArea;                                                          //@synthesize preferredUnobscuredArea=_preferredUnobscuredArea - In the implementation block
@property (assign,nonatomic) long long includedContainers;                                                               //@synthesize includedContainers=_includedContainers - In the implementation block
@property (nonatomic,readonly) UIView * volumeControlsContainer;                                                         //@synthesize volumeControlsContainer=_volumeControlsContainer - In the implementation block
@property (nonatomic,readonly) UIView * playbackControlsContainer;                                                       //@synthesize playbackControlsContainer=_playbackControlsContainer - In the implementation block
@property (nonatomic,readonly) AVBackdropView * screenModeControls;                                                      //@synthesize screenModeControls=_screenModeControls - In the implementation block
@property (nonatomic,readonly) AVBackdropView * volumeControls;                                                          //@synthesize volumeControls=_volumeControls - In the implementation block
@property (nonatomic,readonly) AVBackdropView * prominentPlayButtonBackdropView;                                         //@synthesize prominentPlayButtonBackdropView=_prominentPlayButtonBackdropView - In the implementation block
@property (nonatomic,readonly) AVBackdropView * miniPlayPauseButtonBackdropView;                                         //@synthesize miniPlayPauseButtonBackdropView=_miniPlayPauseButtonBackdropView - In the implementation block
@property (nonatomic,readonly) AVView * transportControlsContainerView;                                                  //@synthesize transportControlsContainerView=_transportControlsContainerView - In the implementation block
@property (nonatomic,readonly) AVButton * doneButton;                                                                    //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) AVButton * fullScreenButton;                                                              //@synthesize fullScreenButton=_fullScreenButton - In the implementation block
@property (nonatomic,readonly) AVButton * videoGravityButton;                                                            //@synthesize videoGravityButton=_videoGravityButton - In the implementation block
@property (nonatomic,readonly) AVButton * pictureInPictureButton;                                                        //@synthesize pictureInPictureButton=_pictureInPictureButton - In the implementation block
@property (nonatomic,readonly) NSArray * customDisplayModeButtons;                                                       //@synthesize customDisplayModeButtons=_customDisplayModeButtons - In the implementation block
@property (nonatomic,readonly) AVVolumeButtonControl * volumeButton;                                                     //@synthesize volumeButton=_volumeButton - In the implementation block
@property (nonatomic,readonly) AVVolumeSlider * volumeSlider;                                                            //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (nonatomic,readonly) NSArray * customAudioButtons;                                                             //@synthesize customAudioButtons=_customAudioButtons - In the implementation block
@property (nonatomic,readonly) AVButton * prominentPlayButton;                                                           //@synthesize prominentPlayButton=_prominentPlayButton - In the implementation block
@property (nonatomic,readonly) AVButton * miniPlayPauseButton;                                                           //@synthesize miniPlayPauseButton=_miniPlayPauseButton - In the implementation block
@property (nonatomic,readonly) AVTransportControlsView * transportControlsView;                                          //@synthesize transportControlsView=_transportControlsView - In the implementation block
@property (nonatomic,readonly) AVButton * standardPlayPauseButton;                                                       //@synthesize standardPlayPauseButton=_standardPlayPauseButton - In the implementation block
@property (nonatomic,readonly) AVButton * skipForwardButton;                                                             //@synthesize skipForwardButton=_skipForwardButton - In the implementation block
@property (nonatomic,readonly) AVButton * skipBackButton;                                                                //@synthesize skipBackButton=_skipBackButton - In the implementation block
@property (nonatomic,readonly) AVButton * startLeftwardContentTransitionButton;                                          //@synthesize startLeftwardContentTransitionButton=_startLeftwardContentTransitionButton - In the implementation block
@property (nonatomic,readonly) AVButton * startRightwardContentTransitionButton;                                         //@synthesize startRightwardContentTransitionButton=_startRightwardContentTransitionButton - In the implementation block
@property (nonatomic,readonly) AVScrubber * scrubber;                                                                    //@synthesize scrubber=_scrubber - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsRoutePickerView * routePickerView;                                      //@synthesize routePickerView=_routePickerView - In the implementation block
@property (nonatomic,readonly) AVButton * mediaSelectionButton;                                                          //@synthesize mediaSelectionButton=_mediaSelectionButton - In the implementation block
@property (nonatomic,readonly) NSArray * customMediaButtons;                                                             //@synthesize customMediaButtons=_customMediaButtons - In the implementation block
@property (nonatomic,copy) NSArray * customControlItems;                                                                 //@synthesize customControlItems=_customControlItems - In the implementation block
@property (nonatomic,readonly) AVPlayerViewControllerCustomControlsView * customControlsView;                            //@synthesize customControlsView=_customControlsView - In the implementation block
-(AVVolumeSlider *)volumeSlider;
-(BOOL)playbackControlsIncludeTransportControls;
-(BOOL)playbackControlsIncludeDisplayModeControls;
-(void)setCustomControlItems:(NSArray *)arg1 ;
-(BOOL)playbackControlsIncludeVolumeControls;
-(NSArray *)customControlItems;
-(long long)preferredUnobscuredArea;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleSheet:(id)arg2 captureView:(id)arg3 ;
-(void)setStyleSheet:(AVStyleSheet *)arg1 ;
-(AVButton *)prominentPlayButton;
-(AVVolumeButtonControl *)volumeButton;
-(void)setDoubleRowLayoutEnabled:(BOOL)arg1 ;
-(BOOL)isDoubleRowLayoutEnabled;
-(AVButton *)standardPlayPauseButton;
-(AVButton *)skipForwardButton;
-(AVButton *)skipBackButton;
-(AVButton *)startLeftwardContentTransitionButton;
-(AVButton *)startRightwardContentTransitionButton;
-(AVPlaybackControlsRoutePickerView *)routePickerView;
-(AVButton *)mediaSelectionButton;
-(BOOL)showsProminentPlayButton;
-(void)setupInitialLayout;
-(void)setIncludedContainers:(long long)arg1 ;
-(void)animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3 ;
-(void)updateLayoutForChangedControlsVisibility;
-(void)_updatePlaybackControlsVisibility;
-(void)_updateAreVolumeAndTransportControlsVisible;
-(void)_updateDoubleRowLayoutEnabled;
-(void)_setupInitialLayout;
-(void)_statusBarOrientationWillChange:(id)arg1 ;
-(void)_statusBarHiddenDidChange:(id)arg1 ;
-(void)_updateLayoutMargins:(CGRect)arg1 ;
-(BOOL)_isDescendantOfNonPagingScrollView;
-(id)_playbackControlsViewItems;
-(id)_buttonsForControlItems:(id)arg1 withType:(long long)arg2 limit:(unsigned long long)arg3 ;
-(id)_customControlsViewIfLoaded;
-(long long)includedContainers;
-(UIView *)volumeControlsContainer;
-(UIView *)playbackControlsContainer;
-(AVBackdropView *)screenModeControls;
-(AVBackdropView *)volumeControls;
-(AVBackdropView *)prominentPlayButtonBackdropView;
-(AVBackdropView *)miniPlayPauseButtonBackdropView;
-(AVView *)transportControlsContainerView;
-(AVButton *)fullScreenButton;
-(AVButton *)videoGravityButton;
-(AVButton *)pictureInPictureButton;
-(NSArray *)customDisplayModeButtons;
-(NSArray *)customAudioButtons;
-(AVButton *)miniPlayPauseButton;
-(AVTransportControlsView *)transportControlsView;
-(NSArray *)customMediaButtons;
-(NSArray *)defaultAudioControls;
-(NSArray *)defaultDisplayModeControls;
-(NSLayoutConstraint *)volumeButtonBottomToLayoutMarginsGuideBottomConstraint;
-(NSLayoutConstraint *)volumeTopToLayoutGuideTopConstraint;
-(NSLayoutConstraint *)volumeTopToViewTopConstraint;
-(NSLayoutConstraint *)screenModeControlsToVolumeControlsSpacingConstraint;
-(BOOL)needsIntialLayout;
-(void)setNeedsIntialLayout:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)playbackControlsVisibilityAnimator;
-(void)setPlaybackControlsVisibilityAnimator:(UIViewPropertyAnimator *)arg1 ;
-(NSUUID *)mostRecentAnimationCompletionsID;
-(void)setMostRecentAnimationCompletionsID:(NSUUID *)arg1 ;
-(BOOL)isTopAreaLayoutGuideExpanded;
-(void)setTopAreaLayoutGuideExpanded:(BOOL)arg1 ;
-(void)_statusBarFrameWillChange:(id)arg1 ;
-(void)_statusBarFrameDidChange:(id)arg1 ;
-(AVScrubber *)scrubber;
-(void)_updateLayoutMargins;
-(AVPlayerViewControllerCustomControlsView *)customControlsView;
-(AVStyleSheet *)styleSheet;
-(BOOL)isFullScreen;
-(void)dealloc;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)safeAreaInsetsDidChange;
-(_UIVisualEffectBackdropView *)captureView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(AVButton *)doneButton;
-(void)setFullScreen:(BOOL)arg1 ;
@end

