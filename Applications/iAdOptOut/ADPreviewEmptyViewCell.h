//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSLayoutConstraint, NSMutableArray;

@interface ADPreviewEmptyViewCell : UICollectionViewCell
{
    NSLayoutConstraint *_leadingConstraint;	// 8 = 0x8
    NSLayoutConstraint *_trailingConstraint;	// 16 = 0x10
    NSLayoutConstraint *_topConstraint;	// 24 = 0x18
    NSMutableArray *_lineBars;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray *lineBars; // @synthesize lineBars=_lineBars;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
- (void)dealloc;	// IMP=0x0000000100008da8
- (void)initCell;	// IMP=0x0000000100008a14
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100008998

@end

