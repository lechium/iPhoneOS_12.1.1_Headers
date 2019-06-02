//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PHVideoOverlayContentView;

@interface PHVideoOverlayInsulatorView : UIView
{
    _Bool _isContentViewRotatingOrResizing;	// 8 = 0x8
    PHVideoOverlayContentView *_contentView;	// 16 = 0x10
}

@property(nonatomic) _Bool isContentViewRotatingOrResizing; // @synthesize isContentViewRotatingOrResizing=_isContentViewRotatingOrResizing;
@property(retain, nonatomic) PHVideoOverlayContentView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;	// IMP=0x00000001000e98fc
- (void)dealloc;	// IMP=0x00000001000e9840
- (void)handlePIPControllerNotification:(id)arg1;	// IMP=0x00000001000e9764
- (void)setBackgroundView:(id)arg1;	// IMP=0x00000001000e95a0
- (void)displayContentView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000e9104
- (void)setVideoOverlayContentView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000001000e8ecc
- (id)init;	// IMP=0x00000001000e8d14

@end

