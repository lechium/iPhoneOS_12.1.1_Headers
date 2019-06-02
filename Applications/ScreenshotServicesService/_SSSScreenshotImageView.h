//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSSet, SSSScreenshot, UIImageView, _SSSScreenshotContentOverlayController, _SSSScreenshotFullsizeStaticImageView;

@interface _SSSScreenshotImageView : UIView
{
    _SSSScreenshotFullsizeStaticImageView *_imageView;	// 8 = 0x8
    _SSSScreenshotFullsizeStaticImageView *_cachedOutputImageView;	// 16 = 0x10
    _SSSScreenshotFullsizeStaticImageView *_pixelatedImageView;	// 24 = 0x18
    UIImageView *_pixelationMaskView;	// 32 = 0x20
    UIView *_annotationOverlayView;	// 40 = 0x28
    NSSet *_lastPixelationPoints;	// 48 = 0x30
    _Bool _screenshotEditsSnapshotted;	// 56 = 0x38
    _Bool _useTrilinearMinificationFilter;	// 57 = 0x39
    SSSScreenshot *_screenshot;	// 64 = 0x40
    _SSSScreenshotContentOverlayController *_overlayController;	// 72 = 0x48
    double _cornerRadius;	// 80 = 0x50
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool useTrilinearMinificationFilter; // @synthesize useTrilinearMinificationFilter=_useTrilinearMinificationFilter;
@property(nonatomic) _Bool screenshotEditsSnapshotted; // @synthesize screenshotEditsSnapshotted=_screenshotEditsSnapshotted;
@property(retain, nonatomic) _SSSScreenshotContentOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(nonatomic) __weak SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (void).cxx_destruct;	// IMP=0x000000010000dd9c
@property(readonly, nonatomic) UIView *viewWithScreenshotImage;
- (void)_updateOverlayControllerForBeingActiveForScreenshotEditsSnapshotted:(_Bool)arg1;	// IMP=0x000000010000d994
- (void)_hideAndShowViewsForScreenshotEditsSnapshotted:(_Bool)arg1;	// IMP=0x000000010000d830
- (void)_cancelScheduledHideCachedOverlayView;	// IMP=0x000000010000d808
- (void)_scheduleHideCachedOverlayViewWithDelay:(double)arg1;	// IMP=0x000000010000d7f0
- (void)_asyncHideCachedOverlayView;	// IMP=0x000000010000d768
- (id)_imageForPixelationPoints:(id)arg1;	// IMP=0x000000010000d130
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000010000d0ac
- (void)layoutSubviews;	// IMP=0x000000010000ca0c
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000010000c9bc
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000010000c96c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000c7e8

@end
