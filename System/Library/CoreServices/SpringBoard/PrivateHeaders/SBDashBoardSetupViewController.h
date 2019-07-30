//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBDashBoardEventHandling.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, SBActivationInfoViewController, SBAppStatusBarSettingsAssertion, SBSetupManager, SBSetupRegulatoryInfoViewController, SBSetupWiFiScanner;

@interface SBDashBoardSetupViewController : SBDashBoardViewControllerBase <SBDashBoardEventHandling>
{
    SBSetupManager *_setupManager;	// 8 = 0x8
    NSMutableArray *_currentStringsOrdering;	// 16 = 0x10
    _Bool _needsTransitionFromFakeLogoToWelcomeStrings;	// 24 = 0x18
    _Bool _cyclingLabels;	// 25 = 0x19
    _Bool _viewVisible;	// 26 = 0x1a
    _Bool _canShowActivationInfo;	// 27 = 0x1b
    _Bool _shouldResetOrderingOnNextCycle;	// 28 = 0x1c
    NSDictionary *_localizedStrings;	// 32 = 0x20
    NSArray *_stringsOrdering;	// 40 = 0x28
    NSTimer *_stringCycleTimer;	// 48 = 0x30
    SBActivationInfoViewController *_activationInfoViewController;	// 56 = 0x38
    NSString *_telephonyPrimaryLanguage;	// 64 = 0x40
    SBSetupWiFiScanner *_wifiScanner;	// 72 = 0x48
    SBSetupRegulatoryInfoViewController *_regulatoryInfoViewController;	// 80 = 0x50
    unsigned long long _currentStringIndex;	// 88 = 0x58
    NSString *_wifiPrimaryLanguage;	// 96 = 0x60
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;	// 104 = 0x68
}

@property(nonatomic, getter=_shouldResetOrderingOnNextCycle, setter=_setShouldResetOrderingOnNextCycle:) _Bool shouldResetOrderingOnNextCycle; // @synthesize shouldResetOrderingOnNextCycle=_shouldResetOrderingOnNextCycle;
@property(retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(copy, nonatomic, setter=_setWifiPrimaryLanguage:) NSString *wifiPrimaryLanguage; // @synthesize wifiPrimaryLanguage=_wifiPrimaryLanguage;
@property(nonatomic, getter=_currentStringIndex, setter=_setCurrentStringIndex:) unsigned long long currentStringIndex; // @synthesize currentStringIndex=_currentStringIndex;
@property(retain, nonatomic) SBSetupRegulatoryInfoViewController *regulatoryInfoViewController; // @synthesize regulatoryInfoViewController=_regulatoryInfoViewController;
@property(retain, nonatomic, getter=_wifiScanner, setter=_setWifiScanner:) SBSetupWiFiScanner *wifiScanner; // @synthesize wifiScanner=_wifiScanner;
@property(copy, nonatomic, setter=_setTelephonyPrimaryLanguage:) NSString *telephonyPrimaryLanguage; // @synthesize telephonyPrimaryLanguage=_telephonyPrimaryLanguage;
@property(retain, nonatomic) SBActivationInfoViewController *activationInfoViewController; // @synthesize activationInfoViewController=_activationInfoViewController;
@property(retain, nonatomic, setter=_setStringCycleTimer:) NSTimer *stringCycleTimer; // @synthesize stringCycleTimer=_stringCycleTimer;
@property(copy, nonatomic, setter=_setStringOrdering:) NSArray *stringsOrdering; // @synthesize stringsOrdering=_stringsOrdering;
@property(copy, nonatomic, getter=_localizedStrings, setter=_setLocalizedStrings:) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
- (void).cxx_destruct;	// IMP=0x00000001000c9504
- (void)aggregateBehavior:(id)arg1;	// IMP=0x00000001000c9228
- (void)aggregateAppearance:(id)arg1;	// IMP=0x00000001000c9114
- (long long)presentationPriority;	// IMP=0x00000001000c910c
- (long long)presentationType;	// IMP=0x00000001000c9104
- (void)_cancelWifiScan;	// IMP=0x00000001000c90ac
- (void)_startWifiScan;	// IMP=0x00000001000c8e9c
- (void)_didHideBootSetupLogo:(id)arg1;	// IMP=0x00000001000c8e90
- (void)_didShowBootSetupLogo:(id)arg1;	// IMP=0x00000001000c8e4c
- (void)_regulatoryInfoButtonTapped:(id)arg1;	// IMP=0x00000001000c8c08
- (void)_infoButtonTapped:(id)arg1;	// IMP=0x00000001000c8624
- (void)_cycleTimerDidFire:(id)arg1;	// IMP=0x00000001000c8190
- (void)_updateDisplayedStrings;	// IMP=0x00000001000c8044
- (void)_resetDisplayedLocalizedStringsImmediately:(_Bool)arg1;	// IMP=0x00000001000c7ee4
- (void)_startCyclingLocalizedStringsWithDelay:(double)arg1;	// IMP=0x00000001000c7d98
- (void)_startCyclingLocalizedStrings;	// IMP=0x00000001000c7d88
- (void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)arg1;	// IMP=0x00000001000c76b0
- (void)_fetchLanguageFromTelephony;	// IMP=0x00000001000c75c8
- (id)_importantLanguageIdentifiers;	// IMP=0x00000001000c7460
- (id)_currentLanguageIdentifier;	// IMP=0x00000001000c7420
- (id)_currentStringsDictionary;	// IMP=0x00000001000c7394
- (void)_transitionFromFakeBootLogoToWelcomeStrings;	// IMP=0x00000001000c7384
- (void)_stopCyclingLocalizedStrings;	// IMP=0x00000001000c7334
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000001000c72e8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000c7288
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000c71e8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000c7140
- (id)setupView;	// IMP=0x00000001000c7134
- (void)viewDidLoad;	// IMP=0x00000001000c70b8
- (void)loadView;	// IMP=0x00000001000c6fb4
- (_Bool)handleEvent:(id)arg1;	// IMP=0x00000001000c6e10
- (id)init;	// IMP=0x00000001000c6b8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

