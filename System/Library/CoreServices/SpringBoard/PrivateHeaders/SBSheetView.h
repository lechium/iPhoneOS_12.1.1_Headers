//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBApplication, SBProxyRemoteView;

@interface SBSheetView : UIView
{
    SBProxyRemoteView *_remoteProxyView;	// 8 = 0x8
    SBApplication *_app;	// 16 = 0x10
    _Bool _wasPresentedAnimated;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001da6ec
- (void)noteSheetDidEnd;	// IMP=0x00000001001da694
- (_Bool)wasPresentedAnimated;	// IMP=0x00000001001da684
- (id)application;	// IMP=0x00000001001da674
- (id)remoteViewIdentifier;	// IMP=0x00000001001da65c
- (id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 wasPresentedAnimated:(_Bool)arg3;	// IMP=0x00000001001da4b0

@end

