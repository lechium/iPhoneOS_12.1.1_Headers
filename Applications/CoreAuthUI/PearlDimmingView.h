//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PearlViewController;

@interface PearlDimmingView : UIView
{
    _Bool _dimEnabled;	// 8 = 0x8
    _Bool _dimMaskEnabled;	// 9 = 0x9
    PearlViewController *_pearlViewController;	// 16 = 0x10
}

@property(nonatomic) _Bool dimMaskEnabled; // @synthesize dimMaskEnabled=_dimMaskEnabled;
@property(nonatomic) _Bool dimEnabled; // @synthesize dimEnabled=_dimEnabled;
@property(nonatomic) __weak PearlViewController *pearlViewController; // @synthesize pearlViewController=_pearlViewController;
- (void).cxx_destruct;	// IMP=0x000000010001a5e8
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000010001a314
- (id)init;	// IMP=0x000000010001a148

@end

