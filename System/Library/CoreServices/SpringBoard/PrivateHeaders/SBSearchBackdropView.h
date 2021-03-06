//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUIProgressiveBlur.h"

@class NSString, SBWallpaperEffectView, _SBSearchBackdropView, _UIBackdropViewSettings;

@interface SBSearchBackdropView : UIView <SBUIProgressiveBlur>
{
    _SBSearchBackdropView *_backdropView;	// 8 = 0x8
    SBWallpaperEffectView *_effectView;	// 16 = 0x10
    UIView *_tintView;	// 24 = 0x18
    double _backupProgress;	// 32 = 0x20
    _UIBackdropViewSettings *_settingsForPrivateStyle;	// 40 = 0x28
    NSString *_privateGroupName;	// 48 = 0x30
    _Bool _usesTint;	// 56 = 0x38
    _Bool _needToEnsureThatWeUpdateBackdropAtLeastOnce;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x0000000100133fb4
- (void)transitionCompleted;	// IMP=0x0000000100133f68
- (void)setTransitionProgress:(double)arg1;	// IMP=0x0000000100133e6c
- (void)prepareForTransition;	// IMP=0x0000000100133bf0
- (_Bool)useHighQualityGraphics;	// IMP=0x0000000100133b88
- (void)layoutSubviews;	// IMP=0x0000000100133ae0
- (id)initWithFrame:(struct CGRect)arg1 privateStyle:(long long)arg2 groupName:(id)arg3 useTint:(_Bool)arg4;	// IMP=0x00000001001338c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001338a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

