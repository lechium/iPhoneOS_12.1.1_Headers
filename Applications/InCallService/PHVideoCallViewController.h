//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHCallViewController.h"

#import "AVCEffectsDelegate.h"
#import "CFXCameraViewControllerDelegate.h"
#import "CFXEffectBrowserContentPresenterDelegate.h"
#import "CNKBuzzedTransitioningProtocol.h"
#import "CNKFaceTimeCameraViewControllerDelegate.h"
#import "CNKFaceTimeInCallControlsDragControllerDelegate.h"
#import "CNKFaceTimeInCallControlsViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "PHAudioRoutingAlertDataSource.h"
#import "PHAudioRoutingAlertDelegate.h"
#import "PHCallParticipantsViewDelegate.h"
#import "PHVideoCallVideoGroupViewDelegate.h"
#import "PHVideoOverlayViewControllerDelegate.h"
#import "TUMomentsControllerDelegate.h"
#import "TURouteControllerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"

@class AVCEffects, CFXEffectBrowserViewController, CNKEffectsLayoutController, CNKFaceTimeCameraViewController, CUShutterButton, ICSFlashView, ICSInsulatingView, ICSPIPButton, NSArray, NSLayoutConstraint, NSString, NSTimer, PHAudioRoutingAlertController, PHCallParticipantsView, PHStatusBarGradientView, PHSublayerResizingView, PHVideoCallInterfaceOverlayView, PHVideoCallVideoGroupView, PHVideoOverlayViewController, TUMomentsController, UIColor, UIControl, UILabel, UIView, _UIBackdropView;

@interface PHVideoCallViewController : PHCallViewController <PHAudioRoutingAlertDataSource, PHAudioRoutingAlertDelegate, UIPopoverPresentationControllerDelegate, CFXCameraViewControllerDelegate, CFXEffectBrowserContentPresenterDelegate, CNKFaceTimeCameraViewControllerDelegate, PHVideoCallVideoGroupViewDelegate, PHCallParticipantsViewDelegate, MFMessageComposeViewControllerDelegate, TUMomentsControllerDelegate, PHVideoOverlayViewControllerDelegate, TURouteControllerDelegate, AVCEffectsDelegate, CNKFaceTimeInCallControlsViewControllerDelegate, CNKBuzzedTransitioningProtocol, CNKFaceTimeInCallControlsDragControllerDelegate>
{
    UIControl *_videoGroupView;	// 8 = 0x8
    UIView *_pipVideoGroupView;	// 16 = 0x10
    PHVideoCallVideoGroupView *_pipVideoContainer;	// 24 = 0x18
    UIView *_pipVideoDimmingView;	// 32 = 0x20
    UIView *_pipVideoView;	// 40 = 0x28
    UIView *_pipVideoBackView;	// 48 = 0x30
    UIView *_pipVideoFrameView;	// 56 = 0x38
    UIView *_fullScreenVideoGroupView;	// 64 = 0x40
    UIControl *_fullScreenVideoContainer;	// 72 = 0x48
    PHSublayerResizingView *_fullScreenVideoView;	// 80 = 0x50
    PHSublayerResizingView *_fullScreenVideoBackView;	// 88 = 0x58
    UIView *_pipVideoOverlayView;	// 96 = 0x60
    _UIBackdropView *_fullScreenVideoBackdropView;	// 104 = 0x68
    UIView *_pipVideoMutedView;	// 112 = 0x70
    UILabel *_statsHUDTextLabel;	// 120 = 0x78
    NSTimer *_statsHUDTimer;	// 128 = 0x80
    long long _lastKnownOrientation;	// 136 = 0x88
    PHVideoCallInterfaceOverlayView *_callBarOverlayView;	// 144 = 0x90
    CNKFaceTimeCameraViewController *_effectsViewController;	// 152 = 0x98
    NSTimer *_autodismissRouteListTimer;	// 160 = 0xa0
    _Bool _waitingForLocalVideoFirstFrame;	// 168 = 0xa8
    _Bool _useLargeTextAndIcons;	// 169 = 0xa9
    _Bool _isShowingTopBar;	// 170 = 0xaa
    _Bool _isShowingBottomBar;	// 171 = 0xab
    _Bool _isShowingControlsBar;	// 172 = 0xac
    _Bool _isShowingFullConferenceDisplay;	// 173 = 0xad
    _Bool _isShowFullConferenceDisplayAnimationComplete;	// 174 = 0xae
    _Bool _isShowingCallWaitingUI;	// 175 = 0xaf
    _Bool _isShowingLockScreenUI;	// 176 = 0xb0
    _Bool _isShowingExpandedLocalVideo;	// 177 = 0xb1
    _Bool _isShowingEffectsBrowser;	// 178 = 0xb2
    _Bool _effectsEnabled;	// 179 = 0xb3
    _Bool _isShowingExpandedControls;	// 180 = 0xb4
    _Bool _shouldShowSensitiveUI;	// 181 = 0xb5
    _Bool _willTransitionToMultiwayViewController;	// 182 = 0xb6
    _Bool _willTransitionToStagingViewController;	// 183 = 0xb7
    _Bool _isRegisteredForPresentedNotifications;	// 184 = 0xb8
    _Bool _isPresented;	// 185 = 0xb9
    _Bool _cameraUnavailable;	// 186 = 0xba
    _Bool _wantsVideo;	// 187 = 0xbb
    unsigned long long _rotationType;	// 192 = 0xc0
    PHCallParticipantsView *_callParticipantsView;	// 200 = 0xc8
    PHVideoOverlayViewController *_overlayViewController;	// 208 = 0xd0
    ICSInsulatingView *_momentsIndicatorInsulatingView;	// 216 = 0xd8
    ICSPIPButton *_flipButton;	// 224 = 0xe0
    PHAudioRoutingAlertController *_routeListController;	// 232 = 0xe8
    long long _lockedLocalOrientationForPIP;	// 240 = 0xf0
    long long _lastValidOrientationForRemoteCamera;	// 248 = 0xf8
    CDUnknownBlockType _deviceOrientationBlock;	// 256 = 0x100
    NSTimer *_backupRotationTimer;	// 264 = 0x108
    PHStatusBarGradientView *_fullScreenVideoStatusBarGradientView;	// 272 = 0x110
    CFXEffectBrowserViewController *_effectsBrowserViewController;	// 280 = 0x118
    CNKEffectsLayoutController *_effectsLayoutController;	// 288 = 0x120
    NSString *_contactName;	// 296 = 0x128
    PHSublayerResizingView *_fullScreenVideoScreenView;	// 304 = 0x130
    ICSFlashView *_flashView;	// 312 = 0x138
    ICSFlashView *_pipVideoFlashView;	// 320 = 0x140
    CUShutterButton *_shutterButton;	// 328 = 0x148
    long long _shutterButtonStyle;	// 336 = 0x150
    NSLayoutConstraint *_shutterButtonLeftConstraint;	// 344 = 0x158
    NSLayoutConstraint *_shutterButtonRightConstraint;	// 352 = 0x160
    AVCEffects *_avcEffects;	// 360 = 0x168
    CDUnknownBlockType _localCameraFlipCompletion;	// 368 = 0x170
    NSString *_displayLabelString;	// 376 = 0x178
    UIColor *_startingWindowBackgroundColor;	// 384 = 0x180
    CDUnknownBlockType _pipStateDidChangeToNonTransitoryCompletionBlock;	// 392 = 0x188
    TUMomentsController *_momentsController;	// 400 = 0x190
    struct CGRect _unexpandedPipFrame;	// 408 = 0x198
}

