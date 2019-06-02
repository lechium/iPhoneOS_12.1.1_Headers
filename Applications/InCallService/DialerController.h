//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "DialerViewDelegate.h"
#import "TPDialerKeypadDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CNContactStore, NSString, NSTimer, PHAbstractDialerView, TUCallProviderManager, TUContactsDataProvider, TUSenderIdentity;

@interface DialerController : UIViewController <UIGestureRecognizerDelegate, DialerViewDelegate, TPDialerKeypadDelegate>
{
    PHAbstractDialerView *_dialerView;	// 8 = 0x8
    NSTimer *_deleteTimer;	// 16 = 0x10
    NSTimer *_lookupTimer;	// 24 = 0x18
    unsigned int _calledNumber:1;	// 32 = 0x20
    unsigned int _didDeleteRepeat:1;	// 32 = 0x20
    unsigned int _dtmfPlaying;	// 36 = 0x24
    _Bool _shouldHideDeleteButtonWhenEmpty;	// 40 = 0x28
    _Bool _loadedLastDialedNumberCache;	// 41 = 0x29
    _Bool _wantsCallButtonAnimation;	// 42 = 0x2a
    int _dialerType;	// 44 = 0x2c
    TUCallProviderManager *_callProviderManager;	// 48 = 0x30
    NSString *_lastDialedNumberCache;	// 56 = 0x38
    TUSenderIdentity *_selectedSenderIdentity;	// 64 = 0x40
    NSString *_phoneNumberPrefixHint;	// 72 = 0x48
    long long _backgroundStyle;	// 80 = 0x50
    CNContactStore *_contactStore;	// 88 = 0x58
    TUContactsDataProvider *_contactsDataProvider;	// 96 = 0x60
}

