//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBWallpaperAggdLogger : NSObject
{
    long long _aggd_lockscreenWallpaperType;	// 8 = 0x8
    long long _aggd_lockscreenWallpaperIdentifier;	// 16 = 0x10
    long long _aggd_homescreenWallpaperType;	// 24 = 0x18
    long long _aggd_homescreenWallpaperIdentifier;	// 32 = 0x20
    long long _aggd_irisWallpaperEnabled;	// 40 = 0x28
    long long _aggd_sharedWallpaper;	// 48 = 0x30
}

- (void)_resetPlayCountDate;	// IMP=0x00000001001938c8
- (unsigned long long)_bucketedPlayCount;	// IMP=0x0000000100193810
- (id)_valueString;	// IMP=0x0000000100193784
- (void)_clearAggdKeysForLocations:(long long)arg1;	// IMP=0x0000000100193724
- (void)incrementIrisPlayCount;	// IMP=0x0000000100193594
- (void)saveWallpaperAggdCurrentValues;	// IMP=0x0000000100193480
- (void)updateWallpaperAggdKeysForLocations:(long long)arg1 withHasVideo:(_Bool)arg2 hasProcedural:(_Bool)arg3 name:(id)arg4;	// IMP=0x0000000100193368
- (id)init;	// IMP=0x000000010019330c

@end

