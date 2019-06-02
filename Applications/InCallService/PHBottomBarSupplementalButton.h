//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "CAAnimationDelegate.h"

@class NSString;

@interface PHBottomBarSupplementalButton : UIButton <CAAnimationDelegate>
{
}

- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000001000e85b4
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000001000e84a4
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000001000e8284
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000001000e80d4
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000001000e8080
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001000e7f94
- (id)initWithAction:(long long)arg1;	// IMP=0x00000001000e7d8c
- (id)initWithText:(id)arg1 image:(id)arg2;	// IMP=0x00000001000e7be8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
