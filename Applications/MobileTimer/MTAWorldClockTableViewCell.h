//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MTUIWorldClockCellViewDelegate.h"

@class MTUIWorldClockCellView, NSString, WorldClockCity;

@interface MTAWorldClockTableViewCell : UITableViewCell <MTUIWorldClockCellViewDelegate>
{
    WorldClockCity *_city;	// 8 = 0x8
    MTUIWorldClockCellView *_clockCellView;	// 16 = 0x10
}

+ (float)defaultHeight;	// IMP=0x00000001000412c8
@property(readonly, nonatomic) MTUIWorldClockCellView *clockCellView; // @synthesize clockCellView=_clockCellView;
- (void).cxx_destruct;	// IMP=0x0000000100041a08
- (void)timeDidChangeForClockCell:(id)arg1;	// IMP=0x00000001000419f4
- (void)willTransitionToState:(unsigned long long)arg1;	// IMP=0x0000000100041994
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100041864
@property(retain, nonatomic) WorldClockCity *city; // @synthesize city=_city;
- (void)updateShouldStackViewInCell:(_Bool)arg1;	// IMP=0x00000001000416a0
- (void)setupConstraints;	// IMP=0x0000000100041540
- (void)prepareForReuse;	// IMP=0x00000001000414c8
- (void)dealloc;	// IMP=0x000000010004146c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000100041308
- (id)init;	// IMP=0x00000001000412f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

