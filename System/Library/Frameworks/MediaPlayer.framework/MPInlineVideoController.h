/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPVideoControllerProtocol.h>
#import <libobjc.A.dylib/MPSwipableViewDelegate.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>
#import <libobjc.A.dylib/MPTransportControlsTarget.h>
#import <UIKit/UIAlertViewDelegate.h>

@class MPAVItem, MPAVController, MPVideoBackgroundView, UIColor, UIImage, MPSwipableView, MPVideoPlaybackOverlayView, NSString, UIView, UIAlertView, UIWindow, MPInlineAudioOverlay, UINavigationController, MPVideoContainerView, UITapGestureRecognizer, MPInlineVideoFullscreenViewController, MPWeakTimer, UIActivityIndicatorView, UIPinchGestureRecognizer, MPTVOutWindow, NSSet, MPVolumeController, _UIHostedWindow, MPVideoView;

@interface MPInlineVideoController : NSObject <MPVolumeControllerDelegate, MPVideoControllerProtocol, MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget, UIAlertViewDelegate> {

	id _delegate;
	MPAVItem* _item;
	MPAVController* _player;
	unsigned long long _activeOverlayUserEvents;
	BOOL _automaticallyHandleTransportControls;
	BOOL _allowsDetailScrubbing;
	BOOL _allowsWirelessPlayback;
	BOOL _alwaysAllowHidingControlsOverlay;
	int _artworkImageStyle;
	BOOL _attemptAutoPlayWhenControlsHidden;
	MPVideoBackgroundView* _backgroundView;
	UIColor* _backstopColor;
	BOOL _canAnimateControlsOverlay;
	BOOL _canShowControlsOverlay;
	BOOL _controlsOverlayVisible;
	unsigned long long _desiredParts;
	unsigned long long _disabledParts;
	BOOL _disableAutoRotation;
	BOOL _disableControlsAutohide;
	BOOL _displayPlaybackErrorAlerts;
	BOOL _inlinePlaybackUsesTVOut;
	long long _itemTypeOverride;
	BOOL _needsTVWindowSetup;
	BOOL _needsTVWindowTeardown;
	UIImage* _posterImage;
	long long _scaleMode;
	BOOL _TVOutEnabled;
	BOOL _TVOutEnabledMaster;
	BOOL _useHostedWindowWhenFullscreen;
	MPSwipableView* _view;
	MPVideoPlaybackOverlayView* _videoOverlayView;
	unsigned long long _visibleParts;
	long long _audioOverlayStyle;
	BOOL _navigationBarHidden;
	NSString* _playbackErrorDescription;
	long long _videoOverlayStyle;
	UIView* _advertisementView;
	UIAlertView* _alertSheet;
	UIWindow* _alternateTracksWindow;
	MPInlineAudioOverlay* _audioOverlayView;
	unsigned long long _backgroundTaskId;
	BOOL _batteryMonitoringWasEnabled;
	UINavigationController* _chaptersContainerController;
	MPVideoContainerView* _containerView;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	MPInlineVideoFullscreenViewController* _fullscreenViewController;
	BOOL _fullscreenViewSizeIsExternallyManaged;
	UIWindow* _fullscreenWindow;
	BOOL _hasShownFirstVideoFrame;
	MPWeakTimer* _idleTimer;
	BOOL _inCloneMirrorMode;
	BOOL _isAnimatingOverlay;
	BOOL _isTransitioningFromFullscreen;
	BOOL _isTransitioningToFullscreen;
	UIActivityIndicatorView* _loadingIndicator;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	long long _scaleModeOverride;
	BOOL _scheduledLoadingIndicator;
	UIView* _subtitlesView;
	BOOL _swallowNextTapGesture;
	UITapGestureRecognizer* _tapGestureRecognizer;
	MPTVOutWindow* _tvOutWindow;
	UIView* _videoBackgroundView;
	NSSet* _viewsToFade;
	BOOL _wantsOverlayVisibleWhenItemIsAvailable;
	BOOL _wasPlaying;
	UIWindow* _windowForDisablingAutorotation;
	UIWindow* _windowForFullscreenTransition;
	BOOL _shouldDestroyVideoSnapshot;
	MPVolumeController* _volumeController;

}

