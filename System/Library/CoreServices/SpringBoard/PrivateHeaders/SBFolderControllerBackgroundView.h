//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UIVisualEffectView;

@interface SBFolderControllerBackgroundView : UIView
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
    UIImageView *_blurViewSnapshot;	// 16 = 0x10
    UIView *_reduceTransparencyTintView;	// 24 = 0x18
    UIView *_debugFreezingView;	// 32 = 0x20
    _Bool _transitionCancelled;	// 40 = 0x28
    _Bool _blurs;	// 41 = 0x29
    _Bool _expanding;	// 42 = 0x2a
    _Bool _frozen;	// 43 = 0x2b
}

+ (double)blurRadiusForBackgroundViewInView:(id)arg1;	// IMP=0x00000001000ae438
@property(nonatomic) _Bool frozen; // @synthesize frozen=_frozen;
@property(nonatomic) _Bool expanding; // @synthesize expanding=_expanding;
@property(nonatomic) _Bool blurs; // @synthesize blurs=_blurs;
@property(nonatomic) _Bool transitionCancelled; // @synthesize transitionCancelled=_transitionCancelled;
- (void).cxx_destruct;	// IMP=0x00000001000af04c
- (void)_updateEffect;	// IMP=0x00000001000aeb94
- (id)_effectiveEmptyEffect;	// IMP=0x00000001000aeaac
- (id)_blurEffect;	// IMP=0x00000001000ae93c
- (double)_effectScale;	// IMP=0x00000001000ae89c
- (void)layoutSubviews;	// IMP=0x00000001000ae7b4
- (void)_updateForHavingReduceTransparencyOn:(_Bool)arg1;	// IMP=0x00000001000ae60c
- (void)_reduceTransparencyEnabledStateChanged;	// IMP=0x00000001000ae5dc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000ae514

@end

