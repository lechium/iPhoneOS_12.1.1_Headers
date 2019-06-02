//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class LAUIPearlGlyphView, NSString, UIImageView, UIView, _UIBackdropView;

@interface ToastViewController : UIViewController
{
    _UIBackdropView *_backdropView;	// 8 = 0x8
    UIImageView *_backdropMaskImageView;	// 16 = 0x10
    struct CGRect _keyboardFrame;	// 24 = 0x18
    UIView *_toastView;	// 56 = 0x38
    NSString *_titleText;	// 64 = 0x40
    LAUIPearlGlyphView *_glyphView;	// 72 = 0x48
}

@property(nonatomic) __weak LAUIPearlGlyphView *glyphView; // @synthesize glyphView=_glyphView;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIView *toastView; // @synthesize toastView=_toastView;
- (void).cxx_destruct;	// IMP=0x000000010001a0d0
- (long long)preferredStatusBarStyle;	// IMP=0x000000010001a054
- (int)_preferredStatusBarVisibility;	// IMP=0x000000010001a04c
- (void)dismissWithDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100019d24
- (id)dimMaskWithBounds:(struct CGRect)arg1;	// IMP=0x0000000100019b5c
- (void)_updateBackdropMask;	// IMP=0x00000001000197bc
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000194f8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001938c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100019124
- (id)initWithGlyph:(id)arg1 title:(id)arg2;	// IMP=0x0000000100018b24

@end
