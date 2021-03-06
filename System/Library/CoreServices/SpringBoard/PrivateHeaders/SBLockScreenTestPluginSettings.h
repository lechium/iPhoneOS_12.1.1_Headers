//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class NSString;

@interface SBLockScreenTestPluginSettings : SBUISettings
{
    _Bool _enablePlugin;	// 8 = 0x8
    _Bool _enableLostModePlugin;	// 9 = 0x9
    _Bool _restrictSiri;	// 10 = 0xa
    _Bool _restrictCamera;	// 11 = 0xb
    _Bool _restrictUnlock;	// 12 = 0xc
    _Bool _restrictLogout;	// 13 = 0xd
    _Bool _restrictTouchID;	// 14 = 0xe
    _Bool _restrictMediaControls;	// 15 = 0xf
    _Bool _restrictTodayCenter;	// 16 = 0x10
    _Bool _restrictControlCenter;	// 17 = 0x11
    _Bool _restrictNotificationCenter;	// 18 = 0x12
    _Bool _hideStatusBar;	// 19 = 0x13
    _Bool _hideTimeAndDate;	// 20 = 0x14
    _Bool _hideSubtitle;	// 21 = 0x15
    _Bool _disableOnUnlock;	// 22 = 0x16
    long long _presentationStyle;	// 24 = 0x18
    long long _backgroundStyle;	// 32 = 0x20
    long long _notificationBehavior;	// 40 = 0x28
    NSString *_subtitleValue;	// 48 = 0x30
}

+ (id)settingsControllerModule;	// IMP=0x00000001000e7358
@property _Bool disableOnUnlock; // @synthesize disableOnUnlock=_disableOnUnlock;
@property(retain) NSString *subtitleValue; // @synthesize subtitleValue=_subtitleValue;
@property _Bool hideSubtitle; // @synthesize hideSubtitle=_hideSubtitle;
@property _Bool hideTimeAndDate; // @synthesize hideTimeAndDate=_hideTimeAndDate;
@property _Bool hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property _Bool restrictNotificationCenter; // @synthesize restrictNotificationCenter=_restrictNotificationCenter;
@property _Bool restrictControlCenter; // @synthesize restrictControlCenter=_restrictControlCenter;
@property _Bool restrictTodayCenter; // @synthesize restrictTodayCenter=_restrictTodayCenter;
@property _Bool restrictMediaControls; // @synthesize restrictMediaControls=_restrictMediaControls;
@property _Bool restrictTouchID; // @synthesize restrictTouchID=_restrictTouchID;
@property _Bool restrictLogout; // @synthesize restrictLogout=_restrictLogout;
@property _Bool restrictUnlock; // @synthesize restrictUnlock=_restrictUnlock;
@property _Bool restrictCamera; // @synthesize restrictCamera=_restrictCamera;
@property _Bool restrictSiri; // @synthesize restrictSiri=_restrictSiri;
@property long long notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property _Bool enableLostModePlugin; // @synthesize enableLostModePlugin=_enableLostModePlugin;
@property _Bool enablePlugin; // @synthesize enablePlugin=_enablePlugin;
- (void).cxx_destruct;	// IMP=0x00000001000e8058
- (void)setDefaultValues;	// IMP=0x00000001000e71c8

@end