@property (nonatomic,readonly) UIView * advertisementView;                                   //@synthesize advertisementView=_advertisementView - In the implementation block
@property (assign,nonatomic) long long audioOverlayStyle;                                    //@synthesize audioOverlayStyle=_audioOverlayStyle - In the implementation block
@property (assign,nonatomic) BOOL automaticallyHandleTransportControls;                      //@synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls - In the implementation block
@property (nonatomic,readonly) UIView * fullscreenView; 
@property (nonatomic,copy) NSString * playbackErrorDescription;                              //@synthesize playbackErrorDescription=_playbackErrorDescription - In the implementation block
@property (assign,nonatomic) BOOL navigationBarHidden;                                       //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (nonatomic,readonly) UIView * subtitlesView;                                       //@synthesize subtitlesView=_subtitlesView - In the implementation block
@property (assign,nonatomic) long long videoOverlayStyle;                                    //@synthesize videoOverlayStyle=_videoOverlayStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long orientation; 
@property (nonatomic,retain) MPAVController * player;                                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain,readonly) UIView * view; 
@property (assign,nonatomic) BOOL allowsDetailScrubbing;                                     //@synthesize allowsDetailScrubbing=_allowsDetailScrubbing - In the implementation block
@property (assign,nonatomic) BOOL allowsWirelessPlayback;                                    //@synthesize allowsWirelessPlayback=_allowsWirelessPlayback - In the implementation block
@property (assign,nonatomic) BOOL alwaysAllowHidingControlsOverlay;                          //@synthesize alwaysAllowHidingControlsOverlay=_alwaysAllowHidingControlsOverlay - In the implementation block
@property (assign,nonatomic) int artworkImageStyle;                                          //@synthesize artworkImageStyle=_artworkImageStyle - In the implementation block
@property (assign,nonatomic) BOOL attemptAutoPlayWhenControlsHidden;                         //@synthesize attemptAutoPlayWhenControlsHidden=_attemptAutoPlayWhenControlsHidden - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIColor * backstopColor;                                        //@synthesize backstopColor=_backstopColor - In the implementation block
@property (assign,nonatomic) BOOL canAnimateControlsOverlay;                                 //@synthesize canAnimateControlsOverlay=_canAnimateControlsOverlay - In the implementation block
@property (nonatomic,readonly) BOOL canChangeScaleMode; 
@property (assign,nonatomic) BOOL canShowControlsOverlay;                                    //@synthesize canShowControlsOverlay=_canShowControlsOverlay - In the implementation block
@property (assign,nonatomic) BOOL controlsOverlayVisible;                                    //@synthesize controlsOverlayVisible=_controlsOverlayVisible - In the implementation block
@property (assign,nonatomic) unsigned long long desiredParts;                                //@synthesize desiredParts=_desiredParts - In the implementation block
@property (assign,nonatomic) BOOL disableAutoRotation;                                       //@synthesize disableAutoRotation=_disableAutoRotation - In the implementation block
@property (assign,nonatomic) BOOL disableControlsAutohide; 
@property (assign,nonatomic) unsigned long long disabledParts;                               //@synthesize disabledParts=_disabledParts - In the implementation block
@property (assign,nonatomic) BOOL displayPlaybackErrorAlerts;                                //@synthesize displayPlaybackErrorAlerts=_displayPlaybackErrorAlerts - In the implementation block
@property (nonatomic,readonly) _UIHostedWindow * hostedWindow; 
@property (nonatomic,readonly) unsigned hostedWindowContextID; 
@property (assign,nonatomic) BOOL inlinePlaybackUsesTVOut;                                   //@synthesize inlinePlaybackUsesTVOut=_inlinePlaybackUsesTVOut - In the implementation block
@property (assign,nonatomic) long long itemTypeOverride;                                     //@synthesize itemTypeOverride=_itemTypeOverride - In the implementation block
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (nonatomic,retain) UIImage * posterImage;                                          //@synthesize posterImage=_posterImage - In the implementation block
@property (assign,nonatomic) long long scaleMode;                                            //@synthesize scaleMode=_scaleMode - In the implementation block
@property (assign,nonatomic) BOOL TVOutEnabled;                                              //@synthesize TVOutEnabled=_TVOutEnabled - In the implementation block
@property (nonatomic,readonly) BOOL viewControllerWillRequestExit; 
@property (nonatomic,retain,readonly) UIView*<MPVideoOverlay> videoOverlayView; 
@property (nonatomic,retain,readonly) MPVideoView * videoView; 
@property (assign,nonatomic) unsigned long long visibleParts;                                //@synthesize visibleParts=_visibleParts - In the implementation block
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
-(void)setFullscreen:(BOOL)arg1 ;
-(void)setScaleModeOverride:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)scaleMode;
-(void)setCanShowControlsOverlay:(BOOL)arg1 ;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1 ;
-(void)setAllowsWirelessPlayback:(BOOL)arg1 ;
-(BOOL)allowsWirelessPlayback;
-(BOOL)TVOutEnabled;
-(void)setItemTypeOverride:(long long)arg1 ;
-(MPVideoView *)videoView;
-(BOOL)canShowControlsOverlay;
-(void)setVideoSnapshotEnabled:(BOOL)arg1 ;
-(void)displayVideoView;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 ;
-(UIView *)advertisementView;
-(BOOL)controlsOverlayVisible;
-(BOOL)navigationBarHidden;
-(UIView*<MPVideoOverlay>)videoOverlayView;
-(unsigned long long)visibleParts;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1 ;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(BOOL)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1 ;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)setVideoOverlayStyle:(long long)arg1 ;
-(void)setDisplayPlaybackErrorAlerts:(BOOL)arg1 ;
-(void)setUseHostedWindowWhenFullscreen:(BOOL)arg1 ;
-(void)setTVOutEnabled:(BOOL)arg1 ;
-(void)setInlinePlaybackUsesTVOut:(BOOL)arg1 ;
-(BOOL)inlinePlaybackUsesTVOut;
-(_UIHostedWindow *)hostedWindow;
-(unsigned)hostedWindowContextID;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_sizeDidChange:(id)arg1 ;
-(void)_firstVideoFrameDisplayed:(id)arg1 ;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(BOOL)disableControlsAutohide;
-(int)artworkImageStyle;
-(long long)itemTypeOverride;
-(long long)_itemTypeWithActualTypePreference;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2 ;
-(BOOL)_canEnableAirPlayVideoRoutes;
-(BOOL)canChangeScaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(void)_updateProgressControlForItem:(id)arg1 ;
-(void)_updateAlwaysPlayWheneverPossible;
-(void)_scheduleLoadingIndicatorIfNeeded;
-(void)_hideLoadingIndicator;
-(void)prepareToDisplayVideo;
-(void)_updateIdleTimerDisabledFromPlaybackState:(long long)arg1 ;
-(BOOL)canShowQTAudioOnlyUI;
-(BOOL)canHideOverlay:(BOOL)arg1 ;
-(void)_showStillFrameIfNotAlreadyPlaying;
-(unsigned long long)disabledParts;
-(void)clearWeakReferencesToObject:(id)arg1 ;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1 ;
-(void)exitFullscreen;
-(void)setControlsNeedLayout;
-(void)setOwnsStatusBar:(BOOL)arg1 ;
-(BOOL)allowsDetailScrubbing;
-(void)setAllowsDetailScrubbing:(BOOL)arg1 ;
-(void)setArtworkImageStyle:(int)arg1 ;
-(BOOL)attemptAutoPlayWhenControlsHidden;
-(void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1 ;
-(UIColor *)backstopColor;
-(void)setBackstopColor:(UIColor *)arg1 ;
-(BOOL)canAnimateControlsOverlay;
-(void)setCanAnimateControlsOverlay:(BOOL)arg1 ;
-(void)setControlsOverlayVisible:(BOOL)arg1 ;
-(BOOL)disableAutoRotation;
-(void)setDisableAutoRotation:(BOOL)arg1 ;
-(void)setDisableControlsAutohide:(BOOL)arg1 ;
-(BOOL)displayPlaybackErrorAlerts;
-(void)setPosterImage:(UIImage *)arg1 ;
-(BOOL)viewControllerWillRequestExit;
-(void)swipableView:(id)arg1 didMoveToSuperview:(id)arg2 ;
-(void)swipableView:(id)arg1 willMoveToWindow:(id)arg2 ;
-(void)swipableViewHadActivity:(id)arg1 ;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlayTappedFullscreenButton:(id)arg1 ;
-(void)_durationAvailable:(id)arg1 ;
-(void)_effectiveScaleModeDidChange:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(BOOL)automaticallyHandleTransportControls;
-(void)setAutomaticallyHandleTransportControls:(BOOL)arg1 ;
-(void)setPlaybackErrorDescription:(NSString *)arg1 ;
-(NSString *)playbackErrorDescription;
-(void)_availableRoutesChanged:(id)arg1 ;
-(void)_itemTypeAvailable:(id)arg1 ;
-(void)_applicationResumedEventsOnly:(id)arg1 ;
-(void)_applicationSuspended:(id)arg1 ;
-(void)_applicationDidFinishSuspensionSnapshot:(id)arg1 ;
-(void)_batteryStateDidChange:(id)arg1 ;
-(void)_unregisterForPlayerNotifications;
-(void)_destroyAudioOverlayView;
-(void)_destroyVideoOverlayView;
-(void)_enableAirPlayVideoRoutesIfNecessary;
-(void)_updateBackgroundViewInformation;
-(void)_registerForPlayerNotifications;
-(void)_updateDisableAirPlayMirroringDuringPlayback;
-(long long)_effectiveItemType;
-(void)_viewWasTapped:(id)arg1 ;
-(void)_viewWasPinched:(id)arg1 ;
-(BOOL)_isAnimatingFullscreenTransition;
-(void)_setupTVOutWindow;
-(void)_transitionFromFullscreenAnimated:(BOOL)arg1 ;
-(void)_scaleModeDidChange:(id)arg1 ;
-(void)_showOverlayAnimated:(BOOL)arg1 ;
-(void)_hideOverlayAnimated:(BOOL)arg1 ;
-(void)_cancelOverlayIdleTimer;
-(void)_resetOverlayIdleTimer;
-(void)_transitionToFullscreenAnimated:(BOOL)arg1 ;
-(void)_updateTVOutEnabled;
-(BOOL)_useInlineControls;
-(void)_updateDoubleTapGestureRecognizer;
-(void)_showVideoSnapshotView;
-(void)_destroyVideoSnapshotView;
-(void)_tearDownTVOutWindow;
-(void)_transitionFromFullscreenAnimated:(BOOL)arg1 fromDoneButton:(BOOL)arg2 ;
-(void)_postViewControllerRequestsExitWithReason:(long long)arg1 ;
-(void)_updateBackgroundViewConfiguration:(BOOL)arg1 ;
-(void)_postScaleModeDidChange;
-(void)_flipFromChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_hideOverlayDidEnd;
-(void)_bufferingStateChanged:(id)arg1 ;
-(void)_playbackError:(id)arg1 ;
-(void)_timedImageMetadataAvailable:(id)arg1 ;
-(void)_validityChanged:(id)arg1 ;
-(void)_resetOverlayIdleTimer:(double)arg1 ;
-(void)_overlayIdleTimerFired:(id)arg1 ;
-(void)_delayedShowLoadingIndicator;
-(BOOL)_overlayViewIsVisible;
-(long long)audioOverlayStyle;
-(void)_showOverlayAnimated:(BOOL)arg1 quickHide:(BOOL)arg2 ;
-(void)_showOverlayDidEnd:(BOOL)arg1 ;
-(void)_transitionFromFullscreenDidEnd;
-(void)_transitionToFullscreenDidEnd;
-(BOOL)_shouldShowDestinationPlaceholder;
-(long long)videoOverlayStyle;
-(void)fullscreenOverlayWillHideAnimated:(BOOL)arg1 ;
-(void)fullscreenOverlayWillShowAnimated:(BOOL)arg1 ;
-(void)fullscreenOverlayDidHide;
-(void)fullscreenOverlayDidShow;
-(UIView *)fullscreenView;
-(void)setAudioOverlayStyle:(long long)arg1 ;
-(void)_doneWithChapters:(id)arg1 ;
-(void)_flipToChaptersDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(UIView *)subtitlesView;
-(UIImage *)posterImage;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)_setupSubviews;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(UIView *)view;
-(void)setItem:(MPAVItem *)arg1 ;
-(MPAVItem *)item;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(UIView *)backgroundView;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(long long)orientation;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)isFullscreen;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
@end

