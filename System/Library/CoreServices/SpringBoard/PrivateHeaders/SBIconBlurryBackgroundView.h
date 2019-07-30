//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_SBIconWallpaperBackgroundClient.h"

@class NSString;

@interface SBIconBlurryBackgroundView : UIView <_SBIconWallpaperBackgroundClient>
{
    struct CGRect _wallpaperRelativeBounds;	// 8 = 0x8
    _Bool _isBlurring;	// 40 = 0x28
    _Bool _suppressesExternalUpdates;	// 41 = 0x29
    id <SBIconBlurryBackgroundViewObserver> _observer;	// 48 = 0x30
    CDUnknownBlockType _wantsBlurEvaluator;	// 56 = 0x38
    struct CGPoint _wallpaperRelativeCenter;	// 64 = 0x40
}

@property(nonatomic, getter=isSuppressingExternalUpdates) _Bool suppressesExternalUpdates; // @synthesize suppressesExternalUpdates=_suppressesExternalUpdates;
@property(copy, nonatomic) CDUnknownBlockType wantsBlurEvaluator; // @synthesize wantsBlurEvaluator=_wantsBlurEvaluator;
@property(readonly, nonatomic) _Bool isBlurring; // @synthesize isBlurring=_isBlurring;
@property(nonatomic) struct CGPoint wallpaperRelativeCenter; // @synthesize wallpaperRelativeCenter=_wallpaperRelativeCenter;
@property(nonatomic) __weak id <SBIconBlurryBackgroundViewObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;	// IMP=0x0000000100504d30
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x0000000100504c28
- (void)setBlurring:(_Bool)arg1;	// IMP=0x0000000100504b0c
- (void)setWallpaperBackgroundRect:(struct CGRect)arg1 forContents:(struct CGImage *)arg2 withFallbackColor:(struct CGColor *)arg3;	// IMP=0x0000000100504a38
- (_Bool)wantsBlur:(id)arg1;	// IMP=0x0000000100504a04
- (struct CGRect)wallpaperRelativeBounds;	// IMP=0x00000001005049ec
- (void)didAddSubview:(id)arg1;	// IMP=0x000000010050492c
- (void)dealloc;	// IMP=0x00000001005047e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010050474c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

