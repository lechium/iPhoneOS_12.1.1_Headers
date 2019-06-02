//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RadiosPreferencesDelegate.h"

@class NSObject<OS_dispatch_queue>, RadiosPreferences, UIImage;

@interface PHDevice : NSObject <RadiosPreferencesDelegate>
{
    _Bool _cellularRadioEnabled;	// 8 = 0x8
    _Bool _ringerSwitchEnabled;	// 9 = 0x9
    _Bool _proximitySensorState;	// 10 = 0xa
    int _ringerStateNotifyToken;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    RadiosPreferences *_radiosPreferences;	// 24 = 0x18
}

+ (_Bool)isGeminiCapable;	// IMP=0x00000001000a5484
+ (id)currentDevice;	// IMP=0x00000001000a5404
@property(nonatomic) _Bool proximitySensorState; // @synthesize proximitySensorState=_proximitySensorState;
@property(nonatomic) int ringerStateNotifyToken; // @synthesize ringerStateNotifyToken=_ringerStateNotifyToken;
@property(retain, nonatomic) RadiosPreferences *radiosPreferences; // @synthesize radiosPreferences=_radiosPreferences;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;	// IMP=0x00000001000a64dc
- (void)airplaneModeChanged;	// IMP=0x00000001000a642c
- (unsigned long long)stateForNotifyToken:(int)arg1;	// IMP=0x00000001000a63f0
- (void)unregisterForRingerStateNotifications;	// IMP=0x00000001000a6390
- (void)registerForRingerStateNotifications;	// IMP=0x00000001000a6214
- (_Bool)fetchRingerSwitchEnabled;	// IMP=0x00000001000a61d0
- (_Bool)fetchCellularRadioEnabled;	// IMP=0x00000001000a61a4
@property(readonly, nonatomic) UIImage *audioRouteGlyphImage;
@property(nonatomic, getter=isRingerSwitchEnabled) _Bool ringerSwitchEnabled; // @synthesize ringerSwitchEnabled=_ringerSwitchEnabled;
@property(nonatomic, getter=isCellularRadioEnabled) _Bool cellularRadioEnabled; // @synthesize cellularRadioEnabled=_cellularRadioEnabled;
- (void)dealloc;	// IMP=0x00000001000a5908
- (id)init;	// IMP=0x00000001000a562c

@end

