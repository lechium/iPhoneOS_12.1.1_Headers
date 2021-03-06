//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_SBFakeBlur.h"

@class NSString, SBFWallpaperView, UIImageView;

@interface _SBFakeBlurView : UIView <_SBFakeBlur>
{
    unsigned long long _transformOptions;	// 8 = 0x8
    long long _requestedStyle;	// 16 = 0x10
    long long _effectiveStyle;	// 24 = 0x18
    SBFWallpaperView *_wallpaperView;	// 32 = 0x20
    _Bool _fullscreen;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    id <_SBFakeBlurObserver> _observer;	// 56 = 0x38
}

+ (id)_imageForStyle:(inout long long *)arg1 withSource:(id)arg2;	// IMP=0x0000000100251a34
@property(nonatomic) unsigned long long transformOptions; // @synthesize transformOptions=_transformOptions;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) id <_SBFakeBlurObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;	// IMP=0x000000010025235c
- (void)didMoveToWindow;	// IMP=0x0000000100251ebc
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000100251e4c
- (void)layoutSubviews;	// IMP=0x0000000100251de0
- (void)offsetWallpaperBy:(struct CGPoint)arg1;	// IMP=0x0000000100251d88
- (void)rotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000100251c14
- (void)_setImage:(id)arg1 style:(long long)arg2 notify:(_Bool)arg3;	// IMP=0x0000000100251844
- (void)_updateImageWithSource:(id)arg1 notifyObserver:(_Bool)arg2;	// IMP=0x0000000100251798
- (void)updateImageWithSource:(id)arg1;	// IMP=0x0000000100251788
- (void)reconfigureWithSource:(id)arg1;	// IMP=0x00000001002516b8
@property(readonly, nonatomic) long long variant;
- (void)dealloc;	// IMP=0x0000000100251624
- (id)initWithVariant:(long long)arg1;	// IMP=0x0000000100251408
- (long long)effectiveStyle;	// IMP=0x00000001002513f8
- (void)requestStyle:(long long)arg1;	// IMP=0x000000010025134c
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

