//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBWallpaperObserver.h"
#import "_UISettingsKeyObserver.h"

@class NSHashTable, NSString, SBIconColorSettings;

@interface _SBIconWallpaperBackgroundProvider : NSObject <_UISettingsKeyObserver, SBWallpaperObserver>
{
    SBIconColorSettings *_colorSettings;	// 8 = 0x8
    NSHashTable *_clients;	// 16 = 0x10
    struct CGImage *_blurImage;	// 24 = 0x18
    struct CGColor *_solidColor;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000100504d6c
- (void).cxx_destruct;	// IMP=0x00000001005057f4
- (void)_updateBackgrounds;	// IMP=0x000000010050551c
- (void)_updateBlurForClient:(id)arg1;	// IMP=0x00000001005053e0
- (void)_updateClient:(id)arg1;	// IMP=0x000000010050531c
- (void)_updateAllClients;	// IMP=0x00000001005051fc
- (void)wallpaperGeometryDidChangeForVariant:(long long)arg1;	// IMP=0x00000001005051b0
- (void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(long long)arg2;	// IMP=0x0000000100505164
- (void)wallpaperDidChangeForVariant:(long long)arg1;	// IMP=0x0000000100505118
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000001005050e4
- (void)noteClientWallpaperRelativeBoundsDidChange:(id)arg1;	// IMP=0x0000000100505094
- (void)removeClient:(id)arg1;	// IMP=0x000000010050507c
- (void)addClient:(id)arg1;	// IMP=0x0000000100505010
- (void)dealloc;	// IMP=0x0000000100504f4c
- (id)init;	// IMP=0x0000000100504dec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

