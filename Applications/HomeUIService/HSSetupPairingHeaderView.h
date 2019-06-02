//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HFItem, HUGridServiceCell, NSArray;

@interface HSSetupPairingHeaderView : UIView
{
    HFItem *_item;	// 8 = 0x8
    HUGridServiceCell *_serviceCell;	// 16 = 0x10
    UIView *_backgroundView;	// 24 = 0x18
    NSArray *_allConstraints;	// 32 = 0x20
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x000000010003bc98
@property(copy, nonatomic) NSArray *allConstraints; // @synthesize allConstraints=_allConstraints;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) HUGridServiceCell *serviceCell; // @synthesize serviceCell=_serviceCell;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;	// IMP=0x000000010003c500
- (void)updateConstraints;	// IMP=0x000000010003bca0
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x000000010003bc50
- (id)initWithItem:(id)arg1;	// IMP=0x000000010003b8fc
- (id)init;	// IMP=0x000000010003b8ec

@end
