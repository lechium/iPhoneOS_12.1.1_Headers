//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SVSUserUtteranceView;

@interface SVSUserUtteranceContainerView : UIView
{
    _Bool _showEditingView;	// 8 = 0x8
    SVSUserUtteranceView *_displayView;	// 16 = 0x10
    UIView *_tableView;	// 24 = 0x18
}

@property(nonatomic) __weak UIView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak SVSUserUtteranceView *displayView; // @synthesize displayView=_displayView;
- (void).cxx_destruct;	// IMP=0x000000010005a8ec
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010005a7e0
- (void)layoutSubviews;	// IMP=0x000000010005a698
- (double)baselineOffsetFromBottom;	// IMP=0x000000010005a604
- (double)firstLineBaselineOffsetFromTop;	// IMP=0x000000010005a5b4
- (void)animateToDisplayWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005a318
- (void)animateToEditWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005a09c
- (_Bool)isFirstResponder;	// IMP=0x0000000100059ddc

@end

