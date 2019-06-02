//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAFilter, UIColor, UIImage;

@interface TabBarStyle : NSObject
{
    long long _barStyle;	// 8 = 0x8
    UIColor *_mediaCaptureDeviceIconColor;	// 16 = 0x10
    CAFilter *_tintFilter;	// 24 = 0x18
    double _overlayAlpha;	// 32 = 0x20
    double _tintAlpha;	// 40 = 0x28
    UIColor *_backgroundColor;	// 48 = 0x30
    UIColor *_itemTitleColor;	// 56 = 0x38
    double _itemActiveTitleAlpha;	// 64 = 0x40
    double _itemActiveTitleOverlayAlpha;	// 72 = 0x48
    CAFilter *_itemActiveTitleCompositingFilter;	// 80 = 0x50
    double _itemInactiveTitleAlpha;	// 88 = 0x58
    double _itemInactiveTitleOverlayAlpha;	// 96 = 0x60
    CAFilter *_itemInactiveTitleCompositingFilter;	// 104 = 0x68
    double _itemBorderAlpha;	// 112 = 0x70
    double _itemBorderOverlayAlpha;	// 120 = 0x78
    double _itemCloseButtonAlpha;	// 128 = 0x80
    UIImage *_itemCloseButtonImage;	// 136 = 0x88
    UIImage *_itemCloseButtonOverlayImage;	// 144 = 0x90
    CAFilter *_itemCloseButtonOverlayCompositingFilter;	// 152 = 0x98
    CAFilter *_itemForegroundCompositingFilter;	// 160 = 0xa0
    CAFilter *_itemOverlayCompositingFilter;	// 168 = 0xa8
}

+ (id)_closeButtonWithColor:(id)arg1;	// IMP=0x00000001000cb304
+ (id)styleForToolbarTintStyle:(unsigned long long)arg1;	// IMP=0x00000001000cb1d4
+ (id)privateBrowsingStyle;	// IMP=0x00000001000caf44
+ (id)normalStyle;	// IMP=0x00000001000cac44
@property(readonly, nonatomic) CAFilter *itemOverlayCompositingFilter; // @synthesize itemOverlayCompositingFilter=_itemOverlayCompositingFilter;
@property(readonly, nonatomic) CAFilter *itemForegroundCompositingFilter; // @synthesize itemForegroundCompositingFilter=_itemForegroundCompositingFilter;
@property(readonly, nonatomic) CAFilter *itemCloseButtonOverlayCompositingFilter; // @synthesize itemCloseButtonOverlayCompositingFilter=_itemCloseButtonOverlayCompositingFilter;
@property(readonly, nonatomic) UIImage *itemCloseButtonOverlayImage; // @synthesize itemCloseButtonOverlayImage=_itemCloseButtonOverlayImage;
@property(readonly, nonatomic) UIImage *itemCloseButtonImage; // @synthesize itemCloseButtonImage=_itemCloseButtonImage;
@property(readonly, nonatomic) double itemCloseButtonAlpha; // @synthesize itemCloseButtonAlpha=_itemCloseButtonAlpha;
@property(readonly, nonatomic) double itemBorderOverlayAlpha; // @synthesize itemBorderOverlayAlpha=_itemBorderOverlayAlpha;
@property(readonly, nonatomic) double itemBorderAlpha; // @synthesize itemBorderAlpha=_itemBorderAlpha;
@property(readonly, nonatomic) CAFilter *itemInactiveTitleCompositingFilter; // @synthesize itemInactiveTitleCompositingFilter=_itemInactiveTitleCompositingFilter;
@property(readonly, nonatomic) double itemInactiveTitleOverlayAlpha; // @synthesize itemInactiveTitleOverlayAlpha=_itemInactiveTitleOverlayAlpha;
@property(readonly, nonatomic) double itemInactiveTitleAlpha; // @synthesize itemInactiveTitleAlpha=_itemInactiveTitleAlpha;
@property(readonly, nonatomic) CAFilter *itemActiveTitleCompositingFilter; // @synthesize itemActiveTitleCompositingFilter=_itemActiveTitleCompositingFilter;
@property(readonly, nonatomic) double itemActiveTitleOverlayAlpha; // @synthesize itemActiveTitleOverlayAlpha=_itemActiveTitleOverlayAlpha;
@property(readonly, nonatomic) double itemActiveTitleAlpha; // @synthesize itemActiveTitleAlpha=_itemActiveTitleAlpha;
@property(readonly, nonatomic) UIColor *itemTitleColor; // @synthesize itemTitleColor=_itemTitleColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) double tintAlpha; // @synthesize tintAlpha=_tintAlpha;
@property(readonly, nonatomic) double overlayAlpha; // @synthesize overlayAlpha=_overlayAlpha;
@property(readonly, nonatomic) CAFilter *tintFilter; // @synthesize tintFilter=_tintFilter;
- (void).cxx_destruct;	// IMP=0x00000001000cb5b4
- (unsigned long long)hash;	// IMP=0x00000001000cb46c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000cb3f0
- (id)imageForMediaCaptureDeviceIcon:(unsigned long long)arg1;	// IMP=0x00000001000cb390
- (id)init;	// IMP=0x00000001000cb220

@end

