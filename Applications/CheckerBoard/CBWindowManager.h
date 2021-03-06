//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBWindowDelegate.h"

@class CBWindow, NSArray;

@interface CBWindowManager : NSObject <CBWindowDelegate>
{
    CBWindow *_wallpaperWindow;	// 8 = 0x8
    NSArray *_layers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010001ebb4
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) CBWindow *wallpaperWindow; // @synthesize wallpaperWindow=_wallpaperWindow;
- (void).cxx_destruct;	// IMP=0x0000000100020338
- (void)_adjustWallpaperWindowLevel;	// IMP=0x0000000100020010
- (double)_maxLevelForLayer:(unsigned long long)arg1;	// IMP=0x000000010001fee0
- (void)_rekeyWindows;	// IMP=0x000000010001fd58
- (void)window:(id)arg1 changedWallpaperTunnel:(_Bool)arg2;	// IMP=0x000000010001fd4c
- (void)windowDidDismiss:(id)arg1;	// IMP=0x000000010001fd10
- (void)windowWillDismiss:(id)arg1;	// IMP=0x000000010001f7a4
- (void)windowDidAppear:(id)arg1;	// IMP=0x000000010001f690
- (void)windowWillAppear:(id)arg1;	// IMP=0x000000010001f414
- (id)presentViewController:(id)arg1 onLayer:(unsigned long long)arg2 wallpaperTunnel:(_Bool)arg3 statusBarVisible:(_Bool)arg4 animated:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010001ee9c
- (id)createRepresentationWithIdentifier:(id)arg1;	// IMP=0x000000010001edf4
- (id)init;	// IMP=0x000000010001ec34

@end

