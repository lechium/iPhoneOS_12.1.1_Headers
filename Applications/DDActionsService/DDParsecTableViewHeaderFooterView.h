//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class UILabel, UIVisualEffectView;

@interface DDParsecTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    UIVisualEffectView *_vibrantView;	// 8 = 0x8
    UILabel *_vibrantLabel;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
    _Bool _vibrant;	// 32 = 0x20
    long long _style;	// 40 = 0x28
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool vibrant; // @synthesize vibrant=_vibrant;
- (void).cxx_destruct;	// IMP=0x000000010000cd54
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010000cba8
- (id)initWithtTitle:(id)arg1;	// IMP=0x000000010000bf10
- (void)updateTitle:(id)arg1;	// IMP=0x000000010000be64
- (id)_effect;	// IMP=0x000000010000bd44

@end

