//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBHUDView, UIView, UIWindow;

@interface SBHUDController : NSObject
{
    UIWindow *_hudWindow;	// 8 = 0x8
    UIView *_hudContentView;	// 16 = 0x10
    SBHUDView *_hudView;	// 24 = 0x18
    long long _orientation;	// 32 = 0x20
    _Bool _hudVisibleOrFading;	// 40 = 0x28
}

+ (id)sharedHUDController;	// IMP=0x000000010020f600
- (void).cxx_destruct;	// IMP=0x0000000100210040
- (void)hideHUDView;	// IMP=0x000000010020fff0
- (id)visibleOrFadingHUDView;	// IMP=0x000000010020ff98
- (id)visibleHUDView;	// IMP=0x000000010020ff50
- (void)presentHUDView:(id)arg1 autoDismissWithDelay:(double)arg2;	// IMP=0x000000010020fd68
- (void)presentHUDView:(id)arg1;	// IMP=0x000000010020fd58
- (void)_orderWindowOut:(id)arg1;	// IMP=0x000000010020fc30
- (void)_tearDown;	// IMP=0x000000010020fb70
- (void)_createUI;	// IMP=0x000000010020f9f4
- (void)reorientHUDIfNeeded:(_Bool)arg1;	// IMP=0x000000010020f780
- (void)_recenterHUDView;	// IMP=0x000000010020f6a8
- (void)dealloc;	// IMP=0x000000010020f658

@end