+ (id)defaultPNGName;	// IMP=0x0000000100078d20
+ (id)tabBarIconName;	// IMP=0x0000000100078cac
+ (id)tabBarIconImage;	// IMP=0x0000000100078c48
+ (id)tabBarIconImageName;	// IMP=0x0000000100078c1c
+ (int)tabViewType;	// IMP=0x0000000100078c14
+ (_Bool)launchFieldTestIfNeeded:(id)arg1;	// IMP=0x000000010007792c
+ (_Bool)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;	// IMP=0x0000000100077920
+ (void)playDTMFToneForKey:(unsigned char)arg1;	// IMP=0x00000001000777f0
@property(retain, nonatomic) TUContactsDataProvider *contactsDataProvider; // @synthesize contactsDataProvider=_contactsDataProvider;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) _Bool wantsCallButtonAnimation; // @synthesize wantsCallButtonAnimation=_wantsCallButtonAnimation;
@property int dialerType; // @synthesize dialerType=_dialerType;
@property(copy, nonatomic) NSString *phoneNumberPrefixHint; // @synthesize phoneNumberPrefixHint=_phoneNumberPrefixHint;
@property(retain) TUSenderIdentity *selectedSenderIdentity; // @synthesize selectedSenderIdentity=_selectedSenderIdentity;
@property _Bool loadedLastDialedNumberCache; // @synthesize loadedLastDialedNumberCache=_loadedLastDialedNumberCache;
@property(retain) NSString *lastDialedNumberCache; // @synthesize lastDialedNumberCache=_lastDialedNumberCache;
@property(nonatomic) _Bool shouldHideDeleteButtonWhenEmpty; // @synthesize shouldHideDeleteButtonWhenEmpty=_shouldHideDeleteButtonWhenEmpty;
@property(readonly) PHAbstractDialerView *dialerView; // @synthesize dialerView=_dialerView;
@property(retain, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
- (void).cxx_destruct;	// IMP=0x000000010007c960
- (void)setAudioServicesActivated:(_Bool)arg1;	// IMP=0x000000010007c694
- (_Bool)requestAudioServicesActivate;	// IMP=0x000000010007c604
- (void)deactivateAudioServices;	// IMP=0x000000010007c5f4
- (void)handleApplicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000010007c510
- (void)handleApplicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x000000010007c48c
- (void)setBackgroundStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000010007c36c
- (_Bool)defaultActionIsFaceTimeAudio;	// IMP=0x000000010007c354
- (void)_applicationWillResignActiveNotification:(id)arg1;	// IMP=0x000000010007c348
- (void)_statusBarHeightChanged:(id)arg1;	// IMP=0x000000010007c308
- (void)_handleSIMInsertionOrRemoval;	// IMP=0x000000010007c2cc
- (void)performDeleteAction;	// IMP=0x000000010007c294
- (void)performCallActionForCallProvider:(id)arg1 video:(_Bool)arg2 senderIdentity:(id)arg3;	// IMP=0x000000010007c064
- (void)performCallActionForCallProvider:(id)arg1 video:(_Bool)arg2;	// IMP=0x000000010007bfe8
- (void)performCallActionForCallProvider:(id)arg1;	// IMP=0x000000010007bfd8
- (void)restoreLastDialedNumber;	// IMP=0x000000010007bd58
- (_Bool)digitsEntered;	// IMP=0x000000010007bcd4
- (void)_deleteButtonDown:(id)arg1;	// IMP=0x000000010007bca0
- (void)_deleteButtonClicked:(id)arg1;	// IMP=0x000000010007bc78
- (void)handleSwipeGesture:(id)arg1;	// IMP=0x000000010007bc68
- (void)_stopDeleteTimer;	// IMP=0x000000010007bc08
- (void)_startDeleteTimer;	// IMP=0x000000010007bb90
- (void)_deleteRepeat;	// IMP=0x000000010007bad8
- (void)_addButtonClicked:(id)arg1;	// IMP=0x000000010007bad4
- (id)_qualifyNumberIfNecessary:(id)arg1;	// IMP=0x000000010007b9f0
- (void)_dialWithRequest:(id)arg1;	// IMP=0x000000010007b6f4
- (void)_dialVoicemail;	// IMP=0x000000010007b53c
- (void)phonePad:(id)arg1 keyUp:(BOOL)arg2;	// IMP=0x000000010007b36c
- (void)phonePad:(id)arg1 keyDown:(BOOL)arg2;	// IMP=0x000000010007b368
- (void)phonePadDidEndSounds:(id)arg1;	// IMP=0x000000010007b308
- (void)phonePadDeleteLastDigit:(id)arg1;	// IMP=0x000000010007b1c8
- (void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2;	// IMP=0x000000010007b02c
- (void)_phonePad:(id)arg1 appendString:(id)arg2 suppressClearingDialedNumber:(_Bool)arg3;	// IMP=0x000000010007ae3c
- (void)phonePad:(id)arg1 appendString:(id)arg2 playDTMFTone:(_Bool)arg3;	// IMP=0x000000010007ace4
- (void)phonePad:(id)arg1 appendString:(id)arg2;	// IMP=0x000000010007ac64
- (void)performCharacterAddAction:(id)arg1;	// IMP=0x000000010007abcc
- (void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned int)arg2;	// IMP=0x000000010007ab24
- (void)_callButtonPressedActionWithCallProvider:(id)arg1;	// IMP=0x000000010007aa38
- (void)_callButtonPressed:(id)arg1;	// IMP=0x000000010007a9c4
- (void)_updateName;	// IMP=0x000000010007a9c0
- (void)_animateCallButton;	// IMP=0x000000010007a278
- (void)_fadeSubviewsOf:(id)arg1 excludingViews:(id)arg2 toValue:(double)arg3;	// IMP=0x000000010007a080
- (void)_updateCallButtonEnabledState:(id)arg1;	// IMP=0x0000000100079f60
- (void)_updateLCDNameLabelWithOriginallyPastedString:(id)arg1;	// IMP=0x0000000100079e9c
- (void)_updateLCDNameLabelWithAMatchingName:(_Bool)arg1;	// IMP=0x0000000100079dc0
- (void)_updateCallButtonEnabledState:(id)arg1 updateNameNow:(_Bool)arg2;	// IMP=0x0000000100079d84
- (id)pseudoNameStringForDestinationID:(id)arg1;	// IMP=0x0000000100079d7c
- (void)dialerView:(id)arg1 stringWasPasted:(id)arg2;	// IMP=0x0000000100079664
- (void)dialerViewTextDidChange:(id)arg1;	// IMP=0x00000001000795a0
- (void)showOrHideDeleteButton;	// IMP=0x0000000100079390
@property(copy, nonatomic) NSString *lastDialedNumber;
- (id)contactResultForPhoneNumber:(id)arg1;	// IMP=0x0000000100078ea0
- (void)_stopLookupTimer;	// IMP=0x0000000100078e64
- (_Bool)shouldSnapshot;	// IMP=0x0000000100078e28
- (void)prepareForSnapshot;	// IMP=0x0000000100078e1c
- (void)_clearDisplayIfNecessary;	// IMP=0x0000000100078d4c
- (void)dealloc;	// IMP=0x0000000100078af0
- (id)initWithDialerType:(int)arg1 contactStore:(id)arg2;	// IMP=0x0000000100078a7c
- (id)initWithDialerType:(int)arg1;	// IMP=0x0000000100078838
- (void)_callStatusChanged:(id)arg1;	// IMP=0x00000001000786ac
- (void)_resetButtonAnimation;	// IMP=0x00000001000783e4
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x00000001000783dc
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000001000782a0
- (void)applicationDidResume;	// IMP=0x00000001000781bc
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000100078160
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010007806c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100077efc
- (void)viewDidLoad;	// IMP=0x0000000100077ec8
- (_Bool)shouldAnimateCallButton;	// IMP=0x0000000100077dec
- (_Bool)isShowingDoubleHeightStatusBar;	// IMP=0x0000000100077d70
- (void)loadView;	// IMP=0x00000001000779e8
- (id)defaultCallProvider;	// IMP=0x0000000100077994

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

