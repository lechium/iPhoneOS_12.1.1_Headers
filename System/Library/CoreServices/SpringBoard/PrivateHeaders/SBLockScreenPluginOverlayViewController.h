//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayViewController.h"

@class SBLockScreenPlugin;

@interface SBLockScreenPluginOverlayViewController : SBLockOverlayViewController
{
    SBLockScreenPlugin *_plugin;	// 8 = 0x8
}

+ (_Bool)_pluginNeedsOverlay:(id)arg1;	// IMP=0x0000000100275b08
- (void).cxx_destruct;	// IMP=0x0000000100275e34
- (id)_newOverlayView;	// IMP=0x0000000100275d50
- (void)loadView;	// IMP=0x0000000100275d0c
- (id)initWithPlugin:(id)arg1;	// IMP=0x0000000100275c50

@end

