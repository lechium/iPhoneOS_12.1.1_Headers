//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBIcon, SBIconView, _UILegibilitySettings;

@interface SBIconLabelImageParametersBuilder : NSObject
{
    _Bool _accessibilityIncreaseContrastEnabled;	// 8 = 0x8
    _Bool _wantsFocusHighlight;	// 9 = 0x9
    int _iconLocation;	// 12 = 0xc
    SBIcon *_icon;	// 16 = 0x10
    SBIconView *_iconView;	// 24 = 0x18
    id <SBIconViewDelegate> _iconViewDelegate;	// 32 = 0x20
    Class _iconViewClass;	// 40 = 0x28
    _UILegibilitySettings *_settings;	// 48 = 0x30
    NSString *_text;	// 56 = 0x38
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool wantsFocusHighlight; // @synthesize wantsFocusHighlight=_wantsFocusHighlight;
@property(nonatomic) _Bool accessibilityIncreaseContrastEnabled; // @synthesize accessibilityIncreaseContrastEnabled=_accessibilityIncreaseContrastEnabled;
@property(retain, nonatomic) _UILegibilitySettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) int iconLocation; // @synthesize iconLocation=_iconLocation;
@property(retain, nonatomic) Class iconViewClass; // @synthesize iconViewClass=_iconViewClass;
@property(nonatomic) __weak id <SBIconViewDelegate> iconViewDelegate; // @synthesize iconViewDelegate=_iconViewDelegate;
@property(retain, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;	// IMP=0x00000001004f8470
- (_Bool)_hasValidInputs;	// IMP=0x00000001004f82d0
- (id)_font;	// IMP=0x00000001004f7d44
- (double)_scale;	// IMP=0x00000001004f7cb4
- (_Bool)_canUseMemoryPool;	// IMP=0x00000001004f7c9c
- (id)_focusHighlightColor;	// IMP=0x00000001004f7c44
- (struct CGSize)_maxSize;	// IMP=0x00000001004f7b10
- (_Bool)_canTightenLabel;	// IMP=0x00000001004f7ac0
- (_Bool)_canEllipsizeLabel;	// IMP=0x00000001004f7a24
- (void)setIcon:(id)arg1;	// IMP=0x00000001004f78c0
- (void)setIcon:(id)arg1 forLocation:(int)arg2;	// IMP=0x00000001004f78a8
- (id)buildParameters;	// IMP=0x00000001004f734c

@end

