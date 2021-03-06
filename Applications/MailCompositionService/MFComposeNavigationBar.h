//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationBar.h"

@class UIView;

@interface MFComposeNavigationBar : UINavigationBar
{
    _Bool _docked;	// 8 = 0x8
    _Bool _grabberHidden;	// 9 = 0x9
    UIView *_grabber;	// 16 = 0x10
}

@property(nonatomic) _Bool grabberHidden; // @synthesize grabberHidden=_grabberHidden;
@property(nonatomic) _Bool docked; // @synthesize docked=_docked;
@property(retain, nonatomic) UIView *grabber; // @synthesize grabber=_grabber;
- (void).cxx_destruct;	// IMP=0x0000000100009088
- (void)_setGrabberHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100008ed8
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100008e58
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100008dd8
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000100008d58
- (void)setDocked:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100008c6c
- (void)layoutSubviews;	// IMP=0x0000000100008928
- (void)_createPrimaryViews;	// IMP=0x0000000100008708
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000086b0

@end

