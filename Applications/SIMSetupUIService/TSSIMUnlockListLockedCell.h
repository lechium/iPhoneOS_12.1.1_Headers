//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSSIMUnlockListCell.h"

@class NSString;

@interface TSSIMUnlockListLockedCell : TSSIMUnlockListCell
{
    NSString *_lockedSIMName;	// 8 = 0x8
}

@property(copy, nonatomic) NSString *lockedSIMName; // @synthesize lockedSIMName=_lockedSIMName;
- (void).cxx_destruct;	// IMP=0x000000010000e1e4
- (void)prepareForReuse;	// IMP=0x000000010000e0c8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010000dff8

@end

