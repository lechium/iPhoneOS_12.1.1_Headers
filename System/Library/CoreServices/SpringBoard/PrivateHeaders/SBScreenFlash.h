//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIScreen, UIView, UIWindow;

@interface SBScreenFlash : NSObject
{
    NSMutableArray *_flashCompletionBlocks;	// 8 = 0x8
    UIScreen *_screen;	// 16 = 0x10
    UIWindow *_flashWindow;	// 24 = 0x18
    UIView *_flashView;	// 32 = 0x20
    _Bool _windowVisible;	// 40 = 0x28
}

+ (id)mainScreenFlasher;	// IMP=0x0000000100130a70
- (void).cxx_destruct;	// IMP=0x0000000100131278
- (void)_orderWindowFrontAndThenOut:(id)arg1 withColor:(id)arg2;	// IMP=0x0000000100131144
- (void)_orderWindowOut:(id)arg1;	// IMP=0x0000000100130e88
- (void)_tearDown;	// IMP=0x0000000100130e28
- (void)_createUIWithColor:(id)arg1;	// IMP=0x0000000100130cb8
- (void)flashColor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100130ba8
- (void)flashWhiteWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100130b2c
- (id)initWithScreen:(id)arg1;	// IMP=0x00000001001309ac

@end