+ (_Bool)isDockState:(long long)arg1;	// IMP=0x00000001000bf3c8
+ (_Bool)isVisibleState:(long long)arg1;	// IMP=0x00000001000bf3b8
+ (_Bool)isExpandedState:(long long)arg1;	// IMP=0x00000001000bf3a8
+ (long long)stateWithoutDockForState:(long long)arg1;	// IMP=0x00000001000bf32c
+ (id)dismissalAssertionReason;	// IMP=0x00000001000accb4
+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x000000010007e898
@property(retain, nonatomic) TUMomentsController *momentsController; // @synthesize momentsController=_momentsController;
@property(copy) CDUnknownBlockType pipStateDidChangeToNonTransitoryCompletionBlock; // @synthesize pipStateDidChangeToNonTransitoryCompletionBlock=_pipStateDidChangeToNonTransitoryCompletionBlock;
@property(retain, nonatomic) UIColor *startingWindowBackgroundColor; // @synthesize startingWindowBackgroundColor=_startingWindowBackgroundColor;
@property(nonatomic) _Bool wantsVideo; // @synthesize wantsVideo=_wantsVideo;
@property _Bool cameraUnavailable; // @synthesize cameraUnavailable=_cameraUnavailable;
@property _Bool isPresented; // @synthesize isPresented=_isPresented;
@property(retain) NSString *displayLabelString; // @synthesize displayLabelString=_displayLabelString;
@property _Bool isRegisteredForPresentedNotifications; // @synthesize isRegisteredForPresentedNotifications=_isRegisteredForPresentedNotifications;
@property(retain, nonatomic) PHVideoCallInterfaceOverlayView *callBarOverlayView; // @synthesize callBarOverlayView=_callBarOverlayView;
@property(copy, nonatomic) CDUnknownBlockType localCameraFlipCompletion; // @synthesize localCameraFlipCompletion=_localCameraFlipCompletion;
@property(retain, nonatomic) AVCEffects *avcEffects; // @synthesize avcEffects=_avcEffects;
@property(retain, nonatomic) UIView *pipVideoMutedView; // @synthesize pipVideoMutedView=_pipVideoMutedView;
@property(retain, nonatomic) UIView *pipVideoOverlayView; // @synthesize pipVideoOverlayView=_pipVideoOverlayView;
@property(nonatomic) struct CGRect unexpandedPipFrame; // @synthesize unexpandedPipFrame=_unexpandedPipFrame;
@property(retain, nonatomic) NSLayoutConstraint *shutterButtonRightConstraint; // @synthesize shutterButtonRightConstraint=_shutterButtonRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *shutterButtonLeftConstraint; // @synthesize shutterButtonLeftConstraint=_shutterButtonLeftConstraint;
@property(nonatomic) long long shutterButtonStyle; // @synthesize shutterButtonStyle=_shutterButtonStyle;
@property(retain, nonatomic) CUShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property(retain, nonatomic) ICSFlashView *pipVideoFlashView; // @synthesize pipVideoFlashView=_pipVideoFlashView;
@property(retain, nonatomic) ICSFlashView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) PHSublayerResizingView *fullScreenVideoScreenView; // @synthesize fullScreenVideoScreenView=_fullScreenVideoScreenView;
@property(retain, nonatomic) PHSublayerResizingView *fullScreenVideoBackView; // @synthesize fullScreenVideoBackView=_fullScreenVideoBackView;
@property(retain, nonatomic) PHSublayerResizingView *fullScreenVideoView; // @synthesize fullScreenVideoView=_fullScreenVideoView;
@property(retain, nonatomic) UIControl *fullScreenVideoContainer; // @synthesize fullScreenVideoContainer=_fullScreenVideoContainer;
@property(retain, nonatomic) UIView *fullScreenVideoGroupView; // @synthesize fullScreenVideoGroupView=_fullScreenVideoGroupView;
@property(retain, nonatomic) UIView *pipVideoFrameView; // @synthesize pipVideoFrameView=_pipVideoFrameView;
@property(retain, nonatomic) UIView *pipVideoBackView; // @synthesize pipVideoBackView=_pipVideoBackView;
@property(retain, nonatomic) UIView *pipVideoView; // @synthesize pipVideoView=_pipVideoView;
@property(retain, nonatomic) UIView *pipVideoDimmingView; // @synthesize pipVideoDimmingView=_pipVideoDimmingView;
@property(retain, nonatomic) PHVideoCallVideoGroupView *pipVideoContainer; // @synthesize pipVideoContainer=_pipVideoContainer;
@property(retain, nonatomic) UIView *pipVideoGroupView; // @synthesize pipVideoGroupView=_pipVideoGroupView;
@property(retain, nonatomic) UIControl *videoGroupView; // @synthesize videoGroupView=_videoGroupView;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) CNKEffectsLayoutController *effectsLayoutController; // @synthesize effectsLayoutController=_effectsLayoutController;
@property(retain, nonatomic) CFXEffectBrowserViewController *effectsBrowserViewController; // @synthesize effectsBrowserViewController=_effectsBrowserViewController;
@property(retain, nonatomic) CNKFaceTimeCameraViewController *effectsViewController; // @synthesize effectsViewController=_effectsViewController;
@property(nonatomic) _Bool willTransitionToStagingViewController; // @synthesize willTransitionToStagingViewController=_willTransitionToStagingViewController;
@property(nonatomic) _Bool willTransitionToMultiwayViewController; // @synthesize willTransitionToMultiwayViewController=_willTransitionToMultiwayViewController;
@property(retain) PHStatusBarGradientView *fullScreenVideoStatusBarGradientView; // @synthesize fullScreenVideoStatusBarGradientView=_fullScreenVideoStatusBarGradientView;
@property(retain) NSTimer *backupRotationTimer; // @synthesize backupRotationTimer=_backupRotationTimer;
@property(copy) CDUnknownBlockType deviceOrientationBlock; // @synthesize deviceOrientationBlock=_deviceOrientationBlock;
@property long long lastValidOrientationForRemoteCamera; // @synthesize lastValidOrientationForRemoteCamera=_lastValidOrientationForRemoteCamera;
@property long long lockedLocalOrientationForPIP; // @synthesize lockedLocalOrientationForPIP=_lockedLocalOrientationForPIP;
@property(retain, nonatomic) PHAudioRoutingAlertController *routeListController; // @synthesize routeListController=_routeListController;
@property(readonly, nonatomic) _Bool shouldShowSensitiveUI; // @synthesize shouldShowSensitiveUI=_shouldShowSensitiveUI;
@property(retain, nonatomic) ICSPIPButton *flipButton; // @synthesize flipButton=_flipButton;
@property(retain, nonatomic) ICSInsulatingView *momentsIndicatorInsulatingView; // @synthesize momentsIndicatorInsulatingView=_momentsIndicatorInsulatingView;
@property(retain, nonatomic) PHVideoOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(retain, nonatomic) PHCallParticipantsView *callParticipantsView; // @synthesize callParticipantsView=_callParticipantsView;
@property(readonly, nonatomic) _Bool isShowingExpandedControls; // @synthesize isShowingExpandedControls=_isShowingExpandedControls;
@property(nonatomic) _Bool effectsEnabled; // @synthesize effectsEnabled=_effectsEnabled;
@property(nonatomic) _Bool isShowingEffectsBrowser; // @synthesize isShowingEffectsBrowser=_isShowingEffectsBrowser;
@property(nonatomic) _Bool isShowingExpandedLocalVideo; // @synthesize isShowingExpandedLocalVideo=_isShowingExpandedLocalVideo;
@property(nonatomic) _Bool isShowingLockScreenUI; // @synthesize isShowingLockScreenUI=_isShowingLockScreenUI;
@property(nonatomic) _Bool isShowingCallWaitingUI; // @synthesize isShowingCallWaitingUI=_isShowingCallWaitingUI;
@property(nonatomic) _Bool isShowFullConferenceDisplayAnimationComplete; // @synthesize isShowFullConferenceDisplayAnimationComplete=_isShowFullConferenceDisplayAnimationComplete;
@property(nonatomic) _Bool isShowingFullConferenceDisplay; // @synthesize isShowingFullConferenceDisplay=_isShowingFullConferenceDisplay;
@property(nonatomic) _Bool isShowingControlsBar; // @synthesize isShowingControlsBar=_isShowingControlsBar;
@property(nonatomic) _Bool isShowingBottomBar; // @synthesize isShowingBottomBar=_isShowingBottomBar;
@property(nonatomic) _Bool isShowingTopBar; // @synthesize isShowingTopBar=_isShowingTopBar;
@property(nonatomic) _Bool useLargeTextAndIcons; // @synthesize useLargeTextAndIcons=_useLargeTextAndIcons;
@property(nonatomic) unsigned long long rotationType; // @synthesize rotationType=_rotationType;
- (void).cxx_destruct;	// IMP=0x00000001000c190c
- (id)incomingVideoOrMultiwayCall;	// IMP=0x00000001000c0f68
- (id)currentVideoOrMultiwayCall;	// IMP=0x00000001000c0d90
@property(readonly, nonatomic) UIView *localParticipantView;
@property(readonly, copy, nonatomic) NSArray *disappearingViews;
- (id)childViewControllerForHomeIndicatorAutoHidden;	// IMP=0x00000001000c0bbc
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x00000001000c0b9c
- (void)routesChangedForRouteController:(id)arg1;	// IMP=0x00000001000c0ae0
- (void)willCaptureRemoteRequestWithMomentsController:(id)arg1;	// IMP=0x00000001000c0a4c
- (void)momentsController:(id)arg1 didUpdateCapabilities:(id)arg2 forCall:(id)arg3;	// IMP=0x00000001000c0968
- (void)videoGroupViewDidStartDrag:(id)arg1;	// IMP=0x00000001000c0890
- (void)videoGroupView:(id)arg1 didUpdateCorner:(long long)arg2;	// IMP=0x00000001000c0550
- (void)videoOverlayViewController:(id)arg1 isShowingOverlay:(_Bool)arg2;	// IMP=0x00000001000c0544
- (void)endCaptureForRequestWithTransactionID:(id)arg1;	// IMP=0x00000001000c0298
- (id)nameForPhotoIndicator;	// IMP=0x00000001000c01b8
- (void)remoteDidTakePhoto;	// IMP=0x00000001000c001c
- (void)didTakePhoto;	// IMP=0x00000001000bfee8
- (void)capturePhotoForCall:(id)arg1;	// IMP=0x00000001000bfa14
- (void)didPressCapturePhotoButton;	// IMP=0x00000001000bf8cc
- (void)updateFaceTimePhotosButton;	// IMP=0x00000001000bf6dc
- (void)setupFlashViewIfNecessary;	// IMP=0x00000001000bf588
- (void)setupMomentsViewsIfNecessary;	// IMP=0x00000001000bf3f0
- (void)updateShutterButtonForControlsState:(long long)arg1;	// IMP=0x00000001000bf1f0
- (void)setControlsState:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000bef58
- (void)openMessagesToAddress:(id)arg1;	// IMP=0x00000001000bedcc
- (void)inCallControlsViewController:(id)arg1 didTap:(long long)arg2;	// IMP=0x00000001000be8fc
- (void)inCallControlsDragController:(id)arg1 willStartDragFrom:(long long)arg2;	// IMP=0x00000001000be870
- (void)inCallControlsDragController:(id)arg1 didStartDragTo:(long long)arg2;	// IMP=0x00000001000be7d0
- (void)inCallControlsDragController:(id)arg1 didEndDragAt:(long long)arg2;	// IMP=0x00000001000be710
- (long long)inCallControlsDragControllerShortestState:(id)arg1;	// IMP=0x00000001000be6b8
- (void)effectBrowserViewController:(id)arg1 willChangeDockHeight:(double)arg2;	// IMP=0x00000001000be510
- (struct CGSize)expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1;	// IMP=0x00000001000be488
- (void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000be3d4
- (void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000be320
- (_Bool)shouldAlwaysPresentExpandedAppsForEffectBrowserViewController:(id)arg1;	// IMP=0x00000001000be2a8
- (void)didSelectApp:(id)arg1;	// IMP=0x00000001000be25c
- (int)avcEffectsTypeFromEffectsState:(long long)arg1;	// IMP=0x00000001000be244
- (void)cameraViewController:(id)arg1 didChangeEffectsState:(long long)arg2;	// IMP=0x00000001000be1e4
- (void)cameraViewController:(id)arg1 didRenderFrame:(id)arg2;	// IMP=0x00000001000be0f8
- (void)cameraViewControllerPresentationRectWasDoubleTapped:(id)arg1;	// IMP=0x00000001000be0c0
- (void)clearEffectsState;	// IMP=0x00000001000be028
- (void)serverDidTimeout:(id)arg1;	// IMP=0x00000001000bdee4
- (struct CGRect)contentsRectFromPixelBuffer:(struct __CVBuffer *)arg1 presentationRect:(struct CGRect)arg2 shouldSwapOrientation:(_Bool)arg3;	// IMP=0x00000001000bde14
- (void)didCaptureVideoFrame:(id)arg1;	// IMP=0x00000001000bd98c
- (void)removeAllEffectsObjects;	// IMP=0x00000001000bd7b4
- (void)_setupEffectsViewControllersIfNecessary;	// IMP=0x00000001000bd1c8
- (void)_setupAVCEffectsIfNecessary;	// IMP=0x00000001000bd138
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x00000001000bd130
- (id)overrideStringForParticipantsView:(id)arg1;	// IMP=0x00000001000bd128
- (_Bool)shouldShowSingleDurationLabelInParticipantsView:(id)arg1;	// IMP=0x00000001000bd120
- (_Bool)shouldShowInfoButtonForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000bd118
- (unsigned long long)numberOfParticipantsForParticipantsView:(id)arg1;	// IMP=0x00000001000bd110
- (unsigned short)activityStateForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000bd108
- (id)supplementalParticipantLabelFormatStringAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000bd100
- (id)labelForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000bcfdc
- (id)nameForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000bcfd0
- (id)contactForParticipantAtIndex:(unsigned long long)arg1 inParticipantsView:(id)arg2;	// IMP=0x00000001000bcfc4
- (struct CGRect)preferredPIPContentRect;	// IMP=0x00000001000bcdb8
- (struct CGSize)preferredContentAspectRatio;	// IMP=0x00000001000bcdac
- (void)hardwareButtonEventNotification:(id)arg1;	// IMP=0x00000001000bc978
- (unsigned long long)desiredButtonEvents;	// IMP=0x00000001000bc88c
- (_Bool)allowsOrientationChangeEvents;	// IMP=0x00000001000bc884
- (_Bool)allowsBanners;	// IMP=0x00000001000bc848
- (_Bool)allowsMenuButtonDismissal;	// IMP=0x00000001000bc80c
- (void)_updateRemoteVideoPresentationState;	// IMP=0x00000001000bc608
- (void)_informOfRemoteVideoPresentationSizeChange;	// IMP=0x00000001000bc3f0
- (void)_handlePIPDidFinishResizingNotification:(id)arg1;	// IMP=0x00000001000bc374
- (void)_handlePIPControllerStateDidChangeNotification:(id)arg1;	// IMP=0x00000001000bbb88
- (void)_handleVideoCallRemoteVideoStateDidChange:(id)arg1;	// IMP=0x00000001000bba74
- (void)_handleVideoCallRemoteScreenDidChange:(id)arg1;	// IMP=0x00000001000bb910
- (void)_handleVideoCallRemoteVideoDidChange:(id)arg1;	// IMP=0x00000001000bb400
- (void)_handleVideoCallRemoteVideoCameraTypeChanged:(id)arg1;	// IMP=0x00000001000bb294
- (void)_handleVideoCallInvitationSent:(id)arg1;	// IMP=0x00000001000bb21c
- (void)registerCurrentCallForMomentsIfNecessary;	// IMP=0x00000001000badec
- (void)_handleCallConnected:(id)arg1;	// IMP=0x00000001000ba854
- (void)_handleVideoPreviewFirstFrameArrived:(id)arg1;	// IMP=0x00000001000ba358
- (void)_handleVideoPreviewDidStopNotification:(id)arg1;	// IMP=0x00000001000ba208
- (void)_handleVideoPreviewDidStartNotification:(id)arg1;	// IMP=0x00000001000ba1d0
- (void)_handleLocalCameraAvailableNotification:(id)arg1;	// IMP=0x00000001000ba12c
- (void)_handleLocalCameraErrorNotification:(id)arg1;	// IMP=0x00000001000ba044
- (void)setLocalCameraPosition:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b9e78
- (void)toggleLocalCameraType;	// IMP=0x00000001000b9a80
- (void)updateRemoteOverlays;	// IMP=0x00000001000b9728
- (void)showLocalViewAsMuted:(_Bool)arg1;	// IMP=0x00000001000b92c4
- (id)_viewWithImage:(id)arg1 title:(id)arg2 bounds:(struct CGRect)arg3 center:(struct CGPoint)arg4;	// IMP=0x00000001000b8e60
- (void)_ensureFullScreenVideoBackdropViewExists;	// IMP=0x00000001000b8d14
- (void)_ensurePIPVideoOverlayViewExists;	// IMP=0x00000001000b8b48
- (void)setMuteButtonSelected:(_Bool)arg1;	// IMP=0x00000001000b8afc
- (void)resumeFromCallWaitingAnimated:(_Bool)arg1;	// IMP=0x00000001000b89b0
- (void)prepareForCallWaitingAnimated:(_Bool)arg1;	// IMP=0x00000001000b8774
- (void)returnToFullScreenPreviewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b810c
- (void)synchronizedSecondTickNotification:(id)arg1;	// IMP=0x00000001000b8100
- (void)wantsHoldMusicChangedNotification:(id)arg1;	// IMP=0x00000001000b7ee8
- (void)pausePreview;	// IMP=0x00000001000b7dc0
- (void)stopPreview;	// IMP=0x00000001000b7c98
- (void)stopOrPausePreview;	// IMP=0x00000001000b7c28
- (void)startPreview;	// IMP=0x00000001000b7744
- (void)startPreviewIfNeeded;	// IMP=0x00000001000b763c
- (void)updateViewControllerForOrientation:(long long)arg1;	// IMP=0x00000001000b75d8
- (void)updateAudioButton:(_Bool)arg1;	// IMP=0x00000001000b74f8
- (void)uplinkMuteStatusChangedNotification:(id)arg1;	// IMP=0x00000001000b7450
- (void)_resetDisplayControllerForNewFaceTimeCall;	// IMP=0x00000001000b7360
- (void)handleThreeFingerPress:(id)arg1;	// IMP=0x00000001000b72b0
- (void)resetStatsHUDTimer;	// IMP=0x00000001000b7274
- (void)setupStatsHUDTimer;	// IMP=0x00000001000b71fc
- (void)_updateStatsHUD;	// IMP=0x00000001000b6da8
- (void)_createStatsHUD;	// IMP=0x00000001000b6c48
- (void)_flipRemoteCameraViewToCameraType:(long long)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b6930
- (void)_flipLocalCameraViewToCameraPosition:(long long)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b65d8
- (void)updateTopBarLabel;	// IMP=0x00000001000b5fa4
- (id)contact;	// IMP=0x00000001000b5eb0
- (void)clearCachedContactInfo;	// IMP=0x00000001000b5e74
- (void)updateContactInformation;	// IMP=0x00000001000b5b38
- (void)_setupVideoLayers;	// IMP=0x00000001000b5b00
- (id)createFullScreenVideoViewWithFrame:(struct CGRect)arg1 hidden:(_Bool)arg2 name:(id)arg3;	// IMP=0x00000001000b5998
- (void)_ensureVideoLayersExist;	// IMP=0x00000001000b4a54
- (void)changeToFullConferenceDisplayAnimated:(_Bool)arg1;	// IMP=0x00000001000b3afc
- (void)updatePIPToExpanded:(_Bool)arg1;	// IMP=0x00000001000b34b8
- (void)showControlsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b3330
- (_Bool)shouldBeInFullConferenceDisplay;	// IMP=0x00000001000b3298
- (void)showInCallStateEndedForCall:(id)arg1;	// IMP=0x00000001000b2aa4
- (id)_defaultStringForCall:(id)arg1;	// IMP=0x00000001000b290c
- (void)_delayedEndFaceTimeDisplayAnimation;	// IMP=0x00000001000b28b0
- (void)_endFaceTimeDisplayAnimation;	// IMP=0x00000001000b27f4
- (void)_deselectEndVideoButton;	// IMP=0x00000001000b27ac
- (void)_selectEndVideoButton;	// IMP=0x00000001000b2764
- (void)_removeOverlayViews;	// IMP=0x00000001000b269c
- (void)autoFadeOutBottomBar;	// IMP=0x00000001000b25c8
- (void)toggleInCallControlsViewState:(_Bool)arg1;	// IMP=0x00000001000b23c4
- (void)updateTopBar:(_Bool)arg1 bottomBar:(_Bool)arg2 controlsBar:(_Bool)arg3 animated:(_Bool)arg4;	// IMP=0x00000001000b1b64
@property(readonly, nonatomic) _Bool isShowingControlsViewController;
- (long long)multiwayOrientationFor:(long long)arg1;	// IMP=0x00000001000b1a84
- (void)updateControlsConstraintsControllerWithOrientation:(long long)arg1;	// IMP=0x00000001000b1990
- (void)_setupCallBars;	// IMP=0x00000001000b0970
- (void)_dissociateVideoLayers;	// IMP=0x00000001000b0698
- (void)_dissociateRemoteVideoLayersForCall:(id)arg1;	// IMP=0x00000001000b0570
- (void)associateRemoteVideoLayers;	// IMP=0x00000001000b0234
- (void)associateLocalVideoLayers;	// IMP=0x00000001000b00d8
- (_Bool)shouldDisableEdgeClip;	// IMP=0x00000001000b00c8
- (void)resetLocalPreviewState;	// IMP=0x00000001000affa0
- (_Bool)supportsBackFacingCamera;	// IMP=0x00000001000aff34
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000afea8
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x00000001000afe28
- (void)_leaveMessage;	// IMP=0x00000001000afae4
- (void)bottomBarActionPerformed:(long long)arg1 withCompletionState:(long long)arg2 fromBar:(id)arg3;	// IMP=0x00000001000af2d8
- (void)_endCall;	// IMP=0x00000001000aef94
- (void)_toggleLocalVideo;	// IMP=0x00000001000aed40
- (void)_toggleMute;	// IMP=0x00000001000aece8
- (void)sliderActionFromBar:(id)arg1 slidToProportion:(float)arg2;	// IMP=0x00000001000aece4
- (_Bool)shouldShowActionTypeAudioRoute;	// IMP=0x00000001000aec68
- (_Bool)shouldShowActionTypePunchOut;	// IMP=0x00000001000aebcc
- (_Bool)shouldShowActionTypeCameraFlip;	// IMP=0x00000001000aebc0
- (_Bool)shouldShowActionTypeEffects;	// IMP=0x00000001000aebb8
- (_Bool)shouldShowActionTypePhotoCapture;	// IMP=0x00000001000aeb10
- (void)setCurrentState:(unsigned short)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000adda8
- (void)setCurrentState:(unsigned short)arg1;	// IMP=0x00000001000add98
- (_Bool)_call:(id)arg1 isCrossInvitationWithCall:(id)arg2;	// IMP=0x00000001000adcc8
- (void)updateCurrentState;	// IMP=0x00000001000ad41c
- (void)_handleCallStartedConnecting:(id)arg1;	// IMP=0x00000001000ad338
- (void)videoCallStateChangedNotification:(id)arg1;	// IMP=0x00000001000acd30
- (void)releaseDismissalAssertion;	// IMP=0x00000001000acce0
- (_Bool)needsDismissalAssertion;	// IMP=0x00000001000acc60
- (void)didReceiveMemoryWarning;	// IMP=0x00000001000acb14
- (void)deregisterForPresentedNotifications;	// IMP=0x00000001000ac914
- (void)registerForPresentedNotificationsIfNecessary;	// IMP=0x00000001000ac6b8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000ac3e8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000ac250
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000001000ac1b0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000abff4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000abafc
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000ab938
- (void)_handlePIPDidCancelNotification:(id)arg1;	// IMP=0x00000001000ab788
- (void)_sublayerResizingViewDidResizeNotification:(id)arg1;	// IMP=0x00000001000ab6b4
- (void)loadView;	// IMP=0x00000001000ab3bc
- (void)dealloc;	// IMP=0x00000001000ab130
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000aa94c
- (void)toggleLocalCameraType:(CDUnknownBlockType)arg1;	// IMP=0x0000000100058544
- (void)_testing_didTransitionToIncomingRingingCallState:(id)arg1;	// IMP=0x00000001000583a4
- (void)_testing_didTransitionToIdleCallState;	// IMP=0x000000010005825c
- (void)_testing_didTransitionToEndedCallState;	// IMP=0x00000001000581f8
- (void)_testing_didTransitionToOutgoingRingingCallState:(id)arg1;	// IMP=0x0000000100057dbc
- (void)_testing_didTransitionToActiveCallState:(id)arg1;	// IMP=0x0000000100057d58
- (void)_testing_finishedAnimatingToActiveCallState:(id)arg1;	// IMP=0x0000000100057cc4
- (void)_resetPIPToFullScreen;	// IMP=0x0000000100071b78
- (void)_adjustPIPBoundsForCurrentOrientationAnimated:(_Bool)arg1;	// IMP=0x0000000100071608
- (struct CGRect)_cornerLocationsRectForOrientation:(long long)arg1;	// IMP=0x0000000100070fd0
- (struct CGRect)_pipBorderBoundsForPIPSize:(struct CGSize)arg1;	// IMP=0x0000000100070fb8
- (struct CGSize)_pipSizeForAspectRatio:(struct CGSize)arg1;	// IMP=0x0000000100070e64
- (double)_pipWidth;	// IMP=0x0000000100070e50
- (void)_ensureLocalVideoWillBecomeVisible;	// IMP=0x0000000100070dc4
- (void)_autoFadeInLocalVideo;	// IMP=0x0000000100070d30
- (void)_fadeInLocalVideo;	// IMP=0x0000000100070b68
- (double)_pipStatusBarPadding;	// IMP=0x0000000100070b34
- (unsigned long long)_flipAnimationOptionsForOrientation:(long long)arg1;	// IMP=0x0000000100082320
- (void)_updateLocalVideoOrientationAnimated:(_Bool)arg1;	// IMP=0x0000000100082014
- (void)_adjustFullScreenView:(id)arg1 forOrientation:(long long)arg2;	// IMP=0x0000000100081c84
- (void)_adjustForOrientationAnimated:(_Bool)arg1;	// IMP=0x0000000100081c74
- (void)_adjustRemoteVideoBounds;	// IMP=0x000000010008193c
- (void)_adjustForOrientationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100080750
- (void)_reorderPIPAboveBottomBar;	// IMP=0x00000001000806cc
- (long long)_preferredLocalOrientationForDeviceOrientation;	// IMP=0x0000000100080414
- (struct CGRect)_boundsForRemoteVideoInLocalOrientation:(long long)arg1;	// IMP=0x000000010007fea4
- (struct CGSize)_remoteVideoAspectRatio;	// IMP=0x000000010007fe08
- (struct CGPoint)_centerForRemoteVideoViewInLocalOrientation:(long long)arg1;	// IMP=0x000000010007fd8c
- (struct CGRect)_boundsForRemoteVideoViewInLocalOrientation:(long long)arg1;	// IMP=0x000000010007fcf4
- (struct CGRect)_boundsForRemoteVideoOverlayViewInRemoteCameraOrientation:(long long)arg1;	// IMP=0x000000010007fc60
- (struct CGRect)_boundsForLocalMutedViewInLocalOrientation:(long long)arg1;	// IMP=0x000000010007fbc8
- (_Bool)_fillRemoteVideoOnScreenWithLocalOrientation:(long long)arg1 remoteAspectRatio:(struct CGSize)arg2;	// IMP=0x000000010007fba8
- (struct CGSize)_normalizedScreenSizeForOrientation:(long long)arg1;	// IMP=0x000000010007f9ac
- (void)_adjustCallBarsForOrientation:(long long)arg1;	// IMP=0x000000010007f450
- (void)_adjustFlipButtonForLocalRemoteVideoSwap;	// IMP=0x000000010007f3fc
- (void)_adjustFlipButtonForOrientation:(long long)arg1;	// IMP=0x000000010007f200
- (long long)_lastKnownValidDeviceOrientation;	// IMP=0x000000010007f180
- (_Bool)_isValidFaceTimeOrientation:(long long)arg1;	// IMP=0x000000010007f160
- (double)_angleForLocalOrientation:(long long)arg1 remoteOrientation:(long long)arg2;	// IMP=0x000000010007ee90
- (long long)_deviceOrientationForCameraOrientation:(long long)arg1;	// IMP=0x000000010007ee80
- (long long)_cameraOrientationForDeviceOrientation:(long long)arg1;	// IMP=0x000000010007ee70
- (void)_applyAutoRotationCorrectionForOrientation:(long long)arg1;	// IMP=0x000000010007ed74
- (void)_resetViewLayout:(id)arg1;	// IMP=0x000000010007ecbc
- (void)_correctAutoRotationTransformForView:(id)arg1;	// IMP=0x000000010007ec10
- (void)_applyAutoRotationCorrectionForSize:(struct CGSize)arg1 withTransform:(struct CGAffineTransform)arg2;	// IMP=0x000000010007e974
- (struct CGAffineTransform)_transformForInterfaceOrientation:(long long)arg1;	// IMP=0x000000010007e8d4
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000010007e8a0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000010007e574
- (void)didChangeToDeviceOrientation:(long long)arg1;	// IMP=0x000000010007e3e4
- (void)invokeDeviceOrientationBlock;	// IMP=0x000000010007e260
- (void)_updateDeviceOrientation:(long long)arg1;	// IMP=0x000000010007e064
- (void)didChangeDeviceOrientationNotification:(id)arg1;	// IMP=0x000000010007df14
- (void)_removeDeviceOrientationChangeObserver;	// IMP=0x000000010007de48
- (void)_addDeviceOrientationChangeObserver;	// IMP=0x000000010007dd1c
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000100082fd4
- (void)audioRoutingAlertControllerDidDismiss:(id)arg1;	// IMP=0x0000000100082fc4
- (void)audioRoutingAlertController:(id)arg1 didToggleMute:(_Bool)arg2;	// IMP=0x0000000100082f88
- (void)audioRoutingAlertController:(id)arg1 didSelectRoute:(id)arg2;	// IMP=0x0000000100082ee0
- (id)muteActionTitleForAudioRoutingAlertController:(id)arg1;	// IMP=0x0000000100082e6c
- (id)hideActionTitleForAudioRoutingAlertController:(id)arg1;	// IMP=0x0000000100082df8
- (id)routesForAudioRoutingAlertController:(id)arg1;	// IMP=0x0000000100082d74
- (void)muteConference:(_Bool)arg1;	// IMP=0x0000000100082cec
- (void)updateUIForMute:(_Bool)arg1;	// IMP=0x0000000100082c3c
- (void)dismissAudioRoutingDeviceListAnimated:(_Bool)arg1;	// IMP=0x00000001000829a0
- (void)dismissAudioRoutingDeviceList;	// IMP=0x0000000100082990
- (void)reloadAudioRoutingDeviceList;	// IMP=0x0000000100082950
- (void)revealAudioRoutingDeviceListAnimated:(_Bool)arg1;	// IMP=0x00000001000823b4
- (void)cancelAutodismissTimer;	// IMP=0x000000010008238c
- (void)startAutodismissRoutingTimer;	// IMP=0x0000000100082348
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x0000000100083f74
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000100083e30
- (void)handlePIPDoubleTap:(id)arg1;	// IMP=0x0000000100083d38
- (void)handleSingleTapToShowHideUI:(id)arg1;	// IMP=0x0000000100083be0
- (void)_addPIPDoubleTapGestureRecognizer;	// IMP=0x0000000100083b4c
- (void)_addFullScreenPIPContainerViewTapGestureRecognizer;	// IMP=0x0000000100083ab8
- (void)_addStatusBarSingleTapGestureRecognizer;	// IMP=0x0000000100083a24
- (void)_refreshStatusBarAndPIPAnimated:(_Bool)arg1;	// IMP=0x00000001000836bc
- (_Bool)canHideBottomBar;	// IMP=0x00000001000835a4
- (_Bool)shouldHideStatusBar;	// IMP=0x0000000100083584
- (_Bool)shouldShowStatusBar;	// IMP=0x0000000100083488
- (_Bool)_currentUIRequiresStatusBar;	// IMP=0x0000000100083338
- (_Bool)_currentOrientationSupportsStatusBar;	// IMP=0x00000001000832e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
