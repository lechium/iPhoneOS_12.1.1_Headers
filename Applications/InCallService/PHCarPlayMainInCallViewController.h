//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPCarPlayPhoneCallGalleryViewDelegate.h"
#import "PHCarPlayHardPauseButtonDelegate.h"
#import "PHCarPlayInCallButtonsViewDelegate.h"

@class NSArray, NSString, NSTimer, PHCarPlayInCallButtonsView, PHCarPlayInCallHardPauseButton, PHCarPlayPhoneCallGalleryView, TUCall, TUCallCenter, TUReplyWithMessageStore, UIView;

@interface PHCarPlayMainInCallViewController : UIViewController <MPCarPlayPhoneCallGalleryViewDelegate, PHCarPlayHardPauseButtonDelegate, PHCarPlayInCallButtonsViewDelegate>
{
    TUReplyWithMessageStore *_replyWithMessageStore;	// 8 = 0x8
    unsigned short _currentMode;	// 16 = 0x10
    id <MPCarPlayInCallViewControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_primaryCalls;	// 32 = 0x20
    NSArray *_conferenceParticipants;	// 40 = 0x28
    TUCall *_incomingCall;	// 48 = 0x30
    UIView *_flippyView;	// 56 = 0x38
    PHCarPlayPhoneCallGalleryView *_galleryView;	// 64 = 0x40
    PHCarPlayInCallButtonsView *_buttonsView;	// 72 = 0x48
    PHCarPlayInCallHardPauseButton *_hardPauseButton;	// 80 = 0x50
    NSTimer *_viewUpdateClockTickTimer;	// 88 = 0x58
    TUCall *_callToDecline;	// 96 = 0x60
    TUCall *_failedCall;	// 104 = 0x68
    TUCallCenter *_callCenter;	// 112 = 0x70
    id <TUCallContainerPrivate> _callContainer;	// 120 = 0x78
    CDUnknownBlockType _canSendTextMessagesBlock;	// 128 = 0x80
}

@property(copy, nonatomic) CDUnknownBlockType canSendTextMessagesBlock; // @synthesize canSendTextMessagesBlock=_canSendTextMessagesBlock;
@property(retain, nonatomic) id <TUCallContainerPrivate> callContainer; // @synthesize callContainer=_callContainer;
@property(retain, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
@property(retain) TUCall *failedCall; // @synthesize failedCall=_failedCall;
@property unsigned short currentMode; // @synthesize currentMode=_currentMode;
@property(retain) TUCall *callToDecline; // @synthesize callToDecline=_callToDecline;
@property(retain) NSTimer *viewUpdateClockTickTimer; // @synthesize viewUpdateClockTickTimer=_viewUpdateClockTickTimer;
@property(retain) PHCarPlayInCallHardPauseButton *hardPauseButton; // @synthesize hardPauseButton=_hardPauseButton;
@property(retain) PHCarPlayInCallButtonsView *buttonsView; // @synthesize buttonsView=_buttonsView;
@property(retain) PHCarPlayPhoneCallGalleryView *galleryView; // @synthesize galleryView=_galleryView;
@property(retain) UIView *flippyView; // @synthesize flippyView=_flippyView;
@property(retain) TUCall *incomingCall; // @synthesize incomingCall=_incomingCall;
@property(copy) NSArray *conferenceParticipants; // @synthesize conferenceParticipants=_conferenceParticipants;
@property(copy) NSArray *primaryCalls; // @synthesize primaryCalls=_primaryCalls;
@property id <MPCarPlayInCallViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100053eac
- (id)preferredFocusEnvironments;	// IMP=0x0000000100053bc8
- (void)hardPauseDigitsStateChangedNotification:(id)arg1;	// IMP=0x0000000100053bbc
- (void)updateHardPauseButtonState;	// IMP=0x0000000100053aac
- (void)hardPauseButtonDidSendHardPauseDigits:(id)arg1;	// IMP=0x0000000100053a6c
- (id)callForHardPauseState;	// IMP=0x0000000100053a18
- (void)hardPauseButtonDidChangeVisibility:(id)arg1;	// IMP=0x0000000100053a0c
- (_Bool)currentCallStateWarrantsCallWaitingMode;	// IMP=0x0000000100053990
- (void)callModelChangedNotification:(id)arg1;	// IMP=0x0000000100053984
- (void)callStateChangedNotification:(id)arg1;	// IMP=0x0000000100053910
- (void)muteStateChangedNotification:(id)arg1;	// IMP=0x00000001000538d8
- (void)viewUpdateClockTickTimerFired:(id)arg1;	// IMP=0x0000000100053880
- (void)updateButtonsViewState;	// IMP=0x00000001000531d0
- (_Bool)canSendMessageToCall:(id)arg1;	// IMP=0x0000000100053044
- (_Bool)isSpringBoardPasscodeLocked;	// IMP=0x0000000100052fc0
- (_Bool)areIncomingCallOptionsAllowed;	// IMP=0x0000000100052fb8
- (void)handleAlertControllerSendMessageResponse:(id)arg1;	// IMP=0x0000000100052e78
- (id)replyWithMessageStore;	// IMP=0x0000000100052e18
- (void)answerIncomingCallWithBehavior:(long long)arg1;	// IMP=0x0000000100052d20
- (void)answerIncomingConversation:(id)arg1;	// IMP=0x0000000100052c08
- (void)inCallButtonWasTapped:(id)arg1;	// IMP=0x0000000100051c48
- (void)_sendMessageResponse:(id)arg1 toCall:(id)arg2;	// IMP=0x0000000100051968
- (long long)currentCallState;	// IMP=0x000000010005190c
- (_Bool)canSendMessage;	// IMP=0x0000000100051820
- (_Bool)isHoldEnabled;	// IMP=0x00000001000517ac
- (_Bool)isKeypadEnabled;	// IMP=0x0000000100051718
- (_Bool)isKeypadAllowed;	// IMP=0x0000000100051684
- (_Bool)isSwapCallsAllowed;	// IMP=0x0000000100051588
- (_Bool)isMergeCallsAllowed;	// IMP=0x0000000100051440
- (_Bool)isAddCallAllowed;	// IMP=0x00000001000513f4
- (id)representativePhoneCallForConferenceForGalleryView:(id)arg1;	// IMP=0x0000000100051288
- (id)allConferenceParticipantCalls;	// IMP=0x0000000100051230
- (id)conferenceParticipantCallsForPhoneCall:(id)arg1;	// IMP=0x0000000100051178
- (id)primaryPhoneCallsForGalleryView:(id)arg1;	// IMP=0x0000000100050fec
- (_Bool)isMuted;	// IMP=0x0000000100050f7c
- (void)setIsMuted:(_Bool)arg1;	// IMP=0x0000000100050f34
@property(readonly) _Bool isDismissable;
- (id)currentActivePhoneCall;	// IMP=0x0000000100050d14
- (id)__sanitizedPrimaryPhoneCallOrdering:(id)arg1;	// IMP=0x0000000100050bc8
- (void)setPrimaryCalls:(id)arg1 conferencePhoneCalls:(id)arg2 incomingCall:(id)arg3;	// IMP=0x000000010004f69c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010004f618
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000010004f584
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010004f4a4
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000010004f428
- (void)dealloc;	// IMP=0x000000010004f2ac
- (void)loadView;	// IMP=0x000000010004e5e8
- (void)showSOSDisconnectConfirmation:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e314
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010004dd50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

