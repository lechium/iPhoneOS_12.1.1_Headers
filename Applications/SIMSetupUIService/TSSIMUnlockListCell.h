//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface TSSIMUnlockListCell : UITableViewCell
{
    UILabel *_lockTypeLabel;	// 8 = 0x8
    long long _lockType;	// 16 = 0x10
}

@property(nonatomic) long long lockType; // @synthesize lockType=_lockType;
- (void).cxx_destruct;	// IMP=0x000000010000d5e0
- (void)_configureLockTypeLabelText;	// IMP=0x000000010000d3f0
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010000d324
- (void)prepareForReuse;	// IMP=0x000000010000d2d0
- (void)layoutSubviews;	// IMP=0x000000010000d1b8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010000d080

@end

