//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHVideoOverlayContentView.h"

@class UILabel;

@interface PHVideoOverlayContentViewTitle : PHVideoOverlayContentView
{
    UILabel *_titleLabel;	// 8 = 0x8
}

@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;	// IMP=0x00000001000ea6b8
- (void)resetView;	// IMP=0x00000001000ea600
- (void)updateConstraints;	// IMP=0x00000001000ea3a8
- (void)setupViewWithTitle:(id)arg1;	// IMP=0x00000001000ea134
- (id)initWithTitle:(id)arg1;	// IMP=0x00000001000ea0ac

@end
