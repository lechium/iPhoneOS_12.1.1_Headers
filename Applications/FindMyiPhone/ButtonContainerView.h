//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILongPressGestureRecognizer;

@interface ButtonContainerView : UIView
{
    UILongPressGestureRecognizer *_hudGestureRecognizer;	// 8 = 0x8
}

@property(retain, nonatomic) UILongPressGestureRecognizer *hudGestureRecognizer; // @synthesize hudGestureRecognizer=_hudGestureRecognizer;
- (void).cxx_destruct;	// IMP=0x0000000100089cfc
- (void)hudLongPressHandler:(id)arg1;	// IMP=0x00000001000899c8
- (id)buttonAtPoint:(struct CGPoint)arg1;	// IMP=0x000000010008994c
- (void)dealloc;	// IMP=0x00000001000898d4
- (void)awakeFromNib;	// IMP=0x00000001000895d8

@end

